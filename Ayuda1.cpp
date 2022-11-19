#include <iostream>
using namespace std;

int main() {


	for (size_t i = 1; i < 1000; i++)
	{
		if (i % 2 == 0)
		{
			if (!i % 3 == 0)
			{
				cout << i << endl;
			} 
		}
	}


}