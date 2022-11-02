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

#if 0
	If the sum of the factor of the given number and 
	the given number whihc is multiplied with 2. equals,
	then it is perfect number.

	Ex:
		Input: 6
			Factors of the input number: 1, 2, 3, 6
			Sum of the factors: 1+2+3+6 = 12
		Now Input multiplied with 2 i.e 2*6 = 12

		Hence 12 == 12
		6 is a perfect number. 
#endif
