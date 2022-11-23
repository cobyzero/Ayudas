#include <iostream>
#include "Source.h"
using namespace std;


bool esMultiplode2(int i) {

	if (i % 2 == 0)
	{
		return true;
	}
	return false;
}

bool esMultiplode3(int i) {

	if (i % 3 == 0)
	{
		return true;
	}

	return false;
}



void Ayuda1() {


	for (size_t i = 1; i < 1000; i++)
	{
		if (esMultiplode2(i))
		{
			if (!esMultiplode3(i))
			{
				cout << i << endl;
			} 
		}
	}

	 
}