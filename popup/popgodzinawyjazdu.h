#ifndef POPGODZINAWYJAZDU_H
#define POPGODZINAWYJAZDU_H

#include <QDialog>

namespace Ui {
class popgodzinawyjazdu;
}

class popgodzinawyjazdu : public QDialog
{
    Q_OBJECT

public:
    explicit popgodzinawyjazdu(QWidget *parent = nullptr);
    ~popgodzinawyjazdu();

private:
    Ui::popgodzinawyjazdu *ui;
};

#endif // POPGODZINAWYJAZDU_H
