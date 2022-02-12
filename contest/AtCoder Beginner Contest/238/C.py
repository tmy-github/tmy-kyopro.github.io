N = int(input())
sum = N * (1 + N) // 2

for i in range(1, 19):
    if(N >= (10 ** i)):
        sum -= 9 * (10 ** (i - 1)) * (N - 10 ** (i) + 1)

print(sum % 998244353)