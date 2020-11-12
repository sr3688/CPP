#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int space1 = n / 2;
    int space2 = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space1; j++)
        {
            cout << "\t";
        }

        cout << "*\t";

        for (int k = 0; k < space2; k++)
        {
            cout << "\t";
        }

        if (i > 0 && i < n - 1)
        {
            cout << "*\t";
        }

        cout << endl;

        if (i < n / 2)
        {
            space1--;
            space2 += 2;
        }
        else
        {
            space1++;
            space2 -= 2;
        }
    }
}