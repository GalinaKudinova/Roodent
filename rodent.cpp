#include "rodent.h"

Rodent::Rodent(QString name)
{
    QString qsTemp = "New rodend %1 was born! Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(this->weight);
    this->name = name;
}
Rodent::Rodent()
{
    QString qsTemp = "Empty const: New rodend %1 was born! Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(this->weight);
    this->name = name;
}
Rodent::~Rodent()
{
    QString qsTemp = "Thes rodend %1 was die! :( RIP Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(this->weight);

}

void Rodent::feed(double food)
{
    weight+=food;

}


bool Rodent::lifeDay()
{
    weight-=0.34;
    if(weight<0.0) return false;
    age++;
    return true;
}

void Rodent::addTwoGrams()
{
    qDebug() << "add two grams";
    weight+=2.0;
}

void Rodent::printInf()
{
    QString QsTemp;
    QsTemp="this Rodent with Name %1 age %2 and weight %3";
    QsTemp=QsTemp.arg(name).arg(age).arg(weight);
     qDebug() << qPrintable(QsTemp);
}


Mouse::Mouse(QString name)
{
    weight=0.75;
    QString qsTemp = "New Mouse %1 was born! Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(weight);
    this->name = name;
}

void Mouse::addTwoGrams()
{
    qDebug() << "add two grams";
    weight+=2.0;
}

bool Mouse::lifeDay()
{
    weight-=0.25;
    if(weight<0.0) return false;
    age++;
    return true;
}

Hamster::Hamster(QString name)
{
    weight=2;
    QString qsTemp = "New Hamster %1 was born! Weigh is %2";
    qDebug() << qsTemp.arg(name).arg(weight);
    this->name = name;
}

void Hamster::lifeTwodays()
{
    age+=2;
}

bool Hamster::lifeDay()
{
    weight-=0.25;
    if(weight<0.0) return false;
    age++;
    return true;
}

void Hamster::addTwoGrams()
{
    qDebug() << "add two grams";
    weight+=2.0;
}
