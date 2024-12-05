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
void solve()
{
    int n, tr; cin >> n >> tr;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int l = 0, ans = 0;
    for (int r = 2; r < n; r++) {
        while (v[r] - v[l] > tr) l++;
        int cnt = r - l - 1; 
        if (cnt >= 1) ans += cnt * (cnt + 1) / 2;
    }
    
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