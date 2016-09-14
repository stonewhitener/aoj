from math import ceil

while True:
    try:
        print(ceil(float(input()) ** 2 / 98) + 1)
    except EOFError:
        break
