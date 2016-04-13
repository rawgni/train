t = int(raw_input().strip())

for _ in range(0, t):
    map = {}
    n = int(raw_input().strip())

    for  i in range(0, n):
        x = raw_input()
        if x not in map:
            map[x] = 0
        map[x] = map[x] + 1

    for x in map:
        print x
