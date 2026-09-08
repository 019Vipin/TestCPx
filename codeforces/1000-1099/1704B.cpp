// Problem: Luke is a Foodie
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-08T17:58:48.867Z

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=0;
        int L1=INT_MIN,R1=INT_MAX;
        for(int i=0;i<n;i++){
           int L=a[i]-x;
            L=max(L1,L);
           int R=a[i]+x;
           R=min(R1,R);
           if(L>R) {
               res++;
               L1=a[i]-x;
               R1=a[i]+x;
           }else{
               L1=L;
               R1=R;
           }
        }
        cout<<res<<endl;
    }
}