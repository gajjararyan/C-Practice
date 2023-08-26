#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        for(int i=b;i>=b;i--){
            if(b%i==0 && a%i==0){
                cout<<i;
                break;
            }
        }
    }

    else{
        for(int i=a;i>=a;i--){
            if(a%i==0 && b%i==0){
                cout<<i;
                break;
            }
        }
    }

    return 0;
}