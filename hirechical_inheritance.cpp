/* in this code we learn hybrid inheritance i.e, class derived from hierchical of class. */
#include <iostream>
using namespace std;

class Animal                        //base class
{
    public:
        int legs=4;
        void display1()
        {
        cout << "animal has " << legs << " legs." << endl;
        }
};

class Dog : public Animal           //derived class from animal
{
    public:
        int tail=1;
        void display2()
        {
        cout << "Dog has " << tail << " tail." << endl;
        }
};

class Cat : public Animal           //derived class from animal
{
    public:
        int tail=1;
        void display3()
        {
        cout << "Cat has " << tail << " tail." << endl;
        }
};

int main()
{
    Animal a1;
    a1.display1();
    Dog d1;                 // only Animal can call
    d1.display2();
    d1.display1();
    Cat c1;                 // only Animal can call
    c1.display3();
    c1.display1();
    return 0;
}

