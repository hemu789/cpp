#include<iostream>
using namespace std;

int main(){

    // char x='a';
    // cout<<int(x);
    
    string s="geeksforgeeks";
    int count[26]={0};

    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;

        // g-a -> 6 index 
    }

    for(int i=0;i<26;i++){

        if(count[i]> 0){

            cout<<(char)(i+'a')<<" "<< count[i] <<endl;
        }
    }
    return 0;
}