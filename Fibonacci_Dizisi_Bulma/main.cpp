#include <iostream>
using namespace std;

//Fibonacci dizisi, bir sonraki terimin önceki iki terimin toplamı olduğu bir seridir. Fibonacci dizisinin ilk iki terimi 0 ve 1'dir. Örneğin: 0, 1, 1, 2, 3, 5, 8, 13, 21, ....

//Bu tanıma uygun olarak fibonacci dizisinin kullanıcının istediği ilk n elemanını bulup ekrana yazan kodu yazınız.

//Örneğin:
    // Fibonacci dizisinin ilk kaç elemanı yazılsın? : 9
    // 0, 1, 1, 2, 3, 5, 8, 13, 21


int main()
{
    int n;
    cout << "Fibonacci dizisinin ilk kaç elemanı yazılsın?: ";
    cin >> n;

    //long long genellikle 64 bittir ve şu aralığı destekler:
    // –9,223,372,036,854,775,808 ile +9,223,372,036,854,775,807

    long long* fibonacci = new long long[n];

    // İlk eleman
    fibonacci[0] = 0;

    // İkinci eleman (sadece n >= 2 ise)
    if (n > 1) {
        fibonacci[1] = 1;
    }

    //Diziyi dolduruyoruz.
    for(int i = 2; i < n; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[ i - 2];
    }

    //Diziyi yazdırıyoruz.
    for(int i = 0; i < n; i++){
        cout << fibonacci[i];
        if (i != n - 1) { // sonunucu eleman olmadığı sürece sonuna virgül koysun, son eleman olursa koymasın.
            cout << ", ";
        }
    }


    delete[] fibonacci;
    fibonacci = nullptr;


    return 0;
}
