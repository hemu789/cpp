#include<iostream>
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


// even pehle odd badme

// 1 2 3 4 5
// 4 2 3 1 5

void swapping(int arr[], int n){

    int s=0;
    int e=n-1;

    while(s<=e){
        if(arr[s]%2==0){
            //even present in start

            s++;
        }
        else if(arr[e]%2!=0){
            //e odd
             e--;
        }

        // else if(arr[s]%2!=0 && arr[e]%2==0)
        else
        {
            //s odd n e even
            swap(arr[s],arr[e]);
        }
    }

    return ;
}

int main(){


    int n;
    cin>>n;

    int arr[n];

    takeInput(arr,n);

    printArray(arr,n);
    swapping(arr,n);
    printArray(arr,n);

    return 0;
}