#include <bits/stdc++.h>
using namespace std;

// https://youtu.be/59D6i60zqrg

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

    // selection sort
    for (int i = 0; i < n; i++)
    {
        int smallest = arr[i];
        int smallestIndex = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < smallest)
            {
                smallest = arr[j];
                smallestIndex = j;
            }
        };
        swap(arr[i], arr[smallestIndex]);
    };

    cout << "Sorted: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };

    cout << endl;

    return 0;
}