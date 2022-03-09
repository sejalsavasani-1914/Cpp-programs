#include <iostream>
using namespace std;

class Animal                    //base class
{
    public:
        int legs=4;
        void display1()
        {
        cout << "animal has " << legs << " legs." << endl;
        }
};

class Dog : public Animal           //derived class
{
    public:
        int tail=1;
        void display2()
        {
        cout << "animal has " << tail << " tail." << endl;
        }
};

class Puppy : public Dog                //derived class
{
    public:
        int puppy=5;
        void display3()
        {
        cout << "Dog has " << puppy << " puppies." << endl;
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
    Puppy p1;
    p1.display3();
    p1.display1();
    p1.display2();
   
    return 0;
}