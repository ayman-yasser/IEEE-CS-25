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
void solve() {
    int n; cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int l = 0, r = n - 1;
    int at = 0, bt = 0, a_cnt = 0, b_cnt = 0; 
    while (l <= r) {
        if (at <= bt) {
            at += v[l];
            a_cnt++;
            l++;
        } else {
            bt += v[r];
            b_cnt++;
            r--;
        }
    }
    cout << a_cnt << " " << b_cnt << endl;
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