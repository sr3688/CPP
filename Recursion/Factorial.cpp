#include <iostream>
using namespace std;
int factorial(int n);
int main(void)
{
    int n;
    cin >> n;
    int facto = factorial(n);
    cout << facto << endl;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int samllerProduct = factorial(n - 1);

    return n * samllerProduct;
}