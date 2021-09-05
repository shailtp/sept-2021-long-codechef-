#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Sum(int n, int b){
    int res=0;
    while(n>0){
        res=res+(n%b);
        n=n/b;
    }
    return res;
    
}
int minbase(int n, int l, int r){
    int sum=INT_MAX, base=0;
    for(int i=r; i>=l; i--){
        if(r>=n && n%i==0){
            return i;
        }
        int k= Sum(n,i);
        if(k<=sum){
            sum=k;
            base=i;
        }
    }
    return base;
    
}
int main() {
	
	int q;
	cin>>q;
	int n,l,r;
	while(q--){
	   cin>>n>>l>>r;
	   cout<<minbase(n,l,r)<<"\n";
	}
	   
}
