#include<iostream>
using namespace std;


    bool check( string s1, string s2, int s1len, int s2len){

        int j=0;
        for(int i=0;i<s1len;i++){
            while(j<s2len){

                if(s1[i]==s2[j]){
                    j++;
                    i++;
                }
                else{
                    i++;
                }
            }
        }
        return (j==s2len);
    }


int main(){

    string s1;
    getline(cin,s1);
    int s1len=s1.size();

    string s2;
    getline(cin, s2);
    int s2len = s2.size();

    bool ans=check(s1,s2,s1len,s2len);

    if(ans){
        cout<<"Sub Sq "<<endl;
    }
    else{
        cout<<"Not Sq"<<endl;
    }
    return 0;
}