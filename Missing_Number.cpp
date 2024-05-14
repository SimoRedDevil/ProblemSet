#include <iostream>
#include <vector>
#define int long long

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, j = 0, i = 0;
    cin >> n;
    j = n;
    while (--n)
    {
        cin >> m;
        i += m;
    }
    cout << (j * (j + 1) / 2) - i << endl;
    return 0;
}