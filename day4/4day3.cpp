// factorial using non-tail recursion

#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    if(n==1)
        return 1;
    else
        return f=n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}