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
    int n ; cin >> n;
    vector<int> v(n);
    int minm = 1000;
    int maxm = -1000;
    int idx_mx = 0;
    int idx_mn = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        if(minm >= v[i]){
            minm = v[i];
            idx_mn = i;
        }
        if(maxm < v[i]){
            maxm = v[i];
            idx_mx = i;
        }
    }
    int sec = ((idx_mx > idx_mn) ? idx_mx - idx_mn + n - 2 : idx_mx - idx_mn + n - 1 );
    cout << sec;
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