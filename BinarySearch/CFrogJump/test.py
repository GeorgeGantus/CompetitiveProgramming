s = int(input())
for i in range(s):
    path = input()
    minPossible = len(path)+1
    sequentiall = ''
    greaterL = 0
    for c in path:
        if c == 'L':
            sequentiall += c
            if len(sequentiall) > greaterL:
                greaterL = len(sequentiall)
        else:
            sequentiall = ''
    print(greaterL+1)