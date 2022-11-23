/* 
Diseñe un programa que utilice un arreglo unidimensional para almacenar la temperatura de cada hora de un dia en particular,
El programa debe calcular:

a. Promedio de temperatura del dia.
b. Posicion de celda con la temperatura mas fria.
c. Posicion de celda con la temperatura mas caliente.
d. Valor de la temparatura mas fria.
e. Valor de la temperatura mas caliente.
*/



#include <iostream>
#include "Source.h"
#include <vector>
using namespace std;

void Ayuda9() {


	vector<int>vec = {21,24,17,13,15,25,
					  22,29,19,17,19,21,
				      28,21,11,12,25,22,
					  11,28,19,19,21,21,
				      12,21,11,11,28,24};


	int promedio = 0;
	int sumaTotal = 0;
	int masFria = 0;
	int masCaliente = 0;
	int celdaFria = 0;
	int celdaCaliente = 0;

	for (size_t i = 0; i < vec.size(); i++)
	{
		sumaTotal += vec[i];

		if (vec[i] > masCaliente) {
			masCaliente = vec[i];
			celdaCaliente = i;
		} 
	}

	masFria  = masCaliente;

	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] < masFria) {
			masFria = vec[i];
			celdaFria = i;
		}
	}

	
	promedio = sumaTotal / vec.size();



	cout << "Promedio del dia: " << promedio << endl;
	cout << "Celda del mas frio: " << celdaFria << endl;
	cout << "Celda del mas caliente: " << celdaCaliente << endl;

	cout << "Temperatura mas fria: " << masFria << endl;
	cout << "Temperatura mas caliente: " << masCaliente << endl;




}