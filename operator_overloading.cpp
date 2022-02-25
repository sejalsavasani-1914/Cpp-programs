/* This is the code for operator overloading : 
using operators '+' ,'-' ,'*' ,'/' ,'&&' ,'||' ,'<=' ,'>=' ,'==' ,'--'(pre,post) ,'++'(pre,post)
'-', '!' ,'^' */

#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    //default constructor
    Complex()
    {
        real = 0;
        img = 0;
    }
    //parametarized constructor
    Complex(int x,int y)
    {
        real = x;
        img = y;
    }
    //display function
    void display()
    {
        cout << "               The real part is: " << real << " and imaginary part: " << img << endl;
    }
    //overload the '+' operator
    Complex operator + (Complex ob)
    {
        Complex temp;
        temp.real = real + ob.real;
        temp.img = img + ob.img;
        return temp;
    }
    //overload the '-' operator using friend function
    friend Complex operator - (Complex ,Complex);
    //overload the '*' operator
    Complex operator * (Complex ob)
    {
        Complex temp;
        temp.real = real + ob.real;         //we can use different operation inside any operator
        temp.img = img * ob.img;        
        return temp;
    }
    //overload the '/' operator using friend function
    friend Complex operator / (Complex ,Complex);
    //overload the '%' operator
    Complex operator % (Complex ob)
    {
        Complex temp;
        temp.real = real % ob.real;
        temp.img = img % ob.img;
        return temp;
    }
    //overload the '&&' operator
    Complex operator && (Complex ob)
    {
        Complex temp;
        temp.real = real==ob.real && img==ob.img;       //it show real part 1 if real and img part same
        temp.img = img + ob.img;
        return temp;
    }
    //overload the '||' operator
    Complex operator || (Complex ob)
    {
        Complex temp;
        temp.real = real==ob.real || img==ob.img;       //it show real part 1 if real or img part same
        temp.img = img + ob.img;
        return temp;
    }
                                    //overload the '<=' operator using friend function
    friend Complex operator <= (Complex ,Complex);
                                    //overload the '>=' operator using friend function
    friend Complex operator >= (Complex ,Complex);
                                    //overload the '==' operator
    Complex operator == (Complex ob)
    {
        Complex temp;
        temp.real = real == ob.real;
        temp.img = img == ob.img;
        return temp;
    }
                                    //overload the '-' operator
    Complex operator - ();
    //overload the '--' operator
    //void operator -- ();
                                    //overload the '++' operator
    void operator ++ ();
                                    //overload the '--' operator pre
    Complex operator -- ();
                                    //overload the '--' operator post
    Complex operator -- (int);
                                    //overload the '++' operator post
    Complex operator ++ (int);
                                    //overload the '!' operator
    Complex operator ! ();
    //overload the '~' operator
    Complex operator ~ ()
    {
        Complex temp;
        temp.real = ~real;
        temp.img = ~img;
        return temp;
    }
                                    //overload the '^' operator using friend function
    friend Complex operator ^ (Complex ,Complex);
};

//all functions definition for friend function
Complex operator - (Complex ob1 ,Complex ob2)
    {
        Complex temp;
        temp.real = ob1.real - ob2.real;
        temp.img = ob1.img - ob2.img;
        return temp;
    }

Complex operator / (Complex ob1 ,Complex ob2)
    {
        Complex temp;
        temp.real = ob1.real / ob2.real;
        temp.img = ob1.img / ob2.img;
        return temp;
    }

Complex operator <= (Complex ob1 ,Complex ob2)
    {
        Complex temp;
        temp.real = ob1.real <= ob2.real;
        temp.img = ob1.img <= ob2.img;
        return temp;
    }

Complex operator >= (Complex ob1 ,Complex ob2)
    {
        Complex temp;
        temp.real = ob1.real >= ob2.real;
        temp.img = ob1.img >= ob2.img;
        return temp;
    }

Complex Complex :: operator - ()
    {
        Complex temp;
        temp.real = -real;
        temp.img = -img;
        return temp;
    }

// void Complex :: operator -- ()
// {
//     real--;
//     img--;
// }

void Complex :: operator ++ ()
{
    real++;
    img++;
}

Complex Complex :: operator -- ()
    {
        Complex temp;
        temp.real = --real;
        temp.img = --img;
        return temp;
    }

