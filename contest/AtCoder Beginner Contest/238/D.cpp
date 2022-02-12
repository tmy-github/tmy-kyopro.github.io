#include <iostream>
#include <cstdint>
#include <string>

using namespace std;
using ull = uint64_t;

int main(void) {
    ull T = 0;
    ull a, s;
    string ans;
    cin >> T;

    for(ull i = 1; i <= T; i++){
        cin >> a >> s;
        ans = "No";

        if(s >= 2 * a){
            ull diff = s- 2*a;
            if ((diff & a) == 0) { ans = "Yes";}
        }
        cout << ans << endl;
    }
    return 0;
}
