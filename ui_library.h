/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Library
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_SignIn;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *RechargeBalance;
    QLineEdit *lineEdit_Recharge;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_bookprice;
    QPushButton *pushButton_Buy;
    QLabel *label_Id;
    QLabel *label_Balance;
    QLabel *label_price;
    QPushButton *Sign_out;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName(QString::fromUtf8("Library"));
        Library->resize(783, 600);
        centralwidget = new QWidget(Library);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 141, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 55, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 81, 16));
        label_SignIn = new QLabel(centralwidget);
        label_SignIn->setObjectName(QString::fromUtf8("label_SignIn"));
        label_SignIn->setGeometry(QRect(60, 200, 331, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 260, 55, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 290, 55, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 230, 80, 25));
        RechargeBalance = new QPushButton(centralwidget);
        RechargeBalance->setObjectName(QString::fromUtf8("RechargeBalance"));
        RechargeBalance->setGeometry(QRect(60, 330, 131, 25));
        lineEdit_Recharge = new QLineEdit(centralwidget);
        lineEdit_Recharge->setObjectName(QString::fromUtf8("lineEdit_Recharge"));
        lineEdit_Recharge->setGeometry(QRect(210, 330, 181, 24));
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(140, 110, 113, 24));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(140, 150, 113, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(480, 80, 121, 21));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(480, 110, 161, 24));
        label_bookprice = new QLabel(centralwidget);
        label_bookprice->setObjectName(QString::fromUtf8("label_bookprice"));
        label_bookprice->setGeometry(QRect(480, 180, 81, 16));
        pushButton_Buy = new QPushButton(centralwidget);
        pushButton_Buy->setObjectName(QString::fromUtf8("pushButton_Buy"));
        pushButton_Buy->setGeometry(QRect(480, 210, 80, 25));
        label_Id = new QLabel(centralwidget);
        label_Id->setObjectName(QString::fromUtf8("label_Id"));
        label_Id->setGeometry(QRect(130, 260, 71, 16));
        label_Balance = new QLabel(centralwidget);
        label_Balance->setObjectName(QString::fromUtf8("label_Balance"));
        label_Balance->setGeometry(QRect(130, 290, 71, 16));
        label_price = new QLabel(centralwidget);
        label_price->setObjectName(QString::fromUtf8("label_price"));
        label_price->setGeometry(QRect(560, 180, 221, 16));
        Sign_out = new QPushButton(centralwidget);
        Sign_out->setObjectName(QString::fromUtf8("Sign_out"));
        Sign_out->setGeometry(QRect(560, 330, 80, 25));
        Library->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Library);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 783, 25));
        Library->setMenuBar(menubar);
        statusbar = new QStatusBar(Library);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Library->setStatusBar(statusbar);

        retranslateUi(Library);

        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QMainWindow *Library)
    {
        Library->setWindowTitle(QCoreApplication::translate("Library", "Library", nullptr));
        label->setText(QCoreApplication::translate("Library", "Account informaion", nullptr));
        label_2->setText(QCoreApplication::translate("Library", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("Library", "Password:", nullptr));
        label_SignIn->setText(QString());
        label_5->setText(QCoreApplication::translate("Library", "ID", nullptr));
        label_6->setText(QCoreApplication::translate("Library", "Balance", nullptr));
        pushButton->setText(QCoreApplication::translate("Library", "Sign in", nullptr));
        RechargeBalance->setText(QCoreApplication::translate("Library", "Recharge Balance", nullptr));
        label_7->setText(QCoreApplication::translate("Library", "Books available", nullptr));
        label_bookprice->setText(QCoreApplication::translate("Library", "Book price:", nullptr));
        pushButton_Buy->setText(QCoreApplication::translate("Library", "Buy Book", nullptr));
        label_Id->setText(QString());
        label_Balance->setText(QString());
        label_price->setText(QString());
        Sign_out->setText(QCoreApplication::translate("Library", "Sign out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
