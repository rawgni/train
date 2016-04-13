for i in range(0, int(raw_input())):
    print reduce(lambda x, y: int(x)*int(y), (raw_input()).split())
