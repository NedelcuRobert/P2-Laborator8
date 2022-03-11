#include "patrat.h"

int main() {

	CDreapta dreapta;
	dreapta.citire();

	CCerc cerc;
	CDreptunghi dreptunghi;
	CPatrat patrat;

	cerc.citire();
	cerc.perimetru();

	dreptunghi.citire();
	dreptunghi.perimetru();

	patrat.citire();
	patrat.perimetru();

	return 0;
}