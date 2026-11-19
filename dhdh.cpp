#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s;
    int i;
    cin>>s;
    for(char c:s){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y') continue;
        else cout<<'.'<<c;
        return 0;
    }