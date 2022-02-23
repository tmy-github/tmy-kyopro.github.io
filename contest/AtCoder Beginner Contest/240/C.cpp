// コンテスト後
# include <iostream>

using namespace std;

int main (void) {
    int N, X;
    cin >> N >> X;
    bool dp[N+1][X+1] = {};
    dp[0][0] = true;

    int a = 0, b = 0;
    for(int i = 1; i <= N; i++){
        cin >> a >> b;
        for(int j = 0; j <= X; j++){
            if(dp[i-1][j]){
                if((j + a) <= X){
                    dp[i][j + a] = true;
                }
                if((j + b) <= X){
                    dp[i][j + b] = true;
                }
            }
        }
    }

    if(dp[N][X]){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}