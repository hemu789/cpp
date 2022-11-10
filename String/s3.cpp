#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="abcdcba";

        // BF
    // string rev=s;

    // reverse(rev.begin(),rev.end());
    // //cout<<rev<<endl;

    // if(s==rev){
    //     cout<<"true" <<" ";
    // }
    // else{
    //     cout<<"false";
    // }

    bool flag=0;
    int i=0,e=s.size()-1;
    while(i<=e){
        if(s[i]==s[e]){
            i++;
            e--;
        }

        else{
            flag=1;
        }

    }
    if(flag==1){
        cout<<"Not Pal"<<" ";
    }
    else{
        cout<<"pali"<<" ";
    }
    return 0;
}