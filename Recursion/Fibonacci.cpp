#include <iostream>
using namespace std;
int fibonacci(int n);

int main(void)
{

    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
}
 
int fibonacci(int a)
{
    if (a == 0)
    {
        return 0;
    }

    if (a == 1)
    {
        return 1;
    }
    int small1 = fibonacci(a - 1);
    int small2 = fibonacci(a - 2);
    return small1 + small2;
}