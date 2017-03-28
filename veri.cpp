#include "veri.h"

Veri::Veri()
{
    cout << "Lutfen sayi giriniz: ";
    cin >> this->Metin;
}

void Veri::Yaz(){
    cout << this->Metin << endl;
}
int Veri::StoI(string x){
    return stoi(x);
}
string Veri::ItoS(int x){
    return to_string(x);
}

bool Veri::Bitti(){
    if (this->Metin.length() == 0) {
        return false;
    }
    else{
        return true;
    }
}

int Veri::SiradakiBasamak(){
    if (Metin.length() == 0) {
        return 0;
    }
    int son = Metin.length()-1;
    char a = Metin.at(son);
    Metin = Metin.substr(0,Metin.length()-1);
    return (int)a-48;
}
