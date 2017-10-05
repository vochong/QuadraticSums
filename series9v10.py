from group42 import *

def init8(k,c,flag4):
    p = k.p
    
    m = init1(16,8)
    b1 = init2(16)
    q = (p-1)//2
    a4 = exp2a(2*q//3,k.a2,p)
    q1 = q//27
    if q1%3==1:
        a4[1] = p-a4[1]

    a4[1] = (p+a4[1])%p
    
    t1 = a4[0]
    t2 = (p-a4[0])%p
    t3 = a4[1]
    t4 = (p-a4[1])%p

    m[0] =  [p-2,2,p-1,1,   0,0,0,0]
    m[12] = [0,0,0,0,      t1,t3,t4,t1]
    m[13] = [0,0,0,0,      t4,t1,t2,t4]
    m[14] = [0,0,0,0,      t1,t3,t3,t2]
    m[15] = [0,0,0,0,      t4,t1,t1,t3]

    s1 = 3*t1%p
    s2 = 3*t3%p
    s3 = t4
    s4 = t1
    t5 = 6*s1%p
    t6 = 6*s2%p
    t7 = 6*s3%p
    t8 = 6*s4%p

    m[1] = [0,p-2,0,p-1,   t5,t6,t7,t8]

    s5 = 3*t4%p
    s6 = 3*t1%p
    s7 = t2 
    s8 = t4

    t5 = (p-s1)%p
    t6 = (p-s2)%p
    t7 = (p-s3)%p
    t8 = (p-s4)%p
    t5 = (s5+t5)%p
    t6 = (s6+t6)%p
    t7 = (s7+t7)%p
    t8 = (s8+t8)%p
    m[2] = [0,0,0,0,        t5,t6,t7,t8]    

    s = (p-1)//3
    s1 = 4*t1%p
    s2 = 4*t3%p
    s3 = 2*t4%p
    s4 = 2*t1%p
    m[3] = [s,0,s,0,            s1,s2,s3,s4]

    s1 = 4*t4%p
    s2 = 4*t1%p
    s3 = 2*t2%p
    s4 = 2*t4%p
    m[4] = [0,s,0,s,            s1,s2,s3,s4]

    s = (p-a4[1])%p
    s = (a4[0]+s)%p
    s1 = 3*t1%p
    s1 = s*s1%p
    s1 = (s1+(p-2))%p
    s2 = 3*t3%p
    s2 = s*s2%p
    s3 = s*t4%p
    s4 = s*t1%p
    m[10] = [0,0,0,0,           s1,s2,s3,s4]

    s = (a4[0]+a4[1])%p
    s1 = 3*t1%p
    s1 = s*s1%p
    s2 = 3*t3%p
    s2 = s*s2%p
    s2 = (s2+(p-2))%p
    s3 = s*t4%p
    s4 = s*t1%p
    m[11] = [0,0,0,0,           s1,s2,s3,s4]

    if flag4==1:
        m[0] =  [p-2,p-2,p-1,p-1,   0,0,0,0]
        m[1][1] = 2
        m[1][3] = 1
        m[2][5] = (p-m[2][5])%p
        m[2][7] = (p-m[2][7])%p

        s = (p+a4[1])%p
        s = (a4[0]+s)%p
        s1 = 3*t1%p
        s1 = s*s1%p
        s1 = (s1+(p-2))%p
        s2 = 3*t3%p
        s2 = s*s2%p
        s3 = 1*s*t4%p
        s4 = 1*s*t1%p
        m[10] = [0,0,0,0,           s1,s2,s3,s4]

        s = (a4[0]+(p-1)*a4[1])%p
        s = (p-s)%p
        s1 = 3*t1%p
        s1 = s*s1%p
        s2 = 3*t3%p
        s2 = s*s2%p
        s2 = (s2+(p-2))%p
        s3 = s*t4%p
        s4 = s*t1%p
        m[11] = [0,0,0,0,           s1,s2,s3,s4]    

    for i in range(8):
        m[8][i] = m[10][i]
        m[9][i] = (m[12][i]+m[14][i])%p

    m[8][4] = (m[8][4]+1)%p

    for i in range(8):
        s1 = m[8][i]
        s2 = m[9][i]
        s2 = (p-s2)%p
        s1 = (s1+s2)%p
        s1 = c*s1%p
        m[7][i] = s1

    s = 2*a4[1]%p
    s = (p-s)%p
    m[7][0] = p-5
    m[7][1] = s
    m[7][2] = p-1
    m[7][3] = s    

    s = (p-1)//3
    s = 7*s%p
    s = a4[1]*s%p
    s = (p-s)%p
    b2 = [1,0,2*a4[1]%p,(p-1)//6,     s,0,0,0]

    # test 

    m[5] = [0,0,0,0,    0,0,0,0]
    m[6] = [0,0,0,0,    0,0,0,0]
    m[7] = [0,0,0,0,    0,0,0,0]

    for i in range(8):
        m[6][i] = c*m[14][i]%p

    m[6][0] = 2
    m[6][2] = p-1

    # m[7] = [2,0,p-1,0,   0,0,0,0]

    s = 2*a4[1]%p
    m[7] = [p-1,p-s,0,0,  p-12,0,0,0]
    m[6] = [0,0,0,0,  0,0,0,0]

    return(m,b2)
    
"""
The prime p should equal 216n+1 for some integer n
where gcd(3,n)=1
"""

p = 2377

k = group(0,p)
k = group(exp1(1,k.g,p),p)
flag4 = 0

k8 = k.f81(1,(p-1)//2,2)
print("\n \n k8 = ",k8)

b1 = init2(16)
# flag4 = 1
m,b2 = init8(k,p-6,flag4)

print("\n \n")
display(0,15,0,7,m,b1)


for i in range(16):
    b1[i] = multcnvl2(m[i],k8,p)

print("\n \n b1 = ",b1)
print()
print("\n    b2 = ",b2)
print("\n b1[0] = ",b1[0:8])
print("\n b1[1] = ",b1[8:])

h1 = [0 for i in range(8)]

b3 = b2[0:8]
solve2(8,m,b3,p)
t1 = det(8,m)
print("\n \n det = ",t1)
display(0,7,0,7,m,b3)
l2solve(8,h1,b3,m,p)
print("after solve2 = ",h1)
print("\n \n")

e = (p-1)//9
h1 = k.series5(e,2*e)
h2 = k.series5(e,4*e)
h3 = k.series5(e,8*e)
print("\n h1 = ",h1)
print("\n h2 = ",h2)
print("\n h3 = ",h3)

h4 = k.series1(3,e//2,9,0,2)
h5 = k.series1(6,e//2,9,0,2)
print("\n \n h4 = ",h4)
print("\n h5 = ",h5)

s1 = (h1[2]+(p-1)*h2[2]+h3[2])%p
s2 = (h1[3]+(p-1)*h2[3]+h3[3])%p
s3 = (h4[0]+h5[0])%p
s4 = (h4[1]+h5[1])%p

t1 = inverse(s3,p)*s1%p
t2 = inverse(s4,p)*s2%p
s = t1*t1%p
print("\n \n t1 =",t1,"  t2 =",t2,"  s =",s)

print("\n \n (1) (1/72, 12) ")
p = 77761
k = group(0,p)

e = (p-1)//72
h1 = k.series(0,e,12*e,2)
h2 = k.series(8*e+1,9*e,0,2)
print("\n \n h1 = {0}   h2 = {1}".format(h1,h2))

s1 = (2*h1[0]+h2[0])%p
s2 = (2*h1[1]+h2[1])%p

h3 = k.series1(3,e,6,0,2)
h4 = k.series1(0,e,6,0,2)
print("\n h3 = {0}   h4 = {1}".format(h3,h4))

s3 = 3*(h4[0]+(p-1)*h3[0])%p
s4 = 3*(h4[1]+(p-1)*h3[1])%p

print("\n \n s1 = {0}   s2 = {1}".format(s1,s2))
print("\n s3 = {0}   s4 = {1}".format(s3,s4))
print()

print("\n (2)  (1/36, 6) ")

e = (p-1)//36
h1 = k.series(0,e,6*e,2)
h2 = k.series(7*e//2+1,9*e//2,0,2)
print("\n \n h1 = {0}   h2 = {1}".format(h1,h2))

s1 = (2*h1[0]+h2[0])%p
s2 = (2*h1[1]+h2[1])%p

h3 = k.series1(3,e,6,0,2)
h4 = k.series1(0,e,6,0,2)
print("\n h3 = {0}   h4 = {1}".format(h3,h4))

s3 = 3*(h4[0]+(p-1)*h3[0])%p
s4 = 3*(h4[1]+(p-1)*h3[1])%p

print("\n \n s1 = {0}   s2 = {1}".format(s1,s2))
print("\n s3 = {0}   s4 = {1}".format(s3,s4))
print()

