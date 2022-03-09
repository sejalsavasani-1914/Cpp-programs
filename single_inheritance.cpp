#include <iostream>
using namespace std;

class Animal
{
    public:
        int legs=4;
        void display1()
        {
        cout << "animal has " << legs << " legs." << endl;
        }
};

class Dog : public Animal
{
    public:
        int tail=1;
        void display2()
        {
        cout << "animal has " << tail << " tail." << endl;
        }
};

int main()
{
    Animal a1;
    a1.display1();
    //a1.display2();            it will give error.
    Dog d1;
    d1.display2();
    d1.display1();
    return 0;
}