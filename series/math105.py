

""" This calculates g^e (mod n) for integers e,g, and n """
def exp1(e,g,n):
    t = 1
    sq = g
    e1 = e
    while(e1!=0):
        if (e1%2)==1:
            t = (sq*t)%n
            e1 = (e1-1)//2
        else:
            e1 = e1//2
        sq = (sq*sq)%n
    return(t)


""" This multiplies two polynomials in GF(p^2)
that is it calculates c(x) = a(x)*b(x) <mod q(x)>
where a(x) = a[0]x + a[1] and b(x) = b[0]x + b[1] and
q(x) = x^2 + q[0]x + q[1]
"""
def mult2(a,b,q,n):
    t1 = (a[0]*b[1])%n
    t2 = (a[1]*b[0])%n
    t1 = (t1+t2)%n
    t2 = (a[1]*b[1])%n
    t3 = ((n-1)*q[0])%n
    t4 = ((n-1)*q[1])%n
    t5 = (a[0]*b[0])%n
    t3 = (t5*t3)%n
    t4 = (t5*t4)%n
    c = [(t1+t3)%n , (t2+t4)%n]
    return(c)


""" exp2 exponentiates in GF(p^2) by calculating (g(x))^e mod <q(x)> """
def exp2(e,g,q,n):
    t = [0,1]
    sq = g
    e1 = e
    while(e1!=0):
        if (e1%2)==1:
            t = mult2(sq,t,q,n)
            e1 = (e1-1)//2
        else:
            e1 = e1//2
        sq = mult2(sq,sq,q,n)
    return(t)


""" This calculates the multiplicative inverse of a in GF(p) """
def inverse(a,p):
    t = exp1(p-2,a,p)
    return(t)

def init1(r,c):
    s = range(r)
    a = [[0] for n in s]
    for i in range(c-1):
        for j in range(r):
            a[j].append(0)
    return(a)

def init2(r):
    s = range(r)
    a = [0 for n in s]
    return(a)


def display(r1,r2,c1,c2,m,v):
    for i in range(r1,r2+1):
        for j in range(c1,c2+1):
            print(m[i][j],end=' ')
        print(v[i])

def setzero(m2,r1,r2,m):
    for i in range(r1,r2+1):
        for j in range(m2):
            m[i][j] = 0

def swtc(e1,e2,m,v):
    a = m[e1]
    b = m[e2]
    m[e1] = b
    m[e2] = a
    t1 = v[e1]
    t2 = v[e2]
    v[e1] = t2
    v[e2] = t1

def addm(m2,e1,e2,m,v,p):
    for i in range(m2):
        m[e1][i] = (m[e1][i]+m[e2][i])%p
    v[e1] = (v[e1]+v[e2])%p


def multm(m2,c,e1,m,v,p):
    for i in range(m2):
        m[e1][i] = (c*m[e1][i])%p
    v[e1] = (c*v[e1])%p


def iter2(m2,e1,m,v):
    t = 0
    for i in range(e1+1):
        t2 = m[i][m2-1-e1]
        if ((t2!=0) and (t==0)):
            t = i+1
    if (t==0):
        print("error in iter2 det = 0")
        t = 1
    swtc(t-1,e1,m,v)


def solve2(m2,m,v,p):
    for i in range(1,m2):
        iter2(m2,m2-i,m,v)
        for j in range(m2-i):
            t3 = m[j][i-1]
            if (t3!=0):
                t1 = m[j][i-1]
                t2 = m[m2-i][i-1]
                t2 = (p-t2)%p
                multm(m2,t1,m2-i,m,v,p)
                multm(m2,t2,j,m,v,p)
                addm(m2,j,m2-i,m,v,p)


def det(c,m):
    s1 = 0
    s2 = c-1
    t1 = 0
    for i in range(c):
        s5 = m[s2][s1]
        if (s5!=0):
            t1 = t1+1
        s1 = s1+1
        s2 = s2-1
    return(t1)
            

def lsolve(m2,r,c,h11,h12,m,p):
    if (c==0):
        t1 = m[r][m2-1]
        t2 = h12[r]
        t3 = inverse(t1,p)
        t3 = (t3*t2)%p
    if (c>0):
        t1 = 0
        for i in range(c):
            t = m2-1-i
            t4 = m[r][t]
            t2 = (t4*h11[t])%p
            t1 = (t1+t2)%p
        t1 = (p-t1)%p
        t1 = (t1+h12[r])%p
        t = m2-1-c
        t4 = m[r][t]
        t2 = inverse(t4,p)
        t3 = (t1*t2)%p
    t = m2-1-r
    h11[t] = t3


