/* this is the program for calculator 
    it is doing some operations like '+','-','*','/','log','log10','sq root','power',
    'sine','cosine','tan','inverse sine','inverse cosine','inverse tan'. */
#include <iostream>
#include<math.h>
using namespace std;

class calculator
{
    public:
        float PI=3.14159265;
        float input1;
        float input2;
        //passing objects as function argument
        float add(calculator obj1,calculator obj2)
        {
            return obj1.input1+obj2.input1;
        }
        float sub();
        // returning objects from a function 
        calculator mul(calculator obj1,calculator obj2)
        {
            calculator obj3;
            obj3.input1 = obj1.input1 * obj2.input1;
            obj3.input2 = obj1.input2 * obj2.input2;
            return obj3;
        }
        float div()
        {
            return input1/input2;
        }
        float l(calculator obj1)
        {
            float l;
            l = log(obj1.input1);
            cout << l << endl;
            return l;
        }
        float bl(calculator obj1)
        {
            float bl;
            bl = log10(obj1.input1);
            cout << bl << endl;
            return bl;
        }
        float sq()
        {
            float s;
            s = sqrt(input1);
            return s;
        }
        float power()
        {
            float power;
            power = pow(input1,input2);
            return power;
        }
        float sine()
        {
            float s;
            s = sin(input1);
            return s;
        }
        float cosine()
        {
            float c;
            c = cos(input1);
            return c;
        }
        float Tan()
        {
            float t;
            t = tan(input1);
            return t;
        }
         float isine()
        {
            float s;
            s = asin(input1)*180/PI;
            return s;
        }
        float icosine()
        {
            float c;
            c = acos(input1)*180/PI;
            return c;
        }
        float iTan()
        {
            float t;
            t = atan(input1)*180/PI;
            return t;
        }
};

//using function definition
float calculator::sub()
{
    return input1-input2;
}

int main()
{
    calculator obj1,obj2,obj3;
    cout << "enter 1st object values" << endl;
    cin >> obj1.input1 >> obj1.input2;
    cout << "enter 2nd object values" << endl;
    cin >>  obj2.input1 >> obj2.input2;
    cout << "the inputs of 1st object are\n" << obj1.input1 << " " << obj1.input2 << endl;
    cout << "the inputs of 2nd object are\n" << obj2.input1 << " " << obj2.input2 << endl;
    cout << "the addition of inputs is : " << obj1.add(obj1,obj2) << endl;
    cout << "the subtraction of inputs is : " << obj1.sub() << endl;
    obj3 = obj1.mul(obj1,obj2);
    cout << "the multiplication of inputs is : " << obj3.input1 << " and " << obj3.input2 << endl;
    cout << "the division of inputs is : " << obj1.div() << endl;
    cout << "the log of input is : " << obj1.l(obj1) << endl;
    cout << "the log base 10 of input is : " << obj1.bl(obj1) << endl;
    cout << "the square root of input is : " << obj1.sq() << endl;
    cout << "the power of input is : " << obj1.power() << endl;
    cout << "the sine of input is : " << obj1.sine() << endl;
    cout << "the cosine of input is : " << obj1.cosine() << endl;
    cout << "the tan of input is : " << obj1.Tan() << endl;
    cout << "the inverse sine of input is : " << obj1.isine() << endl;
    cout << "the inverse cosine of input is : " << obj1.icosine() << endl;
    cout << "the inverse tan of input is : " << obj1.iTan() << endl;
    return 0; 
}