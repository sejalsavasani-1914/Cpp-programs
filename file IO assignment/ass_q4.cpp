/*in this code we learn how to find words ends with s in files. */

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


int main()
{
  fstream fin("ass_q4.txt", ios::in | ios::out | ios::app);
  int word = 0,i,l;
  char find = 's';
  char temp[15];

    if(!fin)
    {
        cout << "file did not open" << endl;
    }

    else
    {
        while(!fin.eof())
        {
            fin >> temp;
            cout << temp << endl;
            l = strlen(temp);
            //cout << "length " << l << endl;
            if(temp[l-1]=='s')
            {
                word++;
            }
        }
    }

  cout << "The words that ends with 's' in 'ass_q4.txt' is: " << word << endl;    

return 0;
}