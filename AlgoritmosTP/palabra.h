#ifndef PALABRA_H
#define PALABRA_H
#include <string>
#include <list>
#include "subsecuencia.h"
using namespace std;
class Palabra
{
private:
    string cadena;
public:
    Palabra(string);
        string getPalabra();
        void setPalabra(string);
        list<Subsecuencia> getSubsecuencias(int);
    ~Palabra();
};

#endif // PALABRA_H
