// Problem: Count Good Cyclic Rotations
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-good-cyclic-rotations/
// Solved on: 2026-09-06T02:42:46.352Z

class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int hf=n/2;
        int m=2*n;
        vector<long long>t(m);
        for(int i=0;i<m;i++) {
            t[i]=nums[i%n];
        }
        long long s1=0,s2=0;
        for(int j=0;j<hf;j++){
            s1+=t[j];
        }
        for(int i=hf;i<n;i++){
            s2+=t[i];
        }
        int res=0;
        if(s1>s2) res++;
        for(int j=1;j<n;j++){
            s1=s1-t[j-1]+t[j+hf-1];
            s2=s2-t[j+hf-1]+t[j+n-1];
            if(s1>s2) res++;
        }
        return res;
    }
};