#include <bits/stdc++.h>
using namespace std;

class Solution {

private:
    void solve(vector<vector<int>> &m, int n,
               vector<string> &ans,
               int x, int y,
               vector<vector<int>> &visited,
               string &path) {

        // destination reached
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // Down
        if (x + 1 < n && visited[x + 1][y] == 0 && m[x + 1][y] == 1) {
            path.push_back('D');
            solve(m, n, ans, x + 1, y, visited, path);
            path.pop_back();
        }

        // Up
        if (x - 1 >= 0 && visited[x - 1][y] == 0 && m[x - 1][y] == 1) {
            path.push_back('U');
            solve(m, n, ans, x - 1, y, visited, path);
            path.pop_back();
        }

        // Right
        if (y + 1 < n && visited[x][y + 1] == 0 && m[x][y + 1] == 1) {
            path.push_back('R');
            solve(m, n, ans, x, y + 1, visited, path);
            path.pop_back();
        }

        // Left
        if (y - 1 >= 0 && visited[x][y - 1] == 0 && m[x][y - 1] == 1) {
            path.push_back('L');
            solve(m, n, ans, x, y - 1, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0; // backtrack
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n) {

        vector<string> ans;

        if (m[0][0] == 0)
            return ans;

        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";

        solve(m, n, ans, 0, 0, visited, path);

        sort(ans.begin(), ans.end());
        return ans;
    }
};
