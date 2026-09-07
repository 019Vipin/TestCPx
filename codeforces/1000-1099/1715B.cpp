// Problem: Beautiful Array
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-07T15:05:01.275Z

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long min_s=b*k;
        long long max_s=b*k+n*(k-1);
        if(s<min_s || s>max_s){
            cout<<-1<<endl;
        }else{
            vector<long long>ans(n,0);
            ans[0]=min_s;
            s-=min_s;
            for(int i=0;i<n;i++){
                long long add=min(k-1,s);
                ans[i]+=add;
                s-=add;
            }
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}