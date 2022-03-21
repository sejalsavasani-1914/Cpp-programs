/*in this code we learn how to find words starts with e in files. */

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


int main()
{
  fstream fin("ass_q3.txt", ios::in | ios::out | ios::app);
  int word = 0,i,l;
  char find = 'e';
  char temp[10];

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
            if(temp[0]=='e')
            {
                word++;
            }
            //cout << endl;
        }
    }

  cout << "The words that starts with 'e' in 'tset3.txt' is: " << word << endl;    

  return 0;
}