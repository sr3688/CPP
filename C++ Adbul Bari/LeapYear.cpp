#include<iostream>

using namespace std;

int main (void)

{
    int LeapYear;

    cout<<" Enter a year to find if it is a leap year or not "<<endl;
    cin>>LeapYear;

    if(LeapYear%100==0)
    {
        if(LeapYear%400==0)
        {
            cout<<"This is a Leap Year"<<endl;
        }

        else
        {
            cout<<"This is not a Leap Year"<<endl;
        }
        
    }

    else if(LeapYear%4==0)
    {
        cout<<" This is a leap Year"<<endl;
    }

    else
    {
        cout<<"This is not a Leap Year"<<endl;
    }
    
return 0;

}