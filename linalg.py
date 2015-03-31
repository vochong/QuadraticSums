from math104 import *
import random
from math import floor 


def test2(k,m,v,p):
    h11 = init2(k)
    for i in range(k):
        for j in range(k):    
            a = random.random()
            b = floor(1000*a)
            m[i][j] = b%p
        v[i] = m[i][0]
        a = random.random()
        b = floor(1000*a)
        v[i] = b%p

    print(" The random",k,"x",k,"matrix is ")
    display(0,k-1,0,k-1,m,v)
        
    solve2(k,m,v,p)
    t1 = det(k,m)
    if (t1<k):
        print("\n \n This matrix could not be solved since all equations")
        print(" are not linearly independent ")
    print("\n t1 = ",t1)

    print(" \n \n The output of solve2 is ")
    display(0,k-1,0,k-1,m,v)
    l2solve(k,h11,v,m,p)
    return(h11)
    


""" Example 1 """
""" Solves for b where mb = v """
k = 6
p = 61
print("\n \n Example 1 solving a",k,"x",k,"matrix modulo",p)
print()
m = [[46,23,12,56,25,56],
     [29,12,21,29,18,29],
     [52,23,14,51,18,5],     
     [6,22,22,32,55,38],     
     [36,25,37,36,13,48],
     [42,34,34,24,13,23]]

v = [56,29,5,38,48,23]
b = [0 for i in range(6)]    

display(0,k-1,0,k-1,m,v)
solve2(k,m,v,p)
t1 = det(k,m)
print("\n \n t1 = ",t1)
display(0,k-1,0,k-1,m,v)
l2solve(k,b,v,m,p)
print("\n \n the prime modulus p is",p)
print(" the solution is b = ",b)



""" Example 2 """
""" This generates a random k x k matrix and solves it mod the prime p """
p = 7
k = 10
print("\n \n Example 2 solving a random",k,"x",k,"matrix modulo",p)
print()
m = init1(k,k)
v = init2(k)
b = test2(k,m,v,p)
print("\n \n The solution is ",b)



