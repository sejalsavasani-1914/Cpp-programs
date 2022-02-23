/* in this program we find cube of number using inline function. */
#include <iostream>
using namespace std;

inline int cube()
{
    int i;
    cin >> i;
    return i*i*i ;
}

int main ()
{
    cout << "This is output.\n";
    cout << "enter  any number to get cube of it : " << cube() << "\n";


    return 0; 
}
