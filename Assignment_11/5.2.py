import sys

def editDist(str1, str2, lengths, operations):
    dp = [[0 for x in range(lengths[1] + 1)] for x in range(lengths[0] + 1)]
 
    for i in range(lengths[0] + 1):
        for j in range(lengths[1] + 1):
 
            if i == 0:
                dp[0][j] =  j*operations[0] 
 
            elif j == 0:
                dp[i][0] = i* operations[1]
           
            elif str1[i-1] == str2[j-1]:
                dp[i][j] = dp[i-1][j-1]
 
            else:
                dp[i][j] = min(dp[i][j-1] + operations[0], dp[i-1][j] + operations[1], dp[i-1][j-1]+ operations[2])    
 
    return dp[lengths[0]][lengths[1]]


for row in sys.stdin:
    lengths = list(map(int,row[:-1].split()))
    chaine1 = input()
    chaine2 = input()
    operations = list(map(int,input().split()))
    print(editDist(chaine1,chaine2,lengths,operations))