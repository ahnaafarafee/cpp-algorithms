#include <bits/stdc++.h>
using namespace std;


int main()
{

    int arr[] = {5, 21, 4, 101, 76, 42, 1};

    int n = sizeof(arr) / sizeof(int); // calculating the size of the array // arr -> 4 bytes each --> int 4 bytes

    cout << "Unsorted: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };

    cout << endl;

    // bubble sort
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        };
    };

    cout << "Sorted: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };

    cout << endl;

    return 0;
}