/* this code will give the error because we make the class A as private in derived class B. */
#include <iostream>
using namespace std;

class A                    //base class
{
    protected:
    int i,j;
    public:
        void set(int a, int b)
        {
        i=a;
        j=b;
        }
        void show()
        {
            cout << i << " " << j << endl;
        }
};

class B : private A           //derived class from A
{
    int k;
    public:
       void setk()
       {
           k=i*j;
       }
        void showk()
        {
            cout << k << endl;
        }
};

class C : public B           //derived class from A
{
    int m;
    public:
       void setm()
       {
           m=i-j;
       }
        void showm()
        {
            cout << m << endl;
        }
};

int main()
{
    B ob1;
    C ob2;
    ob1.set(1,2);
    ob1.show();
    ob2.set(3,4);
    ob2.show();
    return 0;
}