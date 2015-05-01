#include "peso.h"
#include<sstream>
#include <fstream>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>
Peso::Peso(const string path)
{
    QDir dir;
    dir.currentPath();
    qDebug() << dir.currentPath();
    pChar = map<char,int>();    
    QFile *f= new QFile();
    f->setFileName("pesos.txt");
    qDebug() << f->open(QIODevice::ReadOnly | QIODevice::Text);
    QString chain;
    QChar caracter;
    QString peso;
    QTextStream tex(f);
    int pesoInt;
    qDebug() << tex.readAll().toLatin1();
    while (!tex.atEnd()){
        chain = tex.readLine();
        cout<< "asdasd";
        caracter = chain[0];
        /*peso = chain.substr(1,chain.length()-1); //el substring distinyo a [0] size-1.
        pesoInt = atoi(peso.c_str());
        cout << peso << endl;
        pChar[caracter] = pesoInt;*/
    }
    f->close();
}

int Peso::getPeso(char c){
    return pChar[c];
}

Peso::~Peso()
{

}

