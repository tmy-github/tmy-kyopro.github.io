// コンテスト後
#include <iostream>
#include <string>

using namespace std;

int main () {

    string S, T;

    cin >> S >> T;
    long long S_len = S.length();
    int diff = 0;

    if (S[0] <= T[0]){
        diff = S[0] - T[0];
    }
    else {
        for (int i = 0; i < 26; i++) {
            if((S[0] + i - 'z') == T[0]){
                diff = i;
            }
        }
    }

    for(long long i = 0; i< S_len; i++) {
        if ((S[i] + diff) == T[i] || (S[i] + diff - 'A' + 'a') == T[i]){
            continue;
        }
        else {
            cout << "No";
            break;
        }

        if (i == (S_len-1)){
            cout << "Yes";
            break;
        }
    }
    return 0;
}