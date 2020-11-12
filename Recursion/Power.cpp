#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int nm1power = power(x, n - 1);
    return x * nm1power;
}

int main()
{
    int n;
    int x;
    cin >> x >> n;
    int P = power(x, n);
    cout << P << endl;
}