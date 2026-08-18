#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    int n,m;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int first[26];
        for(int i=0;i<26;i++) {
            first[i]=0;
        }
        while (n--) {
            string s;
            cin>>s;
            first[s[0]-'a'] = 1;
        }

        bool flag=false;

        for(int i=0;i<m;i++) {
            string s;
            cin>>s;
            if (flag) {
                continue;
            }
            for (int j=0; j<s.size(); j++) {
                if (first[s[j]-'A'] <= 0) {
                    flag=true;
                    break;
                }
            }
        }
        if (flag) {
            cout << "NO" <<endl;
        }
        else {
            cout << "YES" <<endl;
        }
    }
    
    return 0;
}