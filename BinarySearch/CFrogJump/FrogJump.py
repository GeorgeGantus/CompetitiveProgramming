def BinarySearch(array, x, lst=False):
    '''
    return the first element in list that is greater  than x or -1 if not found
    '''
    l = 0
    r = len(array)-1
    m = (l+r)//2
    if lst:
        while(l != r):
            print(m, l, r)
            if array[m] <= x:
                l = m
            else:
                r = m-1
            m = (r+l)//2
        if array[l] <= x:
            return l
        else:
            return -1

    while(l != r):
        print(m, l, r)
        if array[m] >= x:
            r = m
        else:
            l = m+1
        m = (r+l)//2
    if array[l] >= x:
        return l
    else:
        return -1


def verifyPossibility(d, s):
    if d > len(s):
        return True
    postion
