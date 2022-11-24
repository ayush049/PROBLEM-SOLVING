#include<bits/stdc++.h>
using namespace std;
int main(){
    int r=0,c=0;
    cout<<"Enter number of rows and columns matrix: ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter matrix elements"<<" ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int fr=0,fc=0;
    int lr=r-1,lc=c-1;
    while(fr<=lr & fc<=lc){
        for(int i=fc;i<=lc;i++){
            cout<<a[fr][i];
        }
        fr++;
        for(int i=fr;i<=lr;i++){
            cout<<a[i][lc];
        }
        lc--;
        if(fc<=lc){
            for(int i=lc;i>=fc;i--){
            cout<<a[lr][i];
            }
        }
        lr--;
        if(fr<=lc){
            for(int i=lr;i>=fr;i--){
            cout<<a[i][fc];
            }
        }
        fc++;
    }
}
