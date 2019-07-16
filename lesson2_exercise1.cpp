#include <iostream>

using namespace std;

int main()
{
	int number, sum = 0;

	cout << "Input number: ";
	cin >> number;

	sum = (number / 1000) + (number % 10) + (number / 100 % 10) + (number / 10 % 10);

	if (sum % 3 == 0) {
		cout << "Yes! The sum is a multiple of 3.\n";
	}
	else {
		cout << "No! The sum is NOT a multiple of 3.\n";
	}

	return 0;
}