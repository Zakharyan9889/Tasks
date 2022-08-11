# include <iostream>
using namespace std;

int main()
{
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum1 += i;
		sum2 += i * i;
	}
	cout << sum1 * sum1 - sum2 << endl;

	return 0;
}