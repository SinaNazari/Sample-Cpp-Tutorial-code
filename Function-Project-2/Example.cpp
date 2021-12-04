#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void func();

int main()
{
    int x = 3;
    cout <<"x value in main="<<x<<endl;
    func();
    getch();
    return 0;
}

void func()
{
    int x=5;
    cout <<"x value in func="<<x<<endl;
}