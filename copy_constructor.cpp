/* demo for the default constructor ,parameterized constructor ,copy constructor  */

#include <iostream>
using namespace std;

class A
{
    private:
        int i=0;
    public:
    // default constructor
        A()
        {
            cout << "inside the default constructor, value of i is : " << i << endl;
        }
    // parameterized constructor
        A(int x,int y)
        {
            cout << "inside the perameterized constructor " << endl;
            i = x + y;
            cout << " value of i is : " << i << endl;
        }
    // copy constructor
        A(A &ob1)
        {
            i = ob1.i;
            cout << "inside the copy constructor " << endl;
            cout << " value of i is : " << i << endl;
        }
};

int main()
{
    A ob;                   //default const
    A ob1(5,10);            //para const
    A ob2(ob1);             //copy const
    A ob3 = ob1;            //copy const
}