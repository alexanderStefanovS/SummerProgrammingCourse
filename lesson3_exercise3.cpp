#include <iostream>

using namespace std;

int main()
{
	int number;
	bool flag = true;

	cout << "Input number: ";
	cin >> number;
	
	for (int i = 2; i < number; ++i) 
	{
		if (number % i == 0) 
		{
			flag = false;
			break;
		}
	}
	
	if (!flag) 
	{
		cout << "The number is not prime!\n";
	}
	else 
	{
		cout << "The number is prime!\n";
	}
	
    	return 0;
}