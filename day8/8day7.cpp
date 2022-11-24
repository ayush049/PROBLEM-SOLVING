//Print all prime factors of the given number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c,i,j;
    cin>>n;
    cout<<"Prime factor: ";
    for(i=2;i<n;i++){
        if(n%i==0)
             c=1;
            for(j=2; j<=i/2; j++){
                if(i%j==0){
                    c= 0;
                    break;
                }
            }
            /* If 'i' is Prime number and factor of num */
            if(c==1){
                cout<<i<<" ";
            }
    }
}