def l2solve(m2,h11,h12,m,p):
    for i in range(m2):
        lsolve(m2,i,i,h11,h12,m,p)

def cmult(a,b,p):
    t1 = (a[0]*b[0])%p
    t2 = (a[1]*b[1])%p
    t2 = (p-t2)%p
    t3 = (t1+t2)%p

    t1 = (a[0]*b[1])%p
    t2 = (a[1]*b[0])%p
    t4 = (t1+t2)%p

    t = [t3,t4]
    return(t)


def exp2a(e,g,n):
    t = [1,0]
    sq = g
    e1 = e
    while(e1!=0):
        if (e1%2)==1:
            t = cmult(sq,t,n)
            e1 = (e1-1)//2
        else:
            e1 = e1//2
        sq = cmult(sq,sq,n)
    return(t) 


def setcs(d,a2,cs,sn,p):
    t = d//2
    a3 = exp2a(t,a2,p)
    a5 = exp2a(t,a3,p)
    for i in range(10):
        a3 = exp2a(i,a5,p)
        a4 = exp2a(i,a3,p)
        cs.append(a4[0])
        sn.append(a4[1])
        

def setcs1(d,a2,cs1,sn1,p):
    t = d//2
    a3 = exp2a(t,a2,p)
    a5 = exp2a(t,a3,p)
    a3 = exp2a(d,a2,p)
    a6 = exp2a(d,a3,p)
    a6[1] = (p-a6[1])%p

    cs1.append(1)
    sn1.append(0)

    a3 = cmult(a5,a6,p)

    cs1.append(a3[0])
    sn1.append(a3[1])

    cs1.append(a6[0])
    sn1.append(a6[1])

    cs1.append(a3[0])
    sn1.append(a3[1])

    cs1.append(1)
    sn1.append(0)

    for i in range(5,10):
        t2 = (i-2)*t
        a3 = exp2a(t2,a2,p)
        a4 = exp2a(t2,a3,p)
        a3 = cmult(a4,a6,p)
        cs1.append(a3[0])
        sn1.append(a3[1])
        
        
def setcs2(d,a2,cs1,sn1,p):
    t = d//2
    a3 = exp2a(t,a2,p)
    a5 = exp2a(t,a3,p)
    a3 = exp2a(d,a2,p)
    a6 = exp2a(d,a3,p)
    a6[1] = (p-a6[1])%p

    cs1.append(1)
    sn1.append(0)

    for i in range(1,10):
        t2 = i*t+d
        a3 = exp2a(t2,a2,p)
        a4 = exp2a(t2,a3,p)
        a3 = cmult(a4,a6,p)
        cs1.append(a3[0])
        sn1.append(a3[1])


def setzero2a(d,e1,e2,m):
    for i in range(e1,e2+1):
        for j in range(d):
            m[i][j] = 0
                  

def exp4(l2,c,e,e1,a2,m,p):
    a3 = exp2a(e,a2,p)
    a4 = exp2a(e,a3,p)

    t = l2-e
    if (t<0):
        print("error in exp4 e>l2")

    if (t>=0):
        a3 = exp2a(t,a2,p)
        a5 = exp2a(t,a3,p)

    s1 = (a4[0]*a4[0])%p
    s2 = (a4[0]*a4[1])%p
    s3 = (a4[1]*a4[1])%p

    t1 = (a5[0]*a5[0])%p
    t2 = (a5[0]*a5[1])%p
    t3 = (a5[1]*a5[1])%p

    a = [0 for i in range(16)]
    b = [0 for i in range(9)]

    a[0] = (s1*t1)%p
    a[1] = (s2*t1)%p
    a[2] = a[1]
    a[3] = (s3*t1)%p

    a[4] = (s1*t2)%p
    a[5] = (s2*t2)%p
    a[6] = a[5]
    a[7] = (s3*t2)%p

    a[8] = a[4]
    a[9] = a[5]
    a[10] = a[6]
    a[11] = a[7]

    a[12] = (s1*t3)%p
    a[13] = (s2*t3)%p
    a[14] = a[13]
    a[15] = (s3*t3)%p

    if (c==0):
        a4 = exp2a(l2,a2,p)
        a3 = exp2a(e,a4,p)
        for i in range(9):
            t = 8-i
            t1 = exp1(t,a3[0],p)
            t2 = exp1(i,a3[1],p)
            b[i] = (t1*t2)%p
        for i in range(16):
            for j in range(9):
                t = 9*i+j
                t1 = (a[i]*b[j])%p
                m[e1][t] = t1

    if (c==1):
        a1 = a
        a[0] = a1[0]
        a[1] = a1[1]
        a[2] = a1[3]
        a[3] = a1[4]
        a[4] = a1[5]
        a[5] = a1[7]
        a[6] = a1[12]
        a[7] = a1[13]
        a[8] = a1[15]
        a4 = exp2a(l2,a2,p)
        a3 = exp2a(e,a4,p)
        b[0] = (a3[0]*a3[0])%p
        b[1] = (a3[0]*a3[1])%p
        b[2] = (a3[1]*a3[1])%p

        for i in range(9):
            for j in range(3):
                t = 3*i+j
                t1 = (a[i]*b[j])%p
                m[e1][t] = t1


