#include <bits\stdc++.h>
using namespace std;
int main()
{

    long long int x, y, z;
    cin >> x >> y >> z;

    int mn = min({x, y, z});
    int mx = max({x, y, z});

    cout << mn << " " << mx << endl;

    return 0;
}