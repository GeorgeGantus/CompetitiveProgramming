t = input()
for i in range(int(t)):
    x,n,m = map(int,input().split())
    while(x > 0 and (m > 0 or n > 0)):
        if x > 20:
            if n > 0:
                x = x//2 + 10
                n -= 1
            else:
                x = x - 10
                m -= 1
        else:
            if m > 0:
                x = x - 10
                m -= 1
            else: break
        
    if x <= 0:
        print("YES")
    else:
        print("NO") 