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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int l = 0 , r = 0 , cnt = 0;
    while(r < n){
        while(v[r] - v[l] > k) l++;
        if(v[r] - v[l] == k) cnt++;
        r++;
    }
    cout << cnt;
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