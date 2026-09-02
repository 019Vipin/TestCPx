// Problem: Traffic Light
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-02T12:52:45.285Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char c;
	    cin>>c;
	    string s;
	    cin>>s;
	    string ss=s+s;
	    int seen_green_idx=-1;
	    int max_possible=INT_MIN;
	    for(int i=2*n-1;i>=0;i--){
	        if(ss[i]=='g'){
	            seen_green_idx=i;
	        } if(i<n && ss[i]==c){
	            int req_sec=seen_green_idx-i;
	            max_possible=max(max_possible,req_sec);
	        }
	    }
	    cout<<max_possible<<endl;
	}

}
