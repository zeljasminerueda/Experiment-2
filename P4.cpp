#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int counter;
	for (counter = 1; counter <= 30;)
	{
		if (counter <= 10)
		{
		cout << counter << ",";
		}

		else if (counter > 10 && counter < 28)
		{
		cout << (counter = counter + 1) << ",";
		}

		else
		{
		cout << (counter = counter + 1);
		}

		counter++;
}
_getch();
return 0;
}
