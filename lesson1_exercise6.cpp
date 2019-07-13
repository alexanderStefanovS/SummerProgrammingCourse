
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	short number;

	cin >> number;

	short a, b, c;

	a = number / 100;
	b = number / 10 % 10;
	c = number % 10;

	short sum = a + b + c, product = a * b * c;

	cout << "The sum of the digits is: " << sum << "\n";
	cout << "The product of the digits is: " << product << "\n";

	short lastTwoDigits = number % 100;

	cout << "The square root of the last two digits is: " << sqrt(lastTwoDigits) << "\n";

	return 0;
}