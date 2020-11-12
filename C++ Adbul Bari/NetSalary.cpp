#include<iostream>
using namespace std;
int main(void)
{
    float BasicSalary;
    float PercentageAllowance;
    float PercentageDeduction;
    float NetSalary=0;

    cout<<"Enter Basic Salary"<<endl;
    cin>>BasicSalary;
    cout<<"Enter Percentage Allowance"<<endl;
    cin>>PercentageAllowance;
    cout<<"Enter percentage Deduction"<<endl;
    cin>>PercentageDeduction;
    
    NetSalary=(BasicSalary+ ((BasicSalary*(PercentageAllowance/100))- (BasicSalary*(PercentageDeduction/100))));

    cout<<NetSalary<<endl;
    return 0;
}