#include <iostream>
using namespace std;


int main() {
	int sueldo;
	int aumento;

	cout << "Ingrese sueldo: ";
	cin >> sueldo;

	if (sueldo < 1000)
	{
		aumento = sueldo * 0.15;
		sueldo += aumento;
	}

	cout << "Su sueldo es: " << sueldo;
}