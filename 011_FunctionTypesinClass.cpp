#include<iostream>

using namespace std;

class Rectangle
{
	private:
		int length;
		int breadth;

	public:
		/* Contructors
		 * should be as a same name of a class
		 * no return types*/
		Rectangle();
		Rectangle(int l, int b);
		Rectangle(Rectangle &r);

		/* Mutators - to set the values */
		void setLength(int l);
		void setBreadth(int b);

		/* Accessors - to read the values of a data members */
		int getLength();
		int getBreadth();

		/* Facilitators - Actual members functions of a class*/
		int area();
		int perimeter();

		/* Enquiry functions: checking if an object satifies some conditions */
		int isSquare();

		/* Destructor: used for releasing resources used by object */
		~Rectangle();

};

int main()
{
	Rectangle r1(10, 10);
	cout << "Area " << r1.area() << endl;
	if(r1.isSquare())
		cout << "YES" << endl;
}

Rectangle::Rectangle()
{
	length = 10;
	breadth = 20;
}

Rectangle::Rectangle(int l, int b)
{
	if(l >= 0)
		length = l;
	

	if(b >= 0)
		breadth = b;
}

Rectangle::Rectangle(Rectangle &r)
{
	length = r.length;
	breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
	length = l;
}

void Rectangle::setBreadth(int b)
{
	breadth = b;
}

int Rectangle::getLength()
{
	return length;
}

int Rectangle::getBreadth()
{
	return breadth;
}

int Rectangle::area()
{
	return length*breadth;
}

int Rectangle::perimeter()
{
	return 2*(length+breadth);
}

int Rectangle::isSquare()
{
	return length==breadth;
}

Rectangle::~Rectangle()
{
	cout <<"Rectangle Destroyed" << endl;
}




