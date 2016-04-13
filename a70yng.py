n = int(raw_input())

for i in range(1, n+1):
    (index, string) = raw_input().split()
    index = int(index)-1

    print i, string[:index] + string[index+1:]
