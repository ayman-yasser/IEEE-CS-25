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
    int n, l, r; cin >> n >> l >> r;
    vi v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
        ans -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
        if (l <= 2 * v[i] && 2 * v[i] <= r) {
            ans--;
        }
    }
    cout << ans / 2 << endl;
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