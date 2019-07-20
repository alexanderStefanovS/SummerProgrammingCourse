#include <iostream>

using namespace std;

int main()
{
	int number, counter = 0;

	cout << "Input number: ";
	cin >> number;

	if (number < 0) 
	{
		cout << "Error! The number is negative!\n";
	}
	else 
	{
		cout << number << " -> ";
		do 
		{
			number /= 10;
			++counter;
		} while (number != 0);
		cout << counter << endl;
	}
	
  return 0;
}
