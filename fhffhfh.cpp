#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string s;
    int x;
    cin>>s;
    set<char>uword;
    for(char c:s){
        uword.insert(c);
        
    }
    x=uword.size();
    if(x%2==0) cout<<"CHAT WITH HER!" ;
    else cout<<"IGNORE HIM!" ;
    return 0;
}
