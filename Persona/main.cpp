#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	int menu;
	string auxStr;
	int auxInt;

	Persona persona1;

	do
	{
		cout << "1. Ingresar datos" << endl;
		cout << "2. Contar edad y ver persona" << endl;
		cout << endl;
		cout << "0. Salir" << endl;
		cout << endl;
		cin >> menu;
		cin.ignore();
		cout << endl;

		switch(menu)
		{
			case 1:

			cout << "Ingrese el nombre de la persona: ";
			getline(cin, auxStr);
			persona1.setNombre(auxStr);
			cout << endl;
			cout << "Ingrese el dia de nacimiento: ";
			cin >> auxInt;
			persona1.setDia(auxInt);
			cout << endl;
			cout << "Ingreser el mes de nacimiento: ";
			cin >> auxInt;
			persona1.setMes(auxInt);
			cout << endl;
			cout << "Ingresar el anio de nacimiento: ";
			cin >> auxInt;
			persona1.setAnno(auxInt);
			cout << endl;
			cin.ignore();

			break;
			case 2:

			cout << "Ingrese el dia actual: ";
			cin >> auxInt;
			persona1.setDiact(auxInt);
			cout << endl;
			cout << "Ingrese el mes actual: ";
			cin >> auxInt;
			persona1.setMesact(auxInt);
			cout << endl;
			cout << "Ingrese el anio actual: ";
			cin >> auxInt;
			persona1.setAnnoact(auxInt);
			cout << endl;
			cin.ignore();

			cout << "Nombre: ";
			persona1.getNombre();
			cout << endl;
			cout << "Fecha de nacimiento: ";
			persona1.getDia();
			cout << "-";
			persona1.getMes();
			cout << "-";
			persona1.getAnno();
			cout << endl;
			cout << "Edad: ";
			persona1.obtenerEdad();
			cout << endl;

			break;
			case 0:

			cout << "El programa se esta cerrando..." << endl;
			cin.get();
			persona1.~Persona();

			break;
			default:

			cout << "No ingreso una opcion valida. Vuelva a intentar..." << endl;
		}
	}while(menu!=0);

	return 0;
}