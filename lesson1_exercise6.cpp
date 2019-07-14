
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

	// We separate the number to find the digits using "/" and "%" and then find the sum and the product

	cout << "The sum of the digits is: " << sum << "\n";
	cout << "The product of the digits is: " << product << "\n";

	short lastTwoDigits = number % 100;

	cout << "The square root of the last two digits is: " << sqrt(lastTwoDigits) << "\n";

	// After finding the last two numbers and then use sqrt to find its square root.

	return 0;
}