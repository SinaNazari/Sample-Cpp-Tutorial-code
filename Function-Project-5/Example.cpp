#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//Find Factorial Number?

unsigned long func(unsigned int);

int main()
{
    int n;
    cout << "Please Enter Number:" << endl;
    cin >> n;

    unsigned long x;
    x = func(n);
    cout << "Factorial  Number is:" << x;

    getch();
    return 0;
}

unsigned long func(unsigned int n)
{
    unsigned long f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}