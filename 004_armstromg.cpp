#include<iostream>
using namespace std;

int cube( int val)
{
	return val*val*val;
}
int main()
{
	int num, rem, sum = 0, temp;
        
	cout << "Enter num: ";
	cin >> num;

	temp = num;
	while(num > 0)
	{
		rem = num % 10;
		num = num/10;
		sum = sum + cube(rem);
	}
	cout << "sum of cube(num): " << sum << endl;

	if(sum == temp)
		cout << temp << " is armstromg number.";
	else
		cout << temp << " is not a armstromg number.";

	return 0;

}

#if 0
	if sum of the cubes of the digits of a number is a number itself 
#endif 

