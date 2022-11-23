#include <iostream>
#include "Source.h"
using namespace std;

 


void Ayuda2() {

	int dias;
	int horas;
	int minutos;
	int segundos;

	cout << "Cuantos dias Deseas Calcular: "  ;
	cin >> dias;

	 
	horas = 24 * dias;
	minutos = horas * 60;
	segundos = minutos * 60;


	cout << "Dias: " << dias << endl;
	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;
	cout <<"Segundos: " << segundos << endl;


}