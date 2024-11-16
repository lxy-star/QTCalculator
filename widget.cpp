#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("计算机");
    this->setMinimumSize(205,305);
    this->setMaximumSize(205,305);
    QFont f("仿宋",10);
    ui->lineEdit->setFont(f);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_leftButton_clicked()
{
    expression += '(';
    ui->lineEdit->setText(expression);
}

void Widget::on_zeroButton_clicked()
{
    expression += '0';
    ui->lineEdit->setText(expression);
}

void Widget::on_rightButton_clicked()
{
    expression += ')';
    ui->lineEdit->setText(expression);
}

void Widget::on_equalButton_clicked()
{
    try{
        double result = calculator.calculator(expression);
        expression.remove('=');
        expression += "=";
        expression += QString::number(result);
        ui->lineEdit->setText(expression);
    }catch(std::exception e){
        expression.clear();
        ui->lineEdit->clear();
        QString errorMessage = QString::fromUtf8(e.what()) + ",请重新输入";
        QMessageBox::information(this,"错误提示",errorMessage);
    };
}

void Widget::on_oneButton_clicked()
{
    expression += '1';
    ui->lineEdit->setText(expression);
}

void Widget::on_twoButton_clicked()
{
    expression += '2';
    ui->lineEdit->setText(expression);
}

void Widget::on_treeButton_clicked()
{
    expression += '3';
    ui->lineEdit->setText(expression);
}

void Widget::on_fourButton_clicked()
{
    expression += '4';
    ui->lineEdit->setText(expression);
}

void Widget::on_fiveButton_clicked()
{
    expression += '5';
    ui->lineEdit->setText(expression);
}

void Widget::on_sixButton_clicked()
{
    expression += '6';
    ui->lineEdit->setText(expression);
}

void Widget::on_divButton_clicked()
{
    expression += '/';
    ui->lineEdit->setText(expression);
}

void Widget::on_servenButton_clicked()
{
    expression += '7';
    ui->lineEdit->setText(expression);
}

void Widget::on_eightButton_clicked()
{
    expression += '8';
    ui->lineEdit->setText(expression);
}

void Widget::on_nineButton_clicked()
{
    expression += '9';
    ui->lineEdit->setText(expression);
}

void Widget::on_mulButton_clicked()
{
    expression += '*';
    ui->lineEdit->setText(expression);
}

void Widget::on_pointButton_clicked()
{
    expression += '.';
    ui->lineEdit->setText(expression);
}

void Widget::on_addButton_clicked()
{
    expression += '+';
    ui->lineEdit->setText(expression);
}

void Widget::on_subButton_clicked()
{
    expression += '-';
    ui->lineEdit->setText(expression);
}

void Widget::on_pushButton_23_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}

void Widget::on_clearButton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}
