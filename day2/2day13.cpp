#include<iostream>
using namespace std;
void pattern(int n,int m,int flag){
    if(n>0){
        n=n-5;
        cout<<n<<" ";
        return pattern(n,m,flag);  
    }
    else if(n<0){
        n=n+5;
        cout<<n<<" ";
        // return pattern(n);
    }
    else if(n==0 && n==m){
        flag=1;
        n=n+5;
        cout<<n<<" ";
        return pattern(n);
    }
    
//     else if(n==m){
//         cout<<m;
//    }
}
int main(){
    int n;
    cin>>n;
    int m = n;
    int flag=1;
    pattern(n,m,flag);
}