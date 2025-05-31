#include "dbinit.h"
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QVariant>

// DbInit::DbInit(QWidget *parent)
//     : QMainWindow{parent}
// {}



int DbInit(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 1. Dodaj połączenie do bazy SQLite
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("moja_baza.sqlite");

    // 2. Sprawdź, czy udało się otworzyć
    if (!db.open()) {
        qDebug() << "❌ Błąd połączenia z bazą danych:" << db.lastError().text();
        return -1;
    }
    qDebug() << "✅ Połączono z bazą danych.";

    // 3. Tworzenie tabeli
    QSqlQuery query;
    if (!query.exec("CREATE TABLE IF NOT EXISTS osoby (id INTEGER PRIMARY KEY AUTOINCREMENT, imie TEXT)")) {
        qDebug() << "❌ Błąd tworzenia tabeli:" << query.lastError().text();
    } else {
        qDebug() << "✅ Tabela została utworzona lub już istnieje.";
    }

    // 4. Dodaj dane
    query.prepare("INSERT INTO osoby (imie) VALUES (:imie)");
    query.bindValue(":imie", "Janek");
    if (!query.exec()) {
        qDebug() << "❌ Błąd przy wstawianiu danych:" << query.lastError().text();
    } else {
        qDebug() << "✅ Wstawiono rekord.";
    }

    // 5. Odczytaj dane
    if (query.exec("SELECT id, imie FROM osoby")) {
        qDebug() << "📋 Lista osób w bazie:";
        while (query.next()) {
            int id = query.value("id").toInt();
            QString imie = query.value("imie").toString();
            qDebug() << "➡️ ID:" << id << "| Imię:" << imie;
        }
    } else {
        qDebug() << "❌ Błąd podczas odczytu:" << query.lastError().text();
    }

    return 0;
}
