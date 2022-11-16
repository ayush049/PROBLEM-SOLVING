#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string s;
    int i=0,c=0;
    getline(cin,s);
    while(s[i]!='\0'){
        if(s[i] ==' ')
            c++;
            i++;
    }
    cout<<"Total words: "<<c+1;
}