#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 1;
    int n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (i <= 0)
    //         {
    //             cout << a;
    //         }

    //         else if (j <= 0 && i <= 1)
    //         {
    //             cout << b << "\t";
    //         }

    //         else
    //         {

    //             cout << a + b << "\t";

    //             int c = a + b;

    //             a = b;
    //             b = c;
    //         }
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << "\t";

            int c = a + b;

            a = b;
            b = c;
        }
        cout << endl;
    }
}