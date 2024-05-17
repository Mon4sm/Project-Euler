import math

n = math.factorial(100)
n_str = str(n)
ans = sum(int(i) for i in n_str)
print(ans)
