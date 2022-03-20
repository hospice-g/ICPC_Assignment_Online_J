def knapSack(wt, val, W, n):
    K = [[0 for x in range(W + 1)] for x in range(n + 1)]
 
    # Build table K[][] in bottom up manner
    for i in range(n + 1):
        for w in range(W + 1):
            if i == 0 or w == 0:
                K[i][w] = 0
            elif wt[i-1] <= w:
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],K[i-1][w])
            else:
                K[i][w] = K[i-1][w]
    

    indices = []
    while n != 0:
        if K[n][W] != K[n-1][W]:
            indices.append(n)
            W = W - wt[n-1]
        n = n -1 

    indices = indices[::-1] # pour inverser la liste
    print(len(indices))
    print(" ".join(map(str,indices)))



import sys
for row in sys.stdin:
    liste = row.split()
    n = int(liste[0])
    w = int(liste[1])
    poids = []
    valeurs =[]
    for i in range(n):
        l = list(map(int,input().split()))
        poids.append(l[0])
        valeurs.append(l[1])
    
    knapSack(poids,valeurs,w,n)

 