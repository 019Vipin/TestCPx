// Problem: Count Commas in Range
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-commas-in-range/
// Solved on: 2026-09-08T18:09:22.296Z

class Solution {
public:
    int countCommas(int n) {
         if(n<1000)
            return 0;
        return n-999;
    }
};