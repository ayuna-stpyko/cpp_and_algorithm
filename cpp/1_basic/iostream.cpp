#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << 1 << endl;
  cout << 3.14 << endl;
  cout << "Hello " << "Hello " << 2 << endl; // 繋げて出力できる
  cout << 999999999.9999999 << endl; // 指数表記
  cout << fixed << setprecision(15) << 999999999.9999999 << endl; // 小数点以下15桁まで表示、誤差はある
  int n; // 変数の宣言
  cin >> n;
  cout << n << endl;
  long long m;
  cin >> m;
  cout << n << " " << m << endl;
  int p;
  p = 5; // 宣言と代入を分けてもOK
  string s;
  cin >> s;
  cout << s << endl;

  // cout << k << endl; // 変数'k'を宣言していないのでコンパイルエラー
}
