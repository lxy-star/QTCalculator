#include "calculator.h"

Calculator::Calculator(){}

double Calculator::calculator(const QString expression){
    if(expression.isEmpty()){
        throw std::runtime_error("表达式不能为空");
    }
    toPostfix(expression,postfix);
    double result = handleExpression(postfix);
    return result;
}

bool Calculator::isNumber(QChar ch){
    return ch.isDigit()|| ch == '.';
}

bool Calculator::isOperation(QChar ch){
    return ch == '+' || ch == '-' || ch == '/' || ch == '*';
}

int Calculator::precedence(QChar ch){
    switch (ch.unicode()) {
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}

void Calculator::toPostfix(const QString expression, QString &postfix){
    QString::const_iterator it = expression.begin();
    QString::const_iterator end = expression.end();
    QStack<QChar> opt;
    QChar ch;
    postfix.clear();

    while(it!=end){
        ch = *it;
        if(isNumber(ch)){
            QString number;
            number += ch;
            while(++it!=end&&isNumber(*it)){
                number += *it;
            }
            postfix += number;
            postfix += ' ';
        }else if(isOperation(ch)){
            while(!opt.isEmpty()&&isOperation(opt.top())&&precedence(ch)<=precedence(opt.top())){
                postfix += opt.top();
                postfix += ' ';
                opt.pop();
            }
            opt.push(ch);
            ++it;
        }else if(ch == '('){
            opt.push(ch);
            ++it;
        }else if(ch == ')'){
            while(!opt.isEmpty()&&opt.top()!='('){
                postfix += opt.top();
                postfix += ' ';
                opt.pop();
            }
            if(!opt.isEmpty()&&opt.top()=='('){
                opt.pop();
            }
            ++it;
        }else{
            //sikp any undenfined symbols
            ++it;
        }
    }

    while(!opt.isEmpty()){
        postfix += opt.top();
        postfix +=" ";
        opt.pop();
    }

    if(!postfix.isEmpty()&&postfix.back()==' '){
        postfix.chop(1);
    }

    std::cout<<"Postfix expression: "<<postfix.toStdString()<<std::endl;
}

double Calculator::handleExpression(QString &postfix){
    QStack<double> values;
    QStringList tokens = postfix.split(' ');

    for(const QString& token:tokens){
        if(token.isEmpty()) continue;

        bool ok;
        std::cout<<"token is: "<< token.toStdString() << std::endl;
        double value = token.toDouble(&ok);
        if(ok){
            values.push(value);
        }else if(isOperation(token[0])){
            applyOpertion(values,token[0]);
        }else{
            throw std::runtime_error("Invalid token: " + token.toStdString());
        }
    }

    if(values.size() != 1){
        throw std::runtime_error("Invalid expression: Stack should contain exactly one value");
    }

    double result = values.pop();
    return result;
}

void Calculator::applyOpertion(QStack<double> &values, QChar opt){
    if (values.size() < 2) {
        throw std::runtime_error("Invalid expression: Not enough values for operation");
    }

    double right = values.top();
    values.pop();
    double left = values.top();
    values.pop();
    double result;

    switch (opt.unicode()) {
    case '*':
        result = left * right;
        break;
    case '/':
        if (right == 0) {
            throw std::runtime_error("Error, Division by zero.");
        }
        result = left / right;
        break;
    case '+':
        result = left + right;
        break;
    case '-':
        result = left - right;
        break;
    default:
        std::string errorMessage = "Unknown operator: ";
        errorMessage += opt.toLatin1(); // 将 char 转换为 string
        throw std::runtime_error(errorMessage);
    }

    values.push(result);
}
