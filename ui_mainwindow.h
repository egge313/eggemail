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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxEmail;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;
    QLabel *label_2;
    QLineEdit *lineEdit_ServerAddress;
    QPushButton *pushButtonSaveAccount;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButtonLogout;
    QGroupBox *groupBoxRecipient;
    QComboBox *comboBoxRecipient;
    QLabel *label_4;
    QLabel *label_5_info;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(812, 758);
        MainWindow->setMinimumSize(QSize(808, 708));
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 481, 791, 131));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 620, 791, 28));
        progressBar->setValue(24);
        groupBoxMailServer = new QGroupBox(centralwidget);
        groupBoxMailServer->setObjectName(QString::fromUtf8("groupBoxMailServer"));
        groupBoxMailServer->setGeometry(QRect(10, 10, 411, 231));
        gridLayout = new QGridLayout(groupBoxMailServer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBoxMailServer);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxEmail = new QComboBox(groupBoxMailServer);
        comboBoxEmail->setObjectName(QString::fromUtf8("comboBoxEmail"));
        comboBoxEmail->setMouseTracking(true);
        comboBoxEmail->setEditable(true);

        gridLayout->addWidget(comboBoxEmail, 0, 1, 1, 1);

        label_3 = new QLabel(groupBoxMailServer);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_Password = new QLineEdit(groupBoxMailServer);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_Password, 1, 1, 1, 1);

        label_2 = new QLabel(groupBoxMailServer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_ServerAddress = new QLineEdit(groupBoxMailServer);
        lineEdit_ServerAddress->setObjectName(QString::fromUtf8("lineEdit_ServerAddress"));

        gridLayout->addWidget(lineEdit_ServerAddress, 2, 1, 1, 1);

        pushButtonSaveAccount = new QPushButton(groupBoxMailServer);
        pushButtonSaveAccount->setObjectName(QString::fromUtf8("pushButtonSaveAccount"));
        pushButtonSaveAccount->setCheckable(false);

        gridLayout->addWidget(pushButtonSaveAccount, 3, 1, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(400, 660, 395, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Send = new QPushButton(layoutWidget);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(12);
        font.setBold(true);
        pushButton_Send->setFont(font);
        pushButton_Send->setMouseTracking(true);

        horizontalLayout->addWidget(pushButton_Send);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButtonLogout = new QPushButton(layoutWidget);
        pushButtonLogout->setObjectName(QString::fromUtf8("pushButtonLogout"));
        pushButtonLogout->setFont(font);
        pushButtonLogout->setMouseTracking(true);

        horizontalLayout->addWidget(pushButtonLogout);

        groupBoxRecipient = new QGroupBox(centralwidget);
        groupBoxRecipient->setObjectName(QString::fromUtf8("groupBoxRecipient"));
        groupBoxRecipient->setGeometry(QRect(10, 250, 411, 161));
        comboBoxRecipient = new QComboBox(groupBoxRecipient);
        comboBoxRecipient->setObjectName(QString::fromUtf8("comboBoxRecipient"));
        comboBoxRecipient->setGeometry(QRect(120, 35, 271, 31));
        comboBoxRecipient->setMouseTracking(true);
        comboBoxRecipient->setEditable(true);
        label_4 = new QLabel(groupBoxRecipient);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(12, 40, 91, 20));
        label_5_info = new QLabel(centralwidget);
        label_5_info->setObjectName(QString::fromUtf8("label_5_info"));
        label_5_info->setGeometry(QRect(10, 430, 791, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_5_info->setFont(font1);
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
        comboBoxEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "(Insert email@somedomain.com)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Server address:", nullptr));
        pushButtonSaveAccount->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        groupBoxRecipient->setTitle(QCoreApplication::translate("MainWindow", "Email recipient", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        label_5_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
