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
    vector<pair<int,int>> moves = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };
    for (int i = 0 ; i < n ; i++) {
        string st, end; cin >> st >> end;
        queue<string> q;
        unordered_set<string> visited;
        q.push(st);
        visited.insert(st);
        int cnt = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int j = 0; j < size; j++) {
                string current = q.front();
                q.pop();
                if (current == end) {
                    cout << cnt << endl;
                    q = queue<string>();
                    break;
                }
                for (auto& move : moves) {
                    string next = string(1, current[0] + move.first) + string(1, current[1] + move.second);
                    
                    if (next[0] >= 'a' && next[0] <= 'h' && next[1] >= '1' && next[1] <= '8' && !visited.count(next)) {
                        q.push(next);
                        visited.insert(next);
                    }
                }
            }
            cnt++;
        }
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