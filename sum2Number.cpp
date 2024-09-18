#include <iostream>
using namespace std;
// sum of 2 number
// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// }

int minOfTwo(int a, int b) // parameters
{
    if (a < b)
    {
        return 0;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << "min = " << minOfTwo(5, 3) << endl; // arguments
    // cout << sum(10, 5) << endl;
    return 0;
}