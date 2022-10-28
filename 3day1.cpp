#include <iostream>
using namespace std;
int main(){
    int n,f=1,s=0;
    cout<<"Enter nth value: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        f=f*i;
        s=s+f;
    }
    cout<<s;
}