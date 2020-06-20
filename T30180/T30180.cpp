// https://yandex.ru/tutor/subject/problem/?problem_id=T30180
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
    int m = 80;
    int num[m];
    int N, cur, ans1 = 0, ans2 = 0;
    for (int i = 0; i < m; i++)
        num[i] = 0;

    cin >> N;
    while (N--)
    {
        cin >> cur;
        int ost1 = cur % m;
        int ost2 = (m - ost1) % m;
        if (cur * num[ost2] > ans1 * ans2)
            ans1 = num[ost2], ans2 = cur;

        if (cur > num[ost1])
            num[ost1] = cur;
    }
    cout << ans1 << " " << ans2 << endl;
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
