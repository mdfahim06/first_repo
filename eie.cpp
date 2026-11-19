#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    s1="hello";
    int i,k=0;
    cin>>s2;
    for(i=0;i<s2.length();i++){
        if(s2[i]==s1[k]) k++;
        else continue;
    }
    if(k==s1.length()) cout<<"YES";
    else cout<<"NO";
return 0;

}