def addm4(m2,e1,e2,e3,m,v,p):
    for i in range(m2):
        m[e3][i] = (m[e1][i]+m[e2][i])%p
    v[e3] = (v[e1]+v[e2])%p


def multm4(m2,c,e1,e2,m,v,p):
    for i in range(m2):
        m[e2][i] = (c*m[e1][i])%p
    v[e2] = (c*v[e1])%p

def equal4(m2,e1,e2,m,v,p):
    for i in range(m2):
        m[e2][i] = m[e1][i]%p
    v[e2] = v[e1]%p

def mult4(m2,e1,e2,m,p):
    for i in range(m2-1):
        m[e2][i+1] = m[e1][i]%p
    m[e2][0] = 0

def set2d(r,r1,m):
    for i in range(144):
        m[r][i] = m[r1][i]


def exp4a(l2,c,e1,a2,m,p):
    setzero2a(144,e1,e1,m)
    setzero2a(144,198,198,m)

    v = [0 for i in range(220)]

    for i in range(l2+1):
        exp4(l2,c,i,198,a2,m,p)
        addm4(144,e1,198,e1,m,v,p)
        

def exp4b(l2,c,a2,p):
    m1 = init1(2,144)
    setzero2a(144,0,1,m1)
    v = init2(2)

    for i in range(l2+1):
        exp4(l2,c,i,0,a2,m1,p)
        addm4(144,1,0,1,m1,v,p)

    if (c==0):
       t = init2(144)
       for i in range(144):
           t[i] = m1[1][i]

    if (c==1):
        t = init2(27)
        for i in range(27):
            t[i] = m1[1][i]
    return(t)
        

def exp5(l2,a2,a3,p):
    a4 = [0,0]
    c = init2(144)
    s = init2(144)
    m1 = init1(4,144)
    setzero2a(144,0,3,m1)

    v = init2(4)

    e1 = 1
    e2 = 2
    temp = 3
    for i in range(l2+1):
        a4 = exp2a(i,a3,p)
        exp4(l2,0,i,0,a2,m1,p)
        
        multm4(144,a4[0],0,temp,m1,v,p)
        addm4(144,e1,temp,e1,m1,v,p)

        multm4(144,a4[1],0,temp,m1,v,p)
        addm4(144,e2,temp,e2,m1,v,p)

    for i in range(144):
         c[i] = m1[e1][i]
         s[i] = m1[e2][i]
    t = [c,s]
    return(t)


def display144(e1,m):
    for i in range(8):
        t = 2*i
        print("{0:2}".format(t),"(",end=' ')
        for j in range(9):
            print("{0:2}".format(m[e1][18*i+j]),end=' ')
        t = t+1
        print(")  {0:2}".format(t),"(",end=' ')
        for j in range(9):
            print("{0:2}".format(m[e1][18*i+9+j]),end=' ')
        print(")")
            
def display27(b):
    for i in range(3):
        print("(",end=' ')
        for j in range(3):
            print("{0:2}".format(b[9*i+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(3):
            print("{0:2}".format(b[9*i+3+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(3):
            print("{0:2}".format(b[9*i+6+j]),end=' ')
        print(")")    
        
def display144h(hs1):
    for i in range(8):
        t = 2*i
        print("{0:2}".format(t),"(",end=' ')
        for j in range(9):
            print("{0:2}".format(hs1[18*i+j]),end=' ')
        t = t+1
        print(")  {0:2}".format(t),"(",end=' ')
        for j in range(9):
            print("{0:2}".format(hs1[18*i+9+j]),end=' ')
        print(")")
    
