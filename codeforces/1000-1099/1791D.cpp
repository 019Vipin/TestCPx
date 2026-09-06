// Problem: Distinct Split
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-06T08:27:06.283Z

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<int>pre(n),suf(n);
	    set<int>st;
	    for(int i=0;i<n;i++){
	        st.insert(s[i]);
	        pre[i]=st.size();
	    }
	    st.clear();
	     for(int i=n-1;i>=0;i--){
	        st.insert(s[i]);
	        suf[i]=st.size();
	    }
	    int ans=0;
	    for(int i=0;i<n-1;i++){
	        ans=max(ans,pre[i]+suf[i+1]);
	    }
	cout<<ans<<endl;
	}
}