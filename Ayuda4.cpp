#include <iostream>
#include "Source.h"
using namespace std;

/*
Elabore un programa que cargue un vector con numeros positivos y negativos
El programa debe sustituir numeros negativos por cero.
Tambien se tiene que imprimir el arreglo modificado

*/
void Ayuda4() {
	int sue;
	int aumento;

	cout << "Ingrese sueldo: ";
	cin >> sue;

	if (sue < 1000)
	{
		aumento = sue * 0.15;
		sue += aumento;
	}

	cout << "Su sueldo es: " << sue;
}

