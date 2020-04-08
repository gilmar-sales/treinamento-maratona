n = input()

sum = 0

for x in n:
    sum += ord(x) - ord('0')

print(sum)