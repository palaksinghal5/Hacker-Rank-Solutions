if __name__ == '__main__':
    N = int(input())
    list=[]
    for i in range(N):
        command=input().split()
        if str(command[0])== "insert":
            list.insert(int(command[1]), int(command[2]))
        elif str(command[0])=="print":
            print(list)
        elif str(command[0])=="remove":
            list.remove(int(command[1]))
        elif str(command[0])=="append":
            list.append(int(command[1]))
        elif str(command[0])=="sort":
            list.sort()
        elif str(command[0])=="pop":
            list.pop()
        elif str(command[0])=="reverse":
            list.reverse()