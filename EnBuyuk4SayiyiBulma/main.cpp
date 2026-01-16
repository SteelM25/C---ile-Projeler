#include <iostream>
#include <climits>
using namespace std;

/*
Kullanıcıdan alınan sayılar arasından en büyük 4 tanesini bulan uygulama.
Dinamik dizi pointer ile oluşturulmuştur.
Sonuçlar büyükten küçüğe sıralı yazdırılır.
*/

int main()
{
    int sayiAdet;
    cout << "Girmek istediginiz sayi adedi: ";
    cin >> sayiAdet;

    if(sayiAdet < 4){
        cout << "4'ten kucuk deger girilemez!";
        return 0;
    }

    int* pDizi = new int[sayiAdet];
    int* dortBuyuk = new int[4];

    // Sayıları al
    for(int i = 0; i < sayiAdet; i++){
        cout << i+1 << ". sayiyi giriniz: ";
        cin >> pDizi[i];
    }

    // En büyük 4 sayıyı bul
    for(int a = 0; a < 4; a++){

        int buyuk = pDizi[0];
        int index = 0;

        for(int i = 1; i < sayiAdet; i++){
            if(pDizi[i] > buyuk){
                buyuk = pDizi[i];
                index = i;
            }
        }

        dortBuyuk[a] = buyuk;

        // Aynı sayı tekrar seçilmesin diye çok küçük yapıyoruz
        pDizi[index] = INT_MIN;
    }

    cout << "\nEn buyuk 4 sayi:\n";
    for(int i = 0; i < 4; i++){
        cout << dortBuyuk[i] << endl;
    }

    delete[] pDizi;
    delete[] dortBuyuk;

    return 0;
}
