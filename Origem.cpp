#include <iostream>
#include <sstream>
#include "Plano.h"

int main() {
	/*Plano a(1,2);
	cout << a.toString();
	Plano b(3, 4);
	cout << b.toString();
	b.ObtemDistancia(a);*/
	const Plano c(5, 6);
	c.toString();
	Plano d(0, 0);
	d.toString();
	system("pause");
	return 0;
}