#include "connection.h"
#include <QtSql/QSqlError>
#include <QDebug>

connection* connection::p_instance = nullptr;

connection::connection() {}

connection::~connection()
{
    QSqlDatabase db = QSqlDatabase::database();
    if (db.isOpen())
        db.close();
}

connection* connection::instance()
{
    if (p_instance == nullptr)
        p_instance = new connection();
    return p_instance;
}

bool connection::createConnect()
{
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet"); // Nom du DSN Oracle
    db.setUserName("adem");               // Ton utilisateur Oracle
    db.setPassword("adem");              // Ton mot de passe Oracle

    if (db.open()) {
        test = true;
        qDebug() << "✅ Connexion Oracle réussie.";
    } else {
        qDebug() << "❌ Connexion Oracle échouée :" << db.lastError().text();
    }

    return test;
}
