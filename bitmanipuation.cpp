#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos){
    return ((n & (1<=pos))!=0);
}

int main()
{

cout<<getbit(3,2)<<endl; 
 return 0;
}