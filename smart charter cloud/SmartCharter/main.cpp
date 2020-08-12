#include "smartwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartWidget w;
    w.show();
    return a.exec();
}
