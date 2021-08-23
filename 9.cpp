#include <iostream>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int c = a * 100 + b;
    int d = c * n;
    int e = d / 100;
    int f = d % 100;
    cout << e << " " << f;
    return 0;
}
