// Problem: Smallest Stable Index I
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/smallest-stable-index-i/
// Solved on: 2026-09-05T07:14:36.806Z

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxE=INT_MIN;
        for(int i=0;i<n;i++){
            maxE=max(maxE,nums[i]);
            int minE=INT_MAX;
            for(int j=i;j<n;j++){
              minE=min(minE,nums[j]);  
            }
            if((maxE-minE)<=k) return i;
        }
        return -1;
    }
};