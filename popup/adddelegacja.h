#ifndef ADDDELEGACJA_H
#define ADDDELEGACJA_H

#include <QWidget>
#include <QDialog> // dodaj na górze

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


    void on_btnExitAndSave_clicked();

private:
    Ui::AddDelegacja *ui;
};

#endif // ADDDELEGACJA_H
