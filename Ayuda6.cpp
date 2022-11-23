
/*
Llenar un vector con numeros enteros, el programa debe:
	Calcular la cantidad de numeros pares en el vector.
	Calcular la cantidad de numeros impares en el vector.
	Calcular la suma de los pares del vector.
	Calcular la suma de los impares del vector.
	Calcular el promedio de los pares.
	Calcular el promedio de los impares.
	Hallar el mayor de los pares.
	Hallar el menor de los pares.
	Hallar el mayor de los impares.
	Hallar el menor de los impares.

*/
#include "Source.h"
#include <iostream>
#include <vector>


using namespace std;

void Ayuda6() {

	vector<int> m{2,3,4,5,1,23,4,52,3,5,7,453,2,34,6,4,31,43,5,65};

	vector<int> pares;
	vector<int> impares;


	int sumaDeImpares = 0;
	int sumaDePares = 0;

	int promedioPares = 0;
	int promedioImpares = 0;

	int contadorDePares = 0;
	int contadorDeImpares = 0;

	int mayorDePares = 0;
	int mayorDeImpares = 0;
	 
	for (size_t i = 0; i < m.size(); i++)
	{
		if (m[i] % 2 == 0)
		{
			pares.push_back(m[i]); 
		}
		else {
			impares.push_back(m[i]); 
		}
	}

	for (size_t i = 0; i < pares.size(); i++)
	{
		cout << "Par: " << pares[i] << endl;
		sumaDePares += pares[i];

	}
	for (size_t i = 0; i < impares.size(); i++)
	{
		cout << "Impar: " << impares[i] << endl;
		sumaDeImpares += impares[i];

	}
	 
	promedioPares = sumaDePares / pares.size();
	promedioImpares = sumaDeImpares / impares.size();

	  
	for (size_t i = 0; i < pares.size(); i++)
	{
		if (pares[i] > mayorDePares) {
			mayorDePares = pares[i];
		}
	}

	for (size_t i = 0; i < impares.size(); i++)
	{
		if (impares[i] > mayorDeImpares) {
			mayorDeImpares = impares[i];
		}
	}

	cout << "La suma de Pares: " << sumaDePares << endl;
	cout << "Promedio de Pares: " << promedioPares << endl;
	cout << "Mayor de Pares: "<<mayorDePares << endl;

	
	cout << "La suma de Impares: " << sumaDeImpares << endl;
	cout << "Promedio de Impares: " << promedioImpares << endl;
	cout << "Mayor de Impares: " << mayorDeImpares << endl;

}