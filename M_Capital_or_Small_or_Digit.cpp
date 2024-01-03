#include <iostream>
using namespace std;
int main()
{

    char x;
    cin >> x;

    if (isdigit(x))

        cout << "IS DIGIT" << endl;

    else if (isupper(x))

        cout << "ALPHA\nIS CAPITAL" << endl;

    else if (islower(x))
        cout << "ALPHA\nIS SMALL" << endl;

    return 0;
}