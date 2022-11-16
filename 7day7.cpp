//CONCATINATION OF TWO STRINGS 
#include <bits/stdc++.h>
using namespace std;
void Add(string s1, string s2){
    string s3;
    s3=s1+s2;
    cout<<s3;
}
int main(){
    string s1,s2;
    cout<<"enter string 1 :- ";
    getline(cin,s1);
    cout<<"enter string 2 :- ";
    getline(cin,s2);
    Add(s1,s2);
}


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char s1[10]="ama";
//     char s2[10]="zon";
//     int i=0,j=0;
//     while(s1[i]!='\0'){
//         i++;
//     }
//     while(s2[j]!='\0'){
//         s1[i]==s2[j];
//         i++;
//         j++;
//     }
//     s1[i]='\0';
// }
