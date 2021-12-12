// コンテスト後
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int index_in_vector (vector<string>& names, string& name) {
    for (int i = 0; i < names.size(); i++) {
        if (names[i].compare(name) == 0) { return i;}    
    }
    return -1;
}

int main () {
    // 1. Si の名前と投票数を記録するvector, names, votesを用意
    // 2. if (names に 名前name がない)　
    //        names に name　を追加 + 同じindexのvotes+1 
    //    else names の index と同じindexの位置のvotes+1
    // 3. 毎回、最大値のindexを記録する-> max, maxIndex
    // 4. 終了後、出力

    vector<string> names;
    vector<int> votes;
    int N = 0;
    string name;
    int index;
    int max = -1;
    int max_index = -1; 

    cin >> N; 
    
    for (int i = 0; i < N; i++) {
        cin >> name;
        index = index_in_vector(names, name);
        if ( index == -1) {
            names.push_back(name);
            votes.push_back(1);
            index = names.size() - 1;
        }
        else {
            votes[index] += 1;
        }
        
        if (votes[index] > max) {
            max = votes[index];
            max_index = index;
        }
    }

    cout << names[max_index] << endl;

    return 0;
}