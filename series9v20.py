from group42 import*

def calc9(k,c1):
    p = k.p
    q1 = init2(10)
    q2 = init2(10)
    q3 = init2(10)
    q4 = init2(10)
    if (c1==2):
        e1 = (p-1)//9
        e = e1**2
        a3 = exp2a(e//2,k.a2,p)
        a4 = exp2a(4,a3,p)
        a5 = exp2a(16,a3,p)
        t1 = (p+1)//2
        a3[0] = t1*a3[0]%p
        a3[1] = t1*a3[1]%p
        a4[0] = t1*a4[0]%p
        a4[1] = t1*a4[1]%p
        a5[0] = t1*a5[0]%p
        a5[1] = t1*a5[1]%p
        t1 = (2*a3[0]+a4[0])%p
        t2 = (2*a3[1]+a4[1])%p
        t3 = (a3[0]+a4[0])%p
        t4 = (a3[1]+a4[1])%p
        t5 = 0
        t6 = 0
        t7 = (a4[0]+2*a5[0])%p
        t8 = (a4[1]+2*a5[1])%p
        t9 = a5[0]
        t10 = a5[1]
        q1 = [t1,t2,t3,t4,t5,t6,t7,t8,t9,t10]
        t2 = (p-t2)%p
        t4 = (p-t4)%p
        t6 = (p-t6)%p
        t8 = (p-t8)%p
        t10 = (p-t10)%p
        q2 = [t2,t1,t4,t3,t6,t5,t8,t7,t10,t9]

        t1 = (2*a3[0]+(p-1)*a4[0])%p
        t2 = (2*a3[1]+(p-1)*a4[1])%p
        t3 = ((p-1)*a3[0]+(p-1)*a4[0])%p
        t4 = ((p-1)*a3[1]+(p-1)*a4[1])%p
        t5 = ((p-1)*a3[0]+a4[0]+a5[0])%p
        t6 = ((p-1)*a3[1]+a4[1]+a5[1])%p
        t7 = a4[0]
        t8 = a4[1]
        t9 = (p-a5[0])%p
        t10 = (p-a5[1])%p
        q4 = [t1,t2,t3,t4,t5,t6,t7,t8,t9,t10]
        t1 = (p-t1)%p
        t3 = (p-t3)%p
        t5 = (p-t5)%p
        t7 = (p-t7)%p
        t9 = (p-t9)%p
        q3 = [t2,t1,t4,t3,t6,t5,t8,t7,t10,t9]
   
    if (c1==4):
        e1 = 2*(p-1)//9
        e = e1**2
        a3 = exp2a(e//2,k.a2,p)
        a4 = exp2a(4,a3,p)
        a5 = exp2a(16,a3,p)
        t1 = (p+1)//2
        a3[0] = t1*a3[0]%p
        a3[1] = t1*a3[1]%p
        a4[0] = t1*a4[0]%p
        a4[1] = t1*a4[1]%p
        a5[0] = t1*a5[0]%p
        a5[1] = t1*a5[1]%p
        t1 = (2*a3[0]+a4[0]+2*a5[0])%p
        t2 = (2*a3[1]+a4[1]+2*a5[1])%p
        t3 = (2*a3[0]+2*a4[0]+2*a5[0])%p
        t4 = (2*a3[1]+2*a4[1]+2*a5[1])%p
        t5 = (a3[0]+2*a4[0]+2*a5[0])%p
        t6 = (a3[1]+2*a4[1]+2*a5[1])%p
        t7 = (2*a3[0]+2*a4[0]+a5[0])%p
        t8 = (2*a3[1]+2*a4[1]+a5[1])%p
        t9 = (a3[0]+a4[0]+a5[0])%p
        t10 = (a3[1]+a4[1]+a5[1])%p
        q1 = [t1,t2,t3,t4,t5,t6,t7,t8,t9,t10]
        t2 = (p-t2)%p
        t4 = (p-t4)%p
        t6 = (p-t6)%p
        t8 = (p-t8)%p
        t10 = (p-t10)%p
        q2 = [t2,t1,t4,t3,t6,t5,t8,t7,t10,t9]

        t1 = (2*a3[0]+(p-1)*a4[0]+(p-2)*a5[0])%p
        t2 = (2*a3[1]+(p-1)*a4[1]+(p-2)*a5[1])%p
        t3 = (2*a3[0])%p
        t4 = (2*a3[1])%p
        t5 = (p-a3[0])%p
        t6 = (p-a3[1])%p
        t7 = ((p-2)*a3[0]+a5[0])%p
        t8 = ((p-2)*a3[1]+a5[1])%p
        t9 = ((p-1)*a3[0]+a4[0]+a5[0])%p
        t10 = ((p-1)*a3[1]+a4[1]+a5[1])%p
        q4 = [t1,t2,t3,t4,t5,t6,t7,t8,t9,t10]
        t1 = (p-t1)%p
        t3 = (p-t3)%p
        t5 = (p-t5)%p
        t7 = (p-t7)%p
        t9 = (p-t9)%p
        q3 = [t2,t1,t4,t3,t6,t5,t8,t7,t10,t9]

    return(q1,q2,q3,q4)
        

"""
The prime p should be of the form 72n+1
where n = 5 mod 9 or n = 7 mod 9
"""

p1 = [1657,1801,2953,6841,7489]
p = p1[4]

k = group(0,p)
k = group(exp1(5,k.g,p),p)
k1 = group(exp1(9,k.g,p),p)
k2 = group(exp1(81,k.g,p),p)

k.list2(9,2)
k1.list1(3,2,(p-1)//18)
k2.list1(9,2,(p-1)//18)

s1 = k.calc29(1,2,1*(p-1)//2,p)
s2 = k2.calc29(1,2,1*(p-1)//18,p)

k20 = init2(20)

for i in range(5):
    h1 = k.series(s1[2*i],s1[2*i+1],0,2)
    k20[2*i] = h1[0]
    k20[2*i+1] = h1[1]
    h2 = k2.series(s2[2*i],s2[2*i+1],0,2)
    k20[2*i+10] = h2[0]
    k20[2*i+11] = h2[1]   


print("\n \n s1 = ",s1)
print("\n \n s2 = ",s2)
print("\n \n k20 = ",k20)
m = init1(30,20)

m[0] = [p-2,2,p-2,2,p-2,2,p-2,2,p-1,1,
        0,0,0,0,0,0,0,0,0,0]

m[1] = [0,0,0,0,0,0,0,0,0,0,
        p-2,2,p-2,2,p-2,2,p-2,2,p-1,1]

m[2] = [0,2,0,2,0,2,0,2,0,1,
        0,p-6,0,p-6,0,p-6,0,p-6,0,p-3]

m[3] = [p-1,0,0,0,p-1,0,p-1,0,0,0,
        3,0,0,0,3,0,3,0,0,0] 

m[4] = [0,p-1,0,0,0,p-1,0,p-1,0,0,
        0,3,0,0,0,3,0,3,0,0]

m[5] = [0,0,2,0,0,0,0,0,1,0,
        0,0,p-6,0,0,0,0,0,p-3,0]

m[6] = [0,0,0,2,0,0,0,0,0,1,
        0,0,0,p-6,0,0,0,0,0,p-3]

e = (p-1)//18
h1 = k.series(1,e,4*e,2)
h2 = k.series(1,e,8*e,2)
h3 = k.series(1,e,16*e,2)
t1 = (h1[0]+h2[0]+h3[0])%p
t2 = (h1[1]+h2[1]+h3[1])%p
h4 = [t1,t2,0,0]
print("\n \n h4 = ",h4)

a3 = exp2a(2*e*e,k.a2,p)
a4 = exp2a(4,a3,p)
a5 = exp2a(16,a3,p)
t1 = (p+1)//2
c1 = t1*a3[0]%p
s1 = t1*a3[1]%p
c2 = t1*a4[0]%p
s2 = t1*a4[1]%p
c3 = t1*a5[0]%p
s3 = t1*a5[1]%p

m[8] = [c1+2*c3,s1+2*s3,    c1+c3,s1+s3,     c1+c2+c3,s1+s2+s3,
        c1+2*c2,s1+2*s2,    c2,s2,
        0,0,0,0,0,0,0,0,0,0]

t = 3*(p+1)//2
t = t%p
m[20] = [0,0,0,0,0,0,0,0,0,0,
        2*t,0,0,0,p-t,0,p-t,0,0,0]

c1,s1 = p-s1,c1
c2,s2 = p-s2,c2
c3,s3 = p-s3,c3

m[9] = [c1+2*c3,s1+2*s3,    c1+c3,s1+s3,     c1+c2+c3,s1+s2+s3,
        c1+2*c2,s1+2*s2,    c2,s2,
        0,0,0,0,0,0,0,0,0,0]

t = 3*(p+1)//2
t = t%p
m[21] = [0,0,0,0,0,0,0,0,0,0,
        0,2*t,0,0,0,p-t,0,p-t,0,0]

e = (p-1)//9
h1 = k.series(1,e,2*e,2)
h2 = k.series(1,e,4*e,2)
h3 = k.series(1,e,8*e,2)
t3 = (h1[0]+h2[0]+h3[0])%p
t4 = (h1[1]+h2[1]+h3[1])%p
t5 = (h1[2]+(p-1)*h2[2]+h3[2])%p
t6 = (h1[3]+(p-1)*h2[3]+h3[3])%p
h5 = [t3,t4,t5,t6]
print("\n \n h5 = ",h5)

t = 3*(p+1)//2
t = t%p
m[22] = [0,0,0,0,0,0,0,0,0,0,
        2*t%p,0,t,0,p-t,0,p-t,0,p-t,0]

m[23] = [0,0,0,0,0,0,0,0,0,0,
         0,2*t%p,0,t,0,p-t,0,p-t,0,p-t]

e1 = (p-1)//9
a3 = exp2a(3*e**2,k.a2,p)
s3 = 2*a3[1]%p
s3 = (p-s3)%p

t = 3*s3*(p+1)//2
t = t%p
t = (p-t)
m[24] = [0,0,0,0,0,0,0,0,0,0,
         0,0,t,0,t,0,p-t,0,p-t,0]

m[25] = [0,0,0,0,0,0,0,0,0,0,
         0,0,0,t,0,t,0,p-t,0,p-t]

m[10],m[11],m[12],m[13] = calc9(k,2)

t1 = init2(10)
m[10] = m[10]+t1[:]
m[11] = m[11]+t1[:]
m[12] = m[12]+t1[:]
m[13] = m[13]+t1[:]

t1 = p-1
for i in range(0,10):
    m[8][i+10] = t1*m[20][i+10]%p
    m[9][i+10] = t1*m[21][i+10]%p
    m[10][i+10] = t1*m[22][i+10]%p
    m[11][i+10] = t1*m[23][i+10]%p
    m[12][i+10] = t1*m[24][i+10]%p
    m[13][i+10] = t1*m[25][i+10]%p

e = 2*(p-1)//9
h1 = k.series(1,e,2*e,2)
h2 = k.series(1,e,4*e,2)
h3 = k.series(1,e,8*e,2)
t3 = (h1[0]+h2[0]+h3[0])%p
t4 = (h1[1]+h2[1]+h3[1])%p
t5 = (h1[2]+(p-1)*h2[2]+h3[2])%p
t6 = (h1[3]+(p-1)*h2[3]+h3[3])%p
h6 = [t3,t4,t5,t6]
print("\n \n h6 = ",h6)
t1 = 3*(p+1)//2
t1 = t1%p
t2 = (p-t1)%p
m[26] = [0,0,0,0,0,0,0,0,0,0,
         0,0,t1,0,0,0,0,0,t2,0]

m[27] = [0,0,0,0,0,0,0,0,0,0,
         0,0,0,t1,0,0,0,0,0,t2]

t1 = 3*s3*(p+1)//2
t1 = t%p
t2 = (p-t1)
m[28] = [0,0,0,0,0,0,0,0,0,0,
         2*t2,0,t2,0,0,0,2*t1,0,t1,0]

m[29] = [0,0,0,0,0,0,0,0,0,0,
         0,2*t2,0,t2,0,0,0,2*t1,0,t1]

m[14],m[15],m[16],m[17] = calc9(k,4)

t1 = init2(10)
m[14] = m[14]+t1[:]
m[15] = m[15]+t1[:]
m[16] = m[16]+t1[:]
m[17] = m[17]+t1[:]

t1 = p-1
for i in range(0,10):
    m[14][i+10] = t1*m[26][i+10]%p
    m[15][i+10] = t1*m[27][i+10]%p
    m[16][i+10] = t1*m[28][i+10]%p
    m[17][i+10] = t1*m[29][i+10]%p

m[8] = init2(20)
m[9] = init2(20)

b2 = init2(30)
for i in range(30):
    b2[i] = multcnvl2(m[i],k20,p)

q1 = (p-1)//9
print("\n \n q1 = {0}  q1 mod 9 = {1}".format(q1,q1%9))
a3 = exp2a(2*q1*q1,k.a2,p)
t1 = (p+a3[0])%p
t1 = (t1+(p-1))%p
t2 = (p+a3[1])%p
t3 = 2*a3[0]%p
t4 = 2*a3[1]%p
t5 = 7*inverse(4,p)%p
t6 = s3*inverse(4,p)%p
a4 = exp2a(2,a3,p)
t7 = ((p-1)*t6+a4[1])%p
t8 = (t5+(p-1)+(p-a4[0]))%p
t = (p-1)//2
t9 = (t*a3[0]+t+1)%p
t10 = (t+1)*a3[1]%p
t11 = ((p-1)*t10+3*s3*(t+1))%p
t12 = t*a3[0]%p
b3 = [1,1,0,t1,t2,t3,t4,0,0,0,
      t5,t6,t7,t8,t9,t10,t11,t12,0,0]

print("\n \n b2 = ",b2[:10],"\n      ",b2[10:20],"\n      ",b2[20:])
print("\n \n b3 = ",b3[:10],"\n      ",b3[10:20])

v1 = init2(30)
print("\n \n")
display(0,29,0,19,m,v1)
h1 = init2(30)

solve2(20,m,v1,p)
t1 = det(20,m)
print("\n \n det = ",t1)
display(0,19,0,19,m,v1)
l2solve(20,h1,v1,m,p)
print("after solve2 = ",h1)
print("\n \n")

k.list2(9,2)
k1.list1(3,2,(p-1)//18)
k2.list1(9,2,(p-1)//18)

p = 2377
k = group(0,p)
print("\n \n")
a3 = exp2a((p-1)//18,k.a2,p)
for i in range(18):
    a4 = exp2a(1*i,a3,p)
    a5 = exp2a(2*i,a3,p)
    a6 = exp2a(5*i,a3,p)
    a7 = exp2a(6*i,a3,p)
    s1 = 8*a4[0]*a5[0]*a6[0]%p
    s2 = 8*a4[1]*a5[1]*a6[1]%p
    s3 = 2*a7[1]%p
    print(i,s1,s2,s3)

