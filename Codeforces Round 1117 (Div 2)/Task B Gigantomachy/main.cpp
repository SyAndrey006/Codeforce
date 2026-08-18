#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        int Bea_safe = a[0] + (n - 1);
        int Ver_safe = b[0] + (m - 1);
        if (Bea_safe >= Ver_safe) {
            cout << '1' <<endl;
        }
        else {
            cout << '2' <<endl;
        }

    }
    
    return 0;
}