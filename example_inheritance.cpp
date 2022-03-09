/*this is the code for inheritance in which we see how we can derived different different classes from base class. */
#include <iostream>
using namespace std;

class A                    //base class
{
    public:
        void display1()
        {
        cout << "Inside class A." << endl;
        }
};

class B : public A           //derived class from A
{
    public:
        void display2()
        {
        cout << "Inside class B." << endl;
        }
};

class C : public B           //derived class from B
{
    public:
        void display3()
        {
        cout << "Inside class C." << endl;
        }
};

class D : public B,public C           //derived class from B & C
{
    public:
        void display4()
        {
        cout << "Inside class D." << endl;
        }
};

int main()
{
A a1;
    a1.display1();
    //a1.display2();            it will give error.
    cout << endl;
B b1;
    b1.display2();
    b1.display1();
    cout << endl;
C c1;
    c1.display3();
    c1.display2();
    c1.display1();

return 0;
}