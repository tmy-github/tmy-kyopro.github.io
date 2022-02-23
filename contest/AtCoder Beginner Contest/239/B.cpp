#include <iostream>

using namespace std;
using ll = long long;

int main (void) {
    ll x = 0;
    cin >> x;
    cout << x/10 - (x % 10 < 0) << endl;
    return 0;
}