#include <iostream>

using namespace std;

int main(void)
{

    int arr1[10][10];

    int arr2[10][10];

    int arr3[10][10];

    int a, b, c, d;

    cout << "enter matrix 1 row and column"
         << " ";
    cin >> a >> b;
    cout << endl;
    cout << "enter matrix 2 row and column"
         << " ";
    cin >> c >> d;
    cout << endl;

    if (a == c && b == d)
    {

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << "Enter the " << i + 1 << " " << j + 1 << " "
                     << "element of Matrix 1: "
                     << " ";
                cin >> arr1[i][j];
                cout << endl;
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {

                cout << "Enter the " << i + 1 << " " << j + 1 << " "
                     << "element of Matrix 2: "
                     << " ";
                cin >> arr2[i][j];
                cout << endl;
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {

                arr3[i][j] = arr1[i][j] * arr2[i][j];
            }
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {

                // cout << "The Product of Matrix 1" << i << " " << j << "and"
                //      << "Matrix 2 element" << i << " " << j << "is: " << arr3[i][j] << endl;
                cout << arr3[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrices are not equal so can't be multiplied" << endl;
    }
    return 0;
}