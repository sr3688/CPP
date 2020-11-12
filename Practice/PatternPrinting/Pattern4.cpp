#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "\t"; // 0 1 2 3 4
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" // 5 4 3 2 1
                 << "\t";
        }
        cout << endl;
    }
    // int space = 0;
    // int star = n - 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << "\t";
    //     }

    //     for (int j = 1; j <= star; j++)
    //     {
    //         cout << "*"
    //              << "\t";
    //     }
    //     cout << endl;
    //     space++;
    //     star--;
}