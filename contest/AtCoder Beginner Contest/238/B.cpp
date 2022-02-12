#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    
    int a;
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        A.push_back(a);
    }
    
    vector<int> kireme;
    kireme.push_back(0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < kireme.size(); j++)
        {
            kireme[j] += A[i];
            if(kireme[j] >= 360){
                kireme[j] -= 360;
            }
        }
        kireme.push_back(0);
    }    

    sort(kireme.begin(), kireme.end());
    int deg_max = 0;
    for (int i = 0; i < kireme.size(); i++)
    {
        if (i == (kireme.size() - 1))
        {
            if(deg_max < (kireme[0] + (360 - kireme[kireme.size() - 1]))) {
                deg_max = kireme[0] + (360 - kireme[kireme.size() - 1]);
            }
            continue;      
        }

        if ( i == 0)
        {
            deg_max = kireme[0];
            continue;
        }
        

        if (deg_max < (kireme[i] - kireme[i-1])){
            deg_max = kireme[i] - kireme[i-1];
        }
        
    }
    
    cout << deg_max;
    
    
    return 0;
}
