#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i,x,x1,count=0;
            string s,p;
            p="";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        if(p!=s) {count++; p=s;}
                    }
         cout<<count;
        return 0;
    }
   

