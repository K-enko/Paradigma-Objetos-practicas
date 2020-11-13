#include <iostream>
using namespace std;

#include "header.h"

//constructor
Articulo::Articulo()
{
	costoBase = 0;
}

//destructor
Articulo::~Articulo()
{
}

void Articulo::getCostoBase()
{
	cout << costoBase << endl;
}

void Articulo::setCostoBase(float val)
{
	costoBase = val;
}

void Articulo::mostrarPVPmayorista()
{
	cout << "$" << (((15 * costoBase) / 100) + costoBase) << endl;
}

void Articulo::mostarPVPdetal()
{
	cout << "$" << (((30 * costoBase) / 100) + costoBase) << endl;
}
