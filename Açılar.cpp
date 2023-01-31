// acilar
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double deger = 10.0;
	double derece;
	do {
		derece = 3.14 / 180 * deger;
		cout << "Derece:" << deger << " sin: " << sin(derece) << endl;
		deger += 10;
	} while (deger <= 90.0);
	return 0;
}