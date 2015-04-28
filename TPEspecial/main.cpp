#include <iostream>
#include "palabra.h"
#include "Subsecuencia.h"
#include <iterator>
using namespace std;

int main()
{
    Palabra p = Palabra("andrelo");
    list<Subsecuencia> laLista = p.getSubsecuencias(3);
    for(list<Subsecuencia>::iterator it = laLista.begin();it != laLista.end();it++){

        cout<<(*it).getSecuencia() << endl;
    }
    return 0;
}

