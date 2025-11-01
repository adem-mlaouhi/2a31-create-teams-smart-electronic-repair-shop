#include "gestion_service.h"
#include <QApplication>
#include "connection.cpp"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gestion_Service w;
    w.show();
    return a.exec();
}

