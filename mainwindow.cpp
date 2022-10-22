#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "version.h"
#include <QTextStream>
#include <QString>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonLogout, SIGNAL(clicked()), this,
        SLOT(OnClickedLogout()));

    m_statusbarlabel = new QLabel("Starting");
    ui->statusbar->addPermanentWidget(m_statusbarlabel);
    ui->statusbar->showMessage(
               "Welcome, your holiness! ",
                5000);

    // Greet and tell version.
    ui->label_5_info->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    QString info1("EggeMail version ");
    QString info2(EGGEMAILVERSION);
    ui->label_5_info->setText (info1 + info2);

    // Set style sheet.
    QString coffee_stylesheet ("coffee");
    setStyleSheet(coffee_stylesheet);

    // Set the application icon.
    QIcon windowicon(":/pictures/icons8-email-100.png");
    setWindowIcon(windowicon);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnClickedLogout()
{
  ui->statusbar->showMessage( "User logging out",
                  3000);

  close();
}

void MainWindow::setStyleSheet(QString & sheetName)
{
  QFile file(":/qss/" + sheetName.toLower() + ".qss");
  file.open(QFile::ReadOnly);
  QString styleSheet = QString::fromLatin1(file.readAll());
  qApp->setStyleSheet(styleSheet);
}

