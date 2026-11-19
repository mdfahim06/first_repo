#include<iostream>
using namespace std;
int main(){
    int x,a,b,c,d;
    cin>>x;
    while(1){
        x++;
        a=x/1000;
        b=(x/100)%10;
        c=(x/10)%10;
        d=x%10;
        if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d){
            cout<<a<<b<<c<<d;
            break;
        }
    }
            return 0;


}