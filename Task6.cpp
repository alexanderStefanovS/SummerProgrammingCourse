#include <iostream>

using namespace std;

int main(){
    int arr[1000], n;
	bool flag = true;						// Is the array symmetric

	do {
	cout << "Input array size: ";
		cin >> n;
	} while (n <= 0 || n > 1000);

	cout << "Ok!\nInput array: ";

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < n / 2; ++i) {
		if (arr[i] != arr[n - i - 1]) {
			flag = false;
			break;
		}
	}

	if (flag == true) {
		cout << "The array is symmetric.\n";
	}
	else {
		cout << "The array is NOT symmetric.\n";
	}

    return 0;
}
