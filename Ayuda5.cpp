
#include<stdio.h>    
#include <vector>
#include <iostream>
 
using namespace std;


void main()
{
	vector<int>vec;

	vec.push_back(-45);
	vec.push_back(81);
	vec.push_back(16);
	vec.push_back(-25);
	vec.push_back(-76);
	vec.push_back(12);
	vec.push_back(1);


	for (size_t i = 0; i < vec.size(); i++)
	{
		if (vec[i] < 0)
		{
			vec[i] = 0;
		}

		cout << vec[i] << endl;
	}
}