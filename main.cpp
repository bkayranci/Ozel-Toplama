#include <iostream>
#include "veri.h"

using namespace std;


string sonuc;
void sonucBasamakEkle(int x){
    sonuc.insert(sonuc.begin(),x+48);
}
int main()
{

    int elde = 0;
    Veri *sayi1 = new Veri();
    Veri *sayi2 = new Veri();

    while((sayi1->Bitti() == true || sayi2->Bitti() == true) || elde != 0){
        int a = sayi1->SiradakiBasamak();
        int b = sayi2->SiradakiBasamak();
        int x = a + b;

        if ((x + elde) > 9) {
            sonucBasamakEkle((x + elde) % 10);
            elde = (x + elde) / 10;
        }
        else{
            sonucBasamakEkle(x + elde);
            elde = 0;
        }

    }
    cout << sonuc << endl;
    return 1;

}



