#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "employeeinfo.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }



    bool connOpen(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        //mydb.setDatabaseName("C:/Users/Usuario/Desktop/DB1.db");
        mydb.setDatabaseName("C:/Users/Usuario/Desktop/Programacion C++/empleadosDb.db");

        if( !mydb.open() ){
            qDebug() << ("No se pudo abrir la Bd");
            return false;
        }else{
            qDebug() <<  ("Bd conectada exitosamente");
            return true;
        }
    }

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Login *ui;

};
#endif // LOGIN_H
