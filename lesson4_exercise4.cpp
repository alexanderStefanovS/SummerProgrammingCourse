#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	cout << "Perfect numbers: ";

	for (int i = 1; i < n; i++)
	{
		int sum = 0;

		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			cout << i << " ";
		}
	}

	cout << "\n";

	return 0;
}