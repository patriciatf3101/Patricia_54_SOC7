#include<iostream>
using namespace std;

class Person
{
	public:
	virtual void read()
	{
		cout << "Reading a book..." << endl;
	}
};

class Student: public Person
{
	public:
	void read()
	{
		cout << "Reading a reference book..." << endl;
	}
};

int main()
{
	Person *ptr;
	Student stu;
	ptr=&stu;
	ptr->read();
	return 0;
}
