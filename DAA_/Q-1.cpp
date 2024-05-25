#include <bits/stdc++.h>
#define ll long long
using namespace std;

void bin_search(vector<int> v, int lb, int ub, int FindingElement)
{
    if (ub >= lb)
    {
        int mid = lb + (ub - lb) / 2;

        if (v[mid] == FindingElement)
        {
            cout << "The value found at index : " << mid << "\n";
            return;
        }
        if (v[mid] > FindingElement)
        {
            bin_search(v, lb, mid - 1, FindingElement);
            return;
        }
        bin_search(v, mid + 1, ub, FindingElement);
        return;
    }
    else
    {
        cout << "Element not found!\n";
        return;
    }
}
void test_case()
{
    int FindingElement;
    cin >> FindingElement;
    vector<int> v = {10, 20, 15, 55, 40};
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    int lb = 0, ub = v.size() - 1;
    sort(v.begin(), v.end());
    bin_search(v, lb, ub, FindingElement);
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