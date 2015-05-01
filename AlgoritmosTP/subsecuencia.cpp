#include "subsecuencia.h"

Subsecuencia::Subsecuencia(string ss)
{
    spalabra=ss;
}
char Subsecuencia::getPrimero(){
    return this->spalabra[0];
}
char Subsecuencia::getUltimo(){
    return this->spalabra[spalabra.length()-1];
}
string Subsecuencia::getSecuencia(){
    return this->spalabra;
}

int Subsecuencia::getPeso(){

}

Subsecuencia::~Subsecuencia()
{

}

