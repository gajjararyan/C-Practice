# include<iostream>
using namespace std;

void print ( int num){
    cout<<num<<endl;
    return;
}
int  add (int num1 , int num2){
    int sum=num1+num2;
    return sum;
}

int main(){
    int a=10;
    int b=15;
    cout<<add(a,b)<<endl;
    return 0;
}