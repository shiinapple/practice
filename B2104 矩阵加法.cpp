#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;  // 读取矩阵的行数和列数
    int a[n][m], b[n][m];

    // 读取矩阵 a
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // 读取矩阵 b
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    // 计算矩阵和并输出
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k = a[i][j] + b[i][j];
            cout << k << " ";
        }
        cout << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
