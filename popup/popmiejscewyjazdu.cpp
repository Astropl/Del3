#include "popmiejscewyjazdu.h"
#include "ui_popmiejscewyjazdu.h"

PopMiejsceWyjazdu::PopMiejsceWyjazdu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PopMiejsceWyjazdu)
{
    ui->setupUi(this);
}

PopMiejsceWyjazdu::~PopMiejsceWyjazdu()
{
    delete ui;
}
