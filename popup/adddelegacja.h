#ifndef ADDDELEGACJA_H
#define ADDDELEGACJA_H

#include <QWidget>
#include <QDialog> // dodaj na górze
#include "ui_popmiejscewyjazdu.h"
#include "popmiejscewyjazdu.h"

namespace Ui {
class AddDelegacja;
}

class AddDelegacja : public QDialog
{
    Q_OBJECT

public:
    explicit AddDelegacja(QWidget *parent = nullptr);
    ~AddDelegacja();

private slots:
    //void on_pushButton_clicked();
    void init();

    void miejsceWyjazdu();
    void godzinaWyjazdu();
    void dataWyjazdu();

    void on_btnExitAndSave_clicked();

private:
    Ui::AddDelegacja *ui;
     //AddDelegacja *adddelegacja; // pole klasy
    PopMiejsceWyjazdu *popMiejsceWyjazdu;
};

#endif // ADDDELEGACJA_H
