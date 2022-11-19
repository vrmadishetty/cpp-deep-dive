#include <iostream>
#include <string>

using namespace std;

class Student
{
	private:
		int roll;
		string name;
		int mathMarks;
		int phyMarks;
		int chemMarks;
	public:
		Student(int roll, string name, int mathMarks, int phyMarks, int chemMarks)
		{
			this->roll = roll;
			this->name = name;
			this->mathMarks = mathMarks;
			this->phyMarks = phyMarks;
			this->chemMarks = chemMarks;

			
		}

		int totalMarks()
		{
			return mathMarks+phyMarks+chemMarks;
		}
		char Grade()
		{
			float average = totalMarks()/3;

			if(average > 60)
				return 'A';
			else if(average >=40 && average<60)
				return 'B';
			else 
				return 'C';
		}
		
		
};

int main()
{
	
	string str;

	int r, mM, pM, cM;

	cout << "Enter roll number: ";
	cin >> r;

	cout << "Enter name: ";
	cin >> str;

	cout << "Enter MathMarks, PysMarks, Chem Marks " << endl;

	cin >> mM >> pM >> cM;

	Student s(r, str, mM, pM, cM);
	cout << "Total: " << s.totalMarks() << endl;
	cout << "Grade: " << s.Grade() << endl;

}
