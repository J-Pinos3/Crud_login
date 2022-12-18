/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton;
    QLabel *label_pic;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(731, 441);
        Login->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 350, 681, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 0, 127);"));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(2);
        label->setMidLineWidth(0);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 30, 461, 271));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 131, 31));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 121, 31));
        label_3->setFont(font);
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(180, 80, 251, 34));
        QFont font1;
        font1.setPointSize(16);
        lineEdit_username->setFont(font1);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(180, 160, 251, 31));
        lineEdit_password->setFont(font1);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 210, 131, 51));
        QFont font2;
        font2.setPointSize(22);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"selection-color: rgb(28, 255, 187);\n"
"background-color: rgb(28, 255, 187);"));
        label_3->raise();
        lineEdit_password->raise();
        lineEdit_username->raise();
        label_2->raise();
        pushButton->raise();
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(500, 40, 221, 251));
        label_pic->setPixmap(QPixmap(QString::fromUtf8("../build-Sqlite_dbcpp-Desktop_Qt_6_4_1_MinGW_64_bit-Debug/login_3.jpg")));
        Login->setCentralWidget(centralwidget);
        groupBox->raise();
        label->raise();
        label_pic->raise();
        menuBar = new QMenuBar(Login);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 731, 22));
        Login->setMenuBar(menuBar);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName("statusBar");
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:18pt;\">[+] Status</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "Sign in", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Login", "Usuario", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Login", "Contrase\303\261a", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
