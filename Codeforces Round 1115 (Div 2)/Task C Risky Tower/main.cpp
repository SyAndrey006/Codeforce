#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int v[n];
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int a[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
            sort(a[i], a[i] + m, greater<int>());
        }

        int ans = m;
        int pool_arr[m];
        int pool_size = 0;

        for (int i = n - 1; i >= 0; --i) {
            int next_pool[m];
            int next_size = 0;

            int p1 = 0, p2 = 0;
            while (next_size < m && (p1 < pool_size || p2 < m)) {
                if (p1 < pool_size && (p2 == m || pool_arr[p1] >= a[i][p2])) {
                    next_pool[next_size++] = pool_arr[p1++];
                } else {
                    next_pool[next_size++] = a[i][p2++];
                }
            }

            pool_size = next_size;
            for(int k = 0; k < pool_size; ++k) {
                pool_arr[k] = next_pool[k];
            }

            int current_sum = 0;
            for (int k = 0; k < pool_size; ++k) {
                current_sum += pool_arr[k];
                if (current_sum >= v[i]) {
                    ans = min(ans, k + 1);
                    break;
                }
            }
        }

        cout << ans << "\n";

    }

    return 0;
}
