#include<iostream>
#include<conio.h>

using namespace std;

	int main ()
{
	int i, sum=0, number;

	
	cout << "Enter a number: ";
	cin >> number;

	while (number >0)
		{
		for (i=1; i<=number; i++)
		{
				sum = (number*(number+1))/2;
		}
			cout << "The sum of all whole numbers from 1 to " << number << " is "<<sum << endl;
			cout << "Enter a number: ";
			cin >> number;
		}
		cout << "Thank you!" << endl;
_getch();
	return 0;
	}

