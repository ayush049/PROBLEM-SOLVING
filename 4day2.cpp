// #include <bits/stdc++.h>
// using namespace std;
// float median(int a[],int n){
//     if(n/2!=0){
//         return (float)(a[n/2]);
//     }
//     else
//         return (float)((a[(n - 1) / 2] + a[n / 2]) / 2.0);
// }
// float mean(int a[],int n){
//     int s=0;
//     for(int i=0;i<n;i++){
//         s=s+a[i];
//     }
//     return (float)(s/n);   
// }
// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the numbers: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Mean is: "<<mean(a,n)<<endl;
//     cout<<"Median is: "<<median(a,n);  
// }


#include <bits/stdc++.h>
using namespace std;
int mean(int a[], int n){
   int s = 0.0;
   for (int i = 0; i < n; i++)
      s += a[i];
   return float(s/n);
}
void median(int a[], int n){
    sort (a,a+n);
    cout<<"Median is : ";
    if(n%2==0){
        cout << (a[n/2] + a[(n/2) - 1])/2 ;
    }
    else{
        cout << a[n/2];
    }

}
int main(){
   int a[] = {3,5,2,1,7,8};
   int n = 6 ;
   cout << "Mean is : " << mean(a, n)<<endl;
   median(a,n);
   return 0;
}