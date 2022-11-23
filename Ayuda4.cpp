#include <iostream>
using namespace std;


int main() {
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