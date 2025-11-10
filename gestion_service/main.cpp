#include "connection.h"
#include "gestionservice.h"
#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test = c.createconnect();
    if (test) {
        GestionService w;
        w.show();
        return a.exec();
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Échec de la connexion à Oracle !");
        return -1;
    }
}
