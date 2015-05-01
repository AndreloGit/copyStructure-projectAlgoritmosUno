#ifndef SUBSECUENCIA_H
#define SUBSECUENCIA_H
#include <list>
#include <iterator>
using namespace std;
class Subsecuencia
{
private:
    string spalabra;
public:
    Subsecuencia(string);
    char getPrimero();
    char getUltimo();
    string getSecuencia();
    getPeso();

    ~Subsecuencia();
};

#endif // SUBSECUENCIA_H
