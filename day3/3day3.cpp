#include <iostream>
using namespace std;
int main(){
    int n;
    float s=0.0 , f= 1.0;
    cout<<"Enter value of nth term: ";
    cin>>n;
    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    for(int i=1;i<=n;i++){
        f=f*i;
        s=s+x*(i/f);
    }
    cout<<"Sum is: "<<s;
}