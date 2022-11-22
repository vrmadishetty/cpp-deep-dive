#include <iostream>
using namespace std;

class complex
{

	public:
	
		int real;
		int img;
		complex (int r = 0, int i = 0) //Parameterized and non-parametarized constructor
		{
			real = r;
			img = i;
		}
		
		complex operator+(complex x) // Operator overloading function
		{
			complex temp;
			temp.real = real+x.real;
			temp.img = img+x.img;
			
			return temp;
		}
	
};

int main()
{
	complex c1(5,3);
	complex c2(2,4);
	complex c3; 
	
	//c3 = c1.add(c2);
	c3 = c1+c2;
	cout << "c3 real: " << c3.real <<  endl;
	cout << "c3 img: " << c3.img << endl;
	
	return 0;
}