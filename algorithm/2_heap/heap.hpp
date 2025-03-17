#include <cassert>
#include <iostream>
#include <vector>

template <typename T>  // Tにはintやstringなど、任意の型が入る
class Heap {
 private:
  std::vector<T> heap;

  // ヒープの要素を再配置して、最小ヒープの条件を満たすようにする
  void heapifyUp(int idx) {
    while(idx > 0) {
      int parent = (idx - 1) / 2;
      if(heap[idx] < heap[parent]) {
        std::swap();
        idx = parent;
      }
      else break;
    }
  }

  void heapifyDown(int idx) {
    int size = heap.size();
    int leftChild, rightChild, minChild;

    while(2 * idx + 1 < size) {
      leftChild = ;
      rightChild = ;
      minChild = leftChild;

      // 右の子が存在し、右の子の方が小さい場合
      if(rightChild < size &&) {
        minChild = rightChild;
      }

      // 親と子の比較
      if(heap[idx] > heap[minChild]) {
        std::swap();
        idx = minChild;
      }
      else break;
    }
  }

 public:
  // 要素をヒープに挿入する
  void push(const T &value) {
    heap.push_back(value);
    heapifyUp();
  }

  // 最小の要素を削除し、その値を返す
  T pop() {
    assert(!heap.empty());  // heapが空の場合にエラーを出す

    T minElement = ;
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown();

    return minElement;
  }

  // ヒープが空かどうかを確認する
  bool isEmpty() const {
    return heap.empty();
  }

  // ヒープのサイズを取得する
  size_t size() const {
    return heap.size();
  }
};
