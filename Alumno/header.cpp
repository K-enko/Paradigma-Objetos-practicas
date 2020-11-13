#include <iostream>
#include <string>
using namespace std;

#include "header.h"

Alumno::Alumno()
{}

Alumno::~Alumno()
{}

void Alumno::setCedula(string _cedula)
{
	cedula = _cedula;
}

void Alumno::getCedula()
{
	cout << "Cedula: " << cedula << endl;
}

void Alumno::setNombre(string _nombre)
{
	nombre = _nombre;
}

void Alumno::getNombre()
{
	cout << "Nombre: " << nombre << endl;
}

void Alumno::setNota1(float _nota1)
{
	nota1 = _nota1;
}

void Alumno::getNota1()
{
	cout << "Nota 1: " << nota1 << endl;
}

void Alumno::setNota2(float _nota2)
{
	nota2 = _nota2;
}

void Alumno::getNota2()
{
	cout << "Nota 2: " << nota2 << endl;
}

void Alumno::setNota3(float _nota3)
{
	nota3 = _nota3;
}

void Alumno::getNota3()
{
	cout << "Nota 3: " << nota3 << endl;
}

void Alumno::AproRepro(string _aprorepro)
{
	if(((nota1 + nota2 + nota3) / 3 ) > 7)
	{
		_aprorepro = "Aprobado";
	}
	else
	{
		_aprorepro = "Desaprobado=";
	}

	cout << _aprorepro << endl;
}