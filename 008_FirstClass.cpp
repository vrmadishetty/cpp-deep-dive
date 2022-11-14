#include <iostream>
using namespace std;

class Rectangle
{
	public:
	int len;
	int breadth;

	int area()
	{
		return len*breadth;
	}

	int perimeter()
	{
		return 2*(len + breadth);
	}
};

int main()
{
	Rectangle r1, r2;

	r1.len = 10;
	r1.breadth = 10;

	cout << "Perimeter is " << r1.perimeter() << endl;

	r2.len = 20;
	r2.breadth = 20;

	cout << "Area is" << r1.area() << endl;

	return 0;
}
