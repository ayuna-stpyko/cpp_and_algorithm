#include <bits/stdc++.h>
using namespace std;

int main() {
  int a; // 宣言するが値の代入はしていない
  cout << a << endl; // 未定義動作
  
  vector<vector<int>> b = {{1, 2}, {3, 4}};
  cout << b[0][0] << " " << b[0][1] << endl; // 1 2
  cout << b[0][2] << endl; // 未定義動作
}
