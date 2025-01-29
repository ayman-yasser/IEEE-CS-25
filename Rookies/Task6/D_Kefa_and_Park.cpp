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

int const N = 2e5+5;
vector<int> adj[N];
int n, m, ans;
bool vis[N],cat[N];

void dfs(int node,int cats) {
    vis[node] = 1;
    if(cats > m) return;
    if(!cat[node]) cats = 0;
    bool leaf = 1;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            dfs(it,cats+cat[it]);
            leaf = 0;
        }
    }
    ans += leaf;
}

void solve() {
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) cin >> cat[i];
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,cat[1]);
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