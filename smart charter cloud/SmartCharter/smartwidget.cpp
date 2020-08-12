#include "smartwidget.h"
#include "ui_smartwidget.h"

SmartWidget::SmartWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SmartWidget)
{
    ui->setupUi(this);
}

SmartWidget::~SmartWidget()
{
    delete ui;
}

