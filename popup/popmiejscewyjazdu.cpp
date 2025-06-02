#include "popmiejscewyjazdu.h"
#include "ui_popmiejscewyjazdu.h"
#include "../db/dbinit.h"

#include <QDebug>
#include <QString>
#include <QCoreApplication>

using namespace std;
QString dodajMiejscowosc;


PopMiejsceWyjazdu::PopMiejsceWyjazdu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PopMiejsceWyjazdu)
{
    ui->setupUi(this);
    init();
    initDb();
    wczytaj();
}
void PopMiejsceWyjazdu::wczytaj()
{int cityCount;
    QString cityName;
    DbInit db;
    qDebug()<<"Wczytuje miasta.";
    qDebug()<<"najpierw liczba wpisów";

    cityCount=db.citiesCount(cityCount);

    qDebug()<<"liczba wpisów odebrana2: to: "<<cityCount;

    for(int i=0; i<cityCount;i++)
    {qDebug()<<"wejscie nr: "<<i <<" z "<<cityCount;
        cityName=db.citiesAddToCombo(cityName,i);
        qDebug()<<"Pobrałem: "<< cityName;
        ui->cmbDodajWyjazd->addItem(cityName);
    }

    ui->cmbDodajWyjazd->model()->sort(0,Qt::AscendingOrder); //sortowanie alfabetycznie.
}

PopMiejsceWyjazdu::~PopMiejsceWyjazdu()
{
    delete ui;
}
void PopMiejsceWyjazdu::initDb()
{
    DbInit db;
    if (db.connectToDatabase("../../db/moja_baza1.db")) {
        db.initializeTables();
    }
}
void PopMiejsceWyjazdu::init()
{
    qDebug()<<"init";
    ui->btnDodajWyjazd->setText("Dodaj Miejsce");
    ui->btnDodajWyjazd->adjustSize(); //automatyczne dopasowanie do zawartosci
    ui->lblDodajWyjazd->setText("Dodaj Miejscowość");
    ui->btnDodajWyjazdExit->setText("Wyjście");
    ui->btnDodajWyjazdExit->adjustSize();
    ui->cmbDodajWyjazd->model()->sort(0,Qt::AscendingOrder); //sortowanie alfabetycznie.
    ui->cmbDodajWyjazd->setDuplicatesEnabled(false); // duplikaty off

}

void PopMiejsceWyjazdu::on_btnDodajWyjazd_clicked()
{
    DbInit db;
    QString cityName;
    qDebug()<<"Dodaj miejsce";
    dodajMiejscowosc = ui->lnlDodajWyjazd->text();
    qDebug()<< "miejsce to: " <<dodajMiejscowosc;

    if (ui->cmbDodajWyjazd->findText(dodajMiejscowosc, Qt::MatchFixedString | Qt::MatchCaseSensitive) == -1)
    {
        ui->cmbDodajWyjazd->addItem(dodajMiejscowosc);

        qDebug()<<"dodaje: ";
        cityName = ui->lnlDodajWyjazd->text();
        qDebug()<<"dodaje: "<<cityName;
        cityName = db.citiesAdd(cityName);
        qDebug()<<"Dodalem: "<< cityName;
    }
    else
    {
        qDebug()<<"Nie dodoaje. Jest w e wpisie ";
    }

    //dodoaje obsługę bazy

    //TODO: przeniesc do mainwindow


    ui->lnlDodajWyjazd->setText("");
    ui->cmbDodajWyjazd->model()->sort(0,Qt::AscendingOrder); //sortowanie alfabetycznie.
}

