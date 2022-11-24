// PROGRAM TO FIND ALL PREFIX OF A STRING 
#include<iostream>
#include<string.h>
using namespace std;
void prefix(string s){
    for(int i=0;i<s.length();i++){
        for(int j=0;j<=i;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
}
int main(){
    string s;
    cin>>s;
    prefix(s);
}