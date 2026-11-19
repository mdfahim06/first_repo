#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2,res;
    int i=0,n;
    cin>>s1;
    cin>>s2;
    if(s1.length()==s2.length()){
        for(i;i<s1.length();i++){
            if(s1[i]==s2[i]) res=res+"0";
            if(s1[i]!=s2[i]) res=res+"1";
            
        }
    }
    cout<<res;
    return 0;

}
