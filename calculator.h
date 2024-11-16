#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QStack>
#include <iostream>
#include <stdexcept>
#include <string>

class Calculator{
public:
    Calculator();
    double calculator(const QString expression);
private:
    double handleExpression(QString& postfix);
    void toPostfix(const QString expression,QString& postfix);
    bool isNumber(QChar ch);
    bool isOperation(QChar ch);
    void applyOpertion(QStack<double>& values,QChar opt);
    int precedence(QChar ch);
    QString postfix;
};

#endif // CALCULATOR_H
