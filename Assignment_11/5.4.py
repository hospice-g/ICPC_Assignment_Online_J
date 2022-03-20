import sys
from math import inf

for row in sys.stdin:
    n = int(row)
    tab = list(map(int,input().split()))

    maxi = max(tab)
    tabb = [[0 for x in range(maxi + 1)] for x in range(n + 1) ]

    for i in range(n):
        topnext = inf
        for j in range(maxi +1):
            topnext = min(topnext,tabb[i][j])
            tabb[i+1][j] = topnext + abs(tab[i] - j)

    print(min(tabb[n]))