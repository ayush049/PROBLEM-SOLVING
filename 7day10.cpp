// Program for character by character frequency count

#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int dat[25]={0};
    int n=s.length();
    int j;
    while(s[i]!='\0'){
        dat[s[i]-'a']++;
        i++;
    }
    for(int i=0;i<25;i++){
        if(dat[i]!=0)
            cout<< char('a'+i)<<dat[i]<<" ";
    }
}