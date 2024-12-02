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
    string s0 = "qwertyuiop0asdfghjkl;1zxcvbnm,./";
    char c; cin >> c;
    string s; cin >> s;
    for(int i = 0 ; i < s.length() ; i++){
        if(c == 'R'){
            s[i] = *(strchr(s0.c_str(),s[i])-1);
        }
        else{
            s[i] = *(strchr(s0.c_str(),s[i])+1);
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