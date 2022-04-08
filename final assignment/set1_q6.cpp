#include<iostream>
using namespace std;

class studentdetail
{
    private:
        int stuattd;
        float testscore;
        int totalscore; //more than 5600
public:
    void getdata()
    {
        cout << "enter the student details : " << endl;
        cout << "enter student attendance : " << endl;
        cin >> stuattd;
        cout << "enter student test score : " << endl;
        cin >> testscore;
        cout << "enter student total score : " << endl;
        cin >> totalscore;
    }
    
    
    void displaygrade()
    {
        if((stuattd>50) && (testscore > 0.70) && (totalscore > 5600))
        {
            cout << "Res - 10" << endl;
        }
        else if((stuattd>50) && (testscore > 0.70))
        {
            cout << "Res - 9" << endl;
        }
        else if(totalscore>5600)
        {
            cout << "Res - 8" << endl;
        }
        else if((stuattd>50)&&(totalscore > 5600))
        {
            cout << "Res - 7" << endl;
        }
        else if((stuattd>50) || (testscore > 0.70) || (totalscore > 5600))
        {
            cout << "Res - 6" << endl;
        }
        else if(!((stuattd>50) && (testscore > 0.70) && (totalscore > 5600)))
        {
            cout << "Res - 5" << endl;
        }
        else
        {
            cout << "No Result" << endl;
        }
    }
};

int main()
{
    studentdetail sd;
    sd.getdata();
    sd.displaygrade();
}