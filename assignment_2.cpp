
#include<iostream>
using namespace std;


class Rectangle
{
        private:
        float l, b;

        public:
        void accept()
        {
                std::cout << "Enter the length of rectangle: ";
                std::cin >> l;
                std::cout << "Enter the breadth of rectangle: ";
                std::cin >> b;
        }
        float area();
        float perimeter();
        void display()
        {
                std::cout << "Area of Rectangle: " << area() << endl;
                std::cout << "Perimeter of rectangle: " << perimeter() << endl;
        }
};

float Rectangle::area()
{
        return l * b;
}

float Rectangle::perimeter()
{
        return 2*(l + b);
}

int main()
{
        Rectangle r;
        r.accept();
        r.display();
        return 0;
}


