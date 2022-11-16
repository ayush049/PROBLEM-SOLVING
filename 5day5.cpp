#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i+2){
        cout<<i<<" ";
    }
    for(int i=n;i>=2;i=i-2){
        cout<<i<<" ";
    }
}