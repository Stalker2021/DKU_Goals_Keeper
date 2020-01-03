#include "forms/include/main_form.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "[korn] hello" << std::endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
