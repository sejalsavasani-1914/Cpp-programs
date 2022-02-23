/*homework task for being familier with cpp programming langauge.
    in this programm we find area and volume from length,height,weight . */
#include <iostream>
using namespace std;

class measure
{
    public:
        float input1;
        float input2;
        float input3;
        float setinput(float h,float l,float w)
        {
            input1=h;
            input2=l;
            input3=w;
        }
        float area()                //area
        {
            return input2*input3;
        }
        float volume()                  //volume
        {
            return input1*input2*input3;
        }
};

int main()
{
    measure obj1;
    obj1.setinput(10,20,30);
    cout << "the input for \nheight is : " << obj1.input1 << " length is : "  << obj1.input2 << " width is : " << obj1.input3 << endl;
    cout << "the area of inputs is : " << obj1.area() << endl;
    cout << "the volume of inputs is : " << obj1.volume() << endl;

    return 0;
}