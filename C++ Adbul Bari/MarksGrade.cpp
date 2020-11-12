#include <iostream>
using namespace std;

class student
{
    int RollNo;
    string name;
    int maths;
    int sci;
    int sst;

    student(int a, string b, int c, int d, int e)
    {
        RollNo = a;
        name = b;
        maths = c;
        sci = d;
        sst = e;
    }

    int Total();

    int Average();
}

int
student::Total()
{
    return c + d + e;
}
int main(void)
{
}