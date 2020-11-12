#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int space = n - 2;
    int star = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1)
            {
                cout << "*"
                     << "\t";
            }

            else if (i >= n / 2 && (i == j || i + j == n - 1))
            {
                cout << "*"
                     << "\t";
            }

            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }
}