#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        for (int num : a)
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
