// Problem: Basketball Together
// Platform: codeforces
// Contest: 1000
// Rating/Difficulty: 1000
// Language: C++17
// Verdict: Accepted
// URL: 
// Solved on: 2026-09-06T08:25:05.814Z

#include <bits/stdc++.h>
using namespace std;

int maxwins(vector<int>& p, int d) {
    sort(p.rbegin(), p.rend());

    int m = p.size();
    int winning_teams = 0;

    int i = 0;
    int j = m - 1;

    while (i <= j) {

        int player_need = d / p[i] + 1;

        if (player_need > j - i + 1)
            break;

        winning_teams++;

        i++;

        j -= (player_need - 1);
    }

    return winning_teams;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << maxwins(p, d) << endl;
}