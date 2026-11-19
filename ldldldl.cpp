#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;cin>>s;
    int n,i,count=0;
    n=s.length();
    for(i=0;i<n;i++){
        if(s[i]=='7'||s[i]=='4'){count++;}
    }
    if(count==4||count==7) cout<<"YES";
    else cout<<"NO";
    return 0;

}