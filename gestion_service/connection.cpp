#include <QDebug>
#include <QtSqlError>
#include "connection.h"
connection::connection(){ }
bool connection::createconnect(){
    bool test =false;
    QSqlDatabase db= QSqlDatabase::addDatabase("Q0DBC");
    db.setDatabaseName("Source_Srojet2A");
    db.setUserName("Chaima");
    db.setPassword("esprit21");
    if (db.open()) {
        test=true;
        qDebug() << "connection réussie a la base de données." }
    else { qDebug() << "ERREUR de connexion:"<< db.lastError().text();
    }
    return test;
}
