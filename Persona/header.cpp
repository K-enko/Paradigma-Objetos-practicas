#include <iostream>
using namespace std;

#include "header.h"

Persona::Persona()
{}

Persona::~Persona()
{}

void Persona::setNombre(string _nombre)
{
	nombre = _nombre;
}

void Persona::getNombre()
{
	cout << nombre;
}

void Persona::setDia(int _dia)
{
	dia = _dia;
}

void Persona::getDia()
{
	cout << dia;
}

void Persona::setMes(int _mes)
{
	mes = _mes;
}

void Persona::getMes()
{
	cout << mes;
}

void Persona::setAnno(int _anno)
{
	anno = _anno;
}

void Persona::getAnno()
{
	cout << anno;
}

void Persona::setDiact(int _diact)
{
	diact = _diact;
}

void Persona::getDiact()
{
	cout << diact;
}

void Persona::setMesact(int _mesact)
{
	mesact = _mesact;
}

void Persona::getMesact()
{
	cout << mesact;
}

void Persona::setAnnoact(int _annoact)
{
	annoact = _annoact;
}

void Persona::getAnnoact()
{
	cout << annoact;
}

void Persona::obtenerEdad()
{
	if(mesact > mes)
	{
		cout << annoact - anno;
	}
	else
	{
		if(mesact = mes)
		{
			if(diact >= dia)
			{
				cout << annoact - anno;
			}
			else
			{
				cout << annoact - anno - 1 << endl;
			}
		}
		else
		{
			cout << annoact - anno - 1 << endl;
		}
	}
}