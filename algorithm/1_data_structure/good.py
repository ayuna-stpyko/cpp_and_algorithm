from time import time
from random import randint
import heapq


MAX_INT = 1000000 - 1
N = 10000

# 長さ1e4の0~1e6-1までのランダムな整数が入った配列
random_list1 = [randint(0, MAX_INT) for _ in range(N)]
random_list2 = [randint(0, MAX_INT) for _ in range(N)]
# print(sorted(random_list1))

# 一応中身を見てみましょう(全部出力すると重いので10個だけ)
print(random_list1[:10])

start = time() # 処理開始時刻を記録
heapq.heapify(random_list1) # random_list1が優先度付きキューに変化
for i in range(N - 1):
    a = heapq.heappop(random_list1) # random_1listから最小値を1つ取り出してaに代入する
    b = heapq.heappop(random_list1)
    # print(a, b)
    heapq.heappush(random_list1, random_list2[i]) # random_list1にランダムな整数を1つ追加する
end = time() # 処理終了時刻を記録

print(f"処理時間: {end - start} s")
