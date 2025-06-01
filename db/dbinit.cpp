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

    // Tworzenie tabeli "cities"
    QString createCitiesTable = R"(
    CREATE TABLE IF NOT EXISTS cities (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        city TEXT
    );
)";


    // Tworzenie tabeli "hours"
    QString createHoursTable = R"(
    CREATE TABLE IF NOT EXISTS hours (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        godzina TEXT
    );
)";
    query.exec(createCitiesTable);
    query.exec(createHoursTable);

    if (!query.exec(createCitiesTable)) {
        qDebug() << "Błąd tworzenia tabeli cities:" << query.lastError().text();
    }

    if (!query.exec(createHoursTable)) {
        qDebug() << "Błąd tworzenia tabeli hours:" << query.lastError().text();
    }


    // QSqlQuery query;
    // QString createTable;
    // createTable = R"(
    //     CREATE TABLE IF NOT EXISTS cities (
    //         id INTEGER PRIMARY KEY AUTOINCREMENT,
    //         city TEXT
    //     );
    // )";




    // createTable = R"(
    //     CREATE TABLE IF NOT EXISTS hours (
    //         id INTEGER PRIMARY KEY AUTOINCREMENT,
    //         godzina TEXT,

    //     );
    // )";



    // if (!query.exec(createTable)) {
    //     qDebug() << "Błąd tworzenia tabeli:" << query.lastError().text();
    // } else {
    //     qDebug() << "Tabela utworzona lub już istnieje.";
    // }
}
