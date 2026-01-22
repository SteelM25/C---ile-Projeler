/*
    Ýki Nokta Arasý Uzaklýk Hesaplama

    Kullanýcýdan alýnan iki nokta arasýndaki geometrik uzaklýðý hesaplayýnýz.
    Nokta sýnýfý oluþturup bu sýnýf içinde x ve y koordinatlarý tanýmlayarak, Pisagor teoremi kullanýnýz.

*/

#include <iostream>
#include <cmath>
#include "nokta.h"
using namespace std;



// Uzaklik hesaplama fonksiyonu
float uzaklikHesapla(const Nokta& nokta1, const Nokta& nokta2) {
    return sqrt(pow(nokta1.getX() - nokta2.getX(), 2) + pow(nokta1.getY() - nokta2.getY(), 2));
}



int main() {

    float x1, y1, x2, y2;

    cout << "Birinci noktanin x ve y koordinatlarýný girin: ";
    cin >> x1 >> y1;
    cout << "Ikinci noktanin x ve y koordinatlarýný girin: ";
    cin >> x2 >> y2;

    Nokta nokta1(x1, y1);
    Nokta nokta2(x2, y2);

    float uzaklik = uzaklikHesapla(nokta1, nokta2);
    cout << "Iki nokta arasi uzaklik: " << uzaklik << endl;

    return 0;
}
