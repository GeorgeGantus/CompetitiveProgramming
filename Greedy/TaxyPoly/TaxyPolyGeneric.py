n = 4
a = list(range(1,n+1))
mapa = dict.fromkeys(a,0)
size = int(input())
array = input().split()
for i in array:
    mapa[int(i)] += 1
#depois somar posição n
for i in range(n-1,0,-1):
    for j in range(n-i,0,-1):
        
        minimum = min(mapa[i],mapa[j])
        mapa[i] -= minimum
        mapa[j] -= minimum

        if mapa[j] == 0:
            continue


print(mapa)


