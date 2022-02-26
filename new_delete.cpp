#include<iostream>
using namespace std;

class A 
{
    public:
        int i,j,k,l,m;
        A()
        {
            cout << "inside the constructor" << endl;
            i=0;
            j=10;
        }
        ~A()
        {
            cout << "inside the destructor" << endl;
        }
};

int main()
{
    //declaration of variable
    int *ptr1,*ptr2,sum;
    A *a2,*a3;
    ptr1 = new int;
    *ptr1 = 7;
    ptr2 = new int;
    *ptr2 = 2;
    sum = *ptr1 + *ptr2;
    cout << "sum is : " << sum << endl;

return 0;
}