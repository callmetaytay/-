#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> num(n, 0);
    vector<int> S(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        S[i + 1] = S[i] + num[i];
    }
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << S[r] - S[l - 1] << endl;
    }
}