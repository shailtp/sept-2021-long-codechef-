#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,i,even=0,odd,res;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]%2==0){
	            even+=1;
	        }
	    }
	    odd=n-even;
	    //even n
	    if(n%2==0){
	        res=n-abs(odd-even)+(abs(odd-even)/2);
	    }
	    //odd n
	    else{
	        if(odd>=even){
	        res=n-abs(odd-even)+(abs(odd-even)/2);}
	        else{
	            res=n-abs(odd-even)+(abs(odd-even)/2)+1;
	        }
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
