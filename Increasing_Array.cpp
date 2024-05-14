#include <iostream>
#include <vector>

#define int long long

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, last, r = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
    {
        last = i - 1;
        if (arr[i] < arr[last])
        {
            r += (arr[last] - arr[i]);
            arr[i] = arr[last];
        }
    }
    cout << r << endl;
    return 0;
}