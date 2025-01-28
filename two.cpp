// Create a base class "Shape" with methods to calculate the area and perimeter (pure virtual). Implement derived classes "Rectangle" and "Circle" that inherit from "Shape" and provide their own area and perimeter calculations.
#include <iostream>
using namespace std;
class Shape{
    public:
        // pure virtual functions
        virtual void area() = 0;
        virtual void perimeter() = 0;
};
class Rectangle : public Shape{
    int x,y;
    public:
        Rectangle(int a, int b) {
            x = a;
            y = b;
        }
        
        void area() {
            cout << "Area of rectangle : " << x * y << endl;
        }
        void perimeter() {
            cout << "Perimeter of rectangle : " << 2 * (x + y) << endl;
        }
};
class Circle : public Shape{
    int r;
    public:
        Circle(int s) {
            r = s;
        }
        
        void area() {
            cout << "Area of circle : " << 3.14 * r * r << endl;
        }
        void perimeter() {
            cout << "Perimeter of circle : " << 2 * 3.14 * r << endl;
        }
};
int main() {
    Circle c(10);
    Rectangle r(2, 4);
    c.area();
    r.perimeter();
    return 0;
}
