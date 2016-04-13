import sys

for line in sys.stdin:
    line = int(line)
    if line < 3:
        print line
    else:
        print (line-1)<<1
