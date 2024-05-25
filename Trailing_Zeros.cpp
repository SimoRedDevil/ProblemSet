#include <iostream>
#include <vector>
#include <cmath>

#define int long long

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x = 1;
    cin >> n;
    int answer = 0;
    int check = 1;
    while (check)
    {
        check = n / (int)pow(5, x);
        answer += check;
        x++;
    }
    cout << answer << endl;
    return 0;
}