#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int removedup(int arr[], int n)
{

    int temp[n];
    int res = 1;
    temp[0]=arr[0];

    for (int i = 1; i < n; i++)
    {

        if (temp[res - 1] != arr[i])
        {

            temp[res] = arr[i];
            res++;
        }
    }

    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}

int main()
{

    int arr[5] = {0, 0, 1, 1, 1};
    int n = 5;

    int ans = removedup(arr, n);
    cout<<ans<<endl;
    printArray(arr,n);
    return 0;
}