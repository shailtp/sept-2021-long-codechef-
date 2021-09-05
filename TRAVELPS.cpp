#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int j,t,i,n,a,b,timee;
	cin>>t;
	for(i=0;i<t; i++){
	    timee=0;
	    cin>>n>>a>>b;
        char c[n];
	    
	    for(j=0; j<n; j++){
	        cin>>c[j];
	        if(c[j]=='1'){
	            timee=timee+b;
	        }
	        if(c[j]=='0'){
	            timee=timee+a;
	        }
	    }
	    cout<<timee<<endl;
	    
	    
	}
	return 0;
}
