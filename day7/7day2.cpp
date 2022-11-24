// Program for reversing the given string (User defined function)

#include <bits/stdc++.h>
using namespace std;
void getreverse(string &s){
    int i=0;
    int l=s.length()-1;
    while(i<=l){
        swap(s[i],s[l]);
        i++;
        l--;
    }
    cout<<"Reverse of the string from method 1: "<<s;
}
void reverse(char a[]){
    int i;
    while(a[i]!='\0'){
        i++;
    }
    cout<<"Reverse of the string from method 2: ";
    for(int j=i;j>=0;j--){
        cout<<a[j];
    }
    
}
int main(){
    char a[50];
    cout<<"Enter the string: ";
    cin>>a;
    string s=a;
    getreverse(s);
    cout<<endl;
    reverse(a);
}