
#include <iostream>

using namespace std;

// This function checks if a year is leap.

bool isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 != 0)
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}
	
	return false;

}

int main()
{
	int month, year;

	cout << "Enter month: ";
	cin >> month;

	cout << "Enter year: ";
	cin >> year;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		cout << "This month has 31 days.\n"; 
		break;
	}
	case 2: 
	{
		if (isLeapYear(year))
		{
			cout<< "This month has 29 days.\n";
		}
		else
		{
			cout << "This month has 28 days.\n";
		}
		break;
	}

	default:
		cout << "This month has 30 days.\n";
		break;
	}

	return 0;
}