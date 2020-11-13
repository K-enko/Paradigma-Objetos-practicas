#include <iostream>
#include <string>
using namespace std;

#include "header.h"

int main()
{
	int menu;
	string strAux;
	float fltAux;

	Alumno alumno1;

	do
	{
		cout << endl;
		cout << "1. Ingresar cedula de alumno" << endl;
		cout << "2. Ingresar nombre de alumno" << endl;
		cout << "3. Ingresar nota 1" << endl;
		cout << "4. Ingresar nota 2" << endl;
		cout << "5. Ingresar nota 3" << endl;
		cout << "6. Ver info y estado de aprobacion del alumno" << endl;
		cout << endl;
		cout << "-> ";
		cin >> menu;
		cin.ignore();
		cout << endl;

		switch(menu)
		{
			case 1:

			cout << "Ingrese la cedula de alumno: ";
			getline(cin, strAux);

			alumno1.setCedula(strAux);

			break;
			case 2:

			cout << "Ingrese el nombre del alumno: ";
			getline(cin, strAux);

			alumno1.setNombre(strAux);

			break;
			case 3:

			cout << "Digite nota 1: ";
			cin >> fltAux;
			cin.ignore();

			alumno1.setNota1(fltAux);

			break;
			case 4:

			cout << "Digite nota 2: ";
			cin >> fltAux;
			cin.ignore();

			alumno1.setNota2(fltAux);

			break;
			case 5:

			cout << "Digite nota 3: ";
			cin >> fltAux;
			cin.ignore();

			alumno1.setNota3(fltAux);

			break;
			case 6:

			alumno1.getCedula();
			alumno1.getNombre();
			alumno1.getNota1();
			alumno1.getNota2();
			alumno1.getNota3();
			alumno1.AproRepro(strAux);

			break;
			case 0:

			alumno1.~Alumno();
			cout << "El programa se esta cerrando... " << endl;
			cin.get();

			break;
			default:

			cout << "No ingreso un valor valido entre las opciones. Vuelva a intentar..." << endl;
			cout << endl;
		}

	}while(menu!=0);

	return 0;
}