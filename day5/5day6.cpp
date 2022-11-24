//You have been given an array/list(ARR) of size N.
//You need to swap every pair of alternate elements in the array/list. 
//You don't need to print or return anything, just change in the input array itself.

//wrong solution

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int j=0;j<n-1;j++){
        swap(a[j],a[j+2]);
        // temp=a[j];
        // a[j]=a[j+2];
        // a[j+2]=temp;
        cout<<a[j]<<endl;
        if(j==n-1||j==n)
            cout<<j<<endl;
        // if(j==n-1)
        //     break;
    }
    for(i=0;i<n;i++){
        cout<<a[i];
    }
}