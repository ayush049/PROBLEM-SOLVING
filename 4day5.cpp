// PRIME NUMBER

// #include<bits/stdc++.h>
// using namespace std;
// int prime(int n){
//     int flag=0;
//     for(int i=2;i<=n;i++){
//         if(n%i==0)
//             flag=1;
//             break;
//     }
//     if(flag==0)
//         return flag;
//     return -1;
// }
// int main(){
//     int n,ind;cin>>n;
//     ind=prime(n);
//     if(ind!=-1)
//         cout<<"Prime";
//     else
//         cout<<"Not prime";
// }

//PRIME NUMBER IN A RANGE 
#include<bits/stdc++.h>
using namespace std;
int prime(int l,int h){
    int flag=0;
    for(int i=l;i<=h;i++){
        for(int j=l;j<=i;j++){
            int a=i%j;
            if(a!=0)
                flag=1;
                return a;
                break;
        }
        
    }
    // if(flag==0)
    //     return flag;
    return -1;
}
int main(){
    int l,h,ind;
    cin>>l>>h;
    cout<<prime(l,h);
    // if(ind!=-1)
    //     cout<<"Prime";
    // else
    //     cout<<"Not prime";
}



