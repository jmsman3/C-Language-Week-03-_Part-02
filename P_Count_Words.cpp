#include <bits\stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    bool found = false;
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (found == false)
            {
                cnt++;
            }
            found = true;
        }
        else
        {
            found = false;
        }
    }
    cout << cnt;
    return 0;
}