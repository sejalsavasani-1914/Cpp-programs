/* in this code we learn how to count words which has 'a' . */

#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{
 ifstream fin("ass_q2.txt"); //opening text file
 int word=0,i,l; //will not count first word so initial value is 1
 char s='a';
 char temp[10];

 fin.seekg(0,ios::beg); //bring position of file pointer to begining of file
 
 
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
            for(i=0;i<l;i++)
            {
                if(temp[i]=='a')
                {
                    word++;
                }    
            }
        }
    }
 
 cout<<"total words which has 'a' in file 'ass_q2.txt' is = " << word << endl;
 fin.close(); //closing file
 
 return 0;
}