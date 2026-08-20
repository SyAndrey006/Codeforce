#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t ;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a;
        map<int,int> freq;

        int max_freq = 0;
        int max_freq_value = -1;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
            freq[x]++;
            if (freq[x] > max_freq) {
                max_freq = freq[x];
                max_freq_value = x;
            }
        }

        int other_sum = 0;
        int other_number = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != max_freq_value) {
                other_sum += a[i];
                other_number++;
            }
        }

        cout << other_sum + max_freq_value * min (max_freq, other_number + 2) << endl;

    }
    
    return 0;
}