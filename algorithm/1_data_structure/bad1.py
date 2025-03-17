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
    min_value = MAX_INT
    min_index = -1
    for (idx, val) in enumerate(random_list1):
        if val < min_value: # 暫定の最小値より小さい値が見つかれば最小値を更新する
            min_value = val
            min_index = idx
    random_list1.pop(min_index) # 最小値を削除する
    
    min_value = MAX_INT
    min_index = -1
    for (idx, val) in enumerate(random_list1):
        if val < min_value:
            min_value = val
            min_index = idx
    random_list1.pop(min_index)
    
    random_list1.append(random_list2[i])
end = time() # 処理終了時刻を記録

print(f"処理時間: {end - start} s")
