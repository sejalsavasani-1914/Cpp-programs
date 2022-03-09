/*this is the code for function override in which we see how we can override the same function in another class. */
#include <iostream>
using namespace std;

class ABC                    //base class
{
    public:
        void display()
        {
            cout << "This is parent class" << endl;
        }
};

class XYZ : public ABC                 //derived class from ABC
{
    public:
        void display()
        {
            cout << "This is child class" << endl;
        }
};

int main()
{
    XYZ x1,x2;
    x1.display();
    x2.ABC::display();
    return 0;
}