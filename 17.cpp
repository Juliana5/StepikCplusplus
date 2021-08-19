#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c){
        cout << "No";
    }else{
        if (b + c <= a){
            cout << "No";
    }else{
        }if (a + c <= b){
            cout << "No";
        }else{
            cout << "Yes";
        }
    }
}
