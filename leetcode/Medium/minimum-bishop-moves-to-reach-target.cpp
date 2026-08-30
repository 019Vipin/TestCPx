// Problem: Minimum Bishop Moves to Reach Target
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/minimum-bishop-moves-to-reach-target/
// Solved on: 2026-08-30T15:39:48.173Z

class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int sr=source[0],sc=source[1];
        int tr=target[0],tc=target[1];
        if(abs(sr-tr)==abs(sc-tc)) return 1;
        if((sr+sc)%2==(tr+tc)%2) return 2;
        return -1;
    }
};