
def MaxSumSquare(mat, k, n): 
    list_sums = []
      
    if k > n: 
        return
  
    stripSum = [[None] * n for i in range(n)] 
  
    for j in range(n):      
        Sum = 0
        for i in range(k): 
            Sum += mat[i][j]  
        stripSum[0][j] = Sum

        for i in range(1, n - k + 1): 
            Sum += (mat[i + k - 1][j] - mat[i - 1][j])  
            stripSum[i][j] = Sum
  
    for i in range(n - k + 1):    
        Sum = 0
        for j in range(k): 
            Sum += stripSum[i][j]  
        list_sums.append(Sum)
  
        for j in range(1, n - k + 1): 
            Sum += (stripSum[i][j + k - 1] - stripSum[i][j - 1])  
            list_sums.append(Sum)

    
    print(max(list_sums))
  
import sys

for row in sys.stdin:
    liste1 = list(map(int,row.split()))
    n , k = liste1[0], liste1[1]
    matrix = []
    for i in range(n):
        liste2 = list(map(int,input().split()))
        matrix.append(liste2)

    MaxSumSquare(matrix,k,n)