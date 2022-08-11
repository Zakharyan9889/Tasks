# include <iostream>
using namespace std;

void optimized_bubble_sort(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{
    int arr[] = { 3, 4545, 65656, 666, 34334, 7070};
    int N = sizeof(arr) / sizeof(arr[0]);
    optimized_bubble_sort(arr, N);
    cout << "sorted" << endl;
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    return 0;
}