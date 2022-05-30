#include "authorization.h"
#include "ui_authorization.h"

Authorization::Authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
}

Authorization::~Authorization()
{
    delete ui;
}

//отправить сигналы по нажатию кнопок
void Authorization::on_buttonConnect_clicked()
{
    host = ui->changeHost->text();
    port = ui->changePort->value();
    usr = ui->changeUser->text();
    password = ui->changePassword->text();
    emit sendConnect();
}
void Authorization::on_buttonDisconnect_clicked()
{
    ui->changeUser->setText("");
    ui->changePassword->setText("");
    emit sendDisconnect();
}

