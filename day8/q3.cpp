// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. 
// For example, if we conisder 98, we get 9+8 = 17 after first addition.
// Then we get 1+7 = 8. We stop at this point because we are left with one digit.

#include<iostream>
#include<math.h>
using namespace std;
int digitsum(int n){
    int s=0;
    int r=0;
    if(s<10)   
        return s;
    else{
        r=n%10;
        s+=r;
        return digitsum(n/10);
    }
}
int main(){
    int num;
    cin>>num;
    cout<<digitsum(num);
    
}