#include <iostream>
using namespace std;

int main()
{
    
    const int SIZE=100;
    int n;
    cin >> n;
    if (n > 0 && n <= SIZE)
    {
        unsigned int a[SIZE];
        for (int i = 0; i < n; i++)
        {
            int element = 0;
            int tmp = 0;
            cin >> element;
            a[i] = element * element;
            for (int j = i; j > 0; j--)
            {
                if (a[j] < a[j - 1])
                {
                    tmp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = tmp;
                }
            }
            
        }
        unsigned int b[SIZE];
        for (int i = 0; i < n; i++)
        {   
            b[i] = a[i];
            cout<<b[i]<<" ";
        }
    }
    else
    {
        cout<<"array length cant be <= 0 or >= 100 or symbols!";
    }
    return 0;
}
