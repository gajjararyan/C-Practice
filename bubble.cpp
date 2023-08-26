#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int j=0;j<4;j++){
        if(arr[j]<arr[j+1]){
            arr[j]>arr[j+1];
            int tmp ;
            tmp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tmp;
        }
        else {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}