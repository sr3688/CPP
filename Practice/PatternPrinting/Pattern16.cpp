#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int tabs = ((2 * n) - 3);
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        int counter = 1;
        // int number1 = counter;

        for (int j = 0; j < num; j++)
        {
            cout << counter << "\t";
            counter++;
        }

        for (int k = 0; k < tabs; k++)
        {
            cout << "\t";
        }
        int number2 = 0;

        // if (i == n - 1)
        // {
        //     number2 = number1 - 2;
        //     num = num - 1;
        // }
        // else
        //     number2 = number1 - 1;
        if (i == n - 1)
        {
            counter--;
            num--;
        }

        for (int l = 0; l < num; l++)
        {
            counter--;
            cout << counter << "\t";
        }
        cout << endl;
        num++;
        tabs -= 2;
    }
}