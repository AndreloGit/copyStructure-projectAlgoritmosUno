#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "palabra.h"
#include "subsecuencia.h"
#include "peso.h"
#include <iterator>
using namespace std;

int main(int argc, const char* argv[])
{
    QFile *palabras= new QFile("palabras");
    palabras->open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream tex(palabras); //emula un buffer eficiente para acceder al archivo de QT.
    QStringList lPalabra;
    QString pal;
    while (!tex.atEnd()){
        pal = tex.readLine();
        lPalabra = pal.split(",");
    }
    palabras->close();
    qDebug() << lPalabra;
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

