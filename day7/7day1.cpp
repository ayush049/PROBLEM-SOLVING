// LENGTH OF A STRING USING USER DEFINED FUNCTION

#include <iostream>
#include <string.h>
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
    cout<<"Enter the string: ";
    getline(cin,a);
    cout<<"The length of the string is: "<<length(a);
}