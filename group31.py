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

""" Display an element of the group2 """
def display5(e1):
    display144h(e1[0])
    print()
    display144h(e1[1])
    

""" Primality test """
def is_prime(p):
    p = abs(p)
    if (p==0):
        p = 1
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
    if (p==1):
        b = False
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
        p = self.p
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

        self.functions = ("list","calc2","series_d","series_d1","series_d3",
                          "series_d20","hs20","hs21","hs","ws","f1","f20","f21",
                          "calc6","exp4b2","exp","h20","series","series1",
                          "series3","series20","display","display2","display4")
                        


    def list(self,n):
        if (n<0 or n>3):
            n = 3
        if (n==0 or n==2):
            c = 0
            a = self.functions
            if (n==2):
                a = sorted(a)
            for i in a:
                print("{:<15}".format(i),end="")
                c = (c+1)%5
                if (c==0):
                    print()
                    
        if (n==1 or n==3):
            c = 0
            a = self.functions
            if (n==3):
                a = sorted(a)
            for i in a:
                t = list(i)
                t1 = "_" in t
                if (t1==False):
                    print("{:<15}".format(i),end="")
                    c = (c+1)%5
                    if (c==0):
                        print()
    
        
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
        h1 = init2(4)
        for i in range(c1,c2+1):
            a3 = exp2a(i,a2,p)
            a4 = exp2a(i,a3,p)
            a3 = exp2a(d1,a4,p)
        
            a4 = exp2a(i,a2,p)
            a6 = exp2a(d,a4,p)

            a4[0] = (a3[0]*a6[0])%p
            a4[1] = (a3[1]*a6[0])%p
            h1[0] = (h1[0]+a4[0])%p
            h1[1] = (h1[1]+a4[1])%p

            a4[0] = (a3[0]*a6[1])%p
            a4[1] = (a3[1]*a6[1])%p
            h1[2] = (h1[2]+a4[0])%p
            h1[3] = (h1[3]+a4[1])%p
        return(h1)

    def series_d1(self,c1,c2,s,a2,d,d1,p):
        h1 = init2(4)
        for i in range(c1,c2+1,s):
            a3 = exp2a(i,a2,p)
            a4 = exp2a(i,a3,p)
            a3 = exp2a(d1,a4,p)
        
            a4 = exp2a(i,a2,p)
            a6 = exp2a(d,a4,p)

            a4[0] = (a3[0]*a6[0])%p
            a4[1] = (a3[1]*a6[0])%p
            h1[0] = (h1[0]+a4[0])%p
            h1[1] = (h1[1]+a4[1])%p

            a4[0] = (a3[0]*a6[1])%p
            a4[1] = (a3[1]*a6[1])%p
            h1[2] = (h1[2]+a4[0])%p
            h1[3] = (h1[3]+a4[1])%p
        return(h1)

    def series_d3(self,l2,a2,d,d1,p):
        h1 = init2(4)
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
            h1[0] = (h1[0]+a4[0])%p
            h1[1] = (h1[1]+a4[1])%p

            a4[0] = (a3[0]*a6[1])%p
            a4[1] = (a3[1]*a6[1])%p
            h1[2] = (h1[2]+a4[0])%p
            h1[3] = (h1[3]+a4[1])%p
        return(h1)


    def series_d20(self,c1,c2,a2,d1,p):
        a5 = [0,0]
        for i in range(c1,c2+1):
            t = abs(i)
            a3 = exp2a(t,a2,p)
            a4 = exp2a(t,a3,p)
            a3 = exp2a(d1,a4,p)
        
            a5[0] = (a5[0]+a3[0])%p
            a5[1] = (a5[1]+a3[1])%p
        
        return(a5)


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
        if (c1<0) or (c1>4):
            c1 = 0
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

    def series20(self,c1,c2,d1):
        t = self.series_d20(c1,c2,self.a2,d1,self.p)
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



