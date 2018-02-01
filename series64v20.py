from group42 import *

def list64(k,e1,e2,q,d1):
    q1 = q//32
    print("\n \n p = {0}  q = {1}  q1 = {2}".format(p,q,q1))      
    for i in range(e1,e2+1):
        t = i*q1
        t1 = (i+1)*q1
        t2 = 15*t%16
        
        s1 = t+(t2+1)%16
        s2 = t+(t2+7)%16
        s3 = t+(t2+9)%16
        s4 = t+(t2+15)%16
        h1 = k.series1(s1,t1,16,0,2)
        h2 = k.series1(s2,t1,16,0,2)
        h3 = k.series1(s3,t1,16,0,2)
        h4 = k.series1(s4,t1,16,0,2)
        t3 = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
        t4 = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

        # t3 = (h1[0]+h2[0]+(p-1)*h3[0]+(p-1)*h4[0])%p
        # t4 = (h1[1]+h2[1]+(p-1)*h3[1]+(p-1)*h4[1])%p
        
        a = [t3,t4]
        

        s1 = t+(t2+3)%16
        s2 = t+(t2+5)%16
        s3 = t+(t2+11)%16
        s4 = t+(t2+13)%16
        h1 = k.series1(s1,t1,16,0,2)
        h2 = k.series1(s2,t1,16,0,2)
        h3 = k.series1(s3,t1,16,0,2)
        h4 = k.series1(s4,t1,16,0,2)
        t3 = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
        t4 = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p
        
        # t3 = (h1[0]+h2[0]+(p-1)*h3[0]+(p-1)*h4[0])%p
        # t4 = (h1[1]+h2[1]+(p-1)*h3[1]+(p-1)*h4[1])%p

        b = [t3,t4]
        
        t3 = [s1,s2,s3,s4,t1]
        # print("\n ({0})  {1}    {2}".format(i,t3,s))
        print("\n ({0})   {1}  {2}  ".format(i,a,b))


def f8(k,q,d1):
    s = init2(8)
    q1 = q//32
    h1 = k.series1(1,q1,16,0,2)
    h2 = k.series1(7,q1,16,0,2)
    h3 = k.series1(9,q1,16,0,2)
    h4 = k.series1(15,q1,16,0,2)
    s[0] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
    s[1] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p
    
    h1 = k.series1(3,q1,16,0,2)
    h2 = k.series1(5,q1,16,0,2)
    h3 = k.series1(11,q1,16,0,2)
    h4 = k.series1(13,q1,16,0,2)
    s[2] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
    s[3] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

    k16 = k.k32(q,d1)
    s[4] = (k16[8]+k16[10])%p
    s[5] = (k16[9]+k16[11])%p
    s[6] = (k16[12]+k16[14])%p
    s[7] = (k16[13]+k16[15])%p
    return(s)

