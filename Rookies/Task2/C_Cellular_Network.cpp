#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Mod 1000000007
#define pb(x) push_back(x)
#define all(v) v.begin(), v.end()
typedef vector<int> vi;
typedef pair<int,int> pi;

void solve() {
    int an, bn, r = 0;
    cin >> an >> bn;
    vector<int> a(an), b(bn);
    for (int w = 0; w < an; w++) cin >> a[w];
    for (int w = 0; w < bn; w++) cin >> b[w];
    sort(b.begin(), b.end());
    for (int w = 0; w < an; w++) {
        auto idx = lower_bound(b.begin(), b.end(), a[w]);
        if (idx == b.end()) {
            r = max(r, a[w] - b[bn - 1]);
        } else {
            if (idx != b.begin()) {
                r = max(r, min(*idx - a[w], a[w] - *(idx - 1)));
            } else {
                r = max(r, abs(*idx - a[w]));
            }
        }
    }
    cout << r << endl;
}

int32_t main() {
    fastIO
    int test = 1;
    //cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}