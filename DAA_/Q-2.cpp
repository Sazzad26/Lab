/*
5
1 5 8 9 6
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mx, mn;
vector<int> v;
void maxmin(int i, int j)
{
    int mx1, mn1, mid;
    if (i == j)
    {
        mx = mn = v[i];
        // cout << mx << " " << mn << "\n";
        // return;
    }
    else
    {
        if (i == j - 1)
        {
            if (v[i] < v[j])
            {
                mx = v[j];
                mn = v[i];
            }
            else
            {
                mx = v[i];
                mn = v[j];
            }
        }
        else
        {
            mid = (i + j) / 2;
            maxmin(i, mid);
            mx1 = mx, mn1 = mn;
            maxmin(mid + 1, j);
            if (mx < mx1)
            {
                mx = mx1;
            }
            if (mn > mn1)
            {
                mn = mn1;
            }
        }
    }
}

void test_case()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    mx = v[0], mn = v[0];
    maxmin(0, n - 1);
    cout << "The maximum value is: " << mx << "\n"
         << "The minimum value is: " << mn << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        test_case();
    }

    return 0;
}