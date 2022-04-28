
n, m = map(int, input().split())
adjacency_list = [[] for _ in range(n)]

for i in range(m):
    v1, v2 = map(int, input().split())
    v1 -= 1
    v2 -= 1
    adjacency_list[v1].append(v2)
    adjacency_list[v2].append(v1)

min_adj_node = 0

for node in range(n):
    if len(adjacency_list[node]) < len(adjacency_list[min_adj_node]):
        min_adj_node = node
me_and_neighbors = [min_adj_node] + adjacency_list[min_adj_node]
for i in range(n):
    if i in me_and_neighbors:
        print(0, end='')
    else:
        print(1, end="")
    if i != n-1:
        print(" ", end='')