class group2:

    def __init__(self,g,h,p): 
        self.p = 29
        if ((is_prime(p)==True) and (p%4==1)):
            self.p = p
        p = self.p
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

        self.h = h
        if (h%p==0):
            self.h = 1
        self.a3 = self.calc2(self.h,self.i2,self.p)

        self.functions = ("list","calc2","series_d","series_d1","series_d3",
                          "series_d5","hs20","hs21","hs","exp","series",
                          "series1","series3","series5","display","display5")                     

    def list(self,n):
        if (n<0 or n>3):
            n = 3
        if (n==0 or n==2):
            c = 0
            a = self.functions
            if (n==2):
                a = sorted(a)
            for i in a:
                print("{:<15}".format(i),end="")
                c = (c+1)%5
                if (c==0):
                    print()
                    
        if (n==1 or n==3):
            c = 0
            a = self.functions
            if (n==3):
                a = sorted(a)
            for i in a:
                t = list(i)
                t1 = "_" in t
                if (t1==False):
                    print("{:<15}".format(i),end="")
                    c = (c+1)%5
                    if (c==0):
                        print()
    
                
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
        h1 = init2(4)
        for i in range(c1,c2+1):
            a3 = exp2a(i,a2,p)
            a4 = exp2a(i,a3,p)
            a3 = exp2a(d1,a4,p)
        
            a4 = exp2a(i,a2,p)
            a6 = exp2a(d,a4,p)

            a4[0] = (a3[0]*a6[0])%p
            a4[1] = (a3[1]*a6[0])%p
            h1[0] = (h1[0]+a4[0])%p
            h1[1] = (h1[1]+a4[1])%p

            a4[0] = (a3[0]*a6[1])%p
            a4[1] = (a3[1]*a6[1])%p
            h1[2] = (h1[2]+a4[0])%p
            h1[3] = (h1[3]+a4[1])%p
        return(h1)

    def series_d1(self,c1,c2,s,a2,d,d1,p):
        h1 = init2(4)
        for i in range(c1,c2+1,s):
            a3 = exp2a(i,a2,p)
            a4 = exp2a(i,a3,p)
            a3 = exp2a(d1,a4,p)
        
            a4 = exp2a(i,a2,p)
            a6 = exp2a(d,a4,p)

            a4[0] = (a3[0]*a6[0])%p
            a4[1] = (a3[1]*a6[0])%p
            h1[0] = (h1[0]+a4[0])%p
            h1[1] = (h1[1]+a4[1])%p

            a4[0] = (a3[0]*a6[1])%p
            a4[1] = (a3[1]*a6[1])%p
            h1[2] = (h1[2]+a4[0])%p
            h1[3] = (h1[3]+a4[1])%p
        return(h1)

    def series_d3(self,l2,a2,d,d1,p):
        h1 = init2(4)
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
            h1[0] = (h1[0]+a4[0])%p
            h1[1] = (h1[1]+a4[1])%p

            a4[0] = (a3[0]*a6[1])%p
            a4[1] = (a3[1]*a6[1])%p
            h1[2] = (h1[2]+a4[0])%p
            h1[3] = (h1[3]+a4[1])%p
        return(h1)

    def series_d5(self,c1,c2,a2,a5,d,d1,p):
        h1 = init2(4)
        h2 = init2(4)
        for i in range(c1,c2+1):
            a3 = exp2a(i,a2,p)
            a4 = exp2a(i,a3,p)
            a3 = exp2a(d1,a4,p)
        
            a4 = exp2a(i,a2,p)
            a6 = exp2a(d,a4,p)

            a7 = exp2a(i,a5,p)
            c = a7[0]
            s = a7[1]

            a4[0] = (a3[0]*a6[0])%p
            a4[1] = (a3[1]*a6[0])%p
            t1 = (c*a4[0])%p
            t2 = (c*a4[1])%p
            h1[0] = (h1[0]+t1)%p
            h1[1] = (h1[1]+t2)%p
            t1 = (s*a4[0])%p
            t2 = (s*a4[1])%p
            h2[0] = (h2[0]+t1)%p
            h2[1] = (h2[1]+t2)%p
            
            a4[0] = (a3[0]*a6[1])%p
            a4[1] = (a3[1]*a6[1])%p
            t1 = (c*a4[0])%p
            t2 = (c*a4[1])%p
            h1[2] = (h1[2]+t1)%p
            h1[3] = (h1[3]+t2)%p
            t1 = (s*a4[0])%p
            t2 = (s*a4[1])%p
            h2[2] = (h2[2]+t1)%p
            h2[3] = (h2[3]+t2)%p

        t = [h1,h2]
            
        return(t)


    def hs20(self,c1,e1):
        if (c1<0) or (c1>4):
            print("\n \n error in hs20 c1 =",c1,"which is out of range")
            print(" c1 is being set to 0")
            c1 = 0
        p = self.p
        a3 = [0,0]
        a = e1
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

    def hs21(self,c1,e1):
        if (c1<0) or (c1>4):
            print("\n \n error in hs21 c1 =",c1,"which is out of range")
            print(" c1 is being set to 0")
            c1 = 0
        p = self.p
        a3 = [0,0]
        a = e1
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
        a3 = self.hs20(c1,e1[0])
        a4 = self.hs21(c1,e1[0])
        t1 = a3+a4
        a3 = self.hs20(c1,e1[1])
        a4 = self.hs21(c1,e1[1])
        t2 = a3+a4
        t = [t1,t2]
        return(t)

    def exp(self,e):
        t = exp5(e,self.a2,self.a3,self.p)
        return(t)

    def series(self,c1,c2,d,d1):
        t = self.series_d(c1,c2,self.a2,d,d1,self.p)
        return(t)

    def series1(self,c1,c2,s,d,d1):
        t = self.series_d1(c1,c2,s,self.a2,d,d1,self.p)
        return(t)
    
    def series3(self,l2,d,d1):
        t = self.series_d3(l2,self.a2,d,d1,self.p)
        return(t)

    def series5(self,c1,c2,d,d1):
        t = self.series_d5(c1,c2,self.a2,self.a3,d,d1,self.p)
        return(t)

    def display(self,n):
        t = exp5(n,self.a2,self.a3,self.p)
        display144h(t[0])
        print()
        display144h(t[1])

    def display5(self,e1):
        display144h(e1[0])
        print()
        display144h(e1[1])


