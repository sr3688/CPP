#include<iostream>
using namespace std;

int powerlogn(int n,int x)
{
    if(n==0)
    {
        return 1;
    }


    int ProductOfHalf= powerlogn(n/2,x);
    int xn=ProductOfHalf*ProductOfHalf;

    if(n%2==1)
    {
        xn*=x;
    }

    return xn;

}

int main(void)
{
    int n;
    cin>>n;
    int x;
    cin>>x;

    int power=powerlogn(n,x);
    cout<<power<<endl;
}