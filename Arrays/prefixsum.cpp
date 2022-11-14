#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[5]={5,4,1,2,3};
    int ans[5]={0};

    for(int i=0;i<5;i++){


        if(i==0){
            ans[i] = ans[i ] + arr[i];
        }
        if(i>0 && i<5){
            ans[i]=ans[i-1]+arr[i];
        }

    }

    cout<<"Answer Array"<<endl;

    printArray(ans,5);

    return 0;
}