#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//Multiply a number by itself

int func(int);

int main()
{
    int i;
    cout << "Please Entter Number:";
    cin >> i;

    cout << func(i);

    getch();
    return 0;
}

int func(int a)
{
    return a * a;
}