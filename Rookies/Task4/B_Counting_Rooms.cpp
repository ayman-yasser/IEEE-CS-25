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
    vector<vector<char>> arr(n, vector<char>(k));
    vector<vi> moves = {
        {1, 0}, {0, 1}, {-1, 0}, {0, -1}
    };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) cin >> arr[i][j];
    }
    int cnt = 0;
    queue<pi> q;
    vector<vector<bool>> visited(n, vector<bool>(k, false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (arr[i][j] == '.' && !visited[i][j]) {
                q.push({i, j});
                visited[i][j] = true;
                while (!q.empty()) {
                    auto current = q.front();
                    q.pop();
                    int x = current.first;
                    int y = current.second;
                    for (auto move : moves) {
                        int dx = x + move[0];
                        int dy = y + move[1];
                        if (dx >= 0 && dx < n && dy >= 0 && dy < k && arr[dx][dy] == '.' && !visited[dx][dy]) {
                            q.push({dx, dy});
                            visited[dx][dy] = true;
                        }
                    }
                }
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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