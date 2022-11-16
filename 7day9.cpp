// PROGRAM TO FIND ALL SUFFIX OF A STRING

#include<iostream>
#include<string.h>
using namespace std;
void suffix(string s){
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=i+1;j>=0;j--){
            cout<<s[n-j];
        }
        cout<<endl;
    }
}
int main(){
    string s;
    cin>>s;
    suffix(s);
}