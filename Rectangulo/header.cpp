#include <iostream>
using namespace std;

#include "header.h"

Rectangulo::Rectangulo()
{}

Rectangulo::~Rectangulo()
{}

void Rectangulo::setAltura(float _altura)
{
	altura = _altura;
}

void Rectangulo::getAltura()
{
	cout << altura;
}

void Rectangulo::setBase(float _base)
{
	base = _base;
}

void Rectangulo::getBase()
{
	cout << base;
}

void Rectangulo::darArea()
{
	cout << "Area: " << (base * altura) << endl;
}

void Rectangulo::darPerimetro()
{
	cout << "Perimetro: " << ((2 * base) + (2 * altura)) << endl;
}