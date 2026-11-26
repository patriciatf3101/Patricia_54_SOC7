#include<iostream>
using namespace std;

class Calculator
{
	public:

	int add(int a, int b)
	{
		return a + b;
	}

	int add(int x, int y, int z)
	{
		return x + y + z;
	}
};

int main()
{
	Calculator cal;
	cout << "Addition (2, 3): " << cal.add(2, 3) << endl;
	cout << "Addition (4, 5, 6): " << cal.add(4, 5, 6) << endl;
	return 0;
}
