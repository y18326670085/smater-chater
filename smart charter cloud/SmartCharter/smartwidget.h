#ifndef SMARTWIDGET_H
#define SMARTWIDGET_H

#include <QWidget>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class SmartWidget; }
QT_END_NAMESPACE

class SmartWidget : public QWidget
{
    Q_OBJECT

public:
    SmartWidget(QWidget *parent = nullptr);
    ~SmartWidget();

private slots:
    void on_lineEdit_returnPressed();//槽函数的申明

    void on_pushButton_clicked();

    void slotReadData();//自定义槽函数

private:
    Ui::SmartWidget *ui;

    QTcpSocket *socket;

};
#endif // SMARTWIDGET_H
