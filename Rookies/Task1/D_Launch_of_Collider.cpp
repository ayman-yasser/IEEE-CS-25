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
    string s; cin >> s;
    vector<int> v(n,0);
    int diff = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(s[i] == 'R' && s[i+1] == 'L'){
            if(diff > v[i+1] - v[i]){
                diff = v[i+1] - v[i];
            }
        }
    }
    cout << (diff == INT_MAX ? -1 : diff/2);
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