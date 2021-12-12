// コンテスト後
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class UnionFind {
public:
	vector<int> par;

	void init(long long sz) {
		par.resize(sz, -1);
	}
	long long root(long long pos) {
		if (par[pos] == -1) return pos;
		par[pos] = root(par[pos]);
		return par[pos];
	}
	void unite(long long u, long long v) {
		u = root(u); v = root(v);
		if (u == v) return;
		par[u] = v;
	}
	bool same(long long u, long long v) {
		if (root(u) == root(v)) return true;
		return false;
	}
};

int main () {
    // すべてのNにおいて手の数が２以下が必要
    // 環状はだめ
    // そのうち、環状になる場合を除く

    UnionFind UF;
    vector<int> N_vector;
    long long N, M, A, B, i;
    bool judge = true;

    cin >> N >> M;
    UF.init(N);

    N_vector.resize( N, 0);

    if (M >= 1) {
        for (i = 0; i < M; i ++){
            cin >> A >> B;
            A--; B--;
            if(UF.same(A, B) == true){
                judge = false;
                break;
            }
            UF.unite(A, B);

            N_vector[A] += 1; N_vector[B] += 1;
            if ((N_vector[A] > 2) || (N_vector[B] > 2)){
                judge = false;
                break;
            }
        }
    }

    cout << ((judge == true) ? "Yes" : "No") << endl;

    return 0;
}