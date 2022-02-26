/* demo for the constructor */

#include <iostream>
using namespace std;

class democonst
{
    public:
        int i=10,j,k;
        void setval()
        {
            i=100;
            cout << "inside the setvalue() , i=" << i << endl;
        }
    //constructor
        democonst()
        {
            cout << "inside the constructor" << endl;
            j=0;
            k=5;
        }
};

int main()
{
    democonst demo1,demo2;
    cout << "value of  demo1 members: i=" << demo1.i << " j=" << demo1.j << " k=" << demo1.k << endl;
    demo1.setval();
    cout << "value of  demo1 members: i=" << demo1.i << " j=" << demo1.j << " k=" << demo1.k << endl;
    demo2.setval();
    cout << "value of  demo2 members: i=" << demo2.i << " j=" << demo2.j << " k=" << demo2.k << endl;
    
    return 0;
}