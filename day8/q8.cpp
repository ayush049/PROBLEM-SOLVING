// There are some coins given to you of the same denomination. The coins are arranged on a table to form a Pyramid.
// If the circumference of the coin is given,Find the area of trainble formed by the coins.
// If the coins do not form the trinagle, print -1.

#include<bits/stdc++.h>
using namespace std;
#define pie 3.14
int main(){
    int n,p=0,s,c;
    float area,r;
    cout<<"Enter circumference of a coin :- ";
    cin>>c;
    cout<<"Enter number of coins :- ";
    cin>>n;
    r=c/(2*pie);

    // finding number of lines
    for(int i=1; i<=n; i++){
        if(i<=n){
            n=n-i;
            p++;
        }
    }

    // side length
    s=2*(p-1)*r;

    // area
    area=(pow(3,.5)/4)*s*s;
    cout<<area<<endl;
    
    // altitude 
    cout<<(pow(3,.5)/2)*s;
}