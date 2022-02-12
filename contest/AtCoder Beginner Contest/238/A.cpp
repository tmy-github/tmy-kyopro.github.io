#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

    long long n;
    cin >> n;

    if (n > 2 * log2((float) n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
      
    
    return 0;
}
