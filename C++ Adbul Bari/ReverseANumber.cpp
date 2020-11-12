#include <iostream>

using namespace std;

int main(void)
{
    int num;
    int rev = 0;

    cout << "Enter a number to be reversed " << endl;

    cin >> num;

    int n = num;

    while (n != 0)

    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    cout << "The Reverse of the number is " << rev << endl;

    if (num == rev)
        cout << "The number is a palindrome" << endl;

    else
    {
        cout << "The number is not a palindrome" << endl;
    }

    return 0;
}
