
/*
Llenar un vector con numeros enteros, el programa debe:
	Calcular la suma de los valores del vector ubicados en posiciones pares del vector.
	Calcular la suma de los valores del vector ubicados en posiciones impares.
	Calcular el promedio de los valores del vector ubicados en posiciones pares del vector.
	Calcular el promedio de los valores del vector ubicados en posiciones impares del vector.

*/
#include "Source.h"
#include <iostream>
#include <vector>


using namespace std;

void Ayuda7() {

	vector<int> m{ 2,3,4,5,1,23,4,52,3,5,7,453,2,34,6,4,31,43,5,65 };

	vector<int> pares;
	vector<int> impares;
 
	int sumaDePares = 0;
	int sumaDeImpares = 0;

	int promedioPares;
	int promedioImpares;

	for (size_t i = 0; i < m.size(); i++)
	{
		if (i % 2 == 0)
		{
			pares.push_back(m[i]);
		}
		else {
			impares.push_back(m[i]);
		}
	}


	for (size_t i = 0; i < pares.size(); i++)
	{
		sumaDePares += pares[i];
	}
	for (size_t i = 0; i < impares.size(); i++)
	{
		sumaDeImpares += impares[i];
	}

	promedioPares = sumaDePares / pares.size();
	promedioImpares = sumaDeImpares / impares.size();


	cout << "Suma de los valores del vector ubicados en posiciones pares: " << sumaDePares << endl;
	cout << "Suma de los valores del vector ubicados en posiciones impares: " << sumaDeImpares << endl;

	cout << "Promedio de los valores del vector ubicados en posiciones pares: " << promedioPares << endl;
	cout << "Promedio de los valores del vector ubicados en posiciones impares: " << promedioImpares << endl;
}