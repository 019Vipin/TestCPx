// Problem: Minimum LCM
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/contest/1765/submission/388923788
// Solved on: 2026-08-30T15:27:31.838Z

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long d=1;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                d=i;
                break;
            }
}
        if(d==1){
            cout<<1<<" "<<n-1<<endl;
        } else{
            long long a=n/d;
            long long b=n-a;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}