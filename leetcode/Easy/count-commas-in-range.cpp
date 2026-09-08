// Problem: Count Commas in Range
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/count-commas-in-range/
// Solved on: 2026-09-08T18:02:12.456Z


        class Solution{
            public:
                long long countCommas(long long n){
                        long long commas=0;
                                long long base=1000;
                                        int commaCount=1;
                                                while(base<=n){
                                                            long long nextBase=base*1000;
                                                                        long long end=min(n,nextBase-1);
                                                                                    long long numbers=end-base+1;
                                                                                                commas+=numbers*commaCount;
                                                                                                            base=nextBase;
                                                                                                                        commaCount++;
                                                                                                                                }
                                                                                                                                        return commas;
                                                                                                                                            }
                                                                                                                                            
    };