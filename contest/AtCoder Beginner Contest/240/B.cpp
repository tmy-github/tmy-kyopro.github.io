# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;
using ll = long long;

int main (void) {
    int N = 0;
    ll ai = 0;
    vector<ll> a; 
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> ai;
        a.push_back(ai);
    }
    sort(a.begin(),a.end());

    int cnt = 0;
    ll pre = 0;
    for(int i = 0; i < N; i++){
        if(a[i] != pre){
            cnt += 1;
            pre = a[i];
        }
    }

    cout << cnt << endl;
    
    return 0;
}