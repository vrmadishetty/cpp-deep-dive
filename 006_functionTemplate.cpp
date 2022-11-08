#include<iostream>

using namespace std;

template <class T>
T maxim(T a, T b)
{
	return a+b;
}

int main()	
{
	int a = 10, b = 20;
	float x = 20.5f, y =30.7f;

	cout << maxim(a,b) << " " << maxim(x,y)<< endl;
	return 0;
}

