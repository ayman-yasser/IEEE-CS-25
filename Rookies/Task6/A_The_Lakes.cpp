#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false);	cin.tie(NULL);	cout.tie(NULL);
#define Mod 1000000007
#define p5 100007
#define pb(x) push_back(x)
#define all(v) v.begin(), v.end()
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector <int> vll;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int const N = 1e3+4;
int adj[N][N];
bool vis[N][N];

int n, m;

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && adj[x][y] > 0 && !vis[x][y];
}

int dfs(int x, int y) {
    vis[x][y] = 1;
    int ans = adj[x][y];
    for (int i = 0; i < 4; i++) {
        int Nx = x + dx[i], Ny = y + dy[i];
        if (valid(Nx, Ny)) {
            ans += dfs(Nx, Ny);
        }
    }
    return ans;
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> adj[i][j];
    memset(vis, false, sizeof(vis));
    int max_ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (adj[i][j] > 0 && !vis[i][j]) 
                max_ans = max(max_ans, dfs(i, j));
        }
    }
    cout << max_ans << endl;
}

int32_t main() {
    fastIO
    int test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}