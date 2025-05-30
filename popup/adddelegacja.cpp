#include "adddelegacja.h"
#include "ui_adddelegacja.h"
#include <QMessageBox>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QVBoxLayout>
#include <QDialog> // dodaj na górze
#include <QDebug>

AddDelegacja::AddDelegacja(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddDelegacja)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window);  // ← DODAJ TO
    setWindowTitle("Drugie okno");
    resize(700, 450);
    QVBoxLayout *layout = new QVBoxLayout(this);

    // Tworzenie menuBar
    QMenuBar *menuBar = new QMenuBar(this);

    // Dodanie menu i akcji
    //TODO: Dodoac brrakująe=ce menu typu dodoaj miasta,
    //TODO: godziny itd
    qDebug() << ("Cos tutaj test");

    QMenu *add = new QMenu("Dodaj", this);
    QMenu *fileMenu1 = new QMenu("Cos1",this);
    QAction *exitAction = new QAction("Wyjście", this);
    QAction *cos2 = new QAction("cos2", this);
    connect(exitAction, &QAction::triggered, this, &QWidget::close);
    //connect(helpAction, &QAction::triggered, this,&QWidget::close );
    add->addAction(exitAction);
    fileMenu1->addAction(cos2);
    //fileMenu1->addAction(cos2, &QAction::triggered, this, &QWidget::close);
    //fileMenu1->addAction()
    menuBar->addMenu(add);
    menuBar->addMenu(fileMenu1);

    // Dodanie menuBar do layoutu
    layout->setMenuBar(menuBar);

    // Dodanie innych widgetów poniżej jeśli trzeba
    // layout->addWidget(new QLabel("Treść okna"));

    setLayout(layout);

    init();

    //move(100,100);
}

AddDelegacja::~AddDelegacja()
{
    delete ui;
}
void AddDelegacja::init()
{
    qDebug() << ("init");
    setWindowTitle("Podróż Słuzbowa v 1.0");


    ui->lblDataWyjazdu->setText("Miejsce Wyjazdu");
    ui->lblGodzWyjazdu->setText("Godzina Wyjazdu");
    ui->lblDataPowrotu->setText("Data Powortu");
    ui->lblGodzPowrotu->setText("Godzina Powrotu");
    ui->lblMiejsceWyjazdu->setText("Miejsce Wyjazdu");
    ui->btnExitAndSave->setText("Zamknij i zapisz");



 //ui->AddDelegacja->setGeometry(0, 50, 120, 280);
    //ui->
}



void AddDelegacja::on_btnExitAndSave_clicked()
{
    qDebug() << ("exit");
    destroy();
}

