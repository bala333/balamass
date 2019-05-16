n=int(input('Enter the number: ')) 
m=int(input('Enter the number2: '))
for i in range(n,m):
    n2=0
    temp=i
    while i>0:
        n1=i%10
        n2+=(n1**3)
        i=i//10

    if temp==n2:
        print(n2) 
