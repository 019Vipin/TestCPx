// Problem: CS2023_STK
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/CS2023_STK
// Solved on: 2026-08-30T15:53:05.826Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N), B(N);

        for (int i = 0; i < N; i++)
            cin >> A[i];

        for (int i = 0; i < N; i++)
            cin >> B[i];

        int om = 0, addy = 0;

     
        int current = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] > 0) {
                current++;
                om = max(om, current);
            } else {
                current = 0;
            }
        }

    
        current = 0;
        for (int i = 0; i < N; i++) {
            if (B[i] > 0) {
                current++;
                addy = max(addy, current);
            } else {
                current = 0;
            }
        }

        if (om > addy)
            cout << "OM\n";
        else if (addy > om)
            cout << "ADDY\n";
        else
            cout << "DRAW\n";
    }

    return 0;
}