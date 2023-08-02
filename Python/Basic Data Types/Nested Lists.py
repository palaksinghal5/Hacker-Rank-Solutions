if __name__ == '__main__':
    a=[]
    for lists in range(int(input())):
        a.append([input(),float(input())])
        
    a.sort(key=lambda x:x[1])
    a.sort(key=lambda x:x[0])
    
        
    second_number = sorted(set([x[1] for x in a]))[1]
    for x in a:
        if(second_number==x[1]):
            print(x[0])