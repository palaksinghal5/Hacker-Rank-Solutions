n = int(input())
arr = map(int, input().split())
arr=sorted(arr)
arr=list(dict.fromkeys(arr))
print(arr[-2])
