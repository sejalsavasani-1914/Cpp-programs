/* homework task to find current time and date 
    also find time for sleep and and age using date. */
#include<iostream>
#include<ctime>
#include<unistd.h>
using namespace std;
// class for time
class Time
{
    public:
    int hour,min,sec;
        
        int setTime()
        {
            //reading current time as per IST
            time_t tt;
            struct tm *ti;
            time(&tt);
            ti = localtime (&tt);
            cout << asctime(ti);
            //IST to UTC
            cout << "In UTC\nHour: "  << (5+ti->tm_hour)%24 << " minute: " << 30+ti->tm_min << " second: " << ti->tm_sec << endl;
            //assigning value to local variable
            hour = (5+ti->tm_hour)%24;
            min = 30+ti->tm_min;
            sec = ti->tm_sec;
            return 0;        
        }
        Time getTime()
        {
            Time temp;
            temp.hour = hour;
            temp.min = min;
            temp.sec = sec;
            return temp;
        }
        Time sleepTime(Time naptime,Time wakeup)
        {
            Time temp;
            temp.hour = wakeup.hour - naptime.hour;
            temp.min = wakeup.min - naptime.min;
            temp.sec = wakeup.sec - naptime.sec;
            return temp;
        }
};

//class for date
class Date
{
    public:
        int day,month,year;
        int setDate()
        {
            //reading current date
            time_t tt;
            struct tm *ti;
            time(&tt);
            ti = localtime (&tt); 
            cout << ti->tm_mday << endl;
            cout << 1+ti->tm_mon << endl;
            cout << 1900+ti->tm_year << endl;
            //assign local variable
            day = ti->tm_mday;
            month = 1+ti->tm_mon;
            year = 1900+ti->tm_year;
            return 0;
        }
        Date getDate()
        {
            Date temp;
            temp.day = day;
            temp.month = month;
            temp.year = year;
            return temp;
        }
        Date setDoB(int a,int b,int c)
        {
            Date dob;
            dob.day = a;
            dob.month = b;
            dob.year = c;
            return dob;
        }
        Date findAge(Date dob)
        {
            Date age,d1=getDate();
            age.day = d1.day - dob.day;
            age.month = d1.month - dob.month;
            age.year = d1.year - dob.year;
            return age;
        }
};

int main ()
{
    Time t1,t2,t3,timeatSleep,timeatWake;
    t1.setTime();
    t2 = t1.getTime();
    cout << "values return from getTime" << endl;
    cout << "Hour:" << t2.hour << " min: " << t2.min << " sec: " << t2.sec << endl;
    cout <<  "Calculating sleep time." << endl;
    //time before sleep
    t1.setTime();
    timeatSleep = t1.getTime();
    //sleep
    sleep(5);
    //time after wake up
    t1.setTime();
    timeatWake = t1.getTime();
    //difference of sleep and wake time
    t3 = t1.sleepTime(timeatSleep,timeatWake);
    cout << "Time spend in sleep:" << endl;
    cout << "Hour:" << t3.hour << " min: " << t3.min << " sec: " << t3.sec << endl;
    cout << " " << endl;

    Date d1,d2,dob,d4;
    d1.setDate();
    d2 = d1.getDate();
    cout << "day:" << d2.day << " month: " << d2.month << " year: " << d2.year << endl;
    dob = d1.setDoB(06,04,2001);
    cout << "your date of birth is : \nday: " << dob.day << " month: " << dob.month << " year: " << dob.year << endl;
    //age of person
    d4 = d1.findAge(dob);
    cout << "your age is : " << d4.day << " days" << d4.month << " months and " << d4.year << " years." << endl;
    return 0;
}