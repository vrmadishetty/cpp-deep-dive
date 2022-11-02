#include<iostream>
using namespace std;

int main()
{
	int num, i, sum = 0;
	
	cout << "Enter the input: ";
	cin >> num;
	cout << "Input is: " << num << endl;

	for(i  = 1; i <= num; i++)
	{
		if(num % i == 0)
			sum = sum + i;

	}
	cout << "sum of the given factor number: " << sum <<endl;
	if(sum == (2*num))
		cout << "given number: " << num << " perfect num." << endl;

	else
		cout << "Not a perfect number.";
	return 0;
}


