
#include <iostream>

using namespace std;

int main()
{
	int first = 0, second = 1, n, result;
	cin >> n;

	if (n == 1)
	{
		result = first;
	}
	else if (n == 2)
	{
		result = second;
	}

	for (int i = 0; i < n - 2; i++)
	{
		result = first + second;

		first = second;
		second = result;
	}

	cout << result << "\n";

	return 0;
}