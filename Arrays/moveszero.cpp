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


void movesZero(int arr[], int n){

    int cnt=0;

    for(int i=0;i<n;i++){
        swap(arr[i],arr[cnt]);
        cnt++;
    }
}

int main(){


    int arr[5]={1,0,2,0,1};
    int n=5;


    movesZero(arr,n);
    printArray(arr,n);
    return 0;
}