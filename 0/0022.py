while True:
    n = int(input())
    if n == 0:
        break
    s = [int(input())]
    for i in range(1, n):
        a = int(input())
        s.append(max(a, a + s[i - 1]))
    print(max(s))
