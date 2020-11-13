#include <iostream>
using namespace std;

#include "header.h"

int main()
{
	int menu;
	float fltAux;

	Rectangulo rectangulo1;

	do
	{
		cout << "base x altura: ";
		rectangulo1.getBase();
		cout << "x";
		rectangulo1.getAltura();
		cout << endl;
		cout << "1. Ingresar base" << endl;
		cout << "2. Ingresar altura" << endl;
		cout << "3. Realizar area" << endl;
		cout << "4. Realizar perimetro" << endl;
		cout << endl;
		cout << "0. Salir" << endl;
		cout << endl;
		cout << "->";
		cin >> menu;
		cin.ignore();
		cout << endl;

		switch(menu)
		{
			case 1:

			cout << "Ingrese la altura: ";
			cin >> fltAux;
			cin.ignore();

			rectangulo1.setAltura(fltAux);
			cout << endl;

			break;
			case 2:

			cout << "Ingrese la base: ";
			cin >> fltAux;
			cin.ignore();

			rectangulo1.setBase(fltAux);
			cout << endl;

			break;
			case 3:

			rectangulo1.darArea();
			cout << endl;

			break;
			case 4:

			rectangulo1.darPerimetro();
			cout << endl;

			break;
			case 0:

			cout << "El programa se esta cerrando... " << endl;
			rectangulo1.~Rectangulo();
			cin.get();

			break;
			default:

			cout << "Vuelva a intentarlo." << endl;
			cout << endl;
		}
	}while(menu!=0);

	return 0;
}