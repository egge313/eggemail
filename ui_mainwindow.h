/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QProgressBar *progressBar;
    QGroupBox *groupBoxMailServer;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_ServerAddress;
    QComboBox *comboBoxEmail;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Send;
    QPushButton *pushButtonLogout;
    QGroupBox *groupBoxRecipient;
    QComboBox *comboBoxRecipient;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(812, 708);
        MainWindow->setMinimumSize(QSize(808, 708));
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 350, 791, 192));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 560, 791, 28));
        progressBar->setValue(24);
        groupBoxMailServer = new QGroupBox(centralwidget);
        groupBoxMailServer->setObjectName(QString::fromUtf8("groupBoxMailServer"));
        groupBoxMailServer->setGeometry(QRect(10, 10, 411, 151));
        label = new QLabel(groupBoxMailServer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 63, 20));
        label_2 = new QLabel(groupBoxMailServer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 101, 20));
        label_3 = new QLabel(groupBoxMailServer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 63, 20));
        lineEdit_Password = new QLineEdit(groupBoxMailServer);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(120, 65, 271, 31));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        lineEdit_ServerAddress = new QLineEdit(groupBoxMailServer);
        lineEdit_ServerAddress->setObjectName(QString::fromUtf8("lineEdit_ServerAddress"));
        lineEdit_ServerAddress->setGeometry(QRect(120, 105, 271, 31));
        comboBoxEmail = new QComboBox(groupBoxMailServer);
        comboBoxEmail->setObjectName(QString::fromUtf8("comboBoxEmail"));
        comboBoxEmail->setGeometry(QRect(120, 25, 271, 31));
        comboBoxEmail->setMouseTracking(true);
        comboBoxEmail->setEditable(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(400, 610, 395, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_Send = new QPushButton(layoutWidget);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(12);
        font.setBold(true);
        pushButton_Send->setFont(font);
        pushButton_Send->setMouseTracking(true);

        horizontalLayout->addWidget(pushButton_Send);

        pushButtonLogout = new QPushButton(layoutWidget);
        pushButtonLogout->setObjectName(QString::fromUtf8("pushButtonLogout"));
        pushButtonLogout->setFont(font);
        pushButtonLogout->setMouseTracking(true);

        horizontalLayout->addWidget(pushButtonLogout);

        groupBoxRecipient = new QGroupBox(centralwidget);
        groupBoxRecipient->setObjectName(QString::fromUtf8("groupBoxRecipient"));
        groupBoxRecipient->setGeometry(QRect(10, 170, 411, 161));
        comboBoxRecipient = new QComboBox(groupBoxRecipient);
        comboBoxRecipient->setObjectName(QString::fromUtf8("comboBoxRecipient"));
        comboBoxRecipient->setGeometry(QRect(120, 35, 271, 31));
        comboBoxRecipient->setMouseTracking(true);
        comboBoxRecipient->setEditable(true);
        label_4 = new QLabel(groupBoxRecipient);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(12, 40, 91, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 812, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Egge's Mailer", nullptr));
        groupBoxMailServer->setTitle(QCoreApplication::translate("MainWindow", "My account", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Server address:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        comboBoxEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "(Insert email@somedomain.com)", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        groupBoxRecipient->setTitle(QCoreApplication::translate("MainWindow", "Email recipient", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
