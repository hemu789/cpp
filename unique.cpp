#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 2, 4};
    int n = 5;

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (arr[i] != arr[i + 1])
            {
                cout << arr[i]<<" ";
            }
        }
    }
}