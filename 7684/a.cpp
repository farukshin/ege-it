#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m0 = 0, m1 = 0, ans = -1;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur % 2 == 0 && cur > m0)
            m0 = cur;
        if (cur % 2 == 1 && cur > m1)
            m1 = cur;
    }
    if (m0 > 0 && m1 > 0)
        ans = m0 + m1;

    int r;
    cin >> r;

    if (ans > 0)
        cout << "Вычисленное контрольное значение: " << ans << endl;

    if (r > 0 && ans == r)
        cout << "Контроль пройден" << endl;
    else
        cout << "Контроль не пройден" << endl;
}
