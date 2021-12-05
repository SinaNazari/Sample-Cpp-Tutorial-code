#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

// Find Maximum Between Three Number

void func(int, int, int);

int main()
{
    int num1, num2, num3;
    cout << "Please enter Number One:" << endl;
    cin >> num1;
    cout << "Please enter Number Tow:" << endl;
    cin >> num2;
    cout << "Please enter Number Three:" << endl;
    cin >> num3;

    func(num1, num2, num3);

    getch();
    return 0;
}

void func(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "Number One is Maximum";
    }
    else if (b > c && b > a)
    {
        cout << "Number Tow is Maximum";
    }
    else if (c > b && c > a)
    {
        cout << "Number Three is Maximum";
    }
}
