#include <iostream>
using namespace std;

/*
    Oyuncu, belirlenen minimum ve maksimum değerler arasında rastgele seçilen bir sayıyı sınırlı sayıda tahmin etmeye çalışır. Oyun, tahmin edilen sayıya göre ipuçları verir ve oyuncunun oyunu tekrar oynamak isteyip istemediğini sorar. Proje, temel C++ becerilerini geliştirmek amacıyla döngüler, koşullu ifadeler ve rastgele sayı üretme gibi konulara odaklanır.

*/

int main()
{
    srand(time(0));

    int rastgele = random() % 10 + 1; // 1 ile 10 arası sayı ürettim. 1 ve 10 dahil

    int sayi;


    int kalanHak = 3;



    while(kalanHak > 0){

        cout << "Sayi giriniz: ";
        cin >> sayi;

        if(sayi == rastgele){
            cout << "Tebrikler, sayiyi buldunuz. Sayi: " << rastgele << endl;
            break;
        }
        else if(sayi < rastgele && sayi >= 1){
            cout << "Yukari cik..\n";
            kalanHak--;
        }
        else if(sayi > rastgele && sayi <= 10){
            cout << "Asagi in..\n";
            kalanHak--;
        }
        else{
            cout << "\n1 ile 10 arasi bir deger giriniz...\n";
            kalanHak--;
        }

    }
    if(kalanHak == 0){
        cout << "\nOlusturulan Sayi: " << rastgele << endl;
    }




    return 0;
}
