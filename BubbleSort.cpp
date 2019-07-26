#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, swap;

	// Input validation

	do {
		cout << "Input n: ";
		cin >> n;
	} while (n < 1 || n > 1000);

	cout << "Input array: ";

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	// Sorting the array

	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {   // We are comparing by twos and putting the biggest element
			if (arr[j] > arr[j + 1]) {          // of the array on the furthest position back.
				swap = arr[j];                  // That's why we also have to deduct 'i' in the second loop.
				arr[j] = arr[j + 1];            // We don't need to compare them again as we know the last i elements
				arr[j + 1] = swap;              // have already been sorted.
			}
		}
	}

	// Printing the sorted array

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";

    return 0;
}
