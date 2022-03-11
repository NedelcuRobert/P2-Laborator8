#include "patrat.h"

void CPatrat::citire() {
	cout << "Latura patrat:";
	cin >> latura;
}

void CPatrat::perimetru() {
	double p;
	p = 4 * latura;
	cout << "Perimetrul:" << p;
}
