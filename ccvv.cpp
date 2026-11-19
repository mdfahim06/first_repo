#include<iostream>
using namespace std;
int main(){
    int n,s=0,h,i;
    int m;
    cin>>n>>h;
    for(i=0;i<n;i++){
            cin>>m;
        if(m<=h)
        s=s+1;
        
        else s=s+2;
    }
    cout<<s;
    return 0;
    

}