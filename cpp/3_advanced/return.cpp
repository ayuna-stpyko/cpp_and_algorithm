#include <bits/stdc++.h>
using namespace std;

int main() {
  int number;

  while(true) {
    cout << "Enter a number: ";
    cin >> number;

    // 特定の条件が満たされた場合に早期終了
    if(number < 0) {
      cout << "Negative number entered. Exiting program." << endl;
      return 0;
    }
  }
}
