#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//Examples For Better Understanding Function

// Sample(1)

int f(int x)
{
    return 2 * x;
}

int main()
{
    int a = 2;
    int b;
    b = f(a);
    cout << b;

    getch();
    return 0;
}

//Sample(2)

 int f(int x); //Prototype

int main()
{
    int a = 2;
    int b;
    b = f(a);
    cout << b;

    getch();
    return 0;
}

int f(int x)
{
    return 2 * x;
}

//Sample(3)

int f(int a, int b);
int main()
{
    int a, b, z;
    cout << "Please Enter Number:" << endl;
    cin >> a;
    cout << "Please Enter Number:" << endl;
    cin >> b;

    z = f(a, b);
    cout << z;

    getch();
    return 0;
}

int f(int a, int b)
{
    return a + b;
}