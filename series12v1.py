from group45 import *

""" The prime p should be of the form 24n+1
where gcd(3,n) = 1 """

p = 1753

k = group(0,p)

# k = group(1*k.g%p,p)

k = group(exp1(1,k.g,p),p)

c = ((p-1)//3)%3
t1 = exp1(c*(p-1)//3,k.g,p)
g1 = t1*k.g%p
k1 = group(g1,p)
g2 = exp1(9,k.g,p)
k2 = group(g2,p)

g3 = t1*g1%p
k3 = group(g3,p)
d2 = 1

"""
k.list2(12,4)
k1.list2(12,4)
k2.list2(12,4)
"""

"""
k.a2[1] = p-k.a2[1]
k1.a2[1] = p-k1.a2[1]
k2.a2[1] = p-k2.a2[1]
"""    

h1 = k.calc21(1,2*d2,(p-1)//(2*d2),p)
print("\n\n h1 =",h1)

k12 = init2(18)
h2 = k.series(h1[0],h1[1],0,2*d2)
k12[0] = h2[0]
k12[1] = h2[1]
h2 = k.series(h1[2],h1[3],0,2*d2)
k12[2] = h2[0]
k12[3] = h2[1]
h2 = k.series(h1[4],h1[5],0,2*d2)
k12[4] = h2[0]
k12[5] = h2[1]


h1 = k1.calc21(1,2*d2,(p-1)//(2*d2),p)
print("\n\n h1 =",h1)
k          
h2 = k1.series(h1[0],h1[1],0,2*d2)
k12[6] = h2[0]
k12[7] = h2[1]
h2 = k1.series(h1[2],h1[3],0,2*d2)
k12[8] = h2[0]
k12[9] = h2[1]
h2 = k1.series(h1[4],h1[5],0,2*d2)
k12[10] = h2[0]
k12[11] = h2[1]


h1 = k2.calc21(1,2*d2,(p-1)//(6*d2),p)
print("\n\n h1 =",h1)

h2 = k2.series(h1[0],h1[1],0,2*d2)
k12[12] = h2[0]
k12[13] = h2[1]
h2 = k2.series(h1[2],h1[3],0,2*d2)
k12[14] = h2[0]
k12[15] = h2[1]
h2 = k2.series(h1[4],h1[5],0,2*d2)
k12[16] = h2[0]
k12[17] = h2[1]

print("\n\n k12 =",k12)

m = init1(18,18)

q1 = (p-1)//2
s = sqrt1(3,p)
s = (p+s)%p
print("\n\n s =",s)


# 1

if q1%4==0:
    c1 = (q1//3)%3
    a3 = exp2a(c1*(p-1)//3,k.a2,p)
    s = 2*a3[1]%p
    a4 = exp2a(2*c1*(p-1)//3,k.a2,p)
    c1 = a4[0]
    s1 = a4[1]

    c2 = p-(c1-1)
    s2 = p-s1
    
    m[0] = [1,p-1,1,p-1,1,p-1,    0,0,0,0,0,0,               0,0,0,0,0,0]
    m[1] = [0,0,0,0,0,0,          1,p-1,1,p-1,1,p-1,         0,0,0,0,0,0]
    m[2] = [0,0,0,0,0,0,          0,0,0,0,0,0,               1,1,1,1,1,1]
    m[3] = [1,0,1,0,1,0,          1,0,1,0,1,0,               0,0,0,0,0,0]
    
    s3 = p-s
    m[4] = [1,0,1,0,1,0,          0,0,0,0,0,0,               s3,0,s3,0,s3,0]

    s1 = s1
    s2 = s2
    m[5] = [c1,s1,0,0,0,0,        p-1,0,0,0,0,0,          c2,s2,0,0,0,0]
    m[6] = [0,0,c1,s1,0,0,        0,0,p-1,0,0,0,          0,0,c2,s2,0,0]
    m[7] = [p-s1,c1,0,0,0,0,      0,p-1,0,0,0,0,          s1,p-(c1-1),0,0,0,0]
    m[8] = [0,0,p-s1,c1,0,0,      0,0,0,p-1,0,0,          0,0,s1,p-(c1-1),0,0]
    

    c2 = p-s1
    s2 = c1
    m[9] = [p-c1,s1,p-c1,s1,p-1,0,        0,0,0,0,0,0,        0,0,0,0,3,0]
    m[10] = [p-s1,p-c1,p-s1,p-c1,0,p-1,   0,0,0,0,0,0,        0,0,0,0,0,3]
    

    m[11] = [1,0,c1,p-s1,c1,p-s1,         0,0,0,0,0,0,        p-3,0,0,0,0,0]
    m[12] = [0,1,s1,c1,s1,c1,             0,0,0,0,0,0,        0,p-3,0,0,0,0]
    

    s = (p+s)%p
    print("\n\n s =",s)
    # m[13] = [1,s,0,0,p-1,p-s,         1,p-s,0,0,p-1,s,    0,0,0,0,0,0]
    # m[14] = [p-s,1,0,0,s,p-1,         s,1,0,0,p-s,p-1,    0,0,0,0,0,0]

    d = 4*(p-1)//6
    d = d*s%p
    d1 = (p+d)%p
    d2 = (p-d)%p
    m[15] = [d1,0,d1+1,s,d1,0,           0,0,1,p-s,0,0,      0,0,0,0,0,0]
    m[16] = [0,d2,p-s,d2+1,0,d2,         0,0,s,1,0,0,        0,0,0,0,0,0]

    m[15] = [d1+1,s,d1,0,d1,0,           1,p-s,0,0,0,0,      0,0,0,0,0,0]
    m[16] = [d2+(p-s),1,d2,0,d2,0,       s,1,0,0,0,0,      0,0,0,0,0,0]

    m[17] = [(p-s)+1,1+(p+s),0,0,0,0,    1+(p+s),(p-s)+1,0,0,0,0,      0,0,0,0,0,0]


    m[15] = init2(18)
    m[16] = init2(18)
    m[17] = init2(18)    

for i in range(18,18):
    m[i] = [0 for j in range(18)]

b2 = [9 for i in range(18)]
for i in range(18):
    b2[i] = multcnvl2(m[i],k12,p)

print("\n\n b2 = \n",b2)

b1 = init2(18)
q1 = (p-1)//8

if (q1%4==1):
    t1 = (p+1)//2
    t1 = (s-1)*t1%p
    t2 = p-s
    t2 = ((p+1)//2)*t2%p
    t3 = (2*p+1)//3
    t4 = (s-3)*t3%p
    t3 = (p-(t4+2))%p
    b1 = [0,0,p-1,p-1,t1,0,0,0,0,(p+1)//2,t2-1,t2+1,(p-1)//2,p-2,2,t4,t3,0]


if (q1%4==3):
    t1 = (p+1)//2
    t1 = (s-1)*t1%p
    t2 = p-s
    t2 = ((p+1)//2)*t2%p
    t3 = (2*p+1)//3
    t4 = (s-3)*t3%p
    t3 = (t4+2)%p
    t5 = (p+1)-t2
    b1 = [p-1,p-1,0,p-1,t1,0,0,0,0,(p+1)//2,t2+1,t5,(p+1)//2,p-2,p-2,t4,t3,0]


if (q1%4==2):
    t1 = (p+3)//2
    t2 = p-s
    t2 = ((p+1)//2)*t2%p
    b1 = [0,0,0,0,0,0,0,0,0,t1,t2,t1,t2,p-4,0,0,0,0]


if (q1%4==0):
    t1 = (p-1)//2
    t2 = p-s
    t2 = ((p+1)//2)*t2%p
    t3 = s-3
    t4 = (2*p+1)//3
    t4 = 2*t4%p
    t4 = t3*t4%p
    b1 = [p-1,p-1,p-1,p-2,s-1,0,0,0,0,t1,t2,t1+1,p-t2,0,0,t4,0,0]
    
    b1 = [p-1,p-1,p-1,p-2,s-1,0,0,0,0,t1,t2,t1+1,p-t2,0,0,t4,0,0]


for i in range(13,18):
    b1[i] = 0    

print("\n\n b1 = \n",b1)

v1 = init2(18)
v1 = b2[:]

print("\n \n")
display(0,17,0,17,m,v1)

h1 = [0 for i in range(18)]

solve2(18,m,v1,p)
t1 = det(18,m)
print("\n \n det = ",t1)
display(0,17,0,17,m,v1)
l2solve(18,h1,v1,m,p)
print("after solve2 = ",h1)
print("\n \n")
