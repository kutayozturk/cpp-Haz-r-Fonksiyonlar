//yuvarlama
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double sayi;
	cout << "Ondalikli bir sayi giriniz: ";
	cin >> sayi;
	cout << "Girilen sayiden kucuk, en buyuk tamsayi= " << floor(sayi) << endl;
	cout << "Girilen sayiden buyuk, en kucuk tamsayi= " << ceil(sayi) << endl;
	return 0;
}