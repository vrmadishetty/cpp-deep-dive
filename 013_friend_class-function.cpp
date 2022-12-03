#include <iostream>

using namespace std;

class Animal
{
	private:
		int age;
		int weight;
	
	public:
		Animal()
		{
			age = 10;
			weight = 25;
		}
	friend class Dog; 
	friend void cat( Animal);
	
};

void cat(Animal a)
{
	cout << "Cat age: " <<a.age <<" cat weight is: " << a.weight << endl;
}

class Dog
{
	public:
		void print(Animal &a)
		{
			cout << "Age: " << a.age << " weight: " << a.weight << endl; 
		}
	
};

int main()
{
	Dog d;
	Animal A;
	
	d.print(A);
	cat(A);
	
	return 0;	
}