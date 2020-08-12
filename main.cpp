#include "smartchaterwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartChaterWidget w;
    w.show();
    return a.exec();
}
