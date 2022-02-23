#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    switch (num)
    {
    case 0:
    case 1:
    case 2:
        return true;
    }

    for (int ni = 2; ni * ni <= num; ni++)
    {
        if(num % ni == 0){
            return false;
        }
    }
    return true;
}

int main(void){
    string winner = "Aoki";
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    for(int ti = A; ti <= B; ti++){
        for(int ai = C; ai <= D; ai++){
            int judge = ti + ai;
            if(isPrime(judge)){
                break;
            }
            if((ai == D) && (isPrime(judge) == false)){
                winner = "Takahashi";
                break;
            }
        }
        if(winner == "Takahashi"){
            break;
        }
    }
    cout << winner << endl;
    return 0;
}