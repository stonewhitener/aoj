n = int(input())
for i in range(n):
    x1, y1, x2, y2, x3, y3, x4, y4 = map(float, input().split())
    c1 = (y1 - y2) * (x3 - x4)
    c2 = (y3 - y4) * (x1 - x2)
    if abs(c1 - c2) < 1e-10:
        print('YES')
    else:
        print('NO')
