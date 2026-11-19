#include<iostream>
using namespace std;

class Book
{
	public:
	int book_id;
	string book_name;
	string author_name;

	Book(int b_id, string b_name, string a_name)
	{
		book_id = b_id;
		book_name = b_name;
		author_name = a_name;
	}

	Book(Book&b)
	{
		book_id = b.book_id;
		book_name = b.book_name;
		author_name = b.author_name;
	}

	void display()
	{
		cout << "Book ID: " << book_id << endl;
		cout << "Book Name: " << book_name << endl;
		cout << "Author: " << author_name << endl;
	}
};

int main()
{
	Book b1(123, "House of Leaves", "Mark Z. D.");
	Book b2(b1);
	b1.display();
	b2.display();
	return 0;
}
