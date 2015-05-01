#include <iostream>
#include "palabra.h"
#include "subsecuencia.h"
#include "peso.h"
#include <iterator>
using namespace std;

int main(int argc, const char* argv[])
{
    Palabra p = Palabra("andrelo");
    list<Subsecuencia> laLista = p.getSubsecuencias(3);
    for(list<Subsecuencia>::iterator it = laLista.begin();it != laLista.end();it++){

        cout<<(*it).getSecuencia() << endl;
     }
    Peso pe("pesos");
    cout << pe.getPeso('a')<< endl;
    cout << pe.getPeso('h')<< endl;

    return 0;
}

