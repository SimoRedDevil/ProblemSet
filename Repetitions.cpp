#include <iostream>
#include <vector>
#include <algorithm>

#define int long long

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    char c = s[0];
    int n = 1;
    vector<int> v;
    for (size_t i = 1; i < s.length(); i++)
    {
        if (!(s[i] ^ c))
            n++;
        else
        {
            c = s[i];
            v.push_back(n);
            n = 1;
        }
    }
    v.push_back(n);
    cout << *max_element(v.begin(), v.end()) << endl;
    return 0;
}