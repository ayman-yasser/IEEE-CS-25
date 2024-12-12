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
    int n, k;cin >> n >> k;
    vector<vector<char>> arr(n, vector<char>(k));
    vector<vi> moves = {
        {1, 0, 'D'}, {0, 1, 'R'}, {-1, 0, 'U'}, {0, -1, 'L'}
    };
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < k; j++) {
            arr[i][j] = s[j];
        }
    }
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(k, false));
    vector<vector<char>> directions(n, vector<char>(k, ' '));
    string path;
    int x = 0, y = 0;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (arr[i][j] == 'A') {
                q.push({i, j});
                visited[i][j] = true;
                while (!q.empty()) {
                    auto current = q.front();
                    q.pop();
                    for (auto move : moves) {
                        int dx = current.first + move[0];
                        int dy = current.second + move[1];
                        if (dx >= 0 && dx < n && dy >= 0 && dy < k) {
                            if (arr[dx][dy] == 'B') {
                                cout << "YES" << endl;
                                x = dx;
                                y = dy;
                                directions[dx][dy] = move[2];
                                found = true;
                                while (!q.empty()) q.pop();
                                break;
                            } else if (arr[dx][dy] == '.' && !visited[dx][dy]) {
                                directions[dx][dy] = move[2];
                                q.push({dx, dy});
                                visited[dx][dy] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    if (found) {
        string path;
        while (arr[x][y] != 'A') {
            path += directions[x][y];
            if (directions[x][y] == 'D') x--;
            else if (directions[x][y] == 'U') x++;
            else if (directions[x][y] == 'L') y++;
            else if (directions[x][y] == 'R') y--;
        }
        cout << path.length() << endl;
        reverse(path.begin(), path.end());
        cout << path << endl;
    } else {
        cout << "NO" << endl;
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