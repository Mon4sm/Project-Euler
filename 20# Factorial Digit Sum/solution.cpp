import math

n = math.factorial(100)
nstr = str(n)
ans = sum(int(i) for i in nstr)
print(ans)
