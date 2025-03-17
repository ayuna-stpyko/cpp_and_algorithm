import subprocess
import os

def compare_files(file1, file2):
    with open(file1, 'r') as f1, open(file2, 'r') as f2:
        content1 = f1.read()
        content2 = f2.read()
        return content1 == content2

if __name__ == "__main__":
    filecnt = 7
    
    # コンパイル
    compile_command = ["g++-14", "./dijkstra.cpp", "-O2"]
    compile_result = subprocess.run(compile_command, capture_output=True, text=True)
    
    if compile_result.returncode != 0:
        print("Compilation failed:")
        print(compile_result.stderr)
    else:
        # 実行
        print("Compilation succeeded.")
        out_dir = "./test/out"
        if not os.path.exists(out_dir):
            os.makedirs(out_dir)
        
        ok = True
        # 出力ファイルの比較
        for i in range(1, filecnt + 1):
            run_command = ["./a.out"]
            with open(f"./test/in/{i}.txt", 'r') as f, open(f"./test/out/{i}.txt", 'w') as g:
                run_result = subprocess.run(run_command, stdin=f, capture_output=True, text=True, timeout=2)
                g.write(run_result.stdout)
            if run_result.returncode != 0:
                print("Execution failed:")
                print(run_result.stderr)
                exit()
            file1 = f"./test/out/{i}.txt"
            file2 = f"./test/expected/{i}.txt"
            
            if compare_files(file1, file2):
                print(f"Test passed {i} / {filecnt}: The output matches the expected result.")
            else:
                print(f"Test failed {i} / {filecnt}: The output does not match the expected result.")
                ok = False
        if ok:
            print("All tests passed.")
        else:
            print("Some tests failed.")
