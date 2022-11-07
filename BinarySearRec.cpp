#include <iostream>
using namespace std;

bool BinarySearch(int *arr, int key, int s, int e)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        // right side me element hoga
        // s=mid+1;
        BinarySearch(arr, key, mid + 1, e);
    }
    else
    {
        // elem is present at left
        BinarySearch(arr + 1, key, s, mid - 1);
    }
}

int main()
{

    int n = 5;
    int arr[] = {20, 0, 4, 62, 9};
    int key;
    cout << "Enter key " << endl;
    cin >> key;

    if (BinarySearch(arr, key, 0, n - 1))
    {
        cout << "Element Found " << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    return 0;
}