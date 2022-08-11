#include<iostream>
using namespace std;

int evenFib(int lim)
{
    if (lim < 2)
        return 0;

    long long int f1 = 0, f2 = 2;
    long long int sum = f1 + f2;

    while (f2 <= lim)
    {
        long long int f3 = 4 * f2 + f1;

        if (f3 > lim)
            break;

        f1 = f2;
        f2 = f3;
        sum += f2;
    }

    return sum;
}

int main()
{
    int lim = 4000000;
    cout << evenFib(lim);
    return 0;
}