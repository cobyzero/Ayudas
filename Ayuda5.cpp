/*
Elabore un programa que cargue un vector con numeros positivos y negativos.
El programa debe sustituir los numeros negativos por cero.
Tambien se tiene que imprimir el arreglo modificado.*/
#include "Source.h"
#include<stdio.h>    
#include <vector>
#include <iostream>
 
using namespace std;


void Ayuda5()
{
	vector<int>vec{-45,81,16,-25,-76,12,1};
	 
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] < 0)
		{
			vec[i] = 0;
		}

		cout << vec[i] << endl;
	}
}