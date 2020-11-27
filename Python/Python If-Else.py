val=int(input())
if val%2==0 and val>2 and val<5:
    print("Not Weird")
elif val%2==0 and val>6 and val<20:
    print("Weird")
elif val%2==0 and val>20:
    print("Not Weird")  
else :
    print("Weird")           
      
