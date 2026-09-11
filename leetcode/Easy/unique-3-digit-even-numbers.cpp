// Problem: Unique 3-Digit Even Numbers
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/unique-3-digit-even-numbers/
// Solved on: 2026-09-11T19:14:05.646Z

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int fr[10]={0};
        int res=0;
        for(int x:digits){
            fr[x]++;
        }
        for(int i=1;i<10;i++){
            for(int j=0;j<10;j++){
                for(int k=0;k<9;k+=2){
                    res+=fr[i]>0 && fr[j]>(i==j) && fr[k]>(i==k)+(j==k);
                }
            }
        }
        return res;
    }
};