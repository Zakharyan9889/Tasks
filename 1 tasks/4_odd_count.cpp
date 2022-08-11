#include <iostream>
using namespace std;

void get_odd_count(int bottom, int top)
{
	if (top < bottom)
	{
		cout << "bottom point is bigger than top !" << endl;
	}
	else
	{
		if (top == bottom)
		{
			if (top % 2 != 0)
				cout << "bottom = top and its odd" << endl;
			else
				cout << "bottom = top and its even" << endl;
		}
		else
		{
			int count = 0;
			for (int i = bottom; i <= top; i++)
			{
				if (i % 2 != 0)
					count++;
			}
			cout << "count --> " << count;
		}
		
	}
}

int main()
{
	get_odd_count(0, 10);
	return 0;
}