#include <iostream>

using namespace std;

int main(void)
{
    float arr[100];
    float sum = 0;
    float avg = 0.0;
    int count = 0;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;

    cout << avg << endl;
}