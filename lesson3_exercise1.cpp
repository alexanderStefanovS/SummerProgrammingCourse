#include <iostream>

using namespace std;

int main()
{
	int n, number, sum = 0;
	
	cout << "Input n: ";
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> number;
		sum += number;
	}

	cout << "The sum of the numbers is: " << sum << "\n";

    	return 0;
}