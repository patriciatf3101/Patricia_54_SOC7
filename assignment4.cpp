#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
	int emp_id;
	string name;
	float salary;
	float bonus;
	float total_salary;

	public:
	Employee()
	{
		emp_id = 0;
		name = "Unknown";
		salary = 0;
		bonus = 0;
		total_salary = 0;
		cout << "	Default consturctor used" << endl;
	}

	Employee(int id, string n, float s, float b)
	{
		emp_id = id;
		name = n;
		salary = s;
		bonus = b;
		calc_total_salary();
		cout << "\n	Parameterized constructor used" << endl;
	}

	float calc_total_salary()
	{
		total_salary = salary + bonus;
	}

	void display()
	{
		cout << "---EMPLOYEE DETAILS---" << endl;
		cout << "Employee Id: " << emp_id << endl;
		cout << "Employee Name: " << name << endl;
		cout << "Basic Salary: " << salary << endl;
		cout << "Bonus: " << bonus << endl;
		cout << "Total Salary: " << total_salary << endl;
	}
};

int main()
{
	Employee e1;
	e1.display(); // object for default constructor

	Employee e2(101, "John Doe", 50000, 5000);
	e2.display();
	return 0;
}

