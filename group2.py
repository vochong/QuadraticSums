from math104 import *
import modsqrt2 as modsqrt

c80 = ((1,4,6,4,1),
       (1,2,0,-2,-1),
       (1,-4,-10,-4,1),
       (1,-14,0,14,-1),
       (1,-28,70,-28,1))

s80 = ((0,0,0,0),
       (2,6,6,2),
       (4,4,-4,-4),
       (6,-14,-14,6),
       (8,-56,56,-8))


""" Display an element of the group """
def display4(e1):
    display144h(e1[0])
    print()
    display27(e1[1])


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
        self.p = 29
        if ((is_prime(p)==True) and (p%4==1)):
            self.p = p
        g1 = g%p
        t2 = 0
        if (g1==1):
            t2 = 1
        if ((g1==0) or (g1==1) or (g1==(p-1))):
            g1 = findnqr2(p)
        if (t2==1):
            t1 = self.p-1
            while (t1%2==0):
                g1 = (g1*g1)%p
                t1 = t1//2
        self.g = g1
        i2 = modsqrt.sqrt1(p-1,p)
        
        t = exp1((p-1)//2,self.g,p)        
        self.qnr = True
        if (t==1):
            self.qnr = False
            
        if (t==(p-1)):
            i2 = exp1((p-1)//4,self.g,p)
        self.i2 = i2
        
        self.a2 = self.calc2(self.g,self.i2,self.p)
        
    """ Determines a complex number a2 corrresponding to the base g
    g = (a2[0] + i2*a2[1]) (mod p) """
    def calc2(self,g,i2,p):
        a2 = [1,0]
        t = inverse(g,p)
        t1 = (p+1)//2
        t2 = (g+t)%p
        a2[0] = (t1*t2)%p
        t2 = (t+(p-g))%p
        t2 = (t1*t2)%p
        a2[1] = (i2*t2)%p
        return(a2)

    def series_d(self,c1,c2,a2,d,d1,p):
        h11 = init2(4)
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

    def series_d1(self,c1,c2,s,a2,d,d1,p):
        h11 = init2(4)
        for i in range(c1,c2+1,s):
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

    def series_d3(self,l2,a2,d,d1,p):
        h11 = init2(4)
        for i in range(0,l2+1):
            a3 = exp2a(i,a2,p)
            a4 = exp2a(i,a3,p)
            a3 = exp2a(d1,a4,p)
        
            a4 = exp2a(l2-i,a2,p)
            a5 = exp2a(l2-i,a4,p)
            a4 = exp2a(d1,a5,p)
            a5 = cmult(a3,a4,p)
            a3 = a5        
      
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
    def hs20(self,c1,e1):
        if (c1<0) or (c1>4):
            print("\n \n error in hs20 c1 =",c1,"which is out of range")
            print(" c1 is being set to 0")
            c1 = 0
        p = self.p
        a3 = [0,0]
        a = e1[0]
        c = init2(5)
        for i in range(5):
            c[i] = c80[c1][i]
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
    def hs21(self,c1,e1):
        if (c1<0) or (c1>4):
            print("\n \n error in hs21 c1 =",c1,"which is out of range")
            print(" c1 is being set to 0")
            c1 = 0
        p = self.p
        a3 = [0,0]
        a = e1[0]
        c = init2(4)
        for i in range(4):
            c[i] = s80[c1][i]
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

    def hs(self,c1,e1):
        if (c1<0) or (c1>4):
            c1 = 0
        a3 = self.hs20(c1,e1)
        a4 = self.hs21(c1,e1)
        t = a3+a4
        return(t)

    """ Shows the relationship between the 27 tuple of the group
    element e1 which is e1[1] and quadratic sums in GF(p) """
    def ws(self,e1):
        p = self.p
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

    def f1(self,e1):
        p = self.p
        c = init2(9)
        s = init2(9)
        a = e1[0]
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

    def f20(self,e1):
        p = self.p
        c = init2(9)
        s = init2(9)
        a = e1[0]
        for i in range(9):
            t1 = (a[0*9+i]+a[12*9+i])%p
            t2 = (a[3*9+i]+a[15*9+i])%p
            t2 = (p-t2)%p
            c[i] = (t1+t2)%p

            t1 = (a[1*9+i]+a[13*9+i])%p
            s[i] = (2*t1)%p
        return(c,s)

    def f21(self,e1):
        p = self.p
        c = init2(9)
        s = init2(9)
        a = e1[0]
        for i in range(9):
            t1 = (a[0*9+i]+a[3*9+i])%p
            t2 = (a[12*9+i]+a[15*9+i])%p
            t2 = (p-t2)%p
            c[i] = (t1+t2)%p

            t1 = (a[4*9+i]+a[7*9+i])%p
            s[i] = (2*t1)%p
        return(c,s)

    def calc6(self,c1,e1):
        p = self.p
        c,s = self.f1(e1)
        c2 = init2(5)
        s2 = init2(4)
        for i in range(5):
            c2[i] = c80[c1][i]
        for i in range(4):
            s2[i] = s80[c1][i]
    
        for i in range(5):
            t1 = 1
            if (c2[i]<0):
                t1 = p-1
            t2 = abs(c2[i])
            c2[i] = (t1*t2)%p
        
        for i in range(4):
            t1 = 1
            if (s2[i]<0):
                t1 = p-1
            t2 = abs(s2[i])
            s2[i] = (t1*t2)%p

        h12 = init2(4)    
        for i in range(5):
            t = (c2[i]*c[2*i])%p
            h12[0] = (h12[0]+t)%p
            t = (c2[i]*s[2*i])%p
            h12[1] = (h12[1]+t)%p
        for i in range(4):
            t = (s2[i]*c[2*i+1])%p
            h12[2] = (h12[2]+t)%p
            t = (s2[i]*s[2*i+1])%p
            h12[3] = (h12[3]+t)%p
        return(h12)        

    def exp4b2(self,l2,a2,p):
        t1 = exp4b(1*l2,0,a2,p)
        t2 = exp4b(2*l2,1,a2,p)
        t = [t1,t2]
        return(t)

    """ Exponentiates in the group """
    def exp(self,e):
        t = self.exp4b2(e,self.a2,self.p)
        return(t)

    def h20(self,e1,e):
        p = self.p
        a3 = exp2a(e1,self.a2,p)
        if (e1%4==3):
            a3[1] = (p-a3[1])%p
        t1 = exp4b(e,0,a3,p)
        t2 = exp4b(2*e,1,a3,p)
        t = [t1,t2]
        display4(t)


    """ Calculates quadratic sums in GF(p) in exponential time """
    def series(self,c1,c2,d,d1):
        t = self.series_d(c1,c2,self.a2,d,d1,self.p)
        return(t)

    def series1(self,c1,c2,s,d,d1):
        t = self.series_d1(c1,c2,s,self.a2,d,d1,self.p)
        return(t)
    
    def series3(self,l2,d,d1):
        t = self.series_d3(l2,self.a2,d,d1,self.p)
        return(t)

    """ Exponentiates to calculate the nth group element and
    then displays it """
    def display(self,n):
        t = self.exp4b2(n,self.a2,self.p)
        display144h(t[0])
        print()
        display27(t[1])

    """ Same as display but it prints additional information
    about the group and the nth group element """
    def display2(self,n):
        g = self.g
        p = self.p
        i2 = self.i2              
    
        a3 = self.a2
        t = self.series_d
        h1 = t(1,2*n,a3,0,2,p)
        h3 = t(1,n,a3,0,4,p)
        h2 = t(1,p-1,a3,0,2,p)
        h4 = t(1,p-1,a3,0,4,p)
        print(" e =",n,"   a2 =",a3,"   g =",g,"   i2 =",i2,"  p =",p)
        print(" h1 = ",h1,"   h3 = ",h3)  
        print(" h2 = ",h2,"   h4 = ",h4,end="")
        t2 = (p+1)//2
        t2 = (t2*t2)%p
        t2 = (t2*h4[0])%p
        t3 = inverse(t2,p)
        print("  t2 = ",t2,"  t3 = ",t3)
        t1 = self.exp4b2(n,a3,p)
        display144h(t1[0])
        print()
        display27(t1[1])

    """ Displays the group element e1 """
    def display4(self,e1):
        display144h(e1[0])
        print()
        display27(e1[1])
