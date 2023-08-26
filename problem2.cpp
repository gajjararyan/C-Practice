#include <iostream>
using namespace std;

int main() {	
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(w==(x+y)||w==(x+z)||w==(y+z)||w==x||w==y||w==z||w==(x+y+z)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	
	return 0;
}