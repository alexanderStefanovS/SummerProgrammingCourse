#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	
	cout << "Input number: ";
	cin >> number;
	cout << number << " = ";

	int multiplier = 2;		// The first prime number.
	
	while (number != 1) 
	{
		if (number % multiplier == 0) 
		{
			cout << multiplier;
			number /= multiplier;
			if (number != 1) 
			{
				cout << " * ";
			}
		}
		else 
		{
			++multiplier;
		}
	}
	cout << "\n";
	
    	return 0;
}