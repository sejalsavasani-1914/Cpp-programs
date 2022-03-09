/* in this code we see how we can create a constructor of any derived class. */
#include <iostream>
using namespace std;

class A                    //base class
{
    int x;
    public:
        A()
        {
            cout << "Base class default constructor." << endl;
        }        
};

class B : public A           //derived class from A
{
    int y;
    public:
        B()
        {
            cout << "Derived class default constructor." << endl;
        } 
        B(int i)
        {
            cout << "Derived class parameterized constructor." << endl;
        }
};

int main()
{
    A a1;
    B b1;
    B b2(10);
    return 0;
}