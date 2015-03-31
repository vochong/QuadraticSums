from math104 import *
import modsqrt2 

c80 = [[1,4,6,4,1],
       [1,2,0,-2,-1],
       [1,-4,-10,-4,1],
       [1,-14,0,14,-1],
       [1,-28,70,-28,1]]

s80 = [[0,0,0,0],
       [2,6,6,2],
       [4,4,-4,-4],
       [6,-14,-14,6],
       [8,-56,56,-8]]


""" Display an element of the group """
def display4(e1):
    display144h(e1[0])
    print()
    display27(e1[1])

""" Determines a complex number a2 corrresponding to the base g
g = (a2[0] + i2*a2[1]) (mod p) """
def calc2(g,i2,p):
    a2 = [1,0]
    t = inverse(g,p)
    t1 = (p+1)//2
    t2 = (g+t)%p
    a2[0] = (t1*t2)%p
    t2 = (t+(p-g))%p
    t2 = (t1*t2)%p
    a2[1] = (i2*t2)%p
    return(a2)

""" Primality test """
def is_prime(p):
    m = 50
    y = 0;
    b = False
    for i in range(2,m):
        t1 = i%p
        t = exp1((p-1)//2,i,p)
        if ((t==1) or (t==(p-1)) or (t1==0)):
            y = y + 1
    if (y==(m-2)):
        b = True
    return(b)

""" Calculates quadratic sums in GF(p) in exponential time """
def series(c1,c2,a2,d,d1,p):
    h11 = [0,0,0,0]
    for i in range(c1,c2+1):
        a3 = exp2a(i,a2,p)
        a4 = exp2a(i,a3,p)
        a3 = exp2a(d1,a4,p)
        
        a4 = exp2a(i,a2,p)
        a6 = exp2a(d,a4,p)

        a4[0] = (a3[0]*a6[0])%p
        a4[1] = (a3[1]*a6[0])%p
        h11[0] = (h11[0]+a4[0])%p
        h11[1] = (h11[1]+a4[1])%p

        a4[0] = (a3[0]*a6[1])%p
        a4[1] = (a3[1]*a6[1])%p
        h11[2] = (h11[2]+a4[0])%p
        h11[3] = (h11[3]+a4[1])%p
    return(h11)

""" Shows the relationship between the the 144 tuple of the
group element e1 which is e1[0] and quadratic sums in GF(p) """
def hs20(c1,e1,p):
    a3 = [0,0]
    a = e1[0]
    c = [1,4,6,4,1]
    c = c80[c1]
    for i in range(5):
        t1 = 1
        if (c[i]<0):
            t1 = p-1
        t2 = abs(c[i])
        c[i] = (t1*t2)%p
    b = [0 for i in range(16)]
    for i in range(16):
        s = 0
        for j in range(5):
            t = (c[j]*a[9*i+2*j])%p
            s = (s+t)%p
        b[i] = s

    t1 = (b[0]+b[12])%p
    t2 = (b[3]+b[15])%p
    t2 = (p-t2)%p
    a3[0] = (t1+t2)%p
    t1 = (b[1]+b[13])%p
    a3[1] = (2*t1)%p
    return(a3)


""" Shows the relationship between the the 144 tuple of the
group element e1 which is e1[0] and quadratic sums in GF(p) """
def hs21(c1,e1,p):
    a3 = [0,0]
    a = e1[0]
    c = s80[c1]
    for i in range(4):
        t1 = 1
        if (c[i]<0):
            t1 = p-1
        t2 = abs(c[i])
        c[i] = (t1*t2)%p
    b = [0 for i in range(16)]
    for i in range(16):
        s = 0
        for j in range(4):
            t = (c[j]*a[9*i+2*j+1])%p
            s = (s+t)%p
        b[i] = s

    t1 = (b[0]+b[12])%p
    t2 = (b[3]+b[15])%p
    t2 = (p-t2)%p
    a3[0] = (t1+t2)%p
    t1 = (b[1]+b[13])%p
    a3[1] = (2*t1)%p
    return(a3)


""" Shows the relationship between the 27 tuple of the group
element e1 which is e1[1] and quadratic sums in GF(p) """
def ws(e1,p):
    a3 = [0,0]
    a = e1[1]
    b = [0 for i in range(9)]
    for i in range(9):
        b[i] = (a[3*i]+a[3*i+2])%p

    t1 = (b[0]+b[6])%p
    t2 = (b[2]+b[8])%p
    t2 = (p-t2)%p
    a3[0] = (t1+t2)%p
    t1 = (b[1]+b[7])%p
    a3[1] = (2*t1)%p
    return(a3)

def f1(e1,p):
    c = [0 for i in range(9)]
    s = [0 for i in range(9)]
    a = e1[0]
    b = [0 for i in range(9)]
    for i in range(9):
        t1 = (a[0*9+i]+a[15*9+i])%p
        t2 = (a[3*9+i]+a[12*9+i])%p
        t2 = (p-t2)%p
        t1 = (t1+t2)%p
        t2 = (4*a[5*9+i])%p
        t2 = (p-t2)%p
        c[i] = (t1+t2)%p

        t1 = (a[1*9+i]+a[4*9+i])%p
        t2 = (a[7*9+i]+a[13*9+i])%p
        t2 = (p-t2)%p
        t1 = (t1+t2)%p
        s[i] = (2*t1)%p
    return(c,s)

""" If p = 2 mod 3 this finds the smallest quadratic nonresidue
If p = 1 mod 3 this finds the smallest quadratic nonresidue that
is also a cubic nonresidue.
If p = 2 or p is composite it returns 0 """
def findnqr2(p):
    s = is_prime(p)
    if (s==True):
        t1 = (p-1)//2
        t3 = 1
        for i in range(50):
            t2 = exp1(t1,i,p)
            t4 = 0
            if ((p%3)==1):
                t4 = exp1((p-1)//3,i,p)
            if ((t2==(p-1)) and (t4!=1)):
                t3 = i
                break
    if (s==False):
        t3 = 0
    return(t3)

def multcnvl2(a,b,p):
    t1 = len(a)
    t2 = len(b)
    t = min(t1,t2)
    s = 0
    for i in range(t):
        s1 = (a[i]*b[i])%p
        s = (s+s1)%p
    return(s)


""" Defines the group and a function for exponentiating in that group
Also contains display function which displays a group element and
display2 which displays a group element and also prints out additional
information about the group.
The group definiton is based on a base g and a modulus p where
p is a prime such that p = 1 mod 4.  If an invalid value for p is
input then p is set to 29 as a default """
class group:

    def __init__(self,g,p):        
        self.g = g
        self.p = 29
        if ((is_prime(p)==True) and (p%4==1)):
            self.p = p
        i2 = modsqrt2.sqrt1(p-1,p)
        
        t = exp1((p-1)//2,g,p)        
        self.quadres = False
        if (t==1):
            self.quadres == True
            
        if (t==(p-1)):
            i2 = exp1((p-1)//4,g,p)
        self.i2 = i2
        
        self.a2 = calc2(g,self.i2,self.p)

    def exp4b2(self,l2,a2,p):
        t1 = exp4b(1*l2,0,a2,p)
        t2 = exp4b(2*l2,1,a2,p)
        t = [t1,t2]
        return(t)

    def exp(self,e):
        t = self.exp4b2(e,self.a2,self.p)
        return(t)

    def display(self,e):
        t = self.exp4b2(e,self.a2,self.p)
        display4(t)
        
    def display2(self,e):
        g = self.g
        p = self.p
        i2 = self.i2              
    
        a3 = self.a2
        h1 = series(1,2*e,a3,0,2,p)
        h3 = series(1,e,a3,0,4,p)
        h2 = series(1,p-1,a3,0,2,p)
        h4 = series(1,p-1,a3,0,4,p)
        print(" e =",e,"   a3 =",a3,"   g =",g,"   i2 =",i2,"  p =",p)
        print(" h1 = ",h1,"   h3 = ",h3)  
        print(" h2 = ",h2,"   h4 = ",h4)  
        t1 = self.exp4b2(e,a3,p)
        display144h(t1[0])
        print()
        display27(t1[1])
    

""" Example 1 """
print("\n \n")
g = 2
p = 53
n = 18
print("\n Using the group defined with base g =",g,end="")
print(" and prime modulus p =",p)
print(" The ",n,"th element is: \n",sep="")
k1 = group(g,p)
k1.display(n)

""" Example 2 """
print("\n \n")
k2 = group(3,89)
n = 20
print("\n Using the group defined with base g =",k2.g,end="")
print(" and prime modulus p =",k2.p)
print(" The ",n,"th element is: \n",sep="")
e1 = k2.exp(n)
display4(e1)




""" Example 3 """
""" Test of hs20 and hs21 """
print("\n \n This is the test of hs20 and hs21")
p = 101
g = findnqr2(p)
k3 = group(g,p)
n = 18
e1 = k3.exp(n)
for i in range(5):
    a3 = hs20(i,e1,p)
    a4 = hs21(i,e1,p)
    print(" \n i =",i,"  a3 =",a3,"  a4 =",a4,end="   ")
    h11 = series(0,n,k3.a2,2*i*n,2,k3.p)
    print(" h11 = ",h11)


""" Example 4"""
""" Test of ws """
print("\n \n This is the test of ws")
g = 2
p = 53
k4 = group(g,p)
n = 24
e1 = k4.exp(n)
a3 = ws(e1,p)
print(" \n a3 = ",a3)
h11 = series(0,2*n,k4.a2,0,2,k4.p)
print(" h11 = ",h11)
print(" \n \n")


""" Example 5 """
""" Test of f1 """
p = 1873
g = findnqr2(p)
g = g
k4 = group(g,p)
e = (p-1)//3
e = 1*e
e1 = k4.exp(e)
k4.display(e)
c1,s1 = f1(e1,p)
print("\n \n c = ",c1)
print(" s = ",s1)

""" Example 6 """
a = [1,2,5,4,7,8,3]
b = [1,2,3,7,6,5,1]
p = 41
t1 = multcnvl2(a,b,p)
print("\n \n the value of multcnvl2(a,b,",p,")",sep="")
print(" for a =",a,"and b = ",b)
print(" is equal to",t1)

