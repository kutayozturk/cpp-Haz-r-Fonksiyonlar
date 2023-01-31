// logaritma(10)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double deger = 1.0;
	double sayi;
	do {
		cout << "Sayi:" << deger << " Log: " << log10(deger) << endl;
		deger += 1;
	} while (deger <= 10.0);
	return 0;
}