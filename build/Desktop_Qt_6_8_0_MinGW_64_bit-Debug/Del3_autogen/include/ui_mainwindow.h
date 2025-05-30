/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowa_delegacja;
    QAction *actionEksport_danych;
    QAction *actionZako_cz;
    QAction *actionEdytuj_delegacj;
    QAction *actionUsu_delegacj;
    QAction *actionStatystyki;
    QAction *actionFiltruj;
    QAction *actionSzukaj;
    QWidget *centralwidget;
    QTableWidget *tblDelShow;
    QPushButton *pushButton_7;
    QFrame *frmMenu;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pbtExit;
    QMenuBar *menubar;
    QMenu *menuPLIK;
    QMenu *menuEdycja;
    QMenu *menuWidok;
    QMenu *menuO_programie;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1212, 627);
        actionNowa_delegacja = new QAction(MainWindow);
        actionNowa_delegacja->setObjectName("actionNowa_delegacja");
        actionEksport_danych = new QAction(MainWindow);
        actionEksport_danych->setObjectName("actionEksport_danych");
        actionZako_cz = new QAction(MainWindow);
        actionZako_cz->setObjectName("actionZako_cz");
        actionEdytuj_delegacj = new QAction(MainWindow);
        actionEdytuj_delegacj->setObjectName("actionEdytuj_delegacj");
        actionUsu_delegacj = new QAction(MainWindow);
        actionUsu_delegacj->setObjectName("actionUsu_delegacj");
        actionStatystyki = new QAction(MainWindow);
        actionStatystyki->setObjectName("actionStatystyki");
        actionFiltruj = new QAction(MainWindow);
        actionFiltruj->setObjectName("actionFiltruj");
        actionSzukaj = new QAction(MainWindow);
        actionSzukaj->setObjectName("actionSzukaj");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tblDelShow = new QTableWidget(centralwidget);
        if (tblDelShow->columnCount() < 8)
            tblDelShow->setColumnCount(8);
        if (tblDelShow->rowCount() < 3)
            tblDelShow->setRowCount(3);
        tblDelShow->setObjectName("tblDelShow");
        tblDelShow->setGeometry(QRect(140, 50, 881, 251));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tblDelShow->sizePolicy().hasHeightForWidth());
        tblDelShow->setSizePolicy(sizePolicy);
        tblDelShow->setAlternatingRowColors(true);
        tblDelShow->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        tblDelShow->setRowCount(3);
        tblDelShow->setColumnCount(8);
        tblDelShow->horizontalHeader()->setVisible(true);
        tblDelShow->verticalHeader()->setVisible(true);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 10, 93, 29));
        frmMenu = new QFrame(centralwidget);
        frmMenu->setObjectName("frmMenu");
        frmMenu->setGeometry(QRect(0, 50, 121, 281));
        frmMenu->setFrameShape(QFrame::Shape::StyledPanel);
        frmMenu->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(frmMenu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 93, 29));
        pushButton_2 = new QPushButton(frmMenu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 50, 93, 29));
        pushButton_3 = new QPushButton(frmMenu);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 90, 93, 29));
        pushButton_4 = new QPushButton(frmMenu);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 130, 93, 29));
        pushButton_5 = new QPushButton(frmMenu);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 170, 93, 29));
        pbtExit = new QPushButton(frmMenu);
        pbtExit->setObjectName("pbtExit");
        pbtExit->setGeometry(QRect(10, 240, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1212, 26));
        menuPLIK = new QMenu(menubar);
        menuPLIK->setObjectName("menuPLIK");
        menuEdycja = new QMenu(menubar);
        menuEdycja->setObjectName("menuEdycja");
        menuWidok = new QMenu(menubar);
        menuWidok->setObjectName("menuWidok");
        menuO_programie = new QMenu(menubar);
        menuO_programie->setObjectName("menuO_programie");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPLIK->menuAction());
        menubar->addAction(menuEdycja->menuAction());
        menubar->addAction(menuWidok->menuAction());
        menubar->addAction(menuO_programie->menuAction());
        menuPLIK->addAction(actionNowa_delegacja);
        menuPLIK->addAction(actionEksport_danych);
        menuPLIK->addSeparator();
        menuPLIK->addAction(actionZako_cz);
        menuEdycja->addAction(actionEdytuj_delegacj);
        menuEdycja->addAction(actionUsu_delegacj);
        menuWidok->addAction(actionStatystyki);
        menuWidok->addAction(actionFiltruj);
        menuWidok->addAction(actionSzukaj);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNowa_delegacja->setText(QCoreApplication::translate("MainWindow", "Nowa delegacja", nullptr));
        actionNowa_delegacja->setIconText(QCoreApplication::translate("MainWindow", "Nowa delegacja", nullptr));
        actionEksport_danych->setText(QCoreApplication::translate("MainWindow", "Eksport danych", nullptr));
        actionZako_cz->setText(QCoreApplication::translate("MainWindow", "Zako\305\204cz", nullptr));
        actionEdytuj_delegacj->setText(QCoreApplication::translate("MainWindow", "Edytuj delegacj\304\231", nullptr));
        actionUsu_delegacj->setText(QCoreApplication::translate("MainWindow", "Usu\305\204 delegacj\304\231", nullptr));
        actionStatystyki->setText(QCoreApplication::translate("MainWindow", "Statystyki", nullptr));
        actionFiltruj->setText(QCoreApplication::translate("MainWindow", "Filtruj", nullptr));
        actionSzukaj->setText(QCoreApplication::translate("MainWindow", "Szukaj", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Edytuj", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Statystyki", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Szukaj", nullptr));
        pbtExit->setText(QCoreApplication::translate("MainWindow", "Zako\305\204cz", nullptr));
        menuPLIK->setTitle(QCoreApplication::translate("MainWindow", "Plik", nullptr));
        menuEdycja->setTitle(QCoreApplication::translate("MainWindow", "Edycja", nullptr));
        menuWidok->setTitle(QCoreApplication::translate("MainWindow", "Widok", nullptr));
        menuO_programie->setTitle(QCoreApplication::translate("MainWindow", "O programie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
