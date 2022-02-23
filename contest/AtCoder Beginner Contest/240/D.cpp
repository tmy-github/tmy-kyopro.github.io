// After Contest 240
# include <iostream>
# include <vector>

using namespace std;
using ull = unsigned long long;

int main (void) {
    vector<vector<ull>> vec;
    ull N, a, ball_count = 0;
    cin >> N;
    
    for (ull i = 0; i < N; i++)
    {
        cin >> a;
        if (vec.size() == 0)
        {
            vector<ull> new_group = {a, 1};
            vec.push_back(new_group);
            ball_count += 1;
        }
        else
        {
            ull last_index = vec.size() - 1;
            if(vec[last_index][0] == a){
                vec[last_index][1] += 1;
                ball_count += 1;
                if(vec[last_index][0] == vec[last_index][1]){
                    vec.erase(vec.begin() + last_index);
                    ball_count -= a;
                }
            }
            else
            {
                vector<ull> new_group = {a, 1};
                vec.push_back(new_group);
                ball_count += 1;
            }
        }
        cout << ball_count << endl;
    }
    return 0;
}