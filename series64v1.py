from group42 import *

"""
For the output to be correct p should be a prime
of the form 64n+1 where n is an odd integer.
That is p should equal 65 (mod 128)
This shows 5 equations m[0] through m[4]
involving the variables stored in the array k8.
"""

p1 = [2113,3137,4673]
p3 = [2753,4289]
p = p3[1]
print("\n \n p =",p)
print()
k = group(0,p)
k = group(exp1(1,k.g,p),p)
k.f32(0,0,2)
k16 = k.k32((p-1)//2,2)
k8 = k16[8:]

print("\n \n k16 = ",k16)
print("\n \n k8 = ",k8)
m = init1(8,8)

q = (p-1)//64
if q%4==1:
    a3 = exp2a(8*q**2,k.a2,p)
    s = p-a3[0]
    print("\n s =",s,"  p =",p)

    m[0] = [s,p-s,0,0,0,p-1,0,0]
    m[1] = [0,0,s,s,p-1,0,0,0]
    m[2] = [1,p-1,1,p-1,0,0,0,0]   
    m[3] = [0,0,0,0,0,1,0,p-1]
    c = (p+1)//2
    m[4] = [c,c,c,c,p-s,0,s,0]
    m[5] = [1,0,p-1,0,0,0,0,0]
    m[6] = [0,1,0,p-1,0,0,0,0]
    m[7] = [0,0,0,0,1,1,1,1]    

if q%4==3:
    a3 = exp2a(8*q**2,k.a2,p)
    s = p-a3[0]
    print("\n s =",s,"  p =",p)

    m[0] = [s,s,0,0,0,p-1,0,0]
    m[1] = [0,0,s,p-s,0,0,1,0]
    m[2] = [p-1,1,p-1,1,0,0,0,0]   
    m[3] = [0,0,0,0,p-2,0,2,0]
    c = (p+1)//2
    m[4] = [c,c,c,c,0,p-s,0,s]
    m[5] = [1,0,p-1,0,0,0,0,0]
    m[6] = [0,1,0,p-1,0,0,0,0]
    m[7] = [0,0,0,0,1,1,1,1]    
 
b2 = [0 for i in range(8)]
for i in range(8):
    b2[i] = multcnvl2(m[i],k8,p)

print("\n \n b2 = ",b2)

if q%4==1:
    b1 = [0,0,0,0,0,0,0,0]
    
if q%4==3:
    b1 = [0,0,s,1,0,0,0,0]

print("\n \n b1 = ",b1)
v1 = b2[:]
print("\n \n")
display(0,7,0,7,m,v1)
h1 = [0 for i in range(8)]
solve2(8,m,v1,p)
t1 = det(8,m)
print("\n \n det = ",t1)
display(0,7,0,7,m,v1)
l2solve(8,h1,v1,m,p)
print("after solve2 = ",h1)
print("\n \n")

e = (p-1)//32
h1 = k.series(0,e,0,2)
h2 = k.series(e,2*e,0,2)
h3 = k.series(2*e,3*e,0,2)
h4 = k.series(3*e,4*e,0,2)
# print(h1,h2,h3,h4)
h5 = h1[0:2]+h2[0:2]+h3[0:2]+h4[0:2]
print("\n \n h5 =",h5)

s1 = ((h1[0]+h4[0])+(p-1)*(h2[0]+h3[0]))%p
s2 = ((h1[1]+h4[1])+(p-1)*(h2[1]+h3[1]))%p
print("\n \n s1 = ",s1,"  s2 = ",s2)

h1 = k.series1(4,e,8,0,2)
h2 = k.series1(0,e,8,0,2)
print("\n \n",h1,"\n \n",h2)

e2 = h1[0]
f2 = h1[1]
g2 = h2[0]
h2 = h2[1]
s3 = 4*(e2+g2)%p
s4 = 4*(f2+h2)%p

print("\n e2 = {0}  f2 = {1}  g2 = {2}  h2 = {3}".format(e2,f2,g2,h2))
print("\n \n s3 = {0}  s4 = {1}".format(s3,s4))
