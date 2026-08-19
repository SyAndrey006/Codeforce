#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int valid_ways = 0;

        string start_options[4] = {"00", "01", "10", "11"};

        for (int k = 0; k < 4; ++k) {
            char c1 = start_options[k][0];
            char c2 = start_options[k][1];
        
            char pattern[4];
            pattern[0] = c1;
            pattern[1] = c2;
            pattern[2] = (c1 == '0') ? '1' : '0';
            pattern[3] = (c2 == '0') ? '1' : '0';

            bool is_valid = true;
            for (int i = 0; i < n; ++i) {
                char expected = pattern[i % 4];
                if (s[i] != '?' && s[i] != expected) {
                    is_valid = false;
                    break;
                }
            }

            if (is_valid) {
                valid_ways++;
            }
        }

        cout << valid_ways << "\n";
    }
    return 0;
}