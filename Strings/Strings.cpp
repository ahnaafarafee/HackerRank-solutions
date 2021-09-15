#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c, d;

    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;

    cout << a + b << endl;

    c = a;
    d = b;

    c.erase(0, 1);
    d.erase(0, 1);

    cout << b[0] + c << " " << a[0] + d;

    return 0;
}