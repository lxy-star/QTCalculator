/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *leftButton;
    QPushButton *zeroButton;
    QPushButton *rightButton;
    QPushButton *equalButton;
    QPushButton *treeButton;
    QPushButton *twoButton;
    QPushButton *oneButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *divButton;
    QPushButton *sixButton;
    QPushButton *nineButton;
    QPushButton *mulButton;
    QPushButton *eightButton;
    QPushButton *servenButton;
    QPushButton *pointButton;
    QPushButton *subButton;
    QPushButton *addButton;
    QPushButton *pushButton_23;
    QLineEdit *lineEdit;
    QPushButton *clearButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        leftButton = new QPushButton(Widget);
        leftButton->setObjectName("leftButton");
        leftButton->setGeometry(QRect(0, 250, 51, 51));
        zeroButton = new QPushButton(Widget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setGeometry(QRect(50, 250, 51, 51));
        rightButton = new QPushButton(Widget);
        rightButton->setObjectName("rightButton");
        rightButton->setGeometry(QRect(100, 250, 51, 51));
        equalButton = new QPushButton(Widget);
        equalButton->setObjectName("equalButton");
        equalButton->setGeometry(QRect(150, 250, 51, 51));
        treeButton = new QPushButton(Widget);
        treeButton->setObjectName("treeButton");
        treeButton->setGeometry(QRect(100, 200, 51, 51));
        twoButton = new QPushButton(Widget);
        twoButton->setObjectName("twoButton");
        twoButton->setGeometry(QRect(50, 200, 51, 51));
        oneButton = new QPushButton(Widget);
        oneButton->setObjectName("oneButton");
        oneButton->setGeometry(QRect(0, 200, 51, 51));
        fourButton = new QPushButton(Widget);
        fourButton->setObjectName("fourButton");
        fourButton->setGeometry(QRect(0, 150, 51, 51));
        fiveButton = new QPushButton(Widget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setGeometry(QRect(50, 150, 51, 51));
        divButton = new QPushButton(Widget);
        divButton->setObjectName("divButton");
        divButton->setGeometry(QRect(150, 150, 51, 51));
        sixButton = new QPushButton(Widget);
        sixButton->setObjectName("sixButton");
        sixButton->setGeometry(QRect(100, 150, 51, 51));
        nineButton = new QPushButton(Widget);
        nineButton->setObjectName("nineButton");
        nineButton->setGeometry(QRect(100, 100, 51, 51));
        mulButton = new QPushButton(Widget);
        mulButton->setObjectName("mulButton");
        mulButton->setGeometry(QRect(150, 100, 51, 51));
        eightButton = new QPushButton(Widget);
        eightButton->setObjectName("eightButton");
        eightButton->setGeometry(QRect(50, 100, 51, 51));
        servenButton = new QPushButton(Widget);
        servenButton->setObjectName("servenButton");
        servenButton->setGeometry(QRect(0, 100, 51, 51));
        pointButton = new QPushButton(Widget);
        pointButton->setObjectName("pointButton");
        pointButton->setGeometry(QRect(0, 50, 51, 51));
        subButton = new QPushButton(Widget);
        subButton->setObjectName("subButton");
        subButton->setGeometry(QRect(100, 50, 51, 51));
        addButton = new QPushButton(Widget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(50, 50, 51, 51));
        pushButton_23 = new QPushButton(Widget);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(150, 50, 51, 51));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 0, 201, 41));
        clearButton = new QPushButton(Widget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(150, 200, 51, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        treeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        servenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pointButton->setText(QCoreApplication::translate("Widget", ".", nullptr));
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pushButton_23->setText(QCoreApplication::translate("Widget", "d", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
