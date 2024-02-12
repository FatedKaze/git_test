/* Formats
EX 1:
    first variable: 
    second variable:
    GCD:
    LCM: ((a * b) / GCD)

EX2:
    10 lines of input
    10 lines of output
    algo:

*/


#include <iostream>
using namespace std;


int gcdFunc (int a, int b)
{
    int x = a;
    int y = b;
    int z;

    if (b > a)
    {
        int x = b;
        int y = a;
    }

    while (y != 0)
    {
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int lcmFunc(int a, int b, int gcd)
{
    return (a*b)/gcd;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int gcd = gcdFunc(a, b);
    int lcm = lcmFunc(a, b, gcd);
    cout << gcd << endl;
    cout << lcm << endl; 
}