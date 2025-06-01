#include "dbinit.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

DbInit::DbInit(QObject *parent)
    : QObject(parent)
{
}

bool DbInit::connectToDatabase(const QString &dbPath)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Błąd połączenia z bazą danych:" << db.lastError().text();
        return false;
    }

    qDebug() << "Połączono z bazą danych.";
    qDebug()<<"sciezka to:"<<dbPath;


    return true;
}

void DbInit::initializeTables()
{
    QSqlQuery query;
    QString createTable;
    createTable = R"(
        CREATE TABLE IF NOT EXISTS cities (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            city TEXT
        );
    )";




    // createTable = R"(
    //     CREATE TABLE IF NOT EXISTS lists (
    //         id INTEGER PRIMARY KEY AUTOINCREMENT,
    //         dataWyjazdu TEXT,
    //         godzinaWyjazdu TEXT,
    //         dataPowrotu TEXT,
    //         godzinaPowrotu TEXT,
    //         miejsceWyjazdu TEXT,
    //         czasDelegacji TEXT,
    //         koszty TEXT,
    //         nrDelegacji TEXT
    //     );
    // )";

    if (!query.exec(createTable)) {
        qDebug() << "Błąd tworzenia tabeli:" << query.lastError().text();
    } else {
        qDebug() << "Tabela utworzona lub już istnieje.";
    }
}
