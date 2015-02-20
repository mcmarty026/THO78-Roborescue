#include "mainwindow.h"
#include <QApplication>
#include "Print.h"

int main(int argc, char *argv[])
{
    Print *print = new Print();
    delete print;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
