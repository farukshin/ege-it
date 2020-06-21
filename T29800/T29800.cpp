// https://yandex.ru/tutor/subject/problem/?problem_id=T29800
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
    const int d = 6;
    int N, ans = 0, ind = 0;
    int arr[d], k[3] = {0, 0, 0};

    cin >> N;

    for (int i = 0; i < d; i++)
        cin >> arr[i];

    for (int i = d; i < N; i++)
    {
        int cur;
        cin >> cur;
        k[arr[ind] % 3] = k[arr[ind] % 3] + 1;
        ans += k[cur % 3];
        arr[ind] = cur;
        ind = (ind + 1) % d;
    }

    cout << ans << endl;
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
