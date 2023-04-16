#include <iostream>
using namespace std;
int cat(int n){
    int s=0;
    if(n==0 || n==1)
        return 1;
    else{
        for(int i=0;i<n;i++){
            s+=cat(n-1-i)*cat(i);
        }
        return s;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<cat(n);
}