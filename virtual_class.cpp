/*this is the code for virtual class creation in which we learn that 
    we can access the object of A from D when we use A as virtual class in B&C. */
#include <iostream>
using namespace std;

class A                    //base class
{
    public:
        int i;
};

class B : virtual public A           //derived class from A
{
    public:
       int j;
};

class C : public virtual A           //derived class from B
{
    public:
        int k;
};

class D : public B,public C           //derived class from B & C
{
    public:
       int sum;
};

int main()
{
    D ob;
    ob.i=10;
    ob.j=20;
    ob.k=30;
    ob.sum=ob.i+ob.j+ob.k;
    cout << ob.sum << endl;
    return 0;
}
