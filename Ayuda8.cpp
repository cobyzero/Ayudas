/* Escribir un programa que pida una palabra y cuente 
y muestre por separado el numero de vocales que contiene
*/
#include "Source.h"
#include <iostream>
#include <vector>


using namespace std;

void Ayuda8() {

	string palabra; 
	int contador = 0;

	cout << "Ingrese palabra: " << endl;
	cin >> palabra;

	for (size_t i = 0; i < palabra.size(); i++)
	{
		if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u' || 
			palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U')
		{
			contador++;
			cout << "Posee Vocal: "<<palabra[i] << endl;
		}
	}

	cout << "Cantidad de vocales: " << contador;
}