#include<iostream>

using namespace std;

class Rectangle
{
	private:
		int len;
		int breadth;
	public:
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

};

int main()
{
	Rectangle r;

	r.setLength(20);
	r.setBreadth(-5);

	cout << "Length = " << r.getLength() << endl;
	cout << "Breadth = " << r.getBreadth() << endl;
	return 0;	
}
