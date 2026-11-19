#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int p=0,i=0,n;
    cin>>n;
    while(i<n){
        cin>>s;
        if(s=="Tetrahedron") p=p+4;
        if(s=="Cube") p=p+6;
        if(s=="Octahedron") p=p+8;
        if(s=="Dodecahedron") p=p+12;
        if(s=="Icosahedron") p=p+20;
        else p=p+0;
        i++;
    }
    cout<<p;
    return 0;

}
