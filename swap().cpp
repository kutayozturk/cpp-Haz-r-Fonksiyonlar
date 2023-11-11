#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    
    int a = 5, b = 10;

    cout << "Yer Değiştirmeden Önce a = " << a << " , b = " << b
         << endl;

    // Hazır swap fonksiyonu
    swap(a, b);

    cout << "Yer Değiştirdikten Sonra a = " << a << " , b = " << b
         << endl;
    return 0;
}
