#include <bits/stdc++.h>

using namespace std;

vector<int> ans;

bool dfs (vector<int> child[], bool dams[], int node) {
    bool has_dam = dams[node];
    bool skipped = false;

    for (int i = 0; i < child[node].size(); i++) {
        int next_node = child[node][i];

        if (dfs(child, dams, next_node)) {
            has_dam = true;

            if (dams[node]) {
                ans.push_back(next_node);
            }
            else {
                if (!skipped) {
                    skipped = true;
                }
                else {
                    ans.push_back(next_node);
                }
            }
        }
    }

    return has_dam;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ans.clear();

        int n;
        cin>>n;

        vector<int> child[n+1];

        int parent;
        for (int i=2; i<=n; i++) {
            cin >> parent;
            child[parent].push_back(i);
        }


        int m;
        cin >> m;

        bool dams[n+1];
        for (int i = 1; i <= n; i++) {
            dams[i] = false;
        }

        int x;
        for (int i = 1; i <= m; i++) {
            cin >> x;
            dams[x] = true;
        }

        dfs(child, dams, 1);

        cout << m - 1 << ' ';
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << ' ';
        }
        cout << endl;

    }
    
    return 0;
}