#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = a / 2 + a % 2;
    int e = b / 2 + b % 2;
    int f = c / 2 + c % 2;
    cout << d + e + f;
    return 0;
}
