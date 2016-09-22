while True:
    try:
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        print(sum([1 for i in range(4) if a[i] == b[i]]),
              sum([1 for i in range(4) for j in range(4) if i != j and a[i] == b[j]]))
    except EOFError:
        break
