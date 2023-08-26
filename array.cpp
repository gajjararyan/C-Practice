#include<bits/stdc++.h>
using namespace std;

int main(){
    
      int n;
      cin>>n;
      
      int k;
      cin>>k;

      int array[n];

     for(int i=0;i<n;i++){
        cin>>array[i];
     }
    
      for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
     }
   
   for(int i=0;i<n;i++){
        if(array[i]==k){
         cout<<"FOUND THE NUMBER"<<endl;
        return 0;
        }
     } 
   cout<<"NOOOOOOOT FOUND !!!"<<endl;
    return 0;
}