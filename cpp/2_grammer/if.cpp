#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  if(a > 0) {
    cout << "a is positive" << endl;
  } else if(a == 0) {  // elif ではない
    cout << "a is zero" << endl;
  } else {
    cout << "a is negative" << endl;
  }

  int b;
  cin >> b;
  if(b > 0)  // 1行で書く場合は{}を省略できる
    cout << "b is positive" << endl;
  else if(b == 0)
    cout << "b is zero" << endl;
  else
    cout << "b is negative" << endl;

  bool c = true;
  if(b == c) {  // bool型の変数と比較できる
    cout << "b is true" << endl;
  } else {
    cout << "b is false" << endl;
  }

  int d, e;
  cin >> d >> e;
  if(d == e == 0) {  // この書き方はバグる(Pythonでは正しい書き方)
    cout << "d and e are zero" << endl;
  } else {
    cout << "d and e are not zero" << endl;
  }

  if(d == 0 && e == 0) {  // 正しい書き方
    cout << "d and e are zero" << endl;
  } else {
    cout << "d and e are not zero" << endl;
  }

  int s, t, u;
  cin >> s >> t >> u;
  if(s != t) {
    cout << "s and t are different" << endl;
  }

  if(!(s == t)) {  // この書き方もできる
    cout << "s and t are different" << endl;
  }

  if(s < t || s < u) {
    cout << "s is smaller than t or u" << endl;
  }
}
