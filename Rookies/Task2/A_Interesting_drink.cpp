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
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    sort(arr.begin(),arr.end());
    int q ; cin >> q;
    while(q--){
        int num; cin >> num;
        auto it = upper_bound(arr.begin(),arr.end(),num);
        cout << it - arr.begin()  << endl;
        
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