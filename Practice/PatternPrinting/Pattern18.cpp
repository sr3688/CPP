#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    // int star = 1;
    // int space = n / 2;
    int space = 0;
    int star = n;

    for (int l = 0; l < n; l++)
    {
        for (int m = 0; m < space; m++)
        {
            cout << "\t";
        }

        for (int p = 0; p < star; p++)
        {
            if (l > 0 && l < (n / 2) && p > 0 && p < star - 1)
            {
                cout << "\t";
            }
            else
            {
                cout << "*"
                     << "\t";
            }
        }

        if (l < (n / 2))
        {
            space++;
            star -= 2;
        }
        else
        {
            space--;
            star += 2;
        }
        cout << endl;
    }
}

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n;
//     cin >> n;

//     int star = 1;
//     int space = n / 2;

//     for (int l = 0; l < n / 2; l++)
//     {
//         for (int m = 0; m < n; m++)
//         {
//             if (l == 0)
//             {
//                 cout << "*"
//                      << "\t";
//             }
//             else if (l == m || l + m == n - 1)
//             {
//                 cout << "*"
//                      << "\t";
//             }
//             else
//             {
//                 cout << "\t";
//             }
//         }
//         cout << endl;
//     }

//     for (int i = 0; i <= n / 2; i++)
//     {
//         for (int j = 0; j < space; j++)
//         {
//             cout << "\t";
//         }

//         for (int k = 0; k < star; k++)
//         {
//             cout << "*"
//                  << "\t";
//         }
//         space--;
//         star += 2;
//         cout << endl;
//     }
// }