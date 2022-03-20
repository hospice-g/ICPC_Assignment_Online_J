def nombredecimal(x):
    i =  1 
    y = x + 1 
    while(y >= 10):
        y = y/10 
        i=i+1
    
    return i 

a = int(input())
print(nombredecimal(a))