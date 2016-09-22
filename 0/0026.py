paper = [[0 for x in range(10)] for y in range(10)]

small = [[-1, 0], [0, -1], [0, 0], [1, 0], [0, 1]]
medium = [[-1, -1], [-1, 1], [1, -1], [1, 1]] + small
large = [[-2, 0], [0, -2], [0, 2], [2, 0]] + medium
brush = [small, medium, large]

while True:
    try:
        x, y, s = map(int, input().split(','))
        stain = [[i + x, j + y] for (i, j) in brush[s - 1]]
        for (i, j) in stain:
            if 0 <= i < 10 and 0 <= j < 10:
                paper[j][i] += 1

    except EOFError:
        break

print(sum([1 for i in range(10) for j in range(10) if paper[j][i] == 0]))
print(max([max(p) for p in paper]))
