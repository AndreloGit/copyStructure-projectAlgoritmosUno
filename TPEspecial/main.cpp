#include <iostream>
#include "palabra.h"
#include "Subsecuencia.h"
using namespace std;

int main()
{
    Palabra p = Palabra("andrelo");
    list<Subsecuencia> laLista = p.getSubsecuencias(3);
    return 0;
}

