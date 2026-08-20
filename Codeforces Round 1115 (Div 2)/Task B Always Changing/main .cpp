#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int n_zero = 0, n_one = 0;
        for (char c : s) {
            if (c == '0')
                n_zero++;
            else
                n_one++;
        }

        int delta_n = n_zero - n_one;

        if (abs(delta_n) > 2) {
            cout << -1 << "\n";
            continue;
        }

        string compressed = "";
        compressed += s[0];
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1]) {
                compressed += s[i];
            }
        }

        int L = compressed.length();
        int L0 = 0, L1 = 0;
        for (char c : compressed) {
            if (c == '0') L0++;
            else L1++;
        }

        int delta_L = L0 - L1;

        int ans = (n - L) + max(0, abs(delta_n - delta_L) - 1);

        cout << ans << "\n";
    }
    return 0;
}