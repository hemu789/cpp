#include<iostream>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main(){


    unordered_set<int> s;
    int n=6;
    int arr[n]={1,0,2,1,0,3};

    for(int i=0;i<n;i++){
            s.insert(arr[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}