#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int star = n / 2;

    int tab = 1;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i <= star; i++)
        {
            cout << "*"
                 << "\t";
        }

        for (int i = 0; i < tab; i++)
        {
            cout << "\t";
        }

        for (int i = 0; i <= star; i++)
        {
            cout << "*"
                 << "\t";
        }

        cout << "\t" << endl;

        if (i < n / 2)
        {
            star--;
            tab = tab + 2;
        }

        else
        {
            star++;
            tab = tab - 2;
        }
    }
}