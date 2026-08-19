#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int k;
        cin >> n >> k;

        string s;
        cin >> s;

        int rscore = 0;
        int bscore = 0;

        for (int i = 0; i < 2 * n; ++i) {
            if (s[i] == '1') {
                int next_i = (i + 1) % (2 * n);
                bool is_red = (i % 2 == 0);

                if (s[next_i] == '0') {
                    if (is_red) {
                        rscore++;
                    }
                    else {
                        bscore++;
                    }
                }
                else {
                    if (is_red) {
                        bscore++;
                    }
                    else {
                        rscore++;
                    }
                }
            }
        }

        cout << rscore << " " << bscore << "\n";
    }
    return 0;
}