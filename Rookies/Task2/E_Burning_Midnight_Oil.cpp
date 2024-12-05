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
    int l = 0, r = n,v = n;
    
    while(r >= l){
        int mid = (r+l)/2;
        
        int sum = 0 , c = 0;
        while(mid/pow(k,c)){
            sum += mid/pow(k,c);
            c++;
        }
        if(sum < n){l = mid + 1;}
        else {
        v = min(v,mid);
        r = mid - 1;
        }
    }
    cout << v ;
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