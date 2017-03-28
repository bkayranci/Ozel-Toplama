#ifndef VERI_H
#define VERI_H
#include <string>
#include <iostream>
#include <inttypes.h>
#include <typeinfo>

using namespace std;
class Veri
{
private:
    string Metin;
    string Isle;
public:
    Veri();
    void Yaz();
    int StoI(string x);
    string ItoS(int x);
    int SiradakiBasamak();
    bool Bitti();
};

#endif // VERI_H
