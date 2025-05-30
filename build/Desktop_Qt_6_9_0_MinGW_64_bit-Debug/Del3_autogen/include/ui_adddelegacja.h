/********************************************************************************
** Form generated from reading UI file 'adddelegacja.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDELEGACJA_H
#define UI_ADDDELEGACJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDelegacja
{
public:
    QPushButton *btnExitAndSave;
    QLineEdit *lineEdit;
    QLabel *lblDataWyjazdu;
    QLabel *lblGodzWyjazdu;
    QLabel *lblDataPowrotu;
    QLabel *lblGodzPowrotu;
    QLabel *lblMiejsceWyjazdu;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QComboBox *cmbDataWyjazdu;

    void setupUi(QWidget *AddDelegacja)
    {
        if (AddDelegacja->objectName().isEmpty())
            AddDelegacja->setObjectName("AddDelegacja");
        AddDelegacja->resize(699, 424);
        btnExitAndSave = new QPushButton(AddDelegacja);
        btnExitAndSave->setObjectName("btnExitAndSave");
        btnExitAndSave->setGeometry(QRect(540, 370, 93, 29));
        lineEdit = new QLineEdit(AddDelegacja);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(500, 60, 113, 26));
        lblDataWyjazdu = new QLabel(AddDelegacja);
        lblDataWyjazdu->setObjectName("lblDataWyjazdu");
        lblDataWyjazdu->setGeometry(QRect(52, 50, 111, 20));
        lblGodzWyjazdu = new QLabel(AddDelegacja);
        lblGodzWyjazdu->setObjectName("lblGodzWyjazdu");
        lblGodzWyjazdu->setGeometry(QRect(52, 80, 111, 20));
        lblDataPowrotu = new QLabel(AddDelegacja);
        lblDataPowrotu->setObjectName("lblDataPowrotu");
        lblDataPowrotu->setGeometry(QRect(52, 110, 111, 20));
        lblGodzPowrotu = new QLabel(AddDelegacja);
        lblGodzPowrotu->setObjectName("lblGodzPowrotu");
        lblGodzPowrotu->setGeometry(QRect(50, 140, 121, 20));
        lblMiejsceWyjazdu = new QLabel(AddDelegacja);
        lblMiejsceWyjazdu->setObjectName("lblMiejsceWyjazdu");
        lblMiejsceWyjazdu->setGeometry(QRect(50, 170, 131, 20));
        lineEdit_2 = new QLineEdit(AddDelegacja);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 80, 113, 26));
        lineEdit_3 = new QLineEdit(AddDelegacja);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(170, 110, 113, 26));
        lineEdit_4 = new QLineEdit(AddDelegacja);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 140, 113, 26));
        lineEdit_5 = new QLineEdit(AddDelegacja);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(170, 170, 113, 26));
        cmbDataWyjazdu = new QComboBox(AddDelegacja);
        cmbDataWyjazdu->setObjectName("cmbDataWyjazdu");
        cmbDataWyjazdu->setGeometry(QRect(170, 50, 151, 26));

        retranslateUi(AddDelegacja);

        QMetaObject::connectSlotsByName(AddDelegacja);
    } // setupUi

    void retranslateUi(QWidget *AddDelegacja)
    {
        AddDelegacja->setWindowTitle(QCoreApplication::translate("AddDelegacja", "Form", nullptr));
        btnExitAndSave->setText(QCoreApplication::translate("AddDelegacja", "PushButton", nullptr));
        lblDataWyjazdu->setText(QCoreApplication::translate("AddDelegacja", "TextLabel", nullptr));
        lblGodzWyjazdu->setText(QCoreApplication::translate("AddDelegacja", "TextLabel", nullptr));
        lblDataPowrotu->setText(QCoreApplication::translate("AddDelegacja", "TextLabel", nullptr));
        lblGodzPowrotu->setText(QCoreApplication::translate("AddDelegacja", "TextLabel", nullptr));
        lblMiejsceWyjazdu->setText(QCoreApplication::translate("AddDelegacja", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDelegacja: public Ui_AddDelegacja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDELEGACJA_H
