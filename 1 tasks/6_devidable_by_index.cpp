#include <iostream>
using namespace std;

int main()
{
	int a[] = { 1, 2, 3, 666, 999, 1021, 5555 };
	int count = 0;
	int n = sizeof(a) / sizeof(a[0]);
	for (int i = 1; i < n; i++)
	{
		if (a[i] % i == 0)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}