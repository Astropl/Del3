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
    DbInit db;
    qDebug()<<"Wczytuje miasta.";
    qDebug()<<"najpierw liczba wpisów";

    cityCount=db.citiesCount(cityCount);

    qDebug()<<"liczba wpisów odebrana2: to: "<<cityCount;
    //QString DbInit::citiesCount(QString cityCount)
    // {
    //     int cityCountInt = cityCount.toInt();
    //     qDebug()<<"string to : " <<cityCount<<"a cyfra to : "<< cityCountInt;
    // }

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


}

void PopMiejsceWyjazdu::on_btnDodajWyjazd_clicked()
{
    DbInit db;
    qDebug()<<"Dodaj miejsce";
    dodajMiejscowosc = ui->lnlDodajWyjazd->text();
    qDebug()<< "miejsce to: " <<dodajMiejscowosc;
    ui->cmbDodajWyjazd->addItem(dodajMiejscowosc);



    //dodoaje obsługę bazy
//QCoreApplication a(argc, argv);
    //TODO: przeniesc do mainwindow


    qDebug()<<"dodaje: ";
    QString cityName = ui->lnlDodajWyjazd->text();
    qDebug()<<"dodaje: "<<cityName;
     cityName = db.citiesAdd(cityName);

    qDebug()<<"Dodalem: "<< cityName;
//QString DbInit::citiesAdd(QString cityName)
    //return a.exec();

 ui->lnlDodajWyjazd->setText("");
}

