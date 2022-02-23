/* in this program we see the function overloading with different different examples and 
    function with initialized value. */
#include <iostream>
using namespace std;

int cubevolume(int l=5,int w=6,int h=7)     //function with 3 initialized value in argument 
        {
            return l*w*h;
        }

//function overloading (use display function multiple times)
int display(int x)                                      // 1
{
    cout << "Integer number : " << x << endl;
}

int display(float x)                                    // 2
{
    cout << "Float number : " << x << endl;
}

int display(int x,int y)                                // 3
{
    cout << "Integer number : " << x << " and Integer number : " << y << endl;
}

int display(int x,float y)                              // 4
{
    cout << "Integer number : " << x << " and Float number : " << y << endl;
}

int display(float x,int y)                             // 5
{
    cout << "Float number : " << x << " and Integer number : " << y << endl;
}

//this will give error as it has same argument in two display function
// float display(float x,int y)
// {
//     cout << "Float number : " << x << " and Integer number : " << y << endl;
// }

int display(int x,int y,int z)                                // 6
{
    cout << "Integer number : " << x << " and Integer number : " << y << " and Integer number : " << z << endl;
}

int display(int x,int y,float z)                                // 7
{
    cout << "Integer number : " << x << " and Integer number : " << y << " and Float number : " << z << endl;
}

int display(int x,float z,int y)                                // 8
{
    cout << "Integer number : " << x << " and Float number : " << z << " and Integer number : " << y << endl;
}

int main()
{
    //for default argument
    cout << cubevolume() << endl;
    cout << cubevolume(9) << endl;
    cout << cubevolume(15,12) << endl;
    cout << cubevolume(2,4,6) << endl;

    //for function overloading
    int a=5,c=6,d=8;
    float b=6.7;
    display(a);                                             // 1
    display(c);
    display(d);                                            
    display(b);                                             // 2
    display(a,c);                                           // 3
    display(b,a);                                           // 4
    display(a,b);                                           // 5
//    display(b,a);
    display(a,c,d);                                           // 6
    display(a,d,b);                                           // 7
    display(a,b,c);                                           // 8

    return 0;
}