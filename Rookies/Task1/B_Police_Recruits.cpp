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
    int n; cin >> n;
    vector<int> v(n+2,0);
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i];
        if(v[i-1] < 0) continue;
        v[i] += v[i-1];
    }
    int s = 0;
    for(int i = 1 ; i <= n ; i++){
        if(v[i] < 0){
            s++;
        }
    }
    cout << s;
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