#include <QCoreApplication>
#include <QDebug>

#include "rodent.h"
#include "rodent.h"
#include "rodent.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Heeelo all Rodent";
    {
        Rodent ham("Ham");
        ham.printInf();
        qDebug()<< "Ham name : " << ham.getName();
        qDebug()<< "Ham weigth: " <<  ham.getWeight();

        ham.lifeDay();
        qDebug()<< "Ham weigth: " <<  ham.getWeight();

        ham.lifeDay();
        qDebug()<< "Ham weigth: " <<  ham.getWeight();
        ham.printInf();

        ham.addTwoGrams();
        ham.printInf();

        ham.lifeDay();
        qDebug()<< "Ham weigth: " <<  ham.getWeight();
        ham.printInf();
        ham.lifeDay();
        qDebug()<< "Ham weigth: " <<  ham.getWeight();
        ham.printInf();
        //hamster.weight = 152.0;
        //qDebug()<<  "new Ham weigth: " <<  hamster.weight;
    }
    Rodent mouse("Mouse");
    qDebug()<< mouse.getName();

    {
        Mouse m1("New Mouse");
        qDebug()<< m1.getName();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addTwoGrams();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addTwoGrams();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

        m1.addTwoGrams();

        m1.lifeDay();
        qDebug()<< "Mouse weigth: " <<  m1.getWeight();

    }

    Rodent Hamste("Hamster");
    qDebug()<< Hamste.getName();

    {
        Hamster Ham56("New Hamster");
        Ham56.printInf();
        qDebug()<< Ham56.getName();
        qDebug()<< "Hamster weight: " <<  Ham56.getWeight();

        Ham56.lifeDay();
        qDebug()<< "Hamster age: " <<  Ham56.getAge();
        Ham56.addTwoGrams();
        qDebug()<< "Hamster weigth: " <<  Ham56.getWeight();
        Ham56.lifeTwodays();
        qDebug()<< "Hamster LifeTwoDays: " <<  Ham56.getAge();
        Ham56.printInf();
        Ham56.addTwoGrams();
        qDebug()<< "Hamster weigth: " <<  Ham56.getWeight();
        Ham56.lifeDay();
        qDebug()<< "Hamster age: " <<  Ham56.getAge();

        Ham56.lifeTwodays();
        qDebug()<< "Hamster LifeTwoDays: " <<  Ham56.getAge();
        Ham56.printInf();
        Ham56.lifeDay();
        qDebug()<< "Hamster age: " <<  Ham56.getAge();
        Ham56.addTwoGrams();
        qDebug()<< "Hamster weigth: " <<  Ham56.getWeight();
        Ham56.lifeDay();
        qDebug()<< "Hamster age: " <<  Ham56.getAge();

        Ham56.lifeTwodays();
        qDebug()<< "Hamster LifeTwoDays: " <<  Ham56.getAge();
        Ham56.addTwoGrams();
        qDebug()<< "Hamster weigth: " <<  Ham56.getWeight();
        Ham56.lifeDay();
        qDebug()<< "Hamster age: " <<  Ham56.getAge();

    }

    Hamster Ham60("Hamster 60");
    Mouse  Mos70("Mouse70");
    for (int i=0; i<25; i++){
        Ham60.printInf();
        Mos70.printInf();

        Ham60.lifeDay();
        Mos70.lifeDay();

        Ham60.feed(2.5);
        Mos70.feed(2.5);

        if (i%3==0)
        {
            Ham60.lifeTwodays();
            Mos70.addTwoGrams();
        }



    }


    return a.exec();
}
