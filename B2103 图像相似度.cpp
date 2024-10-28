#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m,n,l=0;
    cin >>m>>n;
    int a[m][n], b[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] == b[i][j])
            l++;
            
        }

    }    
    if(l==0)
        printf("0.00");
    else{
        long double k = (long double)l/((double)m*(double)n)*100.0 ;
        printf("%.2Lf",k);
        }
    
}

signed main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    solve();

    return 0;
}
