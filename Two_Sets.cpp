#include <iostream>
#include <vector>

#define int long long

using namespace std;

void printSet(vector<int>& v)
{
    cout << v.size() << endl;
    for (size_t i = 0; i < v.size(); i++)
        i < v.size() - 1 ? cout << v[i] << " " : cout << v[i] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum, a;
    vector<int> set_a;
    vector<int> set_b;
    cin >> n;
    sum = (n * (n + 1) / 2);
    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
        a = sum;
        for (int i = n; i >= 1; i--)
        {
            if (a - i >= sum / 2)
            {
                set_a.push_back(i);
                a -= i;
            }
            else
                set_b.push_back(i);
        }
        printSet(set_a);
        printSet(set_b);
    }
    else
        cout << "NO" << endl;
    return 0;
}