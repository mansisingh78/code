#include <iostream>
using namespace std;
int factorialN(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    cout << factorialN(4) << endl;
}