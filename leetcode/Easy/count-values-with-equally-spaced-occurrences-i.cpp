// Problem: Count Values With Equally Spaced Occurrences I
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-values-with-equally-spaced-occurrences-i/
// Solved on: 2026-09-12T14:34:33.325Z

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }
        int res=0;
        for(auto&x:m){
            auto & y=x.second;
            if(y.size()==3){
                if(y[1]-y[0]==y[2]-y[1]){
                res++;
                }
            }
        }
        return res;
    }
};