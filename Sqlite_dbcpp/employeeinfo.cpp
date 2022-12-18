#include "employeeinfo.h"
#include "ui_employeeinfo.h"
#include <QMessageBox>

EmployeeInfo::EmployeeInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeInfo)
{
    ui->setupUi(this);

    Login conn;
    if( !conn.connOpen() ){
        ui->label_secondary_status->setText("No se pudo abrir la Bd");
    }else{
        ui->label_secondary_status->setText("Bd conectada exitosamente");
    }


}

EmployeeInfo::~EmployeeInfo()
{
    delete ui;
}

void EmployeeInfo::on_pushButton_clicked()
{
    Login conn;
    QString EId, name, surname, age;

    EId = ui->txt_Id->text();
    name = ui->txt_Name->text();
    surname = ui->txt_Surname->text();
    age = ui->txt_Age->text();


    //if( !mydb.open() ){
    if( !conn.connOpen() ){
        qDebug() << "No se pudo abrir la Bd";
        return ;
    }

    conn.connOpen();

    QSqlQuery qry;
    //qry.prepare("SELECT * FROM empleado WHERE User_name='"+username+"' and Pass_word ='" +password+"'");
    qry.prepare("INSERT INTO empleado (Id, Nombre, Apellido, Edad) values('"+ EId +"','"+name+"','"+surname+"','"+age+"' )");


    if( qry.exec() ){
        QMessageBox::critical(this, tr("Save"), tr("Saved"));
        conn.connClose();
    }else{
        QMessageBox::critical(this, tr("Error"), qry.lastError().text());
    }
}


void EmployeeInfo::on_pushButton_Edit_clicked()
{
    Login conn;
    QString EId, name, surname, age;

    EId = ui->txt_Id->text();
    name = ui->txt_Name->text();
    surname = ui->txt_Surname->text();
    age = ui->txt_Age->text();


    //if( !mydb.open() ){
    if( !conn.connOpen() ){
        qDebug() << "No se pudo abrir la Bd";
        return ;
    }

    conn.connOpen();

    QSqlQuery qry;
    //qry.prepare("SELECT * FROM empleado WHERE User_name='"+username+"' and Pass_word ='" +password+"'");
    qry.prepare("UPDATE empleado SET Nombre ='"+name+"', Apellido ='"+surname+"', Edad='"+age+"' WHERE Id='"+EId+"'");


    if( qry.exec() ){
        QMessageBox::critical(this, tr("Edit"), tr("Updated"));
        conn.connClose();
    }else{
        QMessageBox::critical(this, tr("Error"), qry.lastError().text());
    }
}


void EmployeeInfo::on_pushButton_Delete_clicked()
{
    Login conn;
    QString EId, name, surname, age;

    EId = ui->txt_Id->text();
    name = ui->txt_Name->text();
    surname = ui->txt_Surname->text();
    age = ui->txt_Age->text();


    //if( !mydb.open() ){
    if( !conn.connOpen() ){
        qDebug() << "No se pudo abrir la Bd";
        return ;
    }

    conn.connOpen();

    QSqlQuery qry;
    //qry.prepare("SELECT * FROM empleado WHERE User_name='"+username+"' and Pass_word ='" +password+"'");
    qry.prepare("DELETE FROM empleado WHERE Id ='"+EId+"' ");


    if( qry.exec() ){
        QMessageBox::critical(this, tr("Delete"), tr("Deleted"));
        conn.connClose();
    }else{
        QMessageBox::critical(this, tr("Error"), qry.lastError().text());
    }
}


void EmployeeInfo::on_pushButton_2_clicked()
{
    Login conn;
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQueryModel *modal2 = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *qry = new QSqlQuery(conn.mydb);
    QSqlQuery *qry2 = new QSqlQuery(conn.mydb);

    qry2->prepare("SELECT Id, Nombre, Apellido, Edad FROM empleado"); //la usaba con el table view
    qry2->exec();
    qry->prepare("SELECT Nombre FROM empleado"); //la uso con list view, solo puede mostrar un elemento
    qry->exec();

    modal2->setQuery(*qry2);
    modal->setQuery(*qry);
    //se cargan los datos en los elementos
    ui->tableView->setModel(modal2);
    ui->listView->setModel(modal);//solo recibe un dato
    ui->comboBox->setModel(modal);//solo recibe un dato
    conn.connClose();

    qDebug() << (modal->rowCount());


}


void EmployeeInfo::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString name = ui->comboBox->currentText();

    Login conn;

    //if( !mydb.open() ){
    if( !conn.connOpen() ){
        qDebug() << "No se pudo abrir la Bd";
        return ;
    }

    conn.connOpen();

    QSqlQuery qry;

    qry.prepare("SELECT * FROM empleado WHERE Nombre = '"+name+"'");


    if( qry.exec() ){
        while( qry.next() ){
            ui->txt_Id->setText(qry.value(0).toString());
            ui->txt_Name->setText(qry.value(1).toString());
            ui->txt_Surname->setText(qry.value(2).toString());
            ui->txt_Age->setText(qry.value(3).toString());



        }
        conn.connClose();
    }else{
        QMessageBox::critical(this, tr("Error"), qry.lastError().text());
    }

}



void EmployeeInfo::on_tableView_activated(const QModelIndex &index)
{
    QString name = ui->tableView->model()->data(index).toString();

    Login conn;

    //if( !mydb.open() ){
    if( !conn.connOpen() ){
        qDebug() << "No se pudo abrir la Bd";
        return ;
    }

    conn.connOpen();

    QSqlQuery qry;

    qry.prepare("SELECT * FROM empleado WHERE Nombre = '"+name+"' OR Id = '"+name+"' OR Apellido = '"+name+"' OR Edad = '"+name+"'");


    if( qry.exec() ){
        while( qry.next() ){
            ui->txt_Id->setText(qry.value(0).toString());
            ui->txt_Name->setText(qry.value(1).toString());
            ui->txt_Surname->setText(qry.value(2).toString());
            ui->txt_Age->setText(qry.value(3).toString());



        }
        conn.connClose();
    }else{
        QMessageBox::critical(this, tr("Error"), qry.lastError().text());
    }
}

