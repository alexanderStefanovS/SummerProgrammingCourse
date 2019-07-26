#include <iostream>

using namespace std;

int main(){
    int arr[1000], n, min, max;

	do {
		cout << "Input array size: ";
		cin >> n;
	} while (n <= 0 || n > 1000);

	cout << "Ok!\nInput array: ";

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	min = max = arr[0];

	for (int i = 1; i < n; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
		else if (arr[i] < min) {
			min = arr[i];
		}
	}

	cout << "The difference between the min & max elements is: " << max - min << "\n";

    return 0;
}
