#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, min, sum = 0;

	do {
		cout << "Input array size: ";
		cin >> n;
	} while (n <= 0 || n > 1000);

	cout << "Ok!\nInput array: ";

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	min = arr[0];

	for (int i = 1; i < n; ++i) {
		if (i % 2 != 0) {
			sum += arr[i];
		}
		else {
			if (min > arr[i]) {
				min = arr[i];
			}
		}
	}

	cout << "The sum of the elements on odd positions is: " << sum << "\n";
	cout << "The min element on an even position is: " << min << "\n";

    return 0;
}
