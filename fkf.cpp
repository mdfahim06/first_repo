#include<iostream>
using namespace std;
int main(){
    int i,j,x,a,b;
    int m[6][6];
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>m[i][j];
            if(m[i][j]==1)
            {
                a=i;
                b=j;
            
            }

        }
            
    }
        x=abs(a-3)+abs(b-3);
            cout<<x;
            return 0;


}