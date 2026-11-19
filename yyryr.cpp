#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long m,n,a,x,y;
    cin>>m>>n>>a;
    x=ceil((double)m/a);
    y=ceil((double)n/a);
    cout<<x*y;
    return 0;

}