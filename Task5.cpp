#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, min_index, max_index, swap;

	do {
		cout << "Input array size: ";
		cin >> n;
	} while (n <= 0 || n > 1000);

	cout << "Ok!\nInput array: ";

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	min_index = max_index = 0;

	for (int i = 1; i < n; ++i) {			// Looking for the min & max elements
		if (arr[i] > arr[max_index]) {
			max_index = i;
		}
		else if (arr[i] < arr[min_index]) {
			min_index = i;
		}
	}

	swap = arr[min_index];					// Swapping the min & max elements
	arr[min_index] = arr[max_index];
	arr[max_index] = swap;

	for (int i = 0; i < n; ++i) {			// Printing the new array
		cout << arr[i] << " ";
	}

	cout << "\n";

    return 0;
}
