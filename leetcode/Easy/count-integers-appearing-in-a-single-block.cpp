// Problem: Count Integers Appearing in a Single Block
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-integers-appearing-in-a-single-block/
// Solved on: 2026-09-05T08:51:53.516Z

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int x:nums) {
            mp[x]++;
        }
        int l=0,r=0;
        int csb=0;
        int d;
        for(int i=0;i<n;i++){
            if(i<n-1 && nums[i]==nums[i+1]){
                 r++;
            }
            else {
                 d=r-l+1; 
            if(d==mp[nums[l]]){
                csb++;
            }
            l=i+1;
            r=i+1;
            }
        }
        return csb;
    }
};