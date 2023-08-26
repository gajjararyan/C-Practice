#include <iostream>
using namespace std;


int main() 
int t;
cin>>t;
{
	for(i=0;i<t;i++){
	    int A,B,C;
	    cin>>A>>B>>C;
	    sum=(A+B%2);
	   if(sum>C){
	       cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	 
	}
	return 0;
}