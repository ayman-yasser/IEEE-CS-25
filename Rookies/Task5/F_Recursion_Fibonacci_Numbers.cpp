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

vi memo(100);

int fibbo(int n){
    if(n <= 1) return n;
    if(memo[n]) return memo[n];
    int val = fibbo(n - 1) + fibbo(n - 2);
    memo[n] = val;
    return val;
}
void solve()
{
    int n; cin >> n;
    cout << fibbo(n) << endl;
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