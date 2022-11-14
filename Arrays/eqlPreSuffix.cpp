#include <iostream>
using namespace std;

    // Prefix Sum
    void prefix(int arr[], int n, int ans[]){

        for (int i = 0; i < n; i++)
        {

            if (i == 0)
            {
                ans[i] = ans[i] + arr[i];
            }
            if (i > 0 && i < n)
            {
                ans[i] = ans[i - 1] + arr[i];
            }
        }
    }

    // Total sum
    void totalSum(int arr[], int n,int sum=0){

        for(int i=0;i<n;i++){
            sum+=arr[i];
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

    int arr[5] = {5, 4, 1, 2, 3};
    int ans[5] = {0};
    int sum=0;


    prefix(arr,5,ans);
    totalSum(arr,5,sum);
    
    cout << "Answer Array" << endl;

    printArray(ans, 5);

    return 0;
}