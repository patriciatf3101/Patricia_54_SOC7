#include<iostream>
#include<string>
using namespace std;

class Product
{
	public:
	int p_id;
	string p_name;
	float price;
	int monthly_sales[12];

	void get_data()
	{
		cout << "Enter Product ID : ";
		cin >> p_id;
		cout << "Enter Product Name : ";
		cin >> p_name;
		cout << "Enter Price : ";
		cin >> price;
		cout << "Enter Monthly Sales as follows: " << endl;
		for(int i = 0; i < 12; i++ )
		{
			cout << "For Month " << i+1 << " : ";
			cin >> monthly_sales[i];
		}
	}

	int calc_quantity()
	{
		int total = 0;
		for(int i = 0; i < 12; i++)
		{
			total = total + monthly_sales[i];
		}
		return total;
	}

	float calc_bill()
	{
		return calc_quantity()*price;
	}

	void display()
	{
		cout << "Product ID     : " << p_id << endl;
		cout << "Product Name   : " << p_name << endl;
		cout << "Product Price  : " << price << endl;
		cout << "Total Quantity : " << calc_quantity() << endl;
		cout << "Total Bill     : " << calc_bill() << endl; 
	}
};

int main()
{
	int no;
	cout << "Enter the number of products to add: ";
	cin >> no;
	Product p[no];
	for(int i = 0; i < no; i++)
	{
		cout << "\nEnter details for Product " << i+1 << ": " << endl;
		p[i].get_data();
	}
	cout << "\n--- Product Details: ---";
	for(int i = 0; i < no; i++)
	{
		cout << "\nProduct Details for product " << i+1 << endl;
		p[i].display();
	}
	return 0;
}