Complex Complex :: operator -- (int)
    {
        Complex temp;
        temp.real = real--;
        temp.img = img--;
        return temp;
    }

Complex Complex :: operator ++ (int)
    {
        Complex temp;
        temp.real = real++;
        temp.img = img++;
        return temp;
    }

Complex Complex :: operator ! ()
    {
        Complex temp;
        temp.real = !real;
        temp.img = !img;
        return temp;
    }

Complex operator ^ (Complex ob1 ,Complex ob2)
    {
        Complex temp;
        temp.real = ob1.real ^ ob2.real;
        temp.img = ob1.img ^ ob2.img;
        return temp;
    }

int main()
{
    Complex c1(12,12),c2(5,5);
    c1.display();
    c2.display();

    Complex c3;                     // operator +
    c3 = c1 + c2;                   //  operator notation
    c3 = c1.operator + (c2);        // function notation
    cout << "operator +" << endl;
    c3.display();

    Complex c4;              // operator - (using friend function)
    c4 = c1 - c2;
    cout << "operator -" << endl;           
    c4.display();

    Complex c5;              // operator *
    c5 = c1 * c2;
    cout << "operator *" << endl;           
    c5.display();

    Complex c6;              // operator / (using friend function)
    c6 = c1 / c2; 
    cout << "operator /" << endl;          
    c6.display();

    Complex c36;              // operator %
    c36 = c1 % c2;
    cout << "operator %" << endl;           
    c36.display();

    Complex c7(12,12),c8(12,12);
    Complex c9;                             // operator &&
    c9 = c7 && c8;
    cout << "operator &&" << endl;           
    c9.display();
    Complex c10(12,12),c11(5,12);
    Complex c12;                             // operator && with different real parts gives 0
    c12 = c10 && c11;           
    c12.display();

    Complex c13(12,12),c14(5,5);
    Complex c15;                             // operator ||
    c15 = c13 || c14; 
    cout << "operator ||" << endl;          
    c15.display();
    Complex c16(12,12),c17(5,12);
    Complex c18;                             // operator || with different real parts gives 1
    c18 = c16 || c17;           
    c18.display();

    Complex c19(12,12),c20(12,5);
    Complex c21;                             // operator <=
    c21 = c19 <= c20; 
    cout << "operator <=" << endl;          
    c21.display();

    Complex c22(12,12),c23(12,5);
    Complex c24;                             // operator >=
    c24 = c22 >= c23; 
    cout << "operator >=" << endl;          
    c24.display();

    Complex c25(12,12),c26(5,12);
    Complex c27;                             // operator ==
    c27 = c25 == c26; 
    cout << "operator ==" << endl;          
    c27.display();

    Complex c28;
    cout << "operator - unary" << endl;
    c1.display();                           // operator - unary
    -c1;
    c1.display();
    c28=-c1;
    c28.display();

    // cout << "operator -- unary" << endl;
    // c1.display();                           // operator -- unary
    // --c1;
    // c1.display();

    cout << "operator ++ unary" << endl;
    c2.display();                           // operator ++ unary
    ++c2;
    c2.display();

    Complex c29;
    cout << "operator -- unary" << endl;
    c1.display();                           // operator -- unary 
    --c1;
    c1.display();
    c29=--c1;
    c29.display();

    Complex c30;
    cout << "operator post -- unary" << endl;
    c2.display();                           // operator post -- unary 
    c2--;
    c2.display();
    c1.display();
    c30=c1--;
    c30.display();

    Complex c31;
    cout << "operator post ++ unary" << endl;
    c2.display();                           // operator post ++ unary 
    c2++;
    c2.display();
    c1.display();
    c31=c1++;
    c31.display();

    Complex c32(0,0),c33(3,1),c34,c35;
    cout << "operator - unary" << endl;
    c32.display();                           // operator ! unary
    c34=!c32;
    c34.display();
    c33.display();
    c35=!c33;
    c35.display();

    Complex c37(60,25),c38;
    cout << "operator ~ unary" << endl;
    c37.display();                           // operator ~ unary
    c38 = ~c37;
    c38.display();

    Complex a1(5,4),a2(2,1),a3;              // operator ^
    cout << "operator ^" << endl;
    a1.display();
    a2.display();
    a3 = a2^a1;               
    a3.display();

    return 0;
}