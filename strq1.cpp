#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 string str="NFENFNSEONFOKS";
/*
 for(int i=0;i<str.size();i++){
    if(str[i]>='a' && str[i]<='z'){
        str[i] -= 32;

    }
 }
*/
/*
for(int i=0;i<str.size();i++){
    if(str[i]>='A' && str[i]<='Z'){
        str[i] += 32;
    }
}
*/

 // transform(str.begin() , str.end() , str.begin(), ::toupper);

transform(str.begin() , str.end() , str.begin(), ::tolower);

 cout<<str;

 return 0;
}