def series(c1,c2,a2,d,d1,p):
    h1 = init2(4)
    for i in range(c1,c2+1):
        a3 = exp2a(i,a2,p)
        a4 = exp2a(i,a3,p)
        a3 = exp2a(d1,a4,p)
        
        a4 = exp2a(i,a2,p)
        a6 = exp2a(d,a4,p)

        a4[0] = (a3[0]*a6[0])%p
        a4[1] = (a3[1]*a6[0])%p
        h1[0] = (h1[0]+a4[0])%p
        h1[1] = (h1[1]+a4[1])%p

        a4[0] = (a3[0]*a6[1])%p
        a4[1] = (a3[1]*a6[1])%p
        h1[2] = (h1[2]+a4[0])%p
        h1[3] = (h1[3]+a4[1])%p
    return(h1)


def series20(c1,c2,a2,d1,p):
    a5 = [0,0]
    for i in range(c1,c2+1):
        t = abs(i)
        a3 = exp2a(t,a2,p)
        a4 = exp2a(t,a3,p)
        a3 = exp2a(d1,a4,p)
        
        a5[0] = (a5[0]+a3[0])%p
        a5[1] = (a5[1]+a3[1])%p
        
    return(a5)        
    

def ddh(k,x,y,z):
    g = k.g
    i2 = k.i2
    p = k.p
    a2 = k.a2
    t = 0
    t2 = p-1
    while (t2%2==0):
        t2 = t2//2
    t1 = exp1(t2,g,p)
    if (t1==(p-1)):
        print("\n \n error in ddh g must generate a group of odd order")

    f1 = k.calc2
    a3 = f1(x,i2,p)
    a4 = f1(y,i2,p)
    a5 = f1(z,i2,p)
    t1 = p-1
    h1 = series(1,t1,a2,0,1,p)
    h2 = series(1,t1,a3,0,1,p)
    h3 = series(1,t1,a4,0,1,p)
    h4 = series(1,t1,a5,0,1,p)
    # print(" in ddh h1 = ",h1,"h2 = ",h2," h3 = ",h3," h4 = ",h4)

    s = init2(4)
    s[0] = (h1[0]+h1[1])%p
    s[1] = (h2[0]+h2[1])%p
    s[2] = (h3[0]+h3[1])%p
    s[3] = (h4[0]+h4[1])%p

    # print(" \n \n in ddh s = ",s)

    t1 = 0
    t2 = p-s[0]
    for i in range(1,4):
        if (s[i]==s[0]):
            pass
        elif (s[i]==t2):
            t1 = (t1+1)%2
        else:
            # print("\n \n error in ddh invalid parameters ")
            t1 = 1
            t = -1
            break
        
    if (t1==0):
        t = 1

    return(t)


