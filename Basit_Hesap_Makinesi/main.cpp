#include <cmath>
#include <iostream>
using namespace std;

/*
    Kullanıcıdan 2 tam sayı alıp bu sayılar üzerinde 4 işlem (toplama, çıkarma, çarpma, bölme) yapacağız. İşlemi seçmeleri için bir menü göstereceğiz ve sonucu ekrana yazdıracağız.

*/

void dortIslem(float* a, float* b, int secim){

    if(secim > 5 || secim < 0) cout << "Gecersiz secim yapildi..!\n";

    else{
        switch (secim) {
        case 1:
            cout << "\nToplam Sonucu: " << *a + *b << endl;
            break;
        case 2:
            cout << "\nCikarma Sonucu: " << *a - *b << endl;
            break;
        case 3:
            cout << "\nCarpma Sonucu: " << *a * *b << endl;
            break;
        case 4:
            cout << "\nBolme Sonucu: " << *a / *b;
            break;
        case 5:
            cout << "\nCikis Yapiliyor..\n";
            break;
        default:
            break;
        }
    }
}

int main()
{
    float sayi1, sayi2;
    int tercih;

    cout << "\nYapmak istediginiz işlemi seciniz\n\n1 - toplama \n2- cikarma \n3- carpma \n4- bolme \n5- Cikis\n";
    cin >> tercih;



    if(tercih >= 1 && tercih <= 4){

        cout << "\nSayi 1: ";
        cin >> sayi1;

        cout << "\nSayi 2: ";
        cin >> sayi2;
    }

    float *pSayi1 = &sayi1;
    float *pSayi2 = &sayi2;

    dortIslem(pSayi1, pSayi2, tercih);

    return 0;
}
