#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

double gallons, ubal, tbill;

	cout << "Customer's Water bill" << endl;
	cout << "Input the total meter reading for the previous and current month in gallons: " << endl;
	cin >> gallons;
	cout << " " << endl;
	cout << "Input customer's unpaid balance: " << endl;
	cin >> ubal;
	cout << " " << endl;


	if (ubal > 0)
	{
	tbill = 55 + (gallons*1.10) + ubal;
	cout << "Late charge P20 and P35 for water demand charge was added on the bill." << endl; 
	cout << "The current water bill is: "<<  tbill << endl;
	}

	else
	{
	cout << "P35 was added for water demand charge." << endl;
	tbill = 35 + (gallons*1.10);
	cout << "The current water bill is: " << tbill << endl;
	}

	_getch();
	return 0;

}
