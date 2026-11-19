#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s,num;
    cin>>s;
    for(char c:s){
        if(c!='+'){num.push_back(c);}
    }
    sort(num.begin(),num.end());
    for(int i=0;i<num.length();i++){
        cout<<num[i];
        if(i!=num.length()-1)
        cout<<'+';
    }
    return 0;

}