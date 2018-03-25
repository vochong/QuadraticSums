from a24v048 import *


def list64(k,e1,e2,q,d1):
    p = k.p
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
        h1 = k.series1(s1,t1,16,0,d1)
        h2 = k.series1(s2,t1,16,0,d1)
        h3 = k.series1(s3,t1,16,0,d1)
        h4 = k.series1(s4,t1,16,0,d1)
        t3 = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
        t4 = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

        # t3 = (h1[0]+h2[0]+(p-1)*h3[0]+(p-1)*h4[0])%p
        # t4 = (h1[1]+h2[1]+(p-1)*h3[1]+(p-1)*h4[1])%p
        
        a = [t3,t4]
        

        s1 = t+(t2+3)%16
        s2 = t+(t2+5)%16
        s3 = t+(t2+11)%16
        s4 = t+(t2+13)%16
        h1 = k.series1(s1,t1,16,0,d1)
        h2 = k.series1(s2,t1,16,0,d1)
        h3 = k.series1(s3,t1,16,0,d1)
        h4 = k.series1(s4,t1,16,0,d1)
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

def f12(k,q,d1):
    s = init2(12)
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

    t1 = 2*q1
    t2 = 15*q1%p
    s1 = q1+(t2+1)%16
    s2 = q1+(t2+7)%16
    s3 = q1+(t2+9)%16
    s4 = q1+(t2+15)%16
    h1 = k.series1(s1,t1,16,0,2)
    h2 = k.series1(s2,t1,16,0,2)
    h3 = k.series1(s3,t1,16,0,2)
    h4 = k.series1(s4,t1,16,0,2)
    s[4] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
    s[5] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

    t1 = 2*q1
    t2 = 15*q1%p
    s1 = q1+(t2+3)%16
    s2 = q1+(t2+5)%16
    s3 = q1+(t2+11)%16
    s4 = q1+(t2+13)%16
    h1 = k.series1(s1,t1,16,0,2)
    h2 = k.series1(s2,t1,16,0,2)
    h3 = k.series1(s3,t1,16,0,2)
    h4 = k.series1(s4,t1,16,0,2)
    s[6] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
    s[7] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

    k16 = k.k32(q,d1)
    s[8] = (k16[8]+k16[10])%p
    s[9] = (k16[9]+k16[11])%p
    s[10] = (k16[12]+k16[14])%p
    s[11] = (k16[13]+k16[15])%p
    return(s)

