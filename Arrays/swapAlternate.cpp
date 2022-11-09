// arr : 3 5 2 1 0 9
// o/p : 5 3 1 2 9 0

#include<iostream>
using namespace std;

void takeInput(int arr[], int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


void printArray(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    takeInput(arr,n);
    
    // swap alternate elements

    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

    printArray(arr,n);
    
    return 0;
}