def equation22(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = q//32

    h1 = k.series(1,q1,12*q1,2)
    h2 = k.series(1,q1,20*q1,2)
    t1 = (h1[0]+(p-1)*h2[0])%p
    t2 = (h1[1]+(p-1)*h2[1])%p
    print("\n \n in equation22 t1 = {0}  t2 = {1}".format(t1,t2))
    a3 = exp2a(12*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t3 = 2*(c1*k8[0]+c2*k8[2])%p
    t4 = 2*(c1*k8[1]+c2*k8[3])%p
    print("\n in equation22 t3 = {0}  t4 = {1}".format(t3,t4))

    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(18*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]
    m[t] = [t1,0,t2,0,    t3,t4,p-t3,p-t4]
    m[t+1] = [0,t1,0,t2,  p-t4,t3,t4,p-t3]

def equation23(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = 3*q//32
    
    h1 = k.series(1,q1,12*q1,2)
    h2 = k.series(1,q1,20*q1,2)
    t1 = (h1[0]+(p-1)*h2[0])%p
    t2 = (h1[1]+(p-1)*h2[1])%p
    print("\n \n in equation23 t1 = {0}  t2 = {1}".format(t1,t2))
    a3 = exp2a(12*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1 = a3[0]
    c2 = a4[0]
    print("\n in equation23 c1 = {0}  c2 = {1}".format(c1,c2))
    t3 = 2*(c1*(2*k8[0]+k8[3])+c2*(2*k8[2]+(p-1)*k8[1]))%p
    t4 = 2*(c1*(2*k8[1]+(p-1)*k8[2])+c2*(2*k8[3]+k8[0]))%p
    print("\n in equation23 t3 = {0}  t4 = {1}".format(t3,t4))
    s1 = 4*c1%p
    s2 = (p-2)*c2%p
    s3 = 4*c2%p
    s4 = 2*c1%p
    t7 = (s1*k8[0]+s2*k8[1]+s3*k8[2]+s4*k8[3])%p
    s5 = 2*c2%p
    s6 = 4*c1%p
    s7 = (p-2)*c1%p
    s8 = 4*c2%p
    t8 = (s5*k8[0]+s6*k8[1]+s7*k8[2]+s8*k8[3])%p
    print("\n \n in equation23 t7 = {0}  t8 = {1}".format(t7,t8))
    
    
    a5 = exp2a(2*q1*q1//9,k.a2,p)    
    q2 = (q1//3)%16
    if (q2==1 or q2==15):
        t5 = 2*c1*a5[0]%p
        t6 = 2*c1*a5[1]%p
    if (q2==7 or q2==9):
        t5 = (p-2)*c1*a5[0]%p
        t6 = (p-2)*c1*a5[1]%p
        
    if (q2==3 or q2==13):
        t5 = 2*c2*a5[0]%p
        t6 = 2*c2*a5[1]%p
    if (q2==5 or q2==11):
        t5 = (p-2)*c2*a5[0]%p
        t6 = (p-2)*c2*a5[1]%p

    print("\n \n in equation23 t5 = {0}  t6 = {1}".format(t5,t6))    
        
    s1 = (p-s1)%p
    s2 = (p-s2)%p
    s3 = (p-s3)%p
    s4 = (p-s4)%p
    s5 = (p-s5)%p
    s6 = (p-s6)%p
    s7 = (p-s7)%p
    s8 = (p-s8)%p
    a3 = exp2a(1*18*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]
    m[t] = [s1,s2,s3,s4,    3*t3%p,3*t4%p,t3,t4]
    m[t+1] = [s5,s6,s7,s8,  (p-3)*t4%p,3*t3%p,(p-1)*t4%p,t3]    

def equation24(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = q//32

    h1 = k.series(1,q1,12*q1,2)
    h2 = k.series(1,q1,20*q1,2)
    t1 = (h1[0]+(p-1)*h2[0])%p
    t2 = (h1[1]+(p-1)*h2[1])%p
    print("\n \n in equation22 t1 = {0}  t2 = {1}".format(t1,t2))
    a3 = exp2a(4*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t3 = 2*(c1*k8[0]+c2*k8[2])%p
    t4 = 2*(c1*k8[1]+c2*k8[3])%p
    print("\n in equation22 t3 = {0}  t4 = {1}".format(t3,t4))

    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(2*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]
    m[t] = [t1,0,t2,0,    t3,t4,p+t3,p+t4]
    m[t+1] = [0,t1,0,t2,  p-t4,t3,p-t4,t3]   

def init64(k,q):
    p = k.p
    m = init1(8,8)
    b1 = init2(8)
    q1 = q//32

    if q1%4==1:
        m[0] = [0,0,0,0, 1,p-1,0,0]
        b1[0] = 0

        a3 = exp2a((p-1)//8,k.a2,p)
        s2 = a3[0]
        if q1%8==5:
            s2 = (p-s2)%p
        print("\n \n in init64 s2 = ",s2)

        t1 = (q1+2)
        a3 = exp2a(2*t1*q1,k.a2,p)
        print("\n \n in init64 a3 = ",a3)
        c = a3[0]
        s = a3[1]

        # 1
        # m[5] = [0,0,0,0,  16,0,0,0]
        t3 = (p-s2)%p
        t3 = 8*t3%p
        print("\n \n in init64 t3 = ",t3)

        t2 = 16*(c+s)%p
        m[4] = [0,0,0,0,  t2,0,0,0]
        t4 = (c+s)%p
        t4 = t3*t4%p

        t2 = (16*c+(p-16)*s)%p
        m[5] = [0,0,0,0,  t2,0,0,0]
        t5 = (c+(p-1)*s)%p
        t5 = t3*t5%p
        print("\n \n in init64 t4 = ",t4,"   t5 = ",t5)

        t1 = q1%32
        t2 = exp1(15,t1,32)
        t2 = t2*q1
        a3 = exp2a(2*t2*t2,k.a2,p)
        a4 = exp2a(49,a3,p)
        print("\n \n in init64 a3 = {0}   a4 = {1}".format(a3,a4))

        m[6] = [16,0,0,16,  0,0,0,0]

        m[7] = [0,16,p-16,0,  0,0,0,0]

        print("\n \n in init64 c,s = [{0} , {1}]".format(c,s))
        t2 = (c+s)%p
        t2 = (p-t2)%p
        m[1] = [1,0,0,1,    t2,0,0,0]
        b1[1] = 0
        t2 = ((p-1)*c+s)%p
        m[2] = [0,1,p-1,0,  t2,0,0,0]
        b1[2] = 0
        

    if q1%4==3:
        m[0] = [0,0,0,0, 1,p-1,0,0]
        a3 = exp2a((p-1)//8,k.a2,p)
        s2 = a3[0]
        if (q1%8)==3:
            s2 = (p-s2)%p
        b1[0] = s2

        t1 = (q1-2)
        a3 = exp2a(2*t1*q1,k.a2,p)
        print("\n \n in init64 a3 = ",a3)
        c = a3[0]        
        s = a3[1]

        # 1
        # m[5] = [0,0,0,0,  16,0,0,0]
        t3 = (p-s2)%p
        t3 = 8*t3%p
        print("\n \n in init64 t3 = ",t3)

        t2 = 16*(c+s)%p
        m[4] = [0,0,0,0,  t2,0,0,0]
        t4 = (c+s)%p
        t4 = t3*t4%p

        t2 = (16*c+(p-16)*s)%p
        m[5] = [0,0,0,0,  t2,0,0,0]
        t5 = (c+(p-1)*s)%p
        t5 = t3*t5%p
        print("\n \n in init64 t4 = ",t4,"   t5 = ",t5)

        t1 = q1%32
        # t2 = inverse(t1,32)
        t2 = exp1(15,t1,32)
        t2 = t2*q1
        print("\n \n in init64 q1 = {0} t2 = {1}".format(q1,t2))
        a3 = exp2a(2*t2*t2,k.a2,p)
        a4 = exp2a(49,a3,p)
        print("\n \n in init64 a3 = {0}   a4 = {1}".format(a3,a4))


        t2 = (c+s)%p
        t2 = (p-t2)%p
        m[1] = [16,0,0,p-16,    16*t2%p,0,0,0]
        b1[1] = (t4+(p-1)*t5)%p
        t2 = ((p-1)*c+s)%p
        m[2] = [0,16,16,0,  16*t2%p,0,0,0]
        b1[2] = (t4+t5)%p


    equation22(k,m,b1,3,q)

    equation23(k,m,b1,5,q)
    
    a3 = exp2a(4*q1*3*3,k.a2,p)
    a4 = exp2a(2*9*9*q1*q1,k.a2,p)
    c1 = a3[0]
    s1 = (p+a3[1])%p
    c2 = p-a4[0]
    s2 = p-a4[1]
    c2,s2 = 0,0
    m[5] = [c1,3*s1,p-s1,3*c1,  2*c2,2*s2,p-c2,p-s2]

    m[5] = [5*c1,(p-7)*s1,(p+5)*s1,7*c1,  0,0,0,0]



    
    a3 = exp2a(2*9*9*q1*q1,k.a2,p)
    c1 = a3[0]
    s1 = a3[1]
    m[6] = [0,0,0,0,  6*c1,6*s1,(p-c1)%p,(p-s1)%p]
   
   
    # m[6] = init2(8)
    m[7] = init2(8)
        
    # equation24(k,m,b1,5,q)      
        
    return(m,b1)  
  
  

p1 = [2113,1601,3137,4673,5441,5953,8513]

p3 = [2753,4289,4801,6337,7873,8641]

p = p1[0]
k = group(0,p)
k = group(exp1(1,k.g,p),p)

q = (p-1)//2
list64(k,0,7,q,2)

print("\n \n")
k.f32(0,0,2)
k8 = f8(k,q,2)
print("\n \n k8 = ",k8)

e = (p-1)//2
s1 = init2(2)
s2 = init2(2)
h1 = k.series1(1,e,16,0,2)
h2 = k.series1(7,e,16,0,2)
h3 = k.series1(9,e,16,0,2)
h4 = k.series1(15,e,16,0,2)
s1[0] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
s1[1] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

h1 = k.series1(3,e,16,0,2)
h2 = k.series1(5,e,16,0,2)
h3 = k.series1(11,e,16,0,2)
h4 = k.series1(13,e,16,0,2)
s2[0] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
s2[1] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

print("\n \n s1 = {0}  s2 = {1}".format(s1,s2))
h1 = k.series(1,(p-1)//2,0,2)
print("\n h1 = ",h1)
t = inverse(h1[0],p)
t1 = t*(s1[0]+s1[1])%p
t2 = t*(s1[0]+(p-1)*s1[1])%p
t = (p+1)//2
c = t*t1%p
s = t*t2%p

e = (p-1)//64
if (e%4)==1:
    t1 = e+2
if (e%4)==3:
    t1 = e-2
a3 = exp2a(2*t1*e,k.a2,p)
print("\n c,s = [{0}, {1}]    a3 = {2}".format(c,s,a3))


a = [1,15]
q1 = (p-1)//64
b = []
for i in range(1,32,2):
    c1 = i*q1
    c2 = c1%16
    if (c2 in a)==True:
        b.append(i)
        
print("\n \n b = ",b)


a = [7,9]
q1 = (p-1)//64
b = []
for i in range(1,32,2):
    c1 = i*q1
    c2 = c1%16
    if (c2 in a)==True:
        b.append(i)
        
print("\n \n b = ",b)


m,b2 = init64(k,(p-1)//2)
b1 = init2(8)

"""
for i in range(5,8):
    m[i] = init2(8)
    b2[i] = 0
"""

for i in range(8):
    b1[i] = multcnvl2(m[i],k8,p)

print("\n \n b1 = ",b1)
print("\n b2 = ",b2)


v1 = init2(8)

print("\n \n")
display(0,7,0,7,m,v1)

h1 = init2(8)

solve2(8,m,v1,p)
t1 = det(8,m)
print("\n \n det = ",t1)
display(0,7,0,7,m,v1)
l2solve(8,h1,v1,m,p)
print("after solve2 = ",h1)
print("\n \n")

q1 = (p-1)//64
h1 = k.series(1,q1,12*q1,2)
h2 = k.series(1,q1,20*q1,2)
t1 = (h1[0]+(p-1)*h2[0])%p
t2 = (h1[1]+(p-1)*h2[1])%p
print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
a3 = exp2a(12*q1,k.a2,p)
a4 = exp2a(3,a3,p)
c1,s1 = a3[0],a3[1]
c2,s2 = a4[0],a4[1]
t3 = 2*(c1*k8[0]+c2*k8[2])%p
t4 = 2*(c1*k8[1]+c2*k8[3])%p
print("\n t3 = {0}  t4 = {1}".format(t3,t4))

