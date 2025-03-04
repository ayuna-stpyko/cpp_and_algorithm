#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 12345;
  int *p = &a;  // '*'をつけることで、ポインタの変数になる

  cout << "a  : " << a << endl;
  cout << "&a : " << &a << endl;
  cout << "p  : " << p << endl;
  cout << "*p : " << *p << endl;
  cout << endl;

  *p = 23456;

  cout << "*p = 23456" << endl;

  cout << "a  : " << a << endl;
  cout << "&a : " << &a << endl;
  cout << "p  : " << p << endl;
  cout << "*p : " << *p << endl;
}
