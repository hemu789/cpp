#include<iostream>
using namespace std;

// best approach check only n/2 no's

bool check(int n){
    bool flag=true;

    for(int i=2;i<n/2;i++){
        if(n%i==0){
            // divisible
           flag=false;
        }
    }
    return flag;
}
int main(){

    int num;
    cout<<"Enter no "<<endl;
    cin>>num;

    if(check(num)){
        cout<<"Prime "<<endl;
    }

    else{
        cout<<"Non PRime "<<endl;
    }
    return 0;
}