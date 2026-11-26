#include<iostream>
using namespace std;

class Person
{
	private:
	string name;

	public:
	void read()
	{
		cout << "Reading a book..." << endl;
	}
};

class Student: public Person
{
	private:
	int roll_no;

	public:
	void read()
	{
		cout << "Reading a reference book..." << endl;
	}
};

int main()
{
	Person per;
	Student stu;
	per.read();
	stu.read();
	return 0;
}
