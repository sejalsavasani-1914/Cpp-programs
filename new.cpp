/* in this program we learn how to allocate memory */

#include <iostream>
using namespace std;

int main()
{
    float *pt = new float;              //new
    *pt = 55;
    cout << "value=" << *pt;
    cout << "\naddress=" << pt;
    cout << "\nsize=" << sizeof *pt;
    cout << "\nsize pt=" << sizeof pt;
    cout << "\naddress pt=" << &pt << endl;
return 0;
}