#include<iostream>
using namespace std;

int main(){

    int n=6;
    int arr[n]={1,2,3,6,8};
   
    int data=50;
    int position=3; //index


    // Insertion

    for(int i=n-1;i>=position;i--){
        arr[i+1]=arr[i];
    }

    arr[position]=data;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // Deletion

    for(int i=position;i<n;i++){

        arr[i]=arr[i+1];
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}