#include <bits/stdc++.h>
using namespace std;

int main() {
    // ベクターの宣言と初期化
    vector<int> vec; // 空のベクターを宣言
    vector<int> vec2(5, 2); // 5つの要素を持つベクターを宣言し、全ての要素を2で初期化
    vector<int> vec3 = {1, 2, 3, 4, 5}; // 初期値を持つベクターを宣言
    // Pythonの"[i for i in range(5)]"に相当する初期化の方法はない

    // ベクターに要素を追加
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // ベクターの要素にアクセス
    cout << "vec[0]: " << vec[0] << endl;
    cout << "vec[2]: " << vec[2] << endl;
    cout << "vec[4]: " << vec[4] << endl; // 未定義動作(エラーは発生しない)
    cout << "vec.at(0): " << vec.at(0) << endl; // vec[0]と同じ
    cout << "vec.at(4): " << vec.at(4) << endl; // vec[4]と同じだが、範囲外の要素にアクセスすると例外が発生する
    cout << "vec.back(): " << vec.back() << endl; // 最後の要素を取得(Pythonのように負のインデックスは使えない)

    // ベクターのサイズを取得
    cout << "Size of vec: " << vec2.size() << endl;

    // ベクターの要素を削除
    vec2.pop_back(); // 最後の要素を削除
    cout << "Size of vec after pop_back: " << vec2.size() << endl;

    // ベクターの要素をクリア
    vec2.clear();
    cout << "Size of vec2 after clear: " << vec2.size() << endl;

    // ベクターの要素をループで表示
    cout << "Elements of vec3: ";
    for (int i = 0; i < (int)vec3.size(); i++) {
        cout << vec3[i] << " ";
    }
    cout << endl;
}
