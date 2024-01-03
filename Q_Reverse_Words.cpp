#include <bits\stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int i = 0;
    while (ss >> word)
    {

        reverse(word.begin(), word.end());
        
        if (i == 0)
        {
            cout << word;
            i = 1;
        }
        else
        {
            cout << " " << word;
        }
    }

    return 0;
}