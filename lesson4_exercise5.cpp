#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	int digit, max, min;
	digit = number % 10;
	max = digit;
	min = digit;
	number /= 10;

	while (number != 0)
	{
		digit = number % 10;

		if (digit > max) 
		{
			max = digit;
		}

		if (digit < min)
		{
			min = digit;
		}
		
		number /= 10;
	}

	cout << max << " " << min << "\n";

	double ave = max + min;
	ave /= 2;

	cout << ave << "\n";

	return 0;
}