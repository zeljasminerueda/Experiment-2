#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
	cout << "Package A: P995/mo - 10 hours Access. Additional hours are P20/hr " << endl;
	cout << "Package B: P1495/mo - 20 hours Access. Additional hours are P10/hr " << endl;
	cout << "Package C: P1995/mo for Unlimited Access" << endl;
	cout << " " << endl;
	cout << " " << endl;
	char package; 
	int hours, mbill;

	cout << "What package did you use? (Enter the letter only): " << endl;
	cin >> package;

	cout << " " << endl;


	switch(package)

	{

		case 'A':
		case 'a': 
			cout << "How many hours did you consume? " << endl;
			cin >> hours;
			cout << " " << endl;
			if (hours > 10 && hours <= 744) // 31 days per month considered fixed
				{
				cout << "Additional P20 per hour was added for excess use of internet." << endl;
				mbill = 995 + 20*(hours - 10);
				cout << "Your total amount due is: " << mbill << endl;
				}
				
			else if (hours <= 10)
				{
				cout << "Your total amount due is: P995" << endl;
				}
			else
				{
				cout << "Invalid " << endl;
				}
			break; 

		case 'B':
		case 'b':
			cout << "How many hours did you consume? " << endl;
			cin >> hours;
			cout << " " << endl;
			if (hours > 20 && hours <= 744)
				{
				cout << "Additional P10 per hour was added for excess use of internet." << endl;
				mbill = 1495 + 10*(hours - 20);
				cout << "Your total amount due is: " << mbill << endl;
				}

			
			else if (hours <= 20)
				{
				cout << "Your total amount due is: P1495" << endl;
				}

			else
				{
				cout << "Invalid " << endl;
				}
			break; 


		case 'C':
		case 'c':
			cout << "Your total amount due is: P1995" << endl;
			break;
	}

	_getch();
	return 0;

}
