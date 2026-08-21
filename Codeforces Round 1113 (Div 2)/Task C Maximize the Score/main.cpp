#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int len = 2 * n;
        vector<int> a(len + 1);
        for (int i = 1; i <= len; ++i) {
            cin >> a[i];
        }

        vector<long long> dp(len + 1, 0);
        vector<int> pos(n + 1, -1);

        for (int i = 1; i <= len; ++i) {
            dp[i] = dp[i - 1] + 1;

            int x = a[i];
            if (pos[x] != -1) {
                long long L = i - pos[x] + 1;
                dp[i] = max(dp[i], dp[pos[x] - 1] + L * L);
            }
            else {
                pos[x] = i;
            }
        }

        cout << dp[len] << "\n";
    }

    return 0;
}
