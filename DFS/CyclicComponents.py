from sys import setrecursionlimit
setrecursionlimit(10000+10)
n, m = map(int, input().split())

adjacency_list = [[] for _ in range(n)]

for i in range(m):
    v1, v2 = map(int, input().split())
    v1 -= 1
    v2 -= 1
    adjacency_list[v1].append(v2)
    adjacency_list[v2].append(v1)


visited = [False for _ in range(n)]
flag = False

# testar não recursivo dps


def dfs(node):
    global visited
    global flag

    visited[node] = True
    if len(adjacency_list[node]) != 2:
        flag = True

    for i in adjacency_list[node]:
        if not visited[i]:
            dfs(i)


ans = 0
for i in range(n):
    if(visited[i]) == False:
        flag = False
        dfs(i)
        if not flag:
            ans += 1

print(ans)
