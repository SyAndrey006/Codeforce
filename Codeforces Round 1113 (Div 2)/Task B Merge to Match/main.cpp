#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n,m;
        cin >> n >> m;
        int a[n];
        int b[m];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + m);

        if (n < 2*m) {
            cout << "NO" << endl;
            continue;
        }

        int i = 0;
        while (i < m && a[i] < b[i] && b[i] < a[n - m + i] ) {
            i++;
        }

        if (i < m)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    
    return 0;
}