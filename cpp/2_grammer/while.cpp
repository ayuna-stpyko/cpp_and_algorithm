#include <bits/stdc++.h>
using namespace std;

int main() {
  int i = 0;
  while(i < 5) {
    cout << "Hello, World! " << i << endl;
    i++;
  }

  bool b = false;
  do {
    cout << "hogehoge" << endl;
  } while(b);  // この条件がfalseでも1回は実行される
}
