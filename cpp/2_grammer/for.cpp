#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int i = 0; i < 5; i++) {  // iを0から4まで1ずつ増やして変化させる
    cout << i << endl;
  }

  for(int i = 0; i < 5; i++) {
    cout << i << " ";  // スペースで区切って出力(5番目の要素の後にもスペースが入る)
  }
  cout << endl;

  vector<int> v1 = {2, 3, 5, 7, 11};
  for(int i = 0; i < 5; i++) {
    if(i)
      cout << " ";
    cout << v1[i];  // 0番目の要素の前にスペースを入れない
  }
  cout << endl;

  for(int i = 4; i >= 0; i--) {  // iを4から0まで1ずつ減らして変化させる
    cout << v1[i];
    if(i)
      cout << " ";
  }
  cout << endl;

  for (int x : v1) {  // v1の要素を順番にxに代入していく
    cout << x << " "; //　最後の要素の後にもスペースが入る
  }
  cout << endl;

  unsigned int s = 10;
  for(unsigned int t = s; t > 0; t &= s) {  // こんな書き方もできる1
    cout << t << " ";
  }
  cout << endl;

  for(int i = 0, j = 0; i < 5; i++, j += 2) {  // こんな書き方もできる2
    cout << i << " " << j << endl;
  }
}
