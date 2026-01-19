#include <iostream>
using namespace std;

//Kullanıcıdan alınan 2 sayının aralarında asal olup olmadığını bulunuz.(1'den başka ortak bölenleri olmayan sayılara aralarında asal sayılar denir)

int main()
{
    int sayi1 = 0, sayi2, bolen = 1, gecici = 0;

    cout << "Sayi 1 giriniz: ";
    cin >> sayi1; // 9

    cout << "Sayi 2 giriniz: ";
    cin >> sayi2; // 15s

    // int minsayi = (sayi1 < sayi2) ? sayi1 : sayi2; // 2 sayıyı da karşılaştırır ve küçük olanı minsayi'ya atar.

    if(sayi1 < sayi2){
        for(int i = 1; i <= sayi1; i++){
            if(sayi1 % i == 0 && sayi2 % i == 0){
                bolen = i;
            }
        }
    }
    else{
        for(int i = 1; i <= sayi2; i++){
            if(sayi1 % i == 0 && sayi2 % i == 0){
                bolen = i;
            }
        }
    }


    if(bolen == 1){cout << sayi2 << " ve " << sayi1 << " aralarında asaldır.";}

    else{cout << sayi2 << " ve " << sayi1 << " aralarında asal DEĞİLDİR.";}



    return 0;
}
