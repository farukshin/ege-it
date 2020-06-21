// https://yandex.ru/tutor/subject/problem/?problem_id=T9808
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    const int m = 120;
    int r[m];

    int n;
    cin >> n;

    for (int i = 0; i < m; i++)
        r[i] = 0;

    int left = 0, right = 0;

    for (int i = 0; i < n; ++i)
    {
        int cur, ost;
        cin >> cur;
        ost = cur % m;
        if (ost == 0)
            ost = m;

        if (r[m - ost] > cur && r[m - ost] + cur > left + right)
            left = r[m - ost], right = cur;

        if (ost < m)
        {
            if (cur > r[ost])
                r[ost] = cur;
        }
        else if (cur > r[0])
            r[0] = cur;
    }
    cout << left << " " << right << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
