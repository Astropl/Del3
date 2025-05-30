#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "popup/adddelegacja.h" // dodaj to



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initWindow();
    void first();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    //void on_pushButton_6_clicked();

    void on_pbtExit_clicked();

private:
    Ui::MainWindow *ui;private:
    AddDelegacja *adddelegacja; // pole klasy

};
#endif // MAINWINDOW_H
