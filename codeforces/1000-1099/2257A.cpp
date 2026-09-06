// Problem: Creating Abbreviations
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-06T08:28:52.280Z

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>words(n);
        for(int i=0;i<n;i++){
            cin>>words[i];
        }
        vector<string>abbr(m);
        for(int i=0;i<m;i++){
            cin>>abbr[i];
        }
        bool available[26]={};
        for(string s:words){
            available[s[0]-'a']=true;
        }
        vector<bool>used(m,false);
        int cnt=0;
        while(cnt<m){
            bool found=false;
            for(int i=0;i<m;i++){
                if (used[i])
                    continue;
                bool possible=true;       
                for(char c:abbr[i]){
                    if(!available[c-'A']){
                        possible=false;
                        break;
                    }
                }
                if(possible){
                    used[i]=true;
                    cnt++;
                    found=true;
                    available[abbr[i][0]-'A']=true;
                }
            }
            if(!found)
                break;
        }
        cout<<(cnt==m?"YES":"NO")<<endl;
    }
    return 0;
}