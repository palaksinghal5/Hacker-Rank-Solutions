n = int(input())
arr = map(int, input().split())
arr=sorted(arr)
arr=list(dict.fromkeys(arr))
print(arr[-2])

# BETTER SOLUTION

# if __name__ == '__main__':
#     n = int(input())
#     arr = map(int, input().split())
#     arr=sorted(arr)
#     arr=list(set(arr))
#     print(arr[-2])
