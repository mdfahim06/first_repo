#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int c1=1,c2=0;
    cin>>s;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) 
        {c1++;
            if(c1>=7){ cout<<"YES";
            return 0;}}
            else c1=1;
    }
    cout<<"NO";
    return 0;
}