// Problem: Olya and Game with Arrays
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-06T08:30:40.955Z

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sumSecondMin = 0;
        long long smallestMin = LLONG_MAX;
        long long smallestSecondMin = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            vector<long long> a(m);
            for (int j = 0; j < m; j++) {
                cin >> a[j];
            }
            long long firstMin = LLONG_MAX;
            long long secondMin = LLONG_MAX;
            for (int j = 0; j < m; j++) {
                if (a[j] < firstMin) {
                    secondMin = firstMin;
                    firstMin = a[j];
                }
                else if (a[j] < secondMin) {
                    secondMin = a[j];
                }
            }
            sumSecondMin += secondMin;
            smallestMin = min(smallestMin, firstMin);
            smallestSecondMin = min(smallestSecondMin, secondMin);
        }
        cout << sumSecondMin - smallestSecondMin + smallestMin << endl;
    }
    return 0;
}