def f16(k,q,d1):
    s = init2(16)
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

    t1 = 2*q1
    t2 = 15*q1%p
    s1 = q1+(t2+1)%16
    s2 = q1+(t2+7)%16
    s3 = q1+(t2+9)%16
    s4 = q1+(t2+15)%16
    h1 = k.series1(s1,t1,16,0,2)
    h2 = k.series1(s2,t1,16,0,2)
    h3 = k.series1(s3,t1,16,0,2)
    h4 = k.series1(s4,t1,16,0,2)
    s[4] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
    s[5] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

    t1 = 2*q1
    t2 = 15*q1%p
    s1 = q1+(t2+3)%16
    s2 = q1+(t2+5)%16
    s3 = q1+(t2+11)%16
    s4 = q1+(t2+13)%16
    h1 = k.series1(s1,t1,16,0,2)
    h2 = k.series1(s2,t1,16,0,2)
    h3 = k.series1(s3,t1,16,0,2)
    h4 = k.series1(s4,t1,16,0,2)
    s[6] = (h1[0]+(p-1)*h2[0]+(p-1)*h3[0]+h4[0])%p
    s[7] = (h1[1]+(p-1)*h2[1]+(p-1)*h3[1]+h4[1])%p

    print("\n \n in f16")
    k32 = k.calc30(1,8,q//4,p)
    print("\n \n k32 = ",k32)

    h1 = k.series(k32[0],k32[1],0,8)
    h2 = k.series(k32[2],k32[3],0,8)
    h3 = k.series(k32[4],k32[5],0,8)
    h4 = k.series(k32[6],k32[7],0,8)
    s[8] = h1[0]
    s[9] = h1[1]
    s[10] = h2[0]
    s[11] = h2[1]
    s[12] = h3[0]
    s[13] = h3[1]
    s[14] = h4[0]
    s[15] = h4[1]
    
    return(s)

def equation22(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = q//32

    if q1%4==1:
        a3 = exp2a((p-1)//8,k.a2,p)
        sq2 = a3[0]
        if q1%8==5:
            sq2 = (p-sq2)%p
        print("\n \n in equation22 sq2 = ",sq2)

    if q1%4==3:
        a3 = exp2a((p-1)//8,k.a2,p)
        sq2 = a3[0]
        if (q1%8)==3:
            sq2 = (p-sq2)%p
        print("\n \n in equation22 sq2 = ",sq2)    

    a3 = exp2a(12*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(18*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]

    m[t] = [t1,0,t2,0,    0,0,0,0,  0,0,0,0,   t3,t4,t3,t4]
    m[t+1] = [0,t1,0,t2,  0,0,0,0,  0,0,0,0,   p-t4,t3,p-t4,t3]

    print("\n \n in equation22 t3,t4 = ",t3,t4)
    t5 = 2*(p-s2)*t3%p
    t6 = 2*(p+s2)*t4%p
    print("\n \n in equation22 t5,t6 = ",t5,t6)
    t7 = sq2*t3%p
    t8 = sq2*t4%p
    print("\n \n in equation22 t7,t8 = ",t7,t8)    

    if q1%8==1:
        b1[t] = t6
        b1[t+1] = t5

    if q1%4==1:
        b1[t] = ((p-1)*(t7+t8)+t3)%p
        b1[t+1] = ((p-1)*t7+t8+(p-1)*t4)%p

    if q1%4==3:
        b1[t] = ((p-1)*t7+t8+t3)%p
        b1[t+1] = (t7+t8+(p-1)*t4)%p
    
    """
    m[t] = [t1,0,t2,0,    0,0,0,0,  t3,t4,p-t3,p-t4]
    m[t+1] = [0,t1,0,t2,  0,0,0,0,  p-t4,t3,t4,p-t3]
    """


# (+4)(4) at 1/64
def equation23(k,m,b1,t,q):    
    a2 = k.a2
    p = k.p
    q1 = q//32    

    a3 = exp2a(4*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(2*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]

    m[t] = [0,0,0,0,    t1,0,t2,0,  t3,t4,0,0,     t3,t4,0,0]
    m[t+1] = [0,0,0,0,  0,t1,0,t2,  p-t4,t3,0,0,   p-t4,t3,0,0]


# (+4)(12) at 1/64
def equation24(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = q//32    

    a3 = exp2a(12*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(18*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]

    m[t] = [0,0,0,0,    t1,0,t2,0,  0,0,t3,t4,     0,0,t3,t4]
    m[t+1] = [0,0,0,0,  0,t1,0,t2,  0,0,p-t4,t3,   0,0,p-t4,t3]
    b1[t] = b1[5]
    b1[t+1] = b1[6]


# (+8)(4) at 1/64
def equation25(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = q//32    

    a3 = exp2a(4*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(2*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]

    if q1%4==1:
        m[t] = [0,0,0,0,    0,p-t2,0,t1,  0,0,t3,t4,     0,0,t3,t4]
        m[t+1] = [0,0,0,0,  t2,0,p-t1,0,  0,0,p-t4,t3,   0,0,p-t4,t3]


    if q1%4==3:
        m[t] = [0,0,0,0,    0,t2,0,p-t1,  0,0,t3,t4,     0,0,t3,t4]
        m[t+1] = [0,0,0,0,  p-t2,0,t1,0,  0,0,p-t4,t3,   0,0,p-t4,t3]


# (+4)(2) at 1/32
def equation26(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = q//32    

    a3 = exp2a(4*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(2*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]
    t5 = (p-t4)%p

    m[t] =   [0,p-t2,0,t1,    0,p-t2,0,t1,  0,0,t3,t4, t3,t4,2*t3,2*t4]
    m[t+1] = [t2,0,p-t1,0,    t2,0,p-t1,0,  0,0,t5,t3, t5,t3,2*t5,2*t3]


def equation27(k,m,b1,t,q):
    a2 = k.a2
    p = k.p
    q1 = q//32
    
    a3 = exp2a(4*q1,a2,p)
    a4 = exp2a(3,a3,p)
    c1,s1 = a3[0],a3[1]
    c2,s2 = a4[0],a4[1]
    t1 = (p-2)*c1%p
    t2 = (p-2)*c2%p
    a3 = exp2a(2*q1*q1,a2,p)
    t3 = a3[0]
    t4 = a3[1]
    m[t] = [t1,0,t2,0,    0,0,0,0,  t3,t4,t3,t4]
    m[t+1] = [0,t1,0,t2,  0,0,0,0,  p-t4,t3,p-t4,t3]

    

def init64(k,q):
    p = k.p
    m = init1(16,16)
    b1 = init2(16)
    q1 = q//32

    if q1%4==1:
        m[0] = [0,0,0,0, 0,0,0,0, 1,p-1,1,p-1,  1,p-1,1,p-1]
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
    

        print("\n \n in init64 c,s = [{0} , {1}]".format(c,s))
        t2 = (c+s)%p
        t2 = (p-t2)%p
        t3 = (p+1)//2
        t2 = t2*t3%p
        m[1] = [1,0,0,1,    0,0,0,0,  t2,0,t2,0,    t2,0,t2,0]
        b1[1] = (p-2)*s2*t2%p
        t2 = ((p-1)*c+s)%p
        t2 = t2*t3%p
        m[2] = [0,1,p-1,0,  0,0,0,0,  t2,0,t2,0,    t2,0,t2,0]
        b1[2] = (p-2)*s2*t2%p

        m[3] = [1,0,0,1,    p-1,0,0,p-1,  0,0,0,0,  0,0,0,0]
        b1[3] = 0
        m[4] = [0,1,p-1,0,  0,p-1,1,0,    0,0,0,0,  0,0,0,0]
        b1[4] = 0
        

    if q1%4==3:
        m[0] = [0,0,0,0,   0,0,0,0,   1,p-1,1,p-1,   1,p-1,1,p-1]
        a3 = exp2a((p-1)//8,k.a2,p)
        s2 = a3[0]
        if (q1%8)==3:
            s2 = (p-s2)%p
        b1[0] = (p-2)*s2%p

        t1 = (q1-2)
        a3 = exp2a(2*t1*q1,k.a2,p)
        print("\n \n in init64 a3 = ",a3)
        c = a3[0]        
        s = a3[1]

        # 1
        t3 = (p-s2)%p
        t3 = 8*t3%p
        print("\n \n in init64 t3 = ",t3)

        t2 = 16*(c+s)%p
        t4 = (c+s)%p
        t4 = t3*t4%p

        t2 = (16*c+(p-16)*s)%p
        t5 = (c+(p-1)*s)%p
        t5 = t3*t5%p
        print("\n \n in init64 t4 = ",t4,"   t5 = ",t5)

        t2 = (c+s)%p
        t2 = (p-t2)%p
        t3 = 8*t2%p
        t6 = s2*t3%p        
        m[1] = [16,0,0,p-16,    0,0,0,0,  t3,0,t3,0,   t3,0,t3,0]
        b1[1] = (t4+(p-1)*t5)%p
        b1[1] = (b1[1]+(p-2)*t6)%p
        t2 = ((p-1)*c+s)%p
        t3 = 8*t2%p
        t7 = s2*t3%p
        m[2] = [0,16,16,0,      0,0,0,0,  t3,0,t3,0,   t3,0,t3,0]
        b1[2] = (t4+t5)%p
        b1[2] = (b1[2]+(p-2)*t7)%p

        print("\n \n in init64 t6 = {0}  t7 = {1}".format(t6,t7))

        m[3] = [1,0,0,p-1,   p-1,0,0,1,     0,0,0,0,    0,0,0,0]
        b1[3] = 0
        m[4] = [0,1,1,0,     0,p-1,p-1,0,   0,0,0,0,    0,0,0,0]
        b1[4] = 0
    
    equation22(k,m,b1,5,q) 
    
    # equation23(k,m,b1,7,q)
    
    equation24(k,m,b1,9,q)

    equation25(k,m,b1,11,q)

    equation26(k,m,b1,13,q)

    # m[11] = [0,0,0,0,     0,0,0,0,   1,0,1,0,    p-1,0,p-1,0]
    # m[12] = [0,0,0,0,     0,0,0,0,   0,1,0,1,    0,p-1,0,p-1]

    # m[13] = [0,0,0,0,     0,0,0,0,   1,0,0,0,  0,0,p-1,0]
    # m[14] = [0,0,0,0,     0,0,0,0,   0,1,0,0,    0,0,0,p-1]    
  
          
    return(m,b1) 
   
  

p1 = [2113,1601,3137,4673,5441,5953,8513]

p3 = [2753,4289,4801,6337,7873,8641]

p = p1[0]

k = group(0,p)
k = group(exp1(289,k.g,p),p)

q = (p-1)//2
list64(k,0,7,q,2)

print("\n \n")
k.f32(0,0,2)
# k8 = f8(k,q,2)
#print("\n \n k8 = ",k8)
k12 = f12(k,q,2)
print("\n \n k12 = ",k12)

# k.list2(16,8)
k16 = f16(k,q,2)
print("\n \n k16 = ",k16)


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

print("\n \n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")
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
b1 = init2(16)


for i in range(16):
    b1[i] = multcnvl2(m[i],k16,p)

print("\n \n b1 = ",b1)
print("\n b2 = ",b2)



v1 = init2(16)
print("\n \n")
display(0,15,0,15,m,v1)
h1 = init2(16)
solve2(16,m,v1,p)
t1 = det(16,m)
print("\n \n det = ",t1)
display(0,15,0,15,m,v1)
l2solve(16,h1,v1,m,p)
print("after solve2 = ",h1)
print("\n \n")


