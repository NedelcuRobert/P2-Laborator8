#include "dreptunghi.h"

void CDreptunghi::citire() {
	cout << "Lungime:";
	cin >> lungime;
	cout << "Latime:";
	cin >> latime;
}

void CDreptunghi::perimetru() {
	double p;
	p = 2 * (lungime + latime);
	cout << "Perimetrul:" << p << endl;
}
