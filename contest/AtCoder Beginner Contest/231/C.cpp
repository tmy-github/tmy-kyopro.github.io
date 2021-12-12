// コンテスト後
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

    // 1. vector A に各々の身長を挿入
    // 2. sort A
    // 3. 二分探索 A with xi
    // 4. 出力

    long long N, Q, i, j, x, tmp;

    vector<long long> A;

    cin >> N >> Q;
    A.resize(N);
    for (i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    for (j = 0; j < Q; j++) {
        cin >> x;
        tmp = A.size() - (lower_bound(A.begin(), A.end(), x) - A.begin());
        cout << tmp << endl;
    }

    return 0;
}