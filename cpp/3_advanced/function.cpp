#include <bits/stdc++.h>
using namespace std;

// 関数の宣言(内容は後で定義)
void greet(); // voidは「ない」ということ
int add(int a, int b);
int add(int a, int b, int c); // 引数の数が異なる同名関数を定義できる
double add(double a, double b); // 引数の型が異なる同名関数を定義できる
void changeValue(int &x);
void changeValue(double &x);

int main() {
  greet();

  // 通常の関数呼び出し
  int intResult1 = add(5, 3);
  cout << "5 + 3 = " << intResult1 << endl;
  int intResult2 = add(5, 3, 2);
  cout << "5 + 3 + 2 = " << intResult2 << endl;

  double doubleResult = add(5.5, 3.3);
  cout << "5.5 + 3.3 = " << doubleResult << endl;

  int intValue = 10;
  cout << "Before change (int): " << intValue << endl;
  changeValue(intValue);
  cout << "After change (int): " << intValue << endl;

  double doubleValue = 10.5;
  cout << "Before change (double): " << doubleValue << endl;
  changeValue(doubleValue);
  cout << "After change (double): " << doubleValue << endl;

  auto multiply = [](int a, int b) -> int { return a * b; }; // lambda関数
  // auto multiply = [](int a, int b, int c) -> int { return a * b * c; }; // 同名のlambda関数を定義できない
}

// 関数の定義
void greet() {
  cout << "Hello, World!" << endl;
}

int add(int a, int b) {
  return a + b;
}

int add(int a, int b, int c) {
  return a + b + c;
}

double add(double a, double b) {
  return a + b;
}

void changeValue(int &x) {
  x = 20;
}

void changeValue(double &x) {
  x = 20.5;
}
