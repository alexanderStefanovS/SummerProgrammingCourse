#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, swap;

	do {
		cout << "Input array size: ";
		cin >> n;
	} while (n <= 0 || n > 1000);

	cout << "Ok!\nInput array: ";

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {			// Printing the old array
		cout << arr[i] << " ";
	}

	cout << " -> ";

	for (int i = 0; i < n / 2; ++i) {		// Swapping positions
		swap = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = swap;
	}

	for (int i = 0; i < n; ++i) {			// Printing the reversed array
		cout << arr[i] << " ";
	}

	cout << "\n";

    return 0;
}
