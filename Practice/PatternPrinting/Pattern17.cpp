#include <iostream>

using namespace std;

int main(void)

{

    int n;
    cin >> n;

    int space = n / 2;
    int star = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            if (i == (n / 2))
            {
                cout << "*"
                     << "\t";
            }
            else
            {
                cout << "\t";
            }
        }

        for (int k = 0; k < star; k++)
        {
            cout << "*"
                 << "\t";
        }
        if (i < (n / 2))
        {
            star++;
        }

        else
        {
            star--;
        }
        cout << endl;
    }
}