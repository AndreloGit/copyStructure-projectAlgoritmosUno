#ifndef PESO_H
#define PESO_H
#include <QMap>
#include <iostream>
#include <QString>
using namespace std;

class Peso
{
private:
    QMap<QChar,int> pChar;
public:
    Peso(QString);
    int getPeso(QChar);
    ~Peso();
};

#endif // PESO_H
