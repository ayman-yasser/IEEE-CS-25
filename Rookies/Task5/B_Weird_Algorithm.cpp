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
void weird_algorithm(int n){
    cout << n << " ";
    if(n == 1) return;
    if(n % 2 == 0) weird_algorithm(n/2);
    else weird_algorithm(n*3+1);
}
void solve()
{
    int n; cin >> n;
    weird_algorithm(n);
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