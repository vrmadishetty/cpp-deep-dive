#include<iostream>
using namespace std;

int main()
{
	int num, i;

	cout << "Enter the input: ";
	cin >> num;
	cout << "Input is: " << num << endl;

	for(i  = 1; i <= num; i++)
	{
		if(num % i == 0)
			cout << i << " ";

	}
	cout << endl;
	return 0;
}

#if 0

	number which is divisible and remainder and then
	remainder is 0, it is factor of numbers
#endif

