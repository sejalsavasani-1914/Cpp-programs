/* in this code we learn how to find 'the' word in file. */

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
  fstream fin("ass_q1.txt", ios::in | ios::out | ios::app);
  int word = 0;
  char find[] = "the";
  char temp[10];

  if(!fin)
  {
  cout << "file did not open" << endl;
  }

  else
  {
    while(fin)
    {

      fin>>temp;
      if(strcmp(temp,find)==0)
      {
        word++;
      }
    }
  }

  cout <<"total times word 'the' in file 'ass_q1.txt' is = " << word << endl;    

  return 0;
}


