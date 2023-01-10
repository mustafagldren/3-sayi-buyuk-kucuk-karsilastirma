/*Kullanıcıdan 3 sayı girmesini istiyoruz.Sayılardan küçük olanlardan 2 tanesini topluyoruz.
Ve sonucu en büyük sayı ile karşılaştırıyoruz. Eğer 2 sayının toplamı ,en büyük sayıdan büyükse
ekrana "tebrikler", değilse "maalesef" yazdırıyoruz.*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x;
    cout << "Birinci sayiyi giriniz :";
    cin >> a;
    cout << "İkinci sayiyi giriniz :";
    cin >> b;
    cout << "Ucuncu sayiyi giriniz :";
    cin >> c;

    if (a > b && a > c) {
        x = b + c;
        if (x > a) {
            cout << "Tebrikler" << endl;
        }
        else {
            cout << "Maalesef." << endl;
        }


    }

    if (b > a && b > c) {
        x = a + c;
        if (x > b) {
            cout << "Tebrikler." << endl;
        }
        else {
            cout << "Maalesef." << endl;
        }
    }

    if (c > a && c > b) {
        x = a + b;
        if (x > c) {
            cout << "Tebrikler." << endl;

        }
        else {
            cout << "Maalesef." << endl;
        }
    }


    system("pause");
    return 0;

}

