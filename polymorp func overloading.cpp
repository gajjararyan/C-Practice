#include<bits/stdc++.h>
using namespace std;
   
class  student{
    public:
    void fun(){
        cout<<"I am function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"I am function with int argument"<<endl;
    }
    void fun(double x){
        cout<<"I am function with double argument"<<endl;
    }
};


int main()
{
 student obj;
 obj.fun();
 obj.fun(5);
 obj.fun(10.555);
 
 return 0;
}