#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, sum=0;;
    cin >> n >> m;

    for (int a = 0; a * a <= n && a <= m; ++a)
    {
        int b = n - a * a;
        if (a + b * b == m)
        {
            sum ++;
        }
    }

    cout << sum << endl;
    return 0;
}
