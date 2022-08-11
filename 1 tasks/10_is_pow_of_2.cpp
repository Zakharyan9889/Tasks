# include <iostream>
using namespace std;

void is_power_of_two(int n)
{
    if (n == 0)
    {
        cout << "not a power of 2" << endl;
        return;
    }
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            cout <<"not a power of 2" << endl;
            return;
        }
        n = n / 2;
    }
    cout << "is a power of 2" << endl;
}

int main()
{
    is_power_of_two(1024);
    return 0;
}