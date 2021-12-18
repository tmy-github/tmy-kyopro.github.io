#include <iostream>
#include <algorithm>

typedef long long ll;

int main () {

    ll N, A, B, C;
    ll min_coins = 9999;
    ll MAX_COINS = 9999;

    std::cin >> N;
    std::cin >> A >> B >> C;
    std::cout << N << A << B << C << std::endl;

    ll ci = 0, cj = 0;

    for (ci = 0; ci <= MAX_COINS; ci++){
        if( (A * ci + B * cj) > N) {
                break;
            }
        for (cj = 0; cj <= MAX_COINS - ci; cj++){
            if( (A * ci + B * cj) > N) {
                break;
            }
            
            ll N_tmp = N - A * ci - B * cj;
            ll c_coins = N_tmp / C;

            if ((N_tmp % C == 0) && ((ci + cj + c_coins) <= min_coins)) {
                min_coins = ci + cj + c_coins;
            }
        
        }
        std::cout << "Min: " << min_coins << std::endl;
    }

    std::cout << min_coins << std::endl;

    return 0;
}