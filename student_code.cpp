#include <iostream>
using namespace std;

class student
{
    public:
        int roll_no;
        char name[20];
        void getdetail()
        {
            cout << "Enter your roll number : " << endl;
            cin >> roll_no;
            cout << "Enter your name : " << endl;
            cin >> name;
        }
};

class test : public student
{
    public:
        int marks[5];
        void getmarks()
        {
        cout << "Enter 5 subject marks: " << endl;
        for(int i=0;i<5;i++)
        {
            cin >> marks[i];
        }
        for(int i=0;i<5;i++)
        {
            cout << "Mark of subject " << i << " is : "<< marks[i] << endl;
        }
        }
};

class result : public student,public test
{
    public:
    //int i;
    float total_marks,Percentage;
    void display()
    {
        getmarks();
        for(int i=0;i<5;i++)
        {
        total_marks = total_marks + marks[i];
        }
        cout << "Total marks of student is : " << total_marks << endl;
        Percentage = (total_marks/500)*100;
        cout << "Percentage of the student is : " << Percentage << endl;
    }
};

int main()
{
    result r1;
    r1.display();
    return 0;
}