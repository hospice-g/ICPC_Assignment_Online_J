import sys

def lis(tab):
    n = len(tab)

    lis_tab = [1] * n
    for i in range(1,n):
        for j in range(0,i):
            if tab[i] > tab[j] and lis_tab[i] < lis_tab[j] +1:
                lis_tab[i] = lis_tab[j] + 1

    return max(lis_tab)
                

for row in sys.stdin:
    n = int(row)
    liste = list(map(int,input().split()))

    print(lis(liste))

