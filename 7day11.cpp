// Program to remove whitespace from the beginning, end, or both beginning and end, of a string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char c[100];
    getline(cin,s);
    int i=0,j=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]==' ')
            s[i]-=' ';
        else if(s[i]!=' ')
            break;
    }
    cout<<s;
}