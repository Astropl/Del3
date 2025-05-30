#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "popup/adddelegacja.h"
#include <QTime>
#include <QTimer>
#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>
#include <windows.h> //winapi header
#include <windows.h>
#include <qcalendarwidget.h>
#include <QMessageBox>
#include <QDebug>


int rozwinMenu = 0; // 0- zwiniete, 1 rozwiniete
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    first();
    connect(ui->actionNowa_delegacja, &QAction::triggered, this, &MainWindow::on_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::initWindow()
{
    setWindowTitle("Podróż Słuzbowa v 1.0");
    //ui->frmMenu->setFrameRect(QRect(0,05,120,280));
    ui->frmMenu->setGeometry(0, 50, 120, 280);
    //QIcon emtyIcon;
    // ui->menubar->setWindowIcon(emtyIcon);
    // ui->menuPLIK->setWindowIcon(emtyIcon);
    //ui->menubar->setStyleSheet("QMenuBar { padding-left: 0px; margin-left: 0px; }");
   // ui->menubar->setCornerWidget(nullptr);
    //ui->menuPLIK->setCornerWidget(nullptr);
    ui->frmMenu->hide();
    //****8
    //ui->tblDelShow->setFrameRect(QRect(140,50,100,100));
    ui->tblDelShow->setFixedSize(700,250);
    ui->tblDelShow->setColumnCount(8);
    QStringList naglowki;
    naglowki << "DATA WYJAZDU" << "GODZINA WYJAZDU" << "DATA POWROTU" << "GODZINA POWROTU" << "MIEJSCE WYJAZDU" << "CZAS DELEGACJI" <<"KOSZTY"<<"NR DELEGACJI";
    ui->tblDelShow->setHorizontalHeaderLabels(naglowki);
    ui->tblDelShow->resizeColumnsToContents();
}
void MainWindow::first() {
    initWindow();
    // myfunctiontimer();
    // DBase *wersja = new DBase (this);
    // wersja ->init();
    // //TODO: Pobierz zawartosc DB
    // pobierzZDB();


    // println("pierwsza");
    qDebug() << "Ikonka Remider z toolbara";
    //qWarning() << " Qwarning";
}

void MainWindow::on_pushButton_7_clicked()
{
    qDebug() << ("BtnMenu Clic");

    // ui->frmMenu->setFrameRect(QRect(0,50,120,280));
    if (rozwinMenu == 0) {

        for (int x = 0; x < 280; ++x) {
            ui->frmMenu->setGeometry(0, 50, 120, x);
            QTime dieTime = QTime::currentTime().addMSecs(1);
            while (QTime::currentTime() < dieTime) {
                QCoreApplication::processEvents(QEventLoop::AllEvents, 10);
            }
            ui->frmMenu->show();
            rozwinMenu = 1;
            //ui->tbvMainShow->hide();
            //ui->frmDelegacjaAdd->show();
        }

    } else {
        for (int x = 280; x > 0; x--) {

            ui->frmMenu->setGeometry(0, 50, 120, x);
            QTime dieTime = QTime::currentTime().addMSecs(1);
            while (QTime::currentTime() < dieTime) {
                QCoreApplication::processEvents(QEventLoop::AllEvents, 10);
            }
            ui->frmMenu->show();
            rozwinMenu = 0;
            ///ui->tbvMainShow->show();
            //ui->frmDelegacjaAdd->hide();
        }
    }
}


void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"Add DelegACJA";
    if (ui->frmMenu->focusWidget())
    {
        qDebug() << "stracil focus";
    } else
    {
        qDebug() << "odzyskał focus";
    };

    adddelegacja = new AddDelegacja(this);
    adddelegacja->setModal(true);  // opcjonalne, exec() i tak ustawia
    adddelegacja->exec();          // to sprawia, że główne okno jest zablokowan


    // adddelegacja =new AddDelegacja(this);
    // adddelegacja->show();
    //TODO: Sprawdzic odzyskjanie focusa
    qDebug() << "odzyskał focus";
}




void MainWindow::on_pbtExit_clicked()
{
     destroy();
}

