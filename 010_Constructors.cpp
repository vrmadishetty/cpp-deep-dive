#include<iostream>

using namespace std;

class Rectangle
{
	private:
		int len;
		int breadth;
	public:

		Rectangle ()
		{
			len  = 1;
			breadth = 1;
		}
		Rectangle (int l, int b)
		{
			setLength(l);
			setBreadth(b);
		}

		Rectangle(Rectangle &r)
		{
			len = r.len;
			breadth = r.breadth;
		}

		void setLength(int l)
		{
			if(l >= 0)
				len = l;
			else
			{
				cout << "Input value of length is not valid" << endl;
				len = 0;
			}
		}

		void setBreadth(int b)
		{
			if(b >= 0)
				breadth = b;
			else
			{	
				cout << "INput value of breadth is not valid" << endl;
				breadth = 0;
			}
		}

		int getLength()
		{
			return len;
		}
		int getBreadth()
		{
			return breadth;
		}

		int area()
		{
			return len*breadth;
		}
		int perimeter()
		{
			return 2*(len+breadth);
		}

};

int main()
{
	Rectangle r1(10, 5);

	Rectangle r2(r1);

	cout << "Area = " << r2.area() << endl;
	cout << "Perimeter = " << r2.perimeter() << endl;
	return 0;	
}
