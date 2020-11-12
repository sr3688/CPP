#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int space = n / 2;
    int num = 1;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << "\t";
        }
        int rownum = count;
        for (int k = 0; k < num; k++)
        {
            cout << rownum << "\t";
            if (k < num / 2)
            {
                rownum++;
            }
            else
                rownum--;
        }
        cout << endl;

        if (i < n / 2)
        {
            space--;
            num += 2;
            count++;
        }
        else
        {
            space++;
            num -= 2;
            count--;
        }
    }
}
