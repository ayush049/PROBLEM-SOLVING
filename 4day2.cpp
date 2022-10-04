#include <bits/stdc++.h>
using namespace std;
float median(int a[],int n){
    if(n/2!=0){
        return (float)(a[n/2]);
    }
    else
        return (float)((a[(n - 1) / 2] + a[n / 2]) / 2.0);
}
float mean(int a[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    return (float)(s/n);
    
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n];
    cout<<"Enter the numbers: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Mean is: "<<mean(a,n)<<endl;
    cout<<"Median is: "<<median(a,n);  
}

