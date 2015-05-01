#ifndef PESO_H
#define PESO_H
#include <Map>
#include <iostream>
using namespace std;

class Peso
{
private:
    map<char,int> pChar;
public:
    Peso(string);
    int getPeso(char);
    ~Peso();
};

#endif // PESO_H
