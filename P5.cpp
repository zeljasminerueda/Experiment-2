#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int counter, f=0, s=1, n;
	for (counter = 0; counter < 22; counter++)
	{
		if (counter <= 1)
		{
		n = counter;
		}

		else
		{
		n = f + s;
		f = s;
		s = n;

		}

		cout << n << ",";
}
_getch();
return 0;
}
