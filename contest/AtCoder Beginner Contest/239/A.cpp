#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

int main(void){
    double height = 0;
    cin >> height;
    double r = sqrt(height * (12800000 + height));
    cout << fixed;
    cout << setprecision(7) << r << endl;
    return 0;
}