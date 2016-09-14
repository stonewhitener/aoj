from math import hypot

n = int(input())
for i in range(n):
    x1, y1, r1, x2, y2, r2 = map(float, input().split())
    d = hypot(x1 - x2, y1 - y2)
    if d > r1 + r2:
        print(0)
    elif abs(r1 - r2) <= d:
        print(1)
    else:
        if r1 > r2:
            print(2)
        else:
            print(-2)
