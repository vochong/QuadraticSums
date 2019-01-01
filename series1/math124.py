
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
q(x) = x^2 + q[0]x + q[1] """
def multiply2(a,b,q,n):
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
            t = multiply2(sq,t,q,n)
            e1 = (e1-1)//2
        else:
            e1 = e1//2
        sq = multiply2(sq,sq,q,n)
    return(t)

""" This is the main function used in the Cipolla-Lehmer algorithm for
calculating square roots mod a prime p """
def CL(c,b,p):
    t1 = (b*b)%p
    t2 = (4*c)%p
    t2 = (p-t2)%p
    g = (t1+t2)%p
    e = (p-1)//2
    h = exp1(e,g,p)
    s = 1
    if ((h==0) or (h==1)):
        s = 0
    e = e+1
    t1 = ((p-1)*b)%p
    t2 = c%p
    q = [t1,t2]
    a = [1,0]
    t3 = exp2(e,a,q,p)
    t = s*t3[1]
    return(t)

""" This is the Cipolla-Lehmer algorithm. It calculates a square root
of c mod p assuming c is a quadratic residue mod p where p is a prime > 2 """
def sqrt1(c,p):
    m1 = 50
    t = 0
    c1 = c%p
    for i in range(m1):
        y = CL(c1,((i+1)%p),p)
        t1 = (y*y)%p
        if (t1==c1):
            t = y
            break
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

def zero(r1,r2,m):
    m2 = len(m[0])
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

def lsolve(m2,r,c,h1,h2,m,p):
    if (c==0):
        t1 = m[r][m2-1]
        t2 = h2[r]
        t3 = inverse(t1,p)
        t3 = (t3*t2)%p
    if (c>0):
        t1 = 0
        for i in range(c):
            t = m2-1-i
            t4 = m[r][t]
            t2 = (t4*h1[t])%p
            t1 = (t1+t2)%p
        t1 = (p-t1)%p
        t1 = (t1+h2[r])%p
        t = m2-1-c
        t4 = m[r][t]
        t2 = inverse(t4,p)
        t3 = (t1*t2)%p
    t = m2-1-r
    h1[t] = t3

def l2solve(m2,h1,h2,m,p):
    for i in range(m2):
        lsolve(m2,i,i,h1,h2,m,p)

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

""" Primality test """
def is_prime(p):
    p = abs(p)
    if (p==0):
        p = 1
    m = 50
    y = 0
    b = False
    for i in range(2,m):
        t1 = i%p
        t = exp1((p-1)//2,i,p)
        if ((t==1) or (t==(p-1)) or (t1==0)):
            y = y + 1
    if (y==(m-2)):
        b = True
    if (p==1):
        b = False
    return(b)          

def multcnvl2(a,b,p):
    t1 = len(a)
    t2 = len(b)
    t = min(t1,t2)
    s = 0
    for i in range(t):
        s1 = (a[i]*b[i])%p
        s = (s+s1)%p
    return(s)            
    
""" Finds a prime p such that p = 1 (mod c) and p > c*m
If c is odd then the prime p = 3 (mod 4)
If 2^a divides c and 2^(a+1) does not divide c where a>0
then p = (2^a)+1 mod (2^(a+1)) """
def findprime(c,m):
    if (c<1):
        c = 1
    if (m<1):
        m = 1
    if (c%2==1):
        c = 2*c
        m = (m+(m%2))//2
    t = False
    i = m+(m+1)%2
    while(t==False):
        t1 = c*i+1
        t = is_prime(t1)
        i = i+2
    return(t1)

