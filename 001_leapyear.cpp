#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "enter a year: ";
	cin >> year;

	if(year % 4 == 0)
	{
		if(year % 100 == 0)
		{
			if(year % 400 == 0)
				cout << year << " is a leap year.";
			else
				cout << year << " is not a leap year.";
		}
		else
			cout << year << " is a leap year.";
	}
	else
		cout << year << " is not a leap year.";

	return 0;
	

}

#if 0
	Year which is divisible by 4 is a leap year except
	for century years (year ending with 00)
	Year ending with 00 is leap year when it is perfect;y divisible by 400.

	Ex: 2012, 2004, 1968 is a leap year
	1971, 2006 is not a leap year.

	1200, 1600, 2000 is a leap year

	1700, 1800, 1900 is not a leap year.
#endif
