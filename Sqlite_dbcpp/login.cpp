#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    //QPixmap pix("C:Users/Usuario/Desktop/Programacion C++/Sqlite_dbcpp/login_image.png");
    //ui->label_pic->setPixmap(pix);


    if( !connOpen() ){
        ui->label->setText("No se pudo abrir la Bd");
    }else{
        ui->label->setText("Bd conectada exitosamente");
    }


}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    //if( !mydb.open() ){
    if( !connOpen() ){
        qDebug() << "No se pudo abrir la Bd";
        return ;
    }

    connOpen();

    QSqlQuery qry;
    qry.prepare("SELECT * FROM empleado WHERE User_name='"+username+"' and Pass_word ='" +password+"'");

    if( qry.exec() ){

        int count = 0;
        while( qry.next() ){
            count++;
        }

        if( count == 1){
            ui->label->setText("Usuario y contraseña correctos");
            connClose();

            this->hide();//esconde la ventana actual

            EmployeeInfo employeeinfo;
            employeeinfo.setModal(true);
            employeeinfo.exec();

        }else if(count > 1){
            ui->label->setText("Usuario y contraseña duplicados");

        }else{
            ui->label->setText("Usuario y contraseña incorrectos");
        }


    }

}









