#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s;
    int i;
    cin>>s;
    int x=s.length();
    int big=0,small=0;
    for(char c:s){
        if(isupper(c)) big++;
        else small++;

    }
    if(big>small){for(i=0;i<x;i++){
        s[i]=toupper(s[i]);
    }}else for(i=0;i<x;i++){s[i]=tolower(s[i]);}
    cout<<s;
    return 0;


}
