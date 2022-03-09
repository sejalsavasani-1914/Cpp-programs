/* in this code we learn hybrid inheritance i.e, class derived from multiple calss and hierchical class. */
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

class Puppy : public Cat,public Dog              //derived class from Dog and Cat
{
    public:
        int puppy=5;
        void display4()
        {
        cout << "Animal has " << puppy << " puppies." << endl;
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
    Puppy p1;               // only Dog,cat can call
    p1.display4();
    p1.display3();
    p1.display2();
    //p1.display1();
    return 0;
}
