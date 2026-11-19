#include<iostream>
#include<string>
using namespace std;
int main(){
    int X=0,n;
    string x;
    cin>>n;
    while(n--){cin>>x;
        if(x=="++X"||x=="X++") ++X;
        else --X;
    }
    cout<<X;
        return 0;
}