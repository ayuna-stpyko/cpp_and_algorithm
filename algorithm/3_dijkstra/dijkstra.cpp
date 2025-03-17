#include <iostream>
#include <vector>

#include "../2_heap/heap.hpp"
using namespace std;

const int INF = 1 << 29;  // 十分大きな値

vector<int> dijkstra(/* ここに何か */ n, /* ここに何か */ &adjacency_list, /* ここに何か */ src = 0) {
  vector<int> distance(n, INF);  // distance[i]には、頂点srcから頂点iまでの最短距離が入る
  vector<bool> fixed(n, false);  // fixed[i]は頂点iの最短距離が確定しているかどうかを表す
  distance[src] = ;
  Heap<pair<int, int>> heap;
  heap.push({0, src});

  while(!heap.isEmpty()) {
    /* ここに1行 */

    if(fixed[v] == true) continue;

    for(auto &edge : adjacency_list[]) { // 頂点vから出る辺に対してそれぞれ最短距離を更新
      auto [t, weight] = edge;

      if(distance[v] + weight < distance[t]) {
        /* ここに1行 */
        heap.push({distance[t], t});
      }
    }
    
    fixed[v] = ;
  }
  return distance;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<pair<int, int>>> adjacency_list(n);  // 隣接リスト(adjacency_list[i]には、頂点iから出る辺の情報が{隣接頂点, 重み}で入る)
  for(int i = 0; i < m; ++i) {
    int u, v, w;
    cin >> u >> v >> w;
    adjacency_list[u].push_back({v, w});  // 頂点uから頂点vへの重みwの辺
    adjacency_list[v].push_back({u, w});  // 頂点vから頂点uへの重みwの辺
  }

  vector<int> distance = dijkstra(n, adjacency_list);

  for(int i = 0; i < n; i++) { // 頂点0から各頂点への最短距離を出力
    if(distance[i] == INF)
      cout << "INF" << endl;
    else
      cout << distance[i] << endl;
  }
}
