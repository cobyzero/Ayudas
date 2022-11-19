#include <iostream>
using namespace std;

int main() {

	int opcion; 
	bool dentro = true;


	while (dentro)
	{
		cout << "Bienvenido al menu" << endl;
		cout << "Elije:" << endl;
		cout << "1. Algo" << endl;
		cout << "2. Algo mas" << endl;
		cin >> opcion;


		switch (opcion)
		{
		case 1:
			cout << "Soy accion 1" << endl;
			break;
		case 2:
			cout << "Soy accion 2" << endl;
			break; 
		}
	}
	
	
}