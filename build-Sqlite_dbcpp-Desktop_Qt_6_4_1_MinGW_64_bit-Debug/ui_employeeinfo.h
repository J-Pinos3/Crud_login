/********************************************************************************
** Form generated from reading UI file 'employeeinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEINFO_H
#define UI_EMPLOYEEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_EmployeeInfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txt_Id;
    QLineEdit *txt_Name;
    QLineEdit *txt_Surname;
    QLineEdit *txt_Age;
    QPushButton *pushButton;
    QLabel *label_secondary_status;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_Delete;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QListView *listView;
    QComboBox *comboBox;

    void setupUi(QDialog *EmployeeInfo)
    {
        if (EmployeeInfo->objectName().isEmpty())
            EmployeeInfo->setObjectName("EmployeeInfo");
        EmployeeInfo->resize(796, 660);
        EmployeeInfo->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(EmployeeInfo);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 41, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(EmployeeInfo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 120, 111, 41));
        label_2->setFont(font);
        label_3 = new QLabel(EmployeeInfo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 80, 111, 41));
        label_3->setFont(font);
        label_4 = new QLabel(EmployeeInfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 160, 101, 41));
        label_4->setFont(font);
        txt_Id = new QLineEdit(EmployeeInfo);
        txt_Id->setObjectName("txt_Id");
        txt_Id->setGeometry(QRect(160, 50, 171, 22));
        txt_Name = new QLineEdit(EmployeeInfo);
        txt_Name->setObjectName("txt_Name");
        txt_Name->setGeometry(QRect(160, 90, 171, 22));
        txt_Surname = new QLineEdit(EmployeeInfo);
        txt_Surname->setObjectName("txt_Surname");
        txt_Surname->setGeometry(QRect(160, 130, 171, 22));
        txt_Age = new QLineEdit(EmployeeInfo);
        txt_Age->setObjectName("txt_Age");
        txt_Age->setGeometry(QRect(160, 170, 171, 22));
        pushButton = new QPushButton(EmployeeInfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 50, 151, 61));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 255, 187);\n"
"background-color: rgb(28, 255, 187);\n"
"alternate-background-color: rgb(28, 255, 187);\n"
"selection-color: rgb(170, 255, 255);"));
        label_secondary_status = new QLabel(EmployeeInfo);
        label_secondary_status->setObjectName("label_secondary_status");
        label_secondary_status->setGeometry(QRect(40, 600, 251, 21));
        pushButton_Edit = new QPushButton(EmployeeInfo);
        pushButton_Edit->setObjectName("pushButton_Edit");
        pushButton_Edit->setGeometry(QRect(390, 140, 151, 61));
        pushButton_Edit->setFont(font);
        pushButton_Edit->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Edit->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 255, 187);\n"
"alternate-background-color: rgb(28, 255, 187);\n"
"selection-color: rgb(170, 255, 255);"));
        pushButton_Delete = new QPushButton(EmployeeInfo);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(620, 140, 151, 61));
        pushButton_Delete->setFont(font);
        pushButton_Delete->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Delete->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 255, 187);\n"
"alternate-background-color: rgb(28, 255, 187);\n"
"selection-color: rgb(170, 255, 255);"));
        tableView = new QTableView(EmployeeInfo);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(260, 290, 501, 281));
        pushButton_2 = new QPushButton(EmployeeInfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(620, 50, 151, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 255, 187);\n"
"alternate-background-color: rgb(28, 255, 187);\n"
"selection-color: rgb(170, 255, 255);"));
        listView = new QListView(EmployeeInfo);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(40, 290, 151, 281));
        comboBox = new QComboBox(EmployeeInfo);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 250, 151, 22));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 255, 187);\n"
"alternate-background-color: rgb(28, 255, 187);\n"
"selection-color: rgb(170, 255, 255);"));

        retranslateUi(EmployeeInfo);

        QMetaObject::connectSlotsByName(EmployeeInfo);
    } // setupUi

    void retranslateUi(QDialog *EmployeeInfo)
    {
        EmployeeInfo->setWindowTitle(QCoreApplication::translate("EmployeeInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EmployeeInfo", "Id:", nullptr));
        label_2->setText(QCoreApplication::translate("EmployeeInfo", "Apellido:", nullptr));
        label_3->setText(QCoreApplication::translate("EmployeeInfo", "Nombre:", nullptr));
        label_4->setText(QCoreApplication::translate("EmployeeInfo", "Edad:", nullptr));
        txt_Id->setPlaceholderText(QCoreApplication::translate("EmployeeInfo", "Id del empleado", nullptr));
        txt_Name->setPlaceholderText(QCoreApplication::translate("EmployeeInfo", "Nombre del empleado", nullptr));
        txt_Surname->setPlaceholderText(QCoreApplication::translate("EmployeeInfo", "Apellido del empleado", nullptr));
        txt_Age->setPlaceholderText(QCoreApplication::translate("EmployeeInfo", "Edad del empleado", nullptr));
        pushButton->setText(QCoreApplication::translate("EmployeeInfo", "SAVE", nullptr));
        label_secondary_status->setText(QCoreApplication::translate("EmployeeInfo", "TextLabel", nullptr));
        pushButton_Edit->setText(QCoreApplication::translate("EmployeeInfo", "UPDATE", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("EmployeeInfo", "DELETE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EmployeeInfo", "READ", nullptr));
#if QT_CONFIG(tooltip)
        listView->setToolTip(QCoreApplication::translate("EmployeeInfo", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class EmployeeInfo: public Ui_EmployeeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEINFO_H
