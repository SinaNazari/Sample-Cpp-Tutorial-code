#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

// Is The Number Even Or Odd?

int func(int);

int main()
{
    int i;
    cout << "Please Enter Number:" << endl;
    cin >> i;
    if (func(i))
    {
        cout << "Number Is Odd!";
    }else
    {
        cout <<"Number is Even";
    }

    getch();
    return 0;
}

int func(int n){
    int num=1;
    if(n %2==0){
        num=0;
    }
    return num;
}