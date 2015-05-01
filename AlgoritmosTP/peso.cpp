#include "peso.h"
#include<sstream>
#include <fstream>
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
    QDir dir;
    dir.currentPath();
    qDebug() << dir.currentPath();        
    QFile *f= new QFile(path);
    qDebug() << f->open(QIODevice::ReadOnly | QIODevice::Text);
    QString chain;
    QChar caracter;
    QStringList peso;
    QTextStream tex(f);
    int pesoInt;
    while (!tex.atEnd()){
        chain = tex.readLine();
        peso = chain.split(':'); //el substring distinyo a [0] size-1.
        caracter=peso[0].at(0);
        pesoInt=peso[1].toInt();
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

