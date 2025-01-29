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

int const N = 105;
vector<pair<int, int>> adj[N];
bool vis[N];

int dfs(int node) {
    vis[node] = 1;
    int max_cost = 0;
    for (auto it : adj[node]) {
        if (!vis[it.first]) {
            max_cost = max(max_cost, it.second + dfs(it.first));
        }
    }
    return max_cost;
}

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    int ans = dfs(0);
    cout << ans << endl;
}
int32_t main() {
    fastIO
    int test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}