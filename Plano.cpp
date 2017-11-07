#include "Plano.h"



Plano::Plano( const int coorX,int coorY)
{
	x = coorX;
	y = coorY;
}


Plano::~Plano()
{
	cout << " A destruir o plano";
}

void Plano::setX(int a) {
	x = a;
}
void Plano::setY(int b) {
	y = b;

}
int Plano::getX() const {
	return x;
}
int Plano::getY() const {
	return y;
}

double Plano::ObtemDistancia(Plano &p) {
	double calcula = 0.0;
	calcula = sqrt((x - p.getX())*(x - p.getX()) + (y - p.getY())*(y - p.getY()));
	cout << "Distancia:" << calcula;
	return calcula;
	;
}

string Plano::toString() const{
	ostringstream os;
	cout << "Coordenada do X:" << x << "Coordenada do Y:" << y << endl;
	return os.str();
}