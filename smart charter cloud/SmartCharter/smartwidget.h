#ifndef SMARTWIDGET_H
#define SMARTWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SmartWidget; }
QT_END_NAMESPACE

class SmartWidget : public QWidget
{
    Q_OBJECT

public:
    SmartWidget(QWidget *parent = nullptr);
    ~SmartWidget();

private:
    Ui::SmartWidget *ui;
};
#endif // SMARTWIDGET_H
