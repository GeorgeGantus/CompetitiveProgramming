def verifyIfItsGood(array):
    i = 0
    j = len(array)-1
    currElement = 0
    while(i != j):
        if array[i] <= array[j]:
            mini = array[i]
            i += 1
        else:
            mini = array[j]
            j -= 1

        if mini < currElement:
            return False
        else:
            currElement = mini
    if array[i] < currElement:
        return False
    return True


t = int(input())
for _ in range(t):
    _ = int(input())
    array = list(map(int, input().split()))

    left = 0
    right = len(array)-1
    mid = (left+right)//2

    while(left != right):
        if(verifyIfItsGood(array[mid:])):
            right = mid
        else:
            left = mid + 1
        mid = (left+right)//2
    print(mid)
