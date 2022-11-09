// CODE STUDIO
// Single element print n remaining are repeatable

// 7 2 5 3 2 5 7
//  o/p: 3

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void takeInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    takeInput(arr, n);

    //*******-----------------***********- approach 1

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;

        return 0;
}