#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n, q;
    cin >> n >> m >> q;
    vector<vector<int>> x(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> s(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> x[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + x[i][j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int x = s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1];
        cout << x << endl;
    }
}