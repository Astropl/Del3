#include "dbinit.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QString>


using namespace std;

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


}
//ile jest wpisów w tabeli

//wczytuje tyle razy ile wpisow
int DbInit::citiesCount(int cityCount)
{int cityCountInt;

    QSqlQuery query;

     query.prepare("SELECT COUNT(*) FROM cities");

    if (!query.exec()) {
        qDebug() << "Błąd wykonania zapytania:" << query.lastError();
        return -1;
    }

    if (query.next()) {
        int cityCountInt = query.value(0).toInt();
        return cityCountInt;
    }
     qDebug()<<"Liczba wpisów to: "<<cityCountInt;
    return -1; // Na wypadek braku wyników

}
QString DbInit::citiesAddToCombo(QString cityName,int a)// a to liczba wpisow
{
    QSqlQuery query;
     query.prepare("SELECT city From cities");
    // cityName=query.value(a).toString();

     if (!query.exec()) {
         qDebug() << "Błąd zapytania:" << query.lastError().text();
         return QString();
     }
    int i=0;
     qDebug()<<" a teraz to: "<<a;
    while(query.next())
    {
        if(i ==a)
        {
            qDebug()<<"zwracam teraz: "<<query.value(a).toString();
            return query.value(0).toString();
        }
        i++;

    }

    return QString();
}

QString DbInit::citiesAdd(QString cityName)
{
    qDebug()<<"Dodaje do tbeli city: "<<cityName;

    QSqlQuery query;
    query.prepare("INSERT INTO cities (city) VALUES (:name)");
    query.bindValue(":name", cityName);

    if (!query.exec()) {
        qDebug() << "Błąd dodawania miasta:" << query.lastError().text();
        return "Błąd: " + query.lastError().text();
    }

    return "Dodano pomyślnie: " + cityName;

    //return 0;
}
