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

set<string> ans;
void permutation(string s, int l, int r) {
    if (l == r) {
        ans.insert(s);
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);
        permutation(s, l + 1, r);
        swap(s[l], s[i]);
    }
}
void solve()
{
    string s; cin >> s;
    permutation(s,0,s.length()-1);
    cout << ans.size() << endl;
    for(auto perm : ans){
        cout << perm << endl;
    }
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