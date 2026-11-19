#include<iostream>
using namespace std;
int main(){
    int maxpass=0,currpass=0,in,out,n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>out>>in;
    currpass=currpass-out+in;
    if(maxpass<currpass){maxpass=currpass;}}
cout<<maxpass;
return 0;

}