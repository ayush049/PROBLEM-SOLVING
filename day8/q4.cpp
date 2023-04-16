// Given an odd-digit-number N, you need to find whether the given number is a balanced-number or not.
// An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit and 
//the sum of all  digits to the right of the middle digit is equal. 
//Note:- The number of digits of 1234006. is 7, i.e. odd digits.
// The middle digit is 4. LHS sum is 1+2+3=6, and RHS sum is 0+0+6=6.


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 vector<int>v;
 int s=0,s1=0,s2=0;
 while(n!=0){
    int r=n%10;
    v.push_back(r);
    r=0;
    n=n/10;
    } 
    for(int i=0;i<v.size();i++){ 
    s+=v[i];
    }
    for(int j=0;j<v.size()/2;j++){
        s1+=v[j];
    }
    for(int k=v.size()/2 +1; k<v.size();k++){
        s2+=v[k];
    }
    if(s1==s2)
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    
}