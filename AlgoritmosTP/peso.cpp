#include "peso.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>
#include <QStringList>
#include <QMap>
Peso::Peso(QString path)
{
    pChar = QMap<QChar,int>();       
    QFile *f= new QFile(path);
    qDebug() << f->open(QIODevice::ReadOnly | QIODevice::Text);
    QString chain;
    QChar caracter;
    QStringList peso;
    QTextStream tex(f); //para usar las funcionos de QTextStream.
    int pesoInt;
    while (!tex.atEnd()){
        chain = tex.readLine();
        peso = chain.split(':'); //el substring distinto a [0] size-1.
        caracter=peso[0].at(0); // agarro el caracter
        pesoInt=peso[1].toInt(); //casteo a entero
        qDebug() << peso << endl;
        pChar[caracter] = pesoInt;
    }
    f->close();
}

int Peso::getPeso(QChar c){
    return pChar[c];
}

Peso::~Peso()
{

}

