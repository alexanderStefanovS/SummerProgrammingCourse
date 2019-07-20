#include <iostream>

using namespace std;

int main()
{
	int n, number, max = 0;
	
	cout << "Input n: ";
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> number;
		if (i == 0) {
			max = number;
		}
		else if (number > max) {
			max = number;
		}
	}

	cout << "Max number: " << max << "\n";
	
    	return 0;
}