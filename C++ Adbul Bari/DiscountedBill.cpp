#include<iostream>
using namespace std;

int main(void)
{
    float TotalBillAmount;

    cout<<"Enter the total billed amount "<<endl;
    cin>>TotalBillAmount;

    if(TotalBillAmount<=100)
    {
        cout<<TotalBillAmount<<endl;
    }

    else if(TotalBillAmount>100 && TotalBillAmount<=500)
    {
        float Discount= 10/100.0*TotalBillAmount;
        cout<<"Total Amount With Discount "<<TotalBillAmount-Discount<<endl;
    }

    else
    {
        float Discount= (20/100.0)*TotalBillAmount;
        cout<<"Total Amount With Discount "<<TotalBillAmount-Discount;
    }
    
    return 0;
}