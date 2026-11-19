#include<iostream>
using namespace std;
int main(){
    int n,x,y,z,i,s1=0,s2=0,s3=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y>>z;
        s1=x+s1;
        s2=y+s2;
        s3=z+s3;

    }
    if(s1==0 && s2==0 && s3==0) cout<<"YES";
    else cout<<"NO";
    return 0;

}