
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
	srand(time(NULL));

	int number, rand_number;
	bool flag = false;
	int a, b, attempts;
	int i = 0;

	cout << "Enter a: "; 
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	cout << "Enter the number of attempts: ";
	cin >> attempts;

	rand_number = rand() % abs(a - b) + a;

	do 
	{
		cout << "Enter the number: ";
		cin >> number;


		if (number > rand_number)
		{
			cout << "Your number is bigger. Guess again!\n";
		}
		else if (number < rand_number)
		{
			cout << "Your number is smaller. Guess again!\n";
		}
		else 
		{
			flag = true;
			break;
		}

		i++;
		
	} while (i < attempts);

	if (flag == true)
	{
		cout << "Congratulations, you guessed the number in "<< i << " attempts!\n";
	}
	else
	{
		cout << "Fail, you didn't guess the number!\nThe number is " << rand_number << ".\n";
	}

	return 0;
}