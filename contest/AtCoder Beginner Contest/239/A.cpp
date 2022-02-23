#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main(void){
    double height = 0;
    cin >> height;
    long double r = sqrt(height * (12800000 + height));
    cout << (ll) r << endl;
    return 0;
}