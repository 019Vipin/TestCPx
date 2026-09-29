// Problem: Reverse Degree of a String
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/reverse-degree-of-a-string/
// Solved on: 2026-09-29T13:27:55.511Z

class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            int reverseValue=26-(c-'a');
            int position=i+1;
            sum+=reverseValue*position;
        }
        return sum;
    }
};