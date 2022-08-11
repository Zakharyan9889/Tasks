#include <iostream>
using namespace std;

int binarySearchIter(int arr[], int l, int r, int s)
{
	while (l <= r)
	{
		int m = l + (r - l) / 2;
		if (arr[m] == s)
			return m;
		if (arr[m] < s)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

int binarySearchRecurs(int arr[], int l, int r, int s)
{
	while (r >= l)
	{
		int m = l + (r - l) / 2;
		if (arr[m] == s)
			return m;
		if (arr[m] > s)
			return binarySearchRecurs(arr, l, m-1, s);
		else
			return binarySearchRecurs(arr, m+1, r, s);
	}
	return -1;
}
int main()
{	
	int arr[5];
	int value;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cin >> value;
	cout << endl;
	int res1 = binarySearchIter(arr, 0, 5, value);
	int res2 = binarySearchRecurs(arr, 0, 5, value);

	cout << res1 << endl;
	cout << res2 << endl;

	return 0;
}