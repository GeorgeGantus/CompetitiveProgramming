#Solving without binary Search
from math import ceil
t = int(input())
for i in range(t):
    n,k = map(int, input().split())
    upper_bound_factor = ceil(k/(n-1))
    upper_bound = n*upper_bound_factor
    lower_bound = n*(upper_bound_factor-1)
    not_divisible_quantity = (n-1)*(upper_bound_factor-1)
    diference = k - not_divisible_quantity
    print(lower_bound + diference)
    