/* this is the code in which we see how we can call protected function in main by making another 
    function in another class and calling protected function in it. */
#include <iostream>
using namespace std;

class ABC                    //base class
{
    public:
        void setprotmemb(int i)
        {
            m_protmemb = i;
        }
        void display()
        {
            cout << m_protmemb << endl;
        }
    protected:
        int m_protmemb;
        void protfunc()
        {
            cout << "access allowed" << endl;
        }
};

class XYZ : public ABC                 //derived class (with calling protected function of another class)
{
    public:
    void useprotfunc()
    {
        protfunc();
    }
};

int main()
{
    ABC a;
    XYZ x;
    //a.m_protmemb;                 error
    a.setprotmemb(0);
    a.display();
    //a.protfunc();                 error
    x.setprotmemb(5);
    x.display();
    x.useprotfunc();
}