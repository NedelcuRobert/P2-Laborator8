#include "cerc.h"

void CCerc::citire() {
	cout << "Raza:";
	cin >> raza;
}

void CCerc::perimetru() {
	double p;
	p = 2 * raza * 3.14;
	cout << "Perimetrul:" << p << endl;
}