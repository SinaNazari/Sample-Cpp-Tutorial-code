#include <iostream>
#include <conio.h>

using namespace std;

int fact(int);

int Main()
{
    float sum = 0;
    int n, I, j, fact = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        { 
            sum = sum + fact / i;
        }
    }
    cout << sum;

    getch();
    return 0;
}
