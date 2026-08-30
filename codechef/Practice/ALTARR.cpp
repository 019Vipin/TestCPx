// Problem: ALTARR
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/START247C/problems/ALTARR
// Solved on: 2026-08-30T15:49:07.980Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int p1=0;
	int p2=0;
	for(int i=0;i<n;i++){
	    if(i%2==0){
	        if(a[i]%2==0)p1++;
	        if(a[i]%2==1)p2++;
	    } else{
	        if(a[i]%2==1)p1++;
	        if(a[i]%2==0)p2++;
	    }
	}
	cout<<min(p1,p2)<<endl;
    }
}
