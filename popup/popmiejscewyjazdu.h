#ifndef POPMIEJSCEWYJAZDU_H
#define POPMIEJSCEWYJAZDU_H

#include <QDialog>

namespace Ui {
class PopMiejsceWyjazdu;
}

class PopMiejsceWyjazdu : public QDialog
{
    Q_OBJECT

public:
    explicit PopMiejsceWyjazdu(QWidget *parent = nullptr);
    ~PopMiejsceWyjazdu();

private:
    Ui::PopMiejsceWyjazdu *ui;
};

#endif // POPMIEJSCEWYJAZDU_H
