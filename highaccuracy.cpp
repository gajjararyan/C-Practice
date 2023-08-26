#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    float x,a,b;
	    cin>>x;
	    a = x/3;
        b = x-(a*3); 
	    cout<<b<<endl;
	}
	return 0;
}
