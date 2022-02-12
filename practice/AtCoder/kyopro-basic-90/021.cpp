// SCC: 強連結成分分析
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
#include <iterator> // back_inserterを使うため

class SCC {
    using std::int32_t;
    using std::vector;
    using std::copy;
    using std::back_inserter;
private:
     // 各頂点の次の頂点を記録
    vector<vector<int32_t>> next_vertex;
    // next_vertexの向きを逆向きにしたもの
    vector<vector<int32_t>> reverse_next_vertex;

    int32_t vertexes_t[];
    bool check_vertexes[];

public:

    void setNextVertex(const vector<vector<int32_t>> next_vertex){
        copy(next_vertex.begin(), next_vertex.end(), back_inserter(this.next_vertex));
    }

    void setReverseNextVertex(const vector<vector<int32_t>> reverse_next_vertex){
        copy(reverse_next_vertex.begin(), reverse_next_vertex.end(), back_inserter(this.reverse_next_vertex));
    }

    void first_dfs(){

    }
}

using std::int32_t;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::unique;



void erase_duplication_vector(vector<int32_t> vec) {
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(),vec.end()), vec.end());
    return;
}

void dfs(int32_t vertex, int32_t vertexes_t[], bool check_vertexes[]){
    check_vertexes[vertex] = true;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
    return;
}

int main(void){

    /* 前準備 */

    // 各頂点の次の頂点を記録
    vector<vector<int32_t>> next_vertex;
    // next_vertexの向きを逆向きにしたもの
    vector<vector<int32_t>> reverse_next_vertex;

    int32_t vertexes_num, edges_num;
    
    cin >> vertexes_num >> edges_num;

    next_vertex.resize(vertexes_num);
    reverse_next_vertex.resize(vertexes_num);

    for (int32_t ei = 1; ei <= edges_num; ei++)
    {
        int32_t origin_vertex, destination_vertex;
        cin >> origin_vertex >> destination_vertex;
        
        next_vertex[origin_vertex].push_back(destination_vertex);
        reverse_next_vertex[destination_vertex].push_back(origin_vertex);
    }

    // 各頂点の情報の重複を消す
    for (int32_t vi = 1; vi <= vertexes_num; vi++)
    {
        erase_duplication_vector(next_vertex[vi]);
        erase_duplication_vector(reverse_next_vertex[vi]);
    }

    /* SCC 
    1.  適当な頂点から深さ優先探索を行う，
        その際各頂点 v に対して頂点 v から進めなくなった順番 t(v) を格納する。
    2.  グラフの矢印を全て逆向きにしたものに対して深さ優先探索を行う。
        その際 t(v)が大きい頂点からスタートする。
        行き止まったところまでを一つの連結成分とする
    */

    // 1回目の探索
    


    
    
    


    return 0;
} 