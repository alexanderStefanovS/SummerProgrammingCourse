
#include <iostream>
//#include <cmath>

using namespace std;

int main()
{
	int n;

	cin >> n;

	if (n >= 10000)
	{
		cout << "Incorrect input.\n";
	}
	else
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += pow(i, 2);
		}

		cout << "Sum = " << sum << "\n";
	}

	return 0;
}