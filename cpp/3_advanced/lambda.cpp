#include <bits/stdc++.h>
using namespace std;

void change1(int x) { // 値渡し(値をコピーをしているので、元の変数には影響を与えない)
  x = 50;
}

void change2(int &x) { // 参照渡し(元の変数に影響を与える)
  x = 50;
}

int main() {
  int a = 100;

  change1(a);
  cout << a << endl;

  change2(a);
  cout << a << endl;


  a = 100;
  auto change3 = [](int x) -> void { // lambda関数(値渡し)
    x = 50;
  };

  change3(a);
  cout << a << endl;

  auto change4 = [](int &x) -> void { // lambda関数(参照渡し)
    x = 50;
  };
  
  change4(a);
  cout << a << endl;


  a = 100;

  auto change5 = [a]() -> void { // []内に変数を書くことで、lambda関数内で使えるようになる
    cout << a << endl;
  };
  change5();
  cout << a << endl;

  auto change6 = [&a]() -> void { // []内に変数を書くことで、lambda関数内で使えるようになる
    a = 50;
  };
  change6();
  cout << a << endl;

  
  a = 100;

  auto change7 = [=]() -> void { // []内に'='を書くことで、lambda関数内で使える変数を全て値渡しにする
    cout << a << endl;
  };

  change7();

  auto change8 = [&]() -> void { // []内に'&'を書くことで、lambda関数内で使える変数を全て参照渡しにする
    a = 50;
  };
  change8();
  cout << a << endl;
}
