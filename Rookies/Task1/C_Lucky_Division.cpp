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
bool is_lucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (!(digit == 4 || digit == 7))
            return false;
        n /= 10;
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++) {
        if (is_lucky(i) && n % i == 0) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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