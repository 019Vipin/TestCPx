// Problem: Array merging
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-06T08:27:52.989Z

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    vector<int>b(n);
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	     for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    vector<int>ba(2*n+1,0);
	    vector<int>bb(2*n+1,0);
	    int cnt=1;
	    for(int i=1;i<n;i++){
	        if(a[i]==a[i-1]) {
	            cnt++;
	        }
	        else{
	            ba[a[i-1]]=max(ba[a[i-1]],cnt);
	            cnt=1;
	        }
	    }
        ba[a[n-1]]=max(ba[a[n-1]],cnt);
	    cnt=1;
	     for(int i=1;i<n;i++){
	        if(b[i]==b[i-1]){
	          cnt++;  
	        } 
	        else{
	            bb[b[i-1]]=max(bb[b[i-1]],cnt);
	            cnt=1;
	        }
	    }
	    bb[b[n-1]]=max(bb[b[n-1]],cnt);
	    int ans=0;
	    for(int k=1;k<=2*n;k++){
	        ans=max(ans,ba[k]+bb[k]);
	    }
	    cout<<ans<<endl;
	}
 
}