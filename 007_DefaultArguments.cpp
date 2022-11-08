#include<iostream>

using namespace std;

int max(int a, int b = 0, int c = 0)
{
	return a+b+c;
}

int main()
{
	cout << max(10)<< endl;
	cout << max(10, 10) << endl;
	cout << max(10, 10, 10) << endl;

	return 0;
}
