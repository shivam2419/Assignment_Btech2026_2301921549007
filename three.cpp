// Create a class "Person" with a static member variable "count" that keeps track of the number of instances created.
#include <iostream>
using namespace std;
class Person{
public:
    static int count;
    Person() {
        count++;
    }
};
int Person::count = 0; // initializing outside the class, so that compiler can know that there's a static variable
int main() {
    Person p1;
    Person p2;
    Person p3;
    cout << p2.count;
    return 0;
}
