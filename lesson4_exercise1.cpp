
#include <iostream>

using namespace std;

int main()
{
	int num, sum = 0;

	while (sum < 100)
	{
		cin >> num;

		if (num > 30)
		{
			continue;
		}

		sum += num;
	}

	cout << "Sum = " << sum << "\n";

	return 0;
}