def ddh2(c,k,x,y,z):
    g = k.g
    p = k.p
    x = x%p
    y = y%p
    z = z%p
    s = 0
    s1 = 0
    t = False
    for i in range(c):
        g1 = exp1(i,g,p)
        g2 = exp1(i,y,p)
        x1 = (g1*x)%p
        y1 = y
        z1 = (g2*z)%p
        t1 = ddh(k,x1,y1,z1)
        if (t1==1):
            s = s+1
        if (t1==-1):
            s1 = s1+1
    
    if (s1>c//2):
        print("\n \n The output of ddh2 cannot be relied upon.")
        print(" Either the input was incorrect or the value of c was too small.")
    if (s==(c-s1)):
        t = True
    return(t)




""" If h1 = series(c1,c2,a2,0,2,p) and h2 = series(t1,t2,a2,0,2,p) this function
calculates a3 where a3[0] = (h2[0]-h1[0]) (mod p) and a3[1] = (h2[1]-h1[1]) (mod p)
If abs(t1-c1) and abs(t2-c2) are reasonably small numbers then this runs in polynomial time
This function requires that c1,c2,t1 and t2 are all greater than or equal to zero.
Also c1 should be less than or equal to c2 and t1 should be less or equal to t2."""
def fn60(c1,c2,t1,t2,a2,p):   
    a3 = init2(2)
    a4 = init2(2)
    h11 = init2(4)
    h12 = init2(4)
    h14 = init2(4)
    if (c1<t1):
        h11 = series(c1,t1-1,a2,0,2,p)
        a3[0] = (p-h11[0])%p
        a3[1] = (p-h11[1])%p        
    if (c1>t1):
        h11 = series(t1,c1-1,a2,0,2,p)
        a3[0] = h11[0]
        a3[1] = h11[1]
    if (c2<t2):
        h12 = series(c2+1,t2,a2,0,2,p)
        a4[0] = h12[0]
        a4[1] = h12[1]
    if (c2>t2):
        h12 = series(t2+1,c2,a2,0,2,p)
        a4[0] = (p-h12[0])%p
        a4[1] = (p-h12[1])%p
    a3[0] = (a3[0]+a4[0])%p
    a3[1] = (a3[1]+a4[1])%p    
    return(a3)



""" If h1 = series20(c1,c2,a2,2,p) and h2 = series20(t1,t2,a2,2,p) this function
calculates a3 where a3[0] = (h2[0]-h1[0]) (mod p) and a3[1] = (h2[1]-h1[1]) (mod p)
If abs(t1-c1) and abs(t2-c2) are reasonably small numbers then this runs in polynomial time.
This function is the same as fn60 except that it allows for negative values of c1,c2,t1, and t2.
Also c1 should be less than or equal to c2 and t1 should be less than or equal to t2"""
def fn60d(c1,c2,t1,t2,a2,p):   
    a3 = init2(2)
    a4 = init2(2)
    h11 = init2(4)
    h12 = init2(4)
    h14 = init2(4)
    if (c1<t1):
        h11 = series20(c1,t1-1,a2,2,p)
        a3[0] = (p-h11[0])%p
        a3[1] = (p-h11[1])%p        
    if (c1>t1):
        h11 = series20(t1,c1-1,a2,2,p)
        a3[0] = h11[0]
        a3[1] = h11[1]
    if (c2<t2):
        h12 = series20(c2+1,t2,a2,2,p)
        a4[0] = h12[0]
        a4[1] = h12[1]
    if (c2>t2):
        h12 = series20(t2+1,c2,a2,2,p)
        a4[0] = (p-h12[0])%p
        a4[1] = (p-h12[1])%p
    a3[0] = (a3[0]+a4[0])%p
    a3[1] = (a3[1]+a4[1])%p    
    return(a3)

""" Given the value of h11 where h11 = series(0,c1,a2,d1,2,p)
this calculates the value of h15 where h15 = series(0,t1,a2,d2,2,p)
assuming that a2[0]^2 + a2[1]^2 = 1 (mod p) that p is a prime = 1 (mod 4)
and assuming that d1 mod 4 = 0 and d2 mod 4 = 0.  If (d2-d1) is reasonably small and
if (t1-c1) is reasonably small then this algorithm runs in polynomial time """
def fn61(c1,d1,t1,d2,a2,h11,p):
    a3 = init2(2)
    a4 = init2(2)
    a5 = init2(2)
    a6 = init2(2)
    a7 = init2(2)
    h15 = init2(4)
    s1 = d1%4
    s2 = d2%4
    if ((s1!=0) or (s2!=0)):
        print("\n \n error in fn61 d1 and d2 should equal 0 mod 4")
        print(" d1 and d2 being set to 0")
        d1 = 0
        d2 = 0

    # 1
    c = (h11[0] + (p-h11[3]))%p
    s = (h11[1] + h11[2])%p
    s1 = d1//4
    a4 = exp2a(s1,a2,p)
    a3 = exp2a(s1,a4,p)
    a4 = exp2a(2,a3,p)
    a3 = [c,s]
    a5 = cmult(a3,a4,p)

    s2 = d2//4
    a3 = fn60(s1,c1+s1,s2,t1+s2,a2,p)

    a6[0] = (a5[0]+a3[0])%p
    a6[1] = (a5[1]+a3[1])%p


    # 2
    c = (h11[0] + h11[3])%p
    s = (h11[1] + (p-h11[2]))%p
    s1 = d1//4
    a4 = exp2a(s1,a2,p)
    a3 = exp2a(s1,a4,p)
    a4 = exp2a(2,a3,p)
    a3 = [c,s]
    a5 = cmult(a3,a4,p)

    s2 = d2//4
    a3 = fn60d(-s1,c1-s1,-s2,t1-s2,a2,p)

    a7[0] = (a5[0]+a3[0])%p
    a7[1] = (a5[1]+a3[1])%p

    b1 = a6+a7

    a4 = exp2a(s2,a2,p)
    a3 = exp2a(s2,a4,p)
    a5 = exp2a(2,a3,p)
    a5[1] = (p-a5[1])%p
    a3 = cmult(a5,a6,p)
    a4 = cmult(a5,a7,p)
    h11 = a3+a4

    s1 = (p+1)//2
    h15[0] = (h11[0]+h11[2])%p
    h15[0] = (s1*h15[0])%p
    
    h15[1] = (h11[1]+h11[3])%p
    h15[1] = (s1*h15[1])%p

    h15[2] = (h11[1]+(p-h11[3]))%p
    h15[2] = (s1*h15[2])%p

    h15[3] = ((p-h11[0])+h11[2])%p
    h15[3] = (s1*h15[3])%p;

    # print("\n \n in fn61 h15 = ",h15)


    # h14 = series(0,t1,a2,d2,2,p)
    # print("\n \n in fn61 h14 = ",h14)
    return(h15)
    
    
""" This prints the complex nth roots of unity in GF(p) for p = 1 (mod 4)
k is defined as k = group(g,p) for some modulus p where p = 1 (mod 4) and
where p = 1 (mod n) and where g generates a subgroup whose order is divisible by n
assuming that g mod p does not equal 0,1 or -1 mod p.
If g = 1 (mod p) then n should not be an even number """
def fn1(k,n):
    a2 = k.a2
    p = k.p	
    if (p%n)!=1:
        print("\n \n error in fn1 p mod n should equal 1")
    else:
        a3 = exp2a((p-1)//n,a2,p)
        for i in range(n):
            a4 = exp2a(i,a3,p)
            g = (a4[0]+k.i2*a4[1])%p          
            print(i,a4,g,sep="    ")




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


