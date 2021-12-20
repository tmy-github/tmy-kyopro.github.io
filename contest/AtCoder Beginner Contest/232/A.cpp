#include <iostream>
#include <string>

using namespace std;

int main () {
    string S;

    cin >> S;

    int a = S[0] - '0';
    int b = S[2] - '0';

    cout << (a * b);
    
    return 0;
}
