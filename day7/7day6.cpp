// COMPARISON OF TWO STRINGS
#include <bits/stdc++.h>
using namespace std;
void Compare_String(string s1 , string s2){
    if(s1==s2){
        cout<<"Equal strings";
    }
    else{
        cout<<"Unequal strings"; 
    }
}
int main(){
    string s1,s2;
    cout<<"enter string 1 :- ";
    getline(cin,s1);
    cout<<"enter string 2 :- ";
    getline(cin,s2);
 Compare_String(s1,s2);
}