#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    // int space = n / 2;
    // int star = 1;
    // int space1 = 1;
    // int star1 = n - 2;

    // for (int i = 0; i <= (n / 2); i++)
    // {
    //     for (int j = 0; j < space; j++)
    //     {
    //         cout << "\t";
    //     }

    //     for (int j = 0; j < star; j++)
    //     {
    //         cout << "*"
    //              << "\t";
    //     }
    //     cout << endl;
    //     space--;
    //     star = star + 2;
    // }

    // for (int i = 0; i < (n / 2); i++)
    // {
    //     for (int j = 0; j < space1; j++)
    //     {
    //         cout << "\t";
    //     }

    //     for (int j = 0; j < star1; j++)
    //     {
    //         cout << "*"
    //              << "\t";
    //     }
    //     cout << endl;
    //     space1++;
    //     star1 = star1 - 2;
    // }
    int space = n / 2;
    int star = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << "\t";
        }

        for (int k = 0; k < star; k++)
        {
            cout << "*"
                 << "\t";
        }

        cout << endl;

        if (i < n / 2)
        {
            space--;
            star += 2;
        }

        else
        {
            space++;
            star -= 2;
        }
    }
}