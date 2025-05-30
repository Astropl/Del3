#include "popgodzinawyjazdu.h"
#include "ui_popgodzinawyjazdu.h"

popgodzinawyjazdu::popgodzinawyjazdu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::popgodzinawyjazdu)
{
    ui->setupUi(this);
}

popgodzinawyjazdu::~popgodzinawyjazdu()
{
    delete ui;
}
