#include<iostream>
using namespace std;
int main(){
    int  l,b;
    int i=1;
    cin>>l>>b;
    while(1){
        if((b=2*b)<(l=3*l)){break;}
        i++;
    }
    cout<<i;
    return 0;

}