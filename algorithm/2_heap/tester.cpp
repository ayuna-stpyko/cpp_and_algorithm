#include <fstream>
#include <iostream>
#include <vector>

#include "./heap.hpp"

using namespace std;

int main() {
  Heap<int> heap1;
  heap1.push(10);
  heap1.push(4);
  heap1.push(15);
  heap1.push(20);
  heap1.push(0);

  ofstream outfile1("./test/out/1.txt");
  while(!heap1.isEmpty()) {
    int minElement = heap1.pop();
    cout << minElement << endl;
    outfile1 << minElement << endl;
  }
  outfile1.close();

  Heap<pair<int, long long>> heap2;
  ofstream outfile2("./test/out/2.txt");
  heap2.push({10, 100ll});
  heap2.push({4, 400ll});
  heap2.push({15, 150ll});
  heap2.push({20, 200ll});
  heap2.push({0, 0ll});
  auto [a, b] = heap2.pop();
  outfile2 << a << " " << b << endl;
  heap2.push({5, 500ll});
  heap2.push({3, 300ll});
  auto [c, d] = heap2.pop();
  outfile2 << c << " " << d << endl;
  heap2.push({1, 10000000000ll});
  while(!heap2.isEmpty()) {
    auto [minElement1, minElement2] = heap2.pop();
    outfile2 << minElement1 << " " << minElement2 << endl;
  }
}