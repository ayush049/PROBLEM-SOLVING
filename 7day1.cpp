// LENGTH OF A STRING USING USER DEFINED FUNCTION

#include <iostream>
#include <string>
using namespace std;
int length(string a){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    string a;
    getline(cin,a);
    cout<<"The length of the string is: "<<length(a);
}