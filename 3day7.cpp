//Write a program to find the sum of the series using the function: 1/1!-2/3!+3/5!-4/7!+…

#include <bits/stdc++.h>
using namespace std;
void fsum(int n){
    int f=1,sign=1;
    float s=0;
    for(int i=0;i<n;i++){
        f=f*(2*i+1);
        s=s+sign*(i/f);
        sign=sign*(-1);
    }
    cout<<s;
}
int main(){
    int n;
    cin>>n;
    fsum(n);
}


//  answer not coming