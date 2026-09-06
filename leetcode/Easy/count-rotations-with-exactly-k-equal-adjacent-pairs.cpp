// Problem: Count Rotations With Exactly K Equal Adjacent Pairs
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-rotations-with-exactly-k-equal-adjacent-pairs/
// Solved on: 2026-09-06T02:37:23.053Z

class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        if(n==1) return k==0?1:0;
        string t=s+s;
       int cur=0;
        for(int i=0;i<n-1;i++){
            if(t[i]==t[i+1]){
                cur++;
            }
        }
       int res=(cur==k);
        for(int j=1;j<n;j++){
            if(t[j-1]==t[j]) cur--;
            if(t[j+n-2]==t[j+n-1]) cur++;
            if(cur==k) res++;
        }
        return res;
    }
};