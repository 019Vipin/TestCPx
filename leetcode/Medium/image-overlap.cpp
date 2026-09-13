// Problem: Image Overlap
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/image-overlap/
// Solved on: 2026-09-13T16:19:30.101Z

class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>>A,B;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1) A.push_back({i,j});
                if(img2[i][j]==1) B.push_back({i,j});
            }
        }
        vector<vector<int>>overlap(2*n,vector<int>(2*n,0));
        int moi=0;
        for(auto& a:A){
            for(auto& b:B){
                int dx=b.first-a.first+n;
                int dy=b.second-a.second+n;
                moi=max(moi,++overlap[dx][dy]);
            }
        }
        return moi;
    }
};