#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int t;
    cin>>t;
     
     int sum=0;
     int  originalt=t;
     while(t>0){
        int lastdigit = t%10;
        sum+= pow(lastdigit,3);
        t=t/10;
     }

     if(sum==originalt){
        cout<<"armstrong number"<<endl;
     }
     else{
        cout<<"not armstrong number"<<endl;
     }

    return 0;
}