#include <iostream>
using namespace std;


void menu() {
	int opcion = 0;
	cout << "Bienvenido al menu" << endl;
	cout << "Elije:" << endl;
	cout << "1. Algo" << endl;
	cout << "2. Algo mas" << endl;
	cin >> opcion;


	switch (opcion)
	{
	case 1:
		int op1;
		cout << "Soy accion 1: Elije:" << endl;
		cout << "1. Opcion 1 1:" << endl;
		cout << "2. Opcion 1 2" << endl;
		cout << "3. Ir al principio" << endl;
		cin >> op1;
		switch (op1)
		{
		case 1:
			cout << "Soy accion 1 1" << endl;
			break;
		case 2:
			cout << "Soy accion 1 2" << endl;
			break;
		case 3:
			menu();
			break;
		}
		break;
	case 2:
		cout << "Soy accion 2" << endl;
		break;
	}
}
 
//int main() {
//
//	menu();
//	
//	
//}