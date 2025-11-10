#include "connection.h"
#include <QDebug>
#include <QtSql/QSqlError>
connection::connection() {}
bool connection::createconnect() {
    bool test = false;
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("service");
    db.setUserName("adem");
    db.setPassword("adem");
    if (db.open()) {
        test = true;
        qDebug() << "Connexion réussie à la base Oracle.";
    } else {
        qDebug() << "Erreur de connexion :" << db.lastError().text();
    }
    return test;
}
