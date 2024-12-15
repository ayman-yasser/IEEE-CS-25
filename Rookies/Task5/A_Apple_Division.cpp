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

int div(int i , int sum , int total , vi& v){
    if(i == v.size()) return abs(total - 2 * sum);
    return min(div(i+1, sum + v[i], total, v),div(i+1, sum, total, v));
}
void solve()
{
    int n; cin >> n;
    vi v(n);
    int total = 0;
    for(int i = 0 ; i < n ; i++) cin >> v[i] , total += v[i];
    int ans = div(0,0,total,v);
    cout << ans;
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