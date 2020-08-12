#ifndef SMARTCHATERWIDGET_H
#define SMARTCHATERWIDGET_H

#include <QWidget>
#include<QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class SmartChaterWidget; }
QT_END_NAMESPACE

class SmartChaterWidget : public QWidget
{
    Q_OBJECT

public:
    SmartChaterWidget(QWidget *parent = nullptr);
    ~SmartChaterWidget();

private slots:
    void on_lineEdit_returnPressed();//自动生成的

    void on_pushButton_clicked();//自动生成的

    void slot_readsocket();//创建槽函数和Socket的readyRead()信号连接

private:
    Ui::SmartChaterWidget *ui;

    QTcpSocket *socket;
};
#endif // SMARTCHATERWIDGET_H
