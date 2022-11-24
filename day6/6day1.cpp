// MATRIX ROTATION CLOCKWISE 90 DEGREES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns :- ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the matrix elements :- ";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<"original matrix is "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        
        }
        cout<<endl;
    }
    cout<<endl;
    // cout<<"Updated matrix: "<<endl;
    // for (int i=0; i<n; i++)
    //     for (int j=i+1; j<n; j++)
    //         swap(arr[i][j], arr[j][i]);
    // for (int i=0; i<n; i++) {
    //     int l=0, h=n-1;
    //     while (l<h) {
    //         swap(arr[i][l], arr[i][h]);
    //         l++;
    //         h--;
    //     }
    // }
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++)
    //         cout<<arr[i][j]<< " ";
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            swap(arr[i][1],arr[i][n]);
        }
    }
    cout<<endl;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}