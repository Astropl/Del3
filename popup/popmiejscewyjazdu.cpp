#include "popmiejscewyjazdu.h"
#include "ui_popmiejscewyjazdu.h"
#include <QDebug>
#include <QString>
using namespace std;
QString dodajMiejscowosc;


PopMiejsceWyjazdu::PopMiejsceWyjazdu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PopMiejsceWyjazdu)
{
    ui->setupUi(this);
    init();
}

PopMiejsceWyjazdu::~PopMiejsceWyjazdu()
{
    delete ui;
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
    qDebug()<<"Dodaj miejsce";
    dodajMiejscowosc = ui->lnlDodajWyjazd->text();
    qDebug()<< "miejsce to: " <<dodajMiejscowosc;
    ui->cmbDodajWyjazd->addItem(dodajMiejscowosc);

}

