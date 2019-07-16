
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, count = 0;
	double sum = 0;
	 
	cin >> num1 >> num2 >> num3;

	if (num1 % 2 == 0 || num1 % 3 == 0)
	{
		sum += num1;
		count++;
	}

	if (num2 % 2 == 0 || num2 % 3 == 0)
	{
		sum += num2;
		count++;
	}

	if (num3 % 2 == 0 || num3 % 3 == 0)
	{
		sum += num3;
		count++;
	}

	// Checking if there are such numbers. We can't devide by zero if there aren't.

	if (count == 0)
	{
		cout << "There aren't such numbers.\n";
	}
	else
	{
		cout << "The average is: " << sum / count << "\n";
	}

	return 0;
}