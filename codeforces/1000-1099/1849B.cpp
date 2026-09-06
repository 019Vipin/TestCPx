// Problem: Monsters
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-06T08:29:44.312Z

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<pair<long long, int>> v;
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            long long rem = x % k;
            if (rem == 0)
                rem = k;
            v.push_back({rem, i});
        }
        sort(v.begin(), v.end(), [](pair<long long, int> a,pair<long long, int> b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });
        for (auto p : v) {
            cout << p.second << " ";
        }
        cout << '\n';
    }
    return 0;
}