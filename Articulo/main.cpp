#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	int menu;
	float precio;

	Articulo articulo1;

	do
	{
		cout << "Costo base del articulo: ";
		articulo1.getCostoBase();
		cout << endl;
		cout << "1. Cambiar costo base" << endl;
		cout << "2. Obtener precio detal" << endl;
		cout << "3. Obtener precio por mayor" << endl;
		cout << endl;
		cout << "0. Salir" << endl;
		cin >> menu;
		cin.ignore();
		cout << endl;

		switch(menu)
		{
			case 1:

			cout << "Digite un valor para el precio base del articulo: ";
			cin >> precio;
			cin.get();
			articulo1.setCostoBase(precio);

			break;
			case 2:

			articulo1.mostarPVPdetal();

			break;
			case 3:

			articulo1.mostrarPVPmayorista();

			break;
			case 0:

			articulo1.~Articulo();
			cout << "El programa se esta cerrando..." << endl;
			cin.get();

			break;
			default:

			cout << "no se ingreso un valor valido entre las opciones. Vuelva a intentar" << endl;
			cout << endl;
		}
	}while(menu!=0);

	return 0;
}