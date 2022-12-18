#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>
#include "login.h"

namespace Ui {
class EmployeeInfo;
}

class EmployeeInfo : public QDialog
{
    Q_OBJECT

public:

    explicit EmployeeInfo(QWidget *parent = nullptr);
    ~EmployeeInfo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Edit_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);


    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::EmployeeInfo *ui;
};

#endif // EMPLOYEEINFO_H
