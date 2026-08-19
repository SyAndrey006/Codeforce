#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());

        if (v[2] > v[1] + v[0]) {
            cout << v[1] << endl;
        }
        else {
            cout << v[2] - v[0] << endl;
        }
    }
    return 0;
}