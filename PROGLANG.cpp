#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f; 
	       //1  2  1  3  2  4
	    if((a==c||a==d) && (b==c||b==d)) cout<<"1"<<endl;
	    else if((a==e||a==f) && (b==e||b==f)) cout<<"2"<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}