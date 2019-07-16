

#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "Enter the year: ";
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 != 0)
		{
			cout << "The year is not leap.\n";
		}
		else
		{
			cout << "The year is leap.\n";
		}

	}
	else
	{
		cout << "The year is not leap.\n";
	}

	return 0;
}