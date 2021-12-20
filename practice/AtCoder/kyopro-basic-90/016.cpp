#include <iostream>
#include <algorithm>

long long N, A, B, C;

int main () {

    long long Answer = (1LL << 30);

    std::cin >> N;
    std::cin >> A >> B >> C;

    for (std::int32_t ci = 0; ci <= 9999; ci++){
        for (std::int32_t cj = 0; cj <= 9999-ci; cj++){
            long long tmp = N - 1LL*ci*A - 1LL*cj*B;
            long long count = 1LL*ci + 1LL*cj + tmp / C;
            if ( (tmp % C != 0) || tmp < 0 || count >> 9999*1LL ) continue;
            Answer = std::min(Answer, count);
        }
    }

    std::cout << Answer << std::endl;

    return 0;
}