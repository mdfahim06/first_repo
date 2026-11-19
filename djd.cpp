#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int arr[4];
        for(int i=0;i<4;i++) cin>> arr[i];
        sort(arr,arr+4);
        int sum=0;
        stack<int>st;
        for(int i=0;i<4;i++) st.push(arr[i]);
        for(int i=0;i<3;i++){sum=sum+st.top();
        st.pop();}
    cout<<fixed<<setprecision(2)<<sum/3.0;}
    return 0;
}

    



