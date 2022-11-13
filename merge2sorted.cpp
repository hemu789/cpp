#include <iostream>
using namespace std;

void merge(int a1[], int n, int a2[], int m, int a3[])
{

    int i = 0, j = 0;
    // starting ind of both array
    int k = 0;
    // for third ind
    while (i < n && j < m)
    {

        if (a1[i] < a2[j])
        {
            a3[k] = a1[i];
            i++;
            k++;
        }
        else
        {
            a3[k] = a2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        a3[k] = a1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        a3[k] = a2[j];
        j++;
        k++;
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

    int arr1[4] = {1, 4, 7, 9};
    int arr2[5] = {0, 2, 5, 11, 13};

    int arr3[9] = {0};

    merge(arr1, 4, arr2, 5, arr3);

    printArray(arr3, 9);
    return 0;
}