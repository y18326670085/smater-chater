#include "smartchaterwidget.h"
#include "ui_smartchaterwidget.h"
#include <QDebug>

SmartChaterWidget::SmartChaterWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SmartChaterWidget)
{
    ui->setupUi(this);

    //#####################################################################################//
    socket = new QTcpSocket(this);//头文件里定义了 创建实体对象
    connect(socket,SIGNAL(readyRead()),this,SLOT(slot_readsocket()));//ATTENTION! slot_readSocket()
    //#####################################################################################//
}

SmartChaterWidget::~SmartChaterWidget()
{
    delete ui;
}


void SmartChaterWidget::on_lineEdit_returnPressed()
{
    qDebug() << "return pressed"; //在上面加上头文件，否则编译会失败
    qDebug() << ui->lineEdit->text();//获取界面输入控件内的文本信息
    QString msg = ui->lineEdit->text();
    ui->listWidget->addItem("输入 : " + msg);
    //ui->listWidget->addItem(ui->lineEdit->text());
    socket->write(ui->lineEdit->text().toUtf8());
}

void SmartChaterWidget::on_pushButton_clicked()
{
    qDebug() << "connect to cloud";
    //#####################################################################################//
    socket -> connectToHost("124.70.148.79", 33780);//host地址,端口号
                                                    //如果要使用tuling服务 需要修改这里的33780
    //#####################################################################################//
    socket -> waitForConnected(5000);
    if(socket->state() ==QAbstractSocket::ConnectedState)
        ui->listWidget->addItem("系统 connected");
    else
        ui->listWidget->addItem("系统 not connected");
}

void SmartChaterWidget::slot_readsocket()
{
    qDebug() << "socket has data arrived";
    QString msg = socket->readAll();
    ui->listWidget->addItem("Socket小开 : " + msg);
}
