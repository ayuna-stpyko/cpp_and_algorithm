#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 5;
  const int b = 5;
  b = 3; // 定数は変更できない
  const int c; // 定数は宣言時に初期化しないとエラー
  long long d = 1000000000000000000ll; // long long 型のリテラルは末尾に 'll' を付ける
  { // スコープを作る
    double e = 2.;
    cout << a << " " << e << endl;
  }
  cout << e << endl; // スコープ外の変数は使えない
  bool f = false; // 小文字
  string g = "Hello, World!"; // 文字列型はダブルクォーテーションで囲む
  cout << g[0] << endl; // 文字列の1文字目を出力
  cout << g[12] << endl; // 文字列の13文字目を出力
  cout << g[13] << endl; // 文字列の14文字目を出力('\0'が出力される)
  cout << g[14] << endl; // 未定義動作(コンパイルエラーにならない)

  auto h = 3.14; // 型推論
  cout << h << endl;

  auto i; // 初期値がないと型推論できない

  char j = 'Q'; // 文字型はシングルクォーテーションで囲む
  char k = g[0]; // 文字列中の文字はchar型に代入できる
  string l = g[2];
  j += 2; // charはintとほぼ同じように扱える
  cout << j << endl; // ASCIIコードで'Q'より2大きい'S'が出力される
  int m = j - 'A' + 'a'; // 大文字を小文字に変換

  int n = stoi("100"); // 文字列をint型に変換
  string o = to_string(100); // int型を文字列に変換
}
