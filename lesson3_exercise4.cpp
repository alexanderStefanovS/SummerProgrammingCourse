#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Input number: ";
	cin >> number;
	
	if (number == 0) 
	{
		cout << "Every number can divide 0.\n";
	}
	else 
	{
		cout << "Its devisors are: ";
		for (int i = 1; i < number; ++i) 
		{
			if (number % i == 0) 
			{
				cout << i << ", ";
			}
		}
		cout << number << ".\n";
	}
    	return 0;
}
