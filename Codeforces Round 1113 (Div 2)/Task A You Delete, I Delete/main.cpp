#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        bool flag_0 = false;
        bool flag_1 = false;

        for (int i=0; i<s.length(); i++) {
            if (s[i] == '0') {
                if (flag_0 == false )
                    flag_0 = true;
                else
                    cout << '0';
            }
            else if (s[i] == '1') {
                if (flag_1 == false )
                    flag_1 = true;
                else
                    cout << '1';
            }
        }

        cout << endl;
    }
    
    return 0;
}