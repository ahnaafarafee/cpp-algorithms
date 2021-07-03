#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{

    int arr[MAX];
    int n;

    cout << "Enter a number N: ";
    cin >> n;

    // randomly inserting values in array
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    };

    // outputing the unsorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };

    cout << endl;

    // sorting the array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i]) // ">" will be desceding
            {
                // they are not in the correct order -> swap them
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                swap(arr[i], arr[j]);
            }
        };
    };

    // outputing the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    };

    cout << endl;

    return 0;
}