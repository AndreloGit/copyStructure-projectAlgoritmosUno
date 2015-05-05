#ifndef ALGORITMO_H
#define ALGORITMO_H
#include <QString>
#include "peso.h"
class Algoritmo
{
private:
    Peso *buffer; //para no tener que llamar siempre a la clase peso.
public:
    Algoritmo(Peso *weight);
    virtual QString runAlg(QStringList) = 0;
};

#endif // ALGORITMO_H
