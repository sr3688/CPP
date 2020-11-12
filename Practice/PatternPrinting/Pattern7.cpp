#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int star = 1;

    int tab = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < tab; j++)
        {
            cout << "\t";
        }

        cout << "*" << endl;

        tab++;
    }
}