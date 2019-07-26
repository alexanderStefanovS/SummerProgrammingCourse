#include <iostream>

using namespace std;

int main(){
    int arr[1000], sum = 0, n;

	do {
		cout << "Input array size: ";
		cin >> n;
	} while (n <= 0 || n > 1000);

	cout << "Ok!\nInput array: ";

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i) {
		if (arr[i] < 0 && arr[i] % 2 != 0) {
			sum += arr[i];
		}
	}

	cout << "The sum of the negative elements on odd positions is: " << sum << "\n";

    return 0;
}
