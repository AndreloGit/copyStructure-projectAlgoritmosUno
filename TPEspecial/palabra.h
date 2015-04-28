#ifndef PALABRA_H
#define PALABRA_H
#include <String>
#include <List>
#include "Subsecuencia.h"
using namespace std;
class Palabra
{
private:
    string cadena;
public:
    Palabra(string);
        string getPalabra();
        void setPalabra(string);
        list<string> getSubsecuencias(int);
    ~Palabra();
};

#endif // PALABRA_H
