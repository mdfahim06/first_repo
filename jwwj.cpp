#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int i,c1=0,c2=0;
    cin>>i>>s;
   
    for(int n=0;n<i;n++){
        if(s[n]=='A') c1++;
        else c2++;
    }
    if(c1>c2) cout<<"Anton";
    else if(c1<c2) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}