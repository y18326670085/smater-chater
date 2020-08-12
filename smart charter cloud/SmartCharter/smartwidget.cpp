#include "smartwidget.h"
#include "ui_smartwidget.h"
#include<QDebug>

SmartWidget::SmartWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SmartWidget)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);//为头文件里定义的指针创建变量
    //socket->readyRead()
    connect(socket, SIGNAL(readyRead()),
            this, SLOT(slotReadData()));
}

SmartWidget::~SmartWidget()
{
    delete ui;
}


void SmartWidget::on_lineEdit_returnPressed()//槽函数的实现，头文件里同时出现
{
    qDebug() << "return pressed : " << ui->lineEdit->text();
    ui->listWidget->addItem(ui->lineEdit->text());
    if(socket->state() == QAbstractSocket::ConnectedState){
        socket->write(ui->lineEdit->text().toUtf8());//必须要转换toUtf8
        ui->lineEdit->clear();
    }
}

void SmartWidget::on_pushButton_clicked()
{
    quint16 hostport[] = {33780, 33781, 33782};
    socket->connectToHost("124.70.148.79", hostport[ui->comboBox->currentIndex()]);
    socket->waitForConnected(5000);
    if(socket->state() == QAbstractSocket::ConnectedState){
        qDebug() << "connected";
    }
    else{
        qDebug() << "not connected";
    }

}

void SmartWidget::slotReadData()//自定义的槽函数在这里实现，注意前面要加上类名
{
    qDebug() << "socket has data to read";
    ui->listWidget->addItem("K : " + socket->readAll());
}
