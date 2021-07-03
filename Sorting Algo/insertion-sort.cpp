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

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {   
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    };

    cout << "Sorted: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };

    cout << endl;

    return 0;
}