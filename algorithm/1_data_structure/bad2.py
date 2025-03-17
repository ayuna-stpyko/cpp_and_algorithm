from time import time
from random import randint


MAX_INT = 1000000 - 1
N = 10000

# 長さ1e4の0~1e6-1までのランダムな整数が入った配列
random_list1 = [randint(0, MAX_INT) for _ in range(N)]
random_list2 = [randint(0, MAX_INT) for _ in range(N)]
# print(sorted(random_list1))

# 一応中身を見てみましょう(全部出力すると重いので10個だけ)
print(random_list1[:10])

start = time() # 処理開始時刻を記録
for i in range(N - 1):
    random_list1.sort(reverse=True) # 降順にソート
    a = random_list1[-1] # 降順なので最後尾の要素が最小値
    random_list1.pop()
    b = random_list1[-1]
    random_list1.pop()
    random_list1.append(random_list2[i])
end = time() # 処理終了時刻を記録

print(f"処理時間: {end - start} s")
