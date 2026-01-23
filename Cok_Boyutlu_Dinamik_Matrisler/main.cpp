#include <iostream>
using namespace std;

//Kullanıcıdan satır ve sütun sayısını aldıktan sonra, iki matris oluşturup bu matrislerin elemanlarını yine kullanıcıdan alacaksınız. Ardından bu iki matrisi eleman bazında toplayacak ve sonuçları ekrana yazdıracaksınız. Not: Tüm bellek kullanımının sonunda belleği temizlemeyi de unutmayın. Bu proje, pointerların ve dinamik bellek yönetiminin kullanımını pekiştirmenize yardımcı olacak.

int main()
{
    int satir, sutun;

    cout << "Matris satir: ";
    cin >> satir;

    cout << "Matris sutun: ";
    cin >> sutun;

    // 1) Satır pointer dizisi
    int** dizi1 = new int*[satir];
    int** dizi2 = new int*[satir];
    int** toplam = new int*[satir];

    // 2) Her satıra sütun kadar int alanı aç
    for(int i = 0; i < satir; i++){
        dizi1[i] = new int[sutun];
        dizi2[i] = new int[sutun];
        toplam[i] = new int[sutun];
    }

    // 1. Matris elemanlarını alıyoruz.
    for(int i = 0; i < satir; i++){
        for(int a = 0; a < sutun; a++){
            cout << "1. Matris[" << i << "][" << a << "] :";
            cin >> dizi1[i][a];
        }
    }

    // 2. Matris elemanlarını alıyoruz.
    for(int i = 0; i < satir; i++){
        for(int a = 0; a < sutun; a++){
            cout << "2. Matris[" << i << "][" << a << "] :";
            cin >> dizi2[i][a];
        }
    }

    // Toplam matrisini oluşturuyoruz.
    for(int i = 0; i < satir; i++){
        for(int a = 0; a < sutun; a++){
            toplam[i][a] = dizi1[i][a] + dizi2[i][a];
        }
    }

    // Toplam matrisini yazdırıyoruz.
    for(int i = 0; i < satir; i++){
        for(int a = 0; a < sutun; a++){
            cout << toplam[i][a] << endl;
        }
    }

    // Belleği temizle
    for(int i = 0; i < satir; i++){
        delete[] dizi1[i];
        delete[] dizi2[i];
        delete[] toplam[i];
    }

    delete[] dizi1;
    delete[] dizi2;
    delete[] toplam;

    return 0;
}
