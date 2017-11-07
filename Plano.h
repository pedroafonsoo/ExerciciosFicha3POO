#pragma once
#include<iostream>
#include <sstream>

using namespace std;

class Plano
{
	int x;
	int y;
public:
	Plano(int coorX, int coorY);
	~Plano();
	void setX(int a);
	void setY(int b);
	int getX() const;
	int getY() const;
	double ObtemDistancia(Plano &p);
	string toString() const;
};

