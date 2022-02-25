/*  in this program we learn operator overloading using two classes. */
#include <iostream>
using namespace std;

class Complex2;

class Complex1
{
    public:
    int real,img;
    //default constructor
    Complex1()
    {
        real = 0;
        img = 0;
    }
    //parametarized constructor
    Complex1(int x,int y)
    {
        real = x;
        img = y;
    }
    //display function
    void display()
    {
        cout << "   The real part is: " << real << " and imaginary part: " << img << endl;
    }
    //overload the '+' operator using friend function
    friend Complex1 operator + (Complex1 ,Complex2 );

    
};

class Complex2
{
    public:
    int real,img;
    //default constructor
    Complex2()
    {
        real = 0;
        img = 0;
    }
    //parametarized constructor
    Complex2(int x,int y)
    {
        real = x;
        img = y;
    }
    //display function
    void display()
    {
        cout << "   The real part is: " << real << " and imaginary part: " << img << endl;
    }
    //overload the '-' operator using friend function
    friend Complex2 operator - (Complex1 ,Complex2 );
    
};

Complex1 operator + (Complex1 a,Complex2 b)
    {
        Complex1 temp;
        temp.real = a.real + b.real;
        temp.img = a.img + b.img;
        return temp;
    }

Complex2 operator - (Complex1 a,Complex2 b)
    {
        Complex2 temp;
        temp.real = a.real - b.real;
        temp.img = a.img - b.img;
        return temp;
    }

int main()
{
    Complex1 a1(12,12),a2(5,5),a3;
    cout << "a1 is :" << endl;
    a1.display();
    cout << "a2 is :" << endl;
    a2.display();

    Complex2 b1(10,10),b2(7,7),b3;
    cout << "b1 is :" << endl;
    b1.display();
    cout << "b2 is :" << endl;
    b2.display();

    cout << "operator +" << endl;                     // operator +
    a3 = a2 + b1;
    a3.display();
    cout << "operator -" << endl;                     // operator -
    b3 = a1 - b2;
    b3.display();   

    return 0;
}               
    
    
