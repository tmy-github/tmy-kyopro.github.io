#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main(void){

    ll points[8][2] = {
                    {2, 1},
                    {1, 2},
                    {-1, 2},
                    {-2, 1},
                    {-2, -1},
                    {-1, -2},
                    {1, -2},
                    {2, -1}
                };
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll new_x2 = x2 - x1;
    ll new_y2 = y2 - y1;

    for(int i = 0; i < 8; i++){
        double dis2 = pow((new_x2 - points[i][0]), 2) + pow((new_y2 - points[i][1]), 2);
        double dis = sqrt(dis2);
        if(dis == sqrt(5)){
            cout << "Yes" << endl;
            break;
        }
        else if(i == 7){
            cout << "No" << endl;
        }
    }
    
    return 0;
}