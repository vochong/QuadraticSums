from math124 import *


def mult2(m,e1,c1,c2,p):
    m[e1] = init2(25)
    for i in range(5):
        for j in range(5):
            t1 = c1[i]
            t2 = c2[j]
            t3 = t1*t2%p
            t = 5*i+j
            m[e1][t] = t3

def mult25(m,c1,c2,d1,d2,d3,p):
    for i in range(25):
        t1 = c1*m[d1][i]%p
        t2 = c2*m[d2][i]%p
        m[d3][i] = (t1+t2)%p   

class series:

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
            g1 = self.find3(p)
        if (t2==1):
            t1 = self.p-1
            while (t1%2==0):
                g1 = (g1*g1)%p
                t1 = t1//2
        self.g = g1

        i2 = self.find4(self.g,p-1,p)
        self.i2 = i2
        
        t = exp1((p-1)//2,self.g,p)        
        self.qnr = True
        if (t==1):
            self.qnr = False
        
        self.a2 = self.calc2(self.g,self.i2,self.p)  

        self.functionlist = ("functions","variables","find2","find3",
        "find4","calc2","series_d22","series_d23","series_d24","series_d25",
        "series22","series23","series24","series25")                
                        
    def functions(self,n):
        if (n<0 or n>3):
            n = 3
        if (n==0 or n==2):
            c = 0
            a = self.functionlist
            if (n==2):
                a = sorted(a)
            for i in a:
                print("{:<15}".format(i),end="")
                c = (c+1)%5
                if (c==0):
                    print()
                    
        if (n==1 or n==3):
            c = 0
            a = self.functionlist
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

    def variables(self):
        k = self
        print(" p =",k.p,"    g =",k.g,"   i2 =",k.i2,end="")
        print("    a2 =",k.a2,"   qnr =",k.qnr)
    
    def find2(self,g,p):
        a = [2,3,5,7,11,13,17,19,23,29]
        t4 = 0
        for i in a:
            t1 = p%i
            if (t1==1):
                t2 = (p-1)//i
                t3 = exp1(t2,g,p)
                if (t3!=1):
                    t4 = t4+1
            if (t1!=1):
                t4 = t4+1
        t = False
        if (t4==len(a)):
            t = True
        return(t)

    def find3(self,p):
        s = is_prime(p)
        t = 101
        g = 0
        if (s==True):
            t1 = False
            g = 1
            while (t1==False):
                g = g+1
                t1 = self.find2(g,p)
                if (g>t):
                    g = 0
                    break
        return(g)

    def find4(self,g,q,p):
        q1 = q
        i = 0
        if (q1%4==0):
            while (q1%2==0):
                i = i+1
                q1 = q1//2
        n = i
        t1 = exp1(q1,g,p)
        t2 = (t1*t1)%p
        s = sqrt1(p-1,p)
        if ((t1!=1) and (t2!=1)):
            i = 0
            while (t2!=(p-1) and i<(n+1)):
                t1 = (t1*t1)%p
                t2 = (t2*t2)%p
                i = i+1
            s = t1
        t = (s*s)%p
        if (t!=(p-1)):
            s = 0
        return(s)
            
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

    def series_d22(self,c1,c2,g,a2,d,d1,p):
        h1 = init2(2)
        for i in range(c1,c2+1):
            t = abs(i)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            t = i-c1
            a3 = exp2a(t,a2,p)
            a4 = exp2a(d,a3,p)

            h1[0] = (h1[0]+a4[0]*g1)%p
            h1[1] = (h1[1]+a4[1]*g1)%p

        return(h1)

    def series_d23(self,c1,c2,s,g,a2,d,d1,p):
        h1 = init2(2)
        t1 = 0
        for i in range(c1,c2+1,s):
            t = abs(i)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            a3 = exp2a(t1,a2,p)
            a4 = exp2a(d,a3,p)
            t1 = t1+1

            h1[0] = (h1[0]+a4[0]*g1)%p
            h1[1] = (h1[1]+a4[1]*g1)%p

        return(h1)
    
    def series_d24(self,c1,c2,g,a2,i2,d,d1,p):
        h1 = init2(5)
        d2 = d[0]
        for i3 in range(c1,c2+1):
            t = abs(i3)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            t = i3-c1
            a3 = exp2a(t,a2,p)
            a4 = exp2a(d2,a3,p)    

            for i in range(5):
                if i==0:
                    t1 = a4[0]**4%p
                if i==1:
                    t1 = (a4[0]**3)*a4[1]%p
                if i==2:
                    t1 = (a4[0]*a4[1])**2%p
                if i==3:
                    t1 = a4[0]*(a4[1]**3)%p
                if i==4:
                    t1 = a4[1]**4%p

                t4 = g1*t1%p            
                h1[i] = (h1[i]+t4)%p

        return(h1)
    
    def series_d25(self,c1,c2,g,a2,i2,d,d1,p):
        h1 = init2(25)
        d2 = d[0]
        d3 = d[1]
        for i3 in range(c1,c2+1):
            t = abs(i3)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            t = i3-c1
            a3 = exp2a(t,a2,p)
            a4 = exp2a(d2,a3,p)
            a5 = exp2a(d3,a3,p)       

            for i in range(5):
                for j in range(5):
                    if i==0:
                        t1 = a4[0]**4%p
                    if i==1:
                        t1 = (a4[0]**3)*a4[1]%p
                    if i==2:
                        t1 = (a4[0]*a4[1])**2%p
                    if i==3:
                        t1 = a4[0]*(a4[1]**3)%p
                    if i==4:
                        t1 = a4[1]**4%p

                    if j==0:
                        t2 = a5[0]**4%p
                    if j==1:
                        t2 = (a5[0]**3)*a5[1]%p
                    if j==2:
                        t2 = (a5[0]*a5[1])**2%p
                    if j==3:
                        t2 = a5[0]*(a5[1]**3)%p
                    if j==4:
                        t2 = a5[1]**4%p

                    t4 = g1*t1%p
                    t4 = t2*t4%p
                    t = 5*i+j
                    h1[t] = (h1[t]+t4)%p

        return(h1)

    def series22(self,c1,c2,d,d1):
        t = self.series_d22(c1,c2,self.g,self.a2,d,d1,self.p)
        return(t)
            
    def series23(self,c1,c2,s,d,d1):
        t = self.series_d23(c1,c2,s,self.g,self.a2,d,d1,self.p)
        return(t)
        
    def series24(self,c1,c2,d,d1):
        t = self.series_d24(c1,c2,self.g,self.a2,self.i2,d,d1,self.p)
        return(t)

    def series25(self,c1,c2,d,d1):
        t = self.series_d25(c1,c2,self.g,self.a2,self.i2,d,d1,self.p)
        return(t)
    

class series4:

    def __init__(self,g,l2,d,d1,p): 
        self.p = 29
        if ((is_prime(p)==True) and (p%4==1)):
            self.p = p
        p = self.p
        g1 = g%p
        t2 = 0
        if (g1==1):
            t2 = 1
        if ((g1==0) or (g1==1) or (g1==(p-1))):
            g1 = self.find3(p)
        if (t2==1):
            t1 = self.p-1
            while (t1%2==0):
                g1 = (g1*g1)%p
                t1 = t1//2
        self.g = g1

        i2 = self.find4(self.g,p-1,p)
        self.i2 = i2
        
        t = exp1((p-1)//2,self.g,p)        
        self.qnr = True
        if (t==1):
            self.qnr = False
        
        self.a2 = self.calc2(self.g,self.i2,self.p)

        self.l2 = l2
        self.d = d
        self.d1 = d1
        self.series = self.series24(-l2,l2,d,d1*d1)

        self.functionlist = ("functions","variables","find2","find3",
        "find4","calc2","series_d22","series_d23","series_d24","series_d25",
        "series22","series23","series24","series25","equation32","equation35",
        "equation40v2","add","double","adjust")                
                        
    def functions(self,n):
        if (n<0 or n>3):
            n = 3
        if (n==0 or n==2):
            c = 0
            a = self.functionlist
            if (n==2):
                a = sorted(a)
            for i in a:
                print("{:<15}".format(i),end="")
                c = (c+1)%5
                if (c==0):
                    print()
                    
        if (n==1 or n==3):
            c = 0
            a = self.functionlist
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

    def variables(self):
        k = self
        print(" p =",k.p,"    g =",k.g,"   i2 =",k.i2,end="")
        print("    a2 =",k.a2,"   qnr =",k.qnr)
        print("l2 =",k.l2,"     d1 =",k.d1,"   d =",k.d,"   series = ",k.series)
    
    def find2(self,g,p):
        a = [2,3,5,7,11,13,17,19,23,29]
        t4 = 0
        for i in a:
            t1 = p%i
            if (t1==1):
                t2 = (p-1)//i
                t3 = exp1(t2,g,p)
                if (t3!=1):
                    t4 = t4+1
            if (t1!=1):
                t4 = t4+1
        t = False
        if (t4==len(a)):
            t = True
        return(t)

    def find3(self,p):
        s = is_prime(p)
        t = 101
        g = 0
        if (s==True):
            t1 = False
            g = 1
            while (t1==False):
                g = g+1
                t1 = self.find2(g,p)
                if (g>t):
                    g = 0
                    break
        return(g)

    def find4(self,g,q,p):
        q1 = q
        i = 0
        if (q1%4==0):
            while (q1%2==0):
                i = i+1
                q1 = q1//2
        n = i
        t1 = exp1(q1,g,p)
        t2 = (t1*t1)%p
        s = sqrt1(p-1,p)
        if ((t1!=1) and (t2!=1)):
            i = 0
            while (t2!=(p-1) and i<(n+1)):
                t1 = (t1*t1)%p
                t2 = (t2*t2)%p
                i = i+1
            s = t1
        t = (s*s)%p
        if (t!=(p-1)):
            s = 0
        return(s)
            
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

    def series_d22(self,c1,c2,g,a2,d,d1,p):
        h1 = init2(2)
        for i in range(c1,c2+1):
            t = abs(i)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            t = i-c1
            a3 = exp2a(t,a2,p)
            a4 = exp2a(d,a3,p)

            h1[0] = (h1[0]+a4[0]*g1)%p
            h1[1] = (h1[1]+a4[1]*g1)%p

        return(h1)

    def series_d23(self,c1,c2,s,g,a2,d,d1,p):
        h1 = init2(2)
        t1 = 0
        for i in range(c1,c2+1,s):
            t = abs(i)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            a3 = exp2a(t1,a2,p)
            a4 = exp2a(d,a3,p)
            t1 = t1+1

            h1[0] = (h1[0]+a4[0]*g1)%p
            h1[1] = (h1[1]+a4[1]*g1)%p

        return(h1)
    
    def series_d24(self,c1,c2,g,a2,i2,d,d1,p):
        h1 = init2(5)
        d2 = d[0]
        for i3 in range(c1,c2+1):
            t = abs(i3)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            t = i3-c1
            a3 = exp2a(t,a2,p)
            a4 = exp2a(d2,a3,p)    

            for i in range(5):
                if i==0:
                    t1 = a4[0]**4%p
                if i==1:
                    t1 = (a4[0]**3)*a4[1]%p
                if i==2:
                    t1 = (a4[0]*a4[1])**2%p
                if i==3:
                    t1 = a4[0]*(a4[1]**3)%p
                if i==4:
                    t1 = a4[1]**4%p

                t4 = g1*t1%p            
                h1[i] = (h1[i]+t4)%p

        return(h1)
    
    def series_d25(self,c1,c2,g,a2,i2,d,d1,p):
        h1 = init2(25)
        d2 = d[0]
        d3 = d[1]
        for i3 in range(c1,c2+1):
            t = abs(i3)
            g1 = exp1(t,g,p)
            g2 = exp1(t,g1,p)
            g1 = exp1(d1,g2,p)

            t = i3-c1
            a3 = exp2a(t,a2,p)
            a4 = exp2a(d2,a3,p)
            a5 = exp2a(d3,a3,p)       

            for i in range(5):
                for j in range(5):
                    if i==0:
                        t1 = a4[0]**4%p
                    if i==1:
                        t1 = (a4[0]**3)*a4[1]%p
                    if i==2:
                        t1 = (a4[0]*a4[1])**2%p
                    if i==3:
                        t1 = a4[0]*(a4[1]**3)%p
                    if i==4:
                        t1 = a4[1]**4%p

                    if j==0:
                        t2 = a5[0]**4%p
                    if j==1:
                        t2 = (a5[0]**3)*a5[1]%p
                    if j==2:
                        t2 = (a5[0]*a5[1])**2%p
                    if j==3:
                        t2 = a5[0]*(a5[1]**3)%p
                    if j==4:
                        t2 = a5[1]**4%p

                    t4 = g1*t1%p
                    t4 = t2*t4%p
                    t = 5*i+j
                    h1[t] = (h1[t]+t4)%p

        return(h1)

    def series22(self,c1,c2,d,d1):
        t = self.series_d22(c1,c2,self.g,self.a2,d,d1,self.p)
        return(t)
            
    def series23(self,c1,c2,s,d,d1):
        t = self.series_d23(c1,c2,s,self.g,self.a2,d,d1,self.p)
        return(t)
        
    def series24(self,c1,c2,d,d1):
        t = self.series_d24(c1,c2,self.g,self.a2,self.i2,d,d1,self.p)
        return(t)

    def series25(self,c1,c2,d,d1):
        t = self.series_d25(c1,c2,self.g,self.a2,self.i2,d,d1,self.p)
        return(t)

    def equation32(self,l2,d,d1,k25):
        k = self
        g = k.g
        a2 = k.a2
        i2 = k.i2
        p = k.p

        m = init1(20,25)
        b1 = init2(5)

        # 1
        t1 = [1 , 2*i2%p , 0 , 2*i2%p , p-1]
        t2 = [1,0,2,0,1]

        t = 0
        mult2(m,t+0,t1,t2,p)
        mult2(m,t+1,t2,t2,p)

        l3 = l2*d1
        g1 = exp1(l3*l3,g,p)
        l4 = abs(l3-(d1//2))
        g2 = exp1(l4*l4,g,p)   
        t1 = inverse(g1,p)*g2%p
        mult25(m,t1,0,t+0,t+0,2,p)
        mult25(m,1,1,1,2,3,p)

        t1 = multcnvl2(k25,m[2],p)
        l4 = l3-(d1//2)
        l5 = l3+(d1//2)
        t3 = multcnvl2(k25,m[3],p)
        g3 = exp1(l5*l5,g,p)
        t4 = (t3+(p-1)*g3)%p
        b1[0] = t4    

        # 2
        t1 = [1 , 2*i2%p , 0 , 2*i2%p , p-1]
        t2 = [1,0,2,0,1]
    
        c1 = [1,0,0,0,p-1]
        s1 = [0,2,0,2,0]

        t = 0
        mult2(m,t+0,t1,c1,p)
        mult2(m,t+1,t1,s1,p)    
        mult2(m,t+2,t2,c1,p)
        mult2(m,t+3,t2,s1,p)

        l3 = l2*d1
        g1 = exp1(l3*l3,g,p)
        l4 = abs(l3-(d1//2))
        g2 = exp1(l4*l4,g,p)   
        t1 = inverse(g1,p)*g2%p
        mult25(m,t1,0,t+0,t+0,4,p)
        mult25(m,t1,0,t+1,t+1,5,p)

        t1 = d[1]
        a3 = exp2a(t1,a2,p)
        c = a3[0]
        s = (p-a3[1])%p
        mult25(m,c,s,4,5,6,p)
        c = a3[0]
        s = a3[1]
        mult25(m,s,c,4,5,7,p)
    
        mult25(m,1,1,2,6,0,p)
        mult25(m,1,1,3,7,1,p)
        t6 = multcnvl2(k25,m[0],p)
        t7 = multcnvl2(k25,m[1],p)

        g3 = exp1(l5*l5,g,p)
        t1 = (4*l2+1)*d[1]
        a3 = exp2a(t1,a2,p)
        a3[0] = g3*a3[0]%p
        a3[1] = g3*a3[1]%p
        t9 = (t6+(p-1)*a3[0])%p
        t10 = (t7+(p-1)*a3[1])%p
        b1[1] = t9
        b1[2] = t10

        # 3
        t1 = [1 , 2*i2%p , 0 , 2*i2%p , p-1]
        t2 = [1,0,2,0,1]

        c1 = [1,0,p-6,0,1]
        s1 = [0,4,0,p-4,0]

        t = 0
        mult2(m,t+0,t1,c1,p)
        mult2(m,t+1,t1,s1,p)    
        mult2(m,t+2,t2,c1,p)
        mult2(m,t+3,t2,s1,p)

        l3 = l2*d1
        g1 = exp1(l3*l3,g,p)
        l4 = abs(l3-(d1//2))
        g2 = exp1(l4*l4,g,p)   
        t1 = inverse(g1,p)*g2%p
        mult25(m,t1,0,t+0,t+0,4,p)
        mult25(m,t1,0,t+1,t+1,5,p)

        t1 = 2*d[1]
        a3 = exp2a(t1,a2,p)
        c = a3[0]
        s = (p-a3[1])%p
        mult25(m,c,s,4,5,6,p)
        c = a3[0]
        s = a3[1]
        mult25(m,s,c,4,5,7,p)
    
        mult25(m,1,1,2,6,0,p)
        mult25(m,1,1,3,7,1,p)
        t6 = multcnvl2(k25,m[0],p)
        t7 = multcnvl2(k25,m[1],p)

        g3 = exp1(l5*l5,g,p)
        t1 = (4*l2+1)*(2*d[1])
        a3 = exp2a(t1,a2,p)
        a3[0] = g3*a3[0]%p
        a3[1] = g3*a3[1]%p
        t9 = (t6+(p-1)*a3[0])%p
        t10 = (t7+(p-1)*a3[1])%p
        b1[3] = t9
        b1[4] = t10

        m1 = init1(5,5)
        m1[0] = [1,0,2,0,1]    
        m1[1] = [1,0,0,0,p-1]
        m1[2] = [0,2,0,2,0]
        m1[3] = [1,0,p-6,0,1]
        m1[4] = [0,4,0,p-4,0]

        v1 = init2(5)
        v1[:] = b1
        solve2(5,m1,v1,p)
        # t1 = det(5,m1)
        # print("\n \n in equation31 det = ",t1)
        # display(0,4,0,4,m1,v1)
        h1 = init2(5)
        l2solve(5,h1,v1,m1,p)
        # print("\n \n after solve2 = ",h1)
        # l3 = 2*l2
        # h2 = k.series24(-l3,l3,[d[1]//2],(d1*d1)//4)
        # print("\n \n in equation32 h2 = ",h2)

        return(h1)    

    def equation35(self,l2,d,d1,s,k5):
        k = self
        g = k.g
        a2 = k.a2
        i2 = k.i2
        p = k.p

        m1 = init1(5,5)
        b1 = init2(5)

        if s==1:
            # 1
            t1 = [1,0,2,0,1]

            t2 = multcnvl2(k5,t1,p)
            l3 = l2*d1+d1
            g1 = exp1(l3*l3,g,p)
            b1[0] = (t2+2*g1)%p     
            l3 = l2+1

            # 2
            c1 = [1,0,0,0,p-1]
            s1 = [0,2,0,2,0]

            t1 = multcnvl2(k5,c1,p)
            t2 = multcnvl2(k5,s1,p)
            a3 = exp2a(d[0],a2,p)
            a4 = exp2a(2,a3,p)
            a3 = cmult(a4,[t1,t2],p)
            a5 = exp2a(2*l3,a4,p)
            t3 = (a5[0]+1)*g1%p
            t4 = a5[1]*g1%p
            t3 = (t3+a3[0])%p
            t4 = (t4+a3[1])%p
            b1[1] = t3
            b1[2] = t4        

            # 3
            c1 = [1,0,p-6,0,1]
            s1 = [0,4,0,p-4,0]

            t1 = multcnvl2(k5,c1,p)
            t2 = multcnvl2(k5,s1,p)
            a3 = exp2a(d[0],a2,p)
            a4 = exp2a(4,a3,p)
            a3 = cmult(a4,[t1,t2],p)
            a5 = exp2a(2*l3,a4,p)
            t3 = (a5[0]+1)*g1%p
            t4 = a5[1]*g1%p
            t3 = (t3+a3[0])%p
            t4 = (t4+a3[1])%p
            b1[3] = t3
            b1[4] = t4

            m1 = init1(5,5)
            m1[0] = [1,0,2,0,1]    
            m1[1] = [1,0,0,0,p-1]
            m1[2] = [0,2,0,2,0]
            m1[3] = [1,0,p-6,0,1]
            m1[4] = [0,4,0,p-4,0]

            v1 = init2(5)
            v1[:] = b1
            solve2(5,m1,v1,p)
            # t1 = det(5,m1)
            # print("\n \n in equation31 det = ",t1)
            # display(0,4,0,4,m1,v1)
            h1 = init2(5)
            l2solve(5,h1,v1,m1,p)
            # print("\n \n after solve2 h1 = ",h1)
            l3 = l2+1
            # h2 = k.series24(-l3,l3,[d[0]],d1*d1)
            # print("\n \n in equation35 h2 = ",h2)   

        if s==-1:
            # 1
            t1 = [1,0,2,0,1]

            t2 = multcnvl2(k5,t1,p)
            l3 = l2*d1
            g1 = exp1(l3*l3,g,p)
            b1[0] = (t2+(p-2)*g1)%p       
            l3 = l2-1
        
            # 2
            c1 = [1,0,0,0,p-1]
            s1 = [0,2,0,2,0]

            t1 = multcnvl2(k5,c1,p)
            t2 = multcnvl2(k5,s1,p)
            a3 = exp2a(d[0],a2,p)
            a4 = exp2a(2,a3,p)
            a5 = exp2a(2*l2,a4,p)
            t3 = (a5[0]+1)*g1%p
            t4 = a5[1]*g1%p
            t3 = p-t3
            t4 = p-t4
            t1 = (t1+t3)%p
            t2 = (t2+t4)%p
            a4[1] = (p-a4[1])%p
            a3 = cmult(a4,[t1,t2],p)    
            b1[1] = a3[0]
            b1[2] = a3[1]
            l3 = l2-1

            # 3
            c1 = [1,0,p-6,0,1]
            s1 = [0,4,0,p-4,0]

            t1 = multcnvl2(k5,c1,p)
            t2 = multcnvl2(k5,s1,p)                       
            a3 = exp2a(d[0],a2,p)
            a4 = exp2a(4,a3,p)
            a5 = exp2a(2*l2,a4,p)
            t3 = (a5[0]+1)*g1%p
            t4 = a5[1]*g1%p
            t3 = p-t3
            t4 = p-t4
            t1 = (t1+t3)%p
            t2 = (t2+t4)%p
            a4[1] = (p-a4[1])%p
            a3 = cmult(a4,[t1,t2],p)    
            b1[3] = a3[0]
            b1[4] = a3[1]
            l3 = l2-1    

            m1 = init1(5,5)
            m1[0] = [1,0,2,0,1]    
            m1[1] = [1,0,0,0,p-1]
            m1[2] = [0,2,0,2,0]
            m1[3] = [1,0,p-6,0,1]
            m1[4] = [0,4,0,p-4,0]

            v1 = init2(5)
            v1[:] = b1
            solve2(5,m1,v1,p)
            # t1 = det(5,m1)
            # print("\n \n in equation31 det = ",t1)
            # display(0,4,0,4,m1,v1)
            h1 = init2(5)
            l2solve(5,h1,v1,m1,p)
            # print("\n \n after solve2 h1 = ",h1)
            l3 = l2-1
            # h2 = k.series24(-l3,l3,[d[0]],d1*d1)
            # print("\n \n in equation35 h2 = ",h2)

        return(h1)

    def equation40v2(self,l2,d,d7,d1,k5):
        k = self
        g = k.g
        a2 = k.a2
        i2 = k.i2
        p = k.p

        m = init1(5,5)
        i3 = p-i2
        m[0] = [1,0,2,0,1]
        m[1] = [1,    2*i2%p,    0,    2*i2%p,    p-1]
        m[2] = [1,    2*i3%p,    0,    2*i3%p,    p-1]
        m[3] = [1,    4*i2%p,  p-6,    4*i3%p,      1]
        m[4] = [1,    4*i3%p,  p-6,    4*i2%p,      1]

        s = init2(5)
        for i in range(5):
            s[i] = multcnvl2(m[i],k5,p)

        # 1
        l3 = l2*d1
        # h1 = k.series23(-l3,l3,d1,0,1)
        # print("\n \n h1 = ",h1,"  s[0] = ",s[0])

        # 2
        g1 = exp1(l3*l3,g,p)
        d2 = d1*d1//2
        d3 = d1//4
        l4 = -l3+2*d3*d[1]//d2
        g2 = exp1(l4*l4,g,p)
        l5 = l3+2*d3*d[1]//d2
        t1 = inverse(g1,p)*g2%p
        s[1] = s[1]*t1%p
        # h2 = k.series23(l4,l5,d1,0,1)
        # print("\n \n h2 = ",h2,"  s[1] = ",s[1])

        # 3
        g1 = exp1(l3*l3,g,p)
        d2 = d1*d1//2
        d3 = d1//4
        l6 = -l3-2*d3*d[1]//d2
        g2 = exp1(l6*l6,g,p)
        l7 = l3-2*d[1]//d2
        t1 = inverse(g1,p)*g2%p
        s[2] = s[2]*t1%p
        # h3 = k.series23(l6,l7,d1,0,1)
        # print("\n \n h3 = ",h3,"  s[2] = ",s[2])

        # 4
        g1 = exp1(l3*l3,g,p)
        d2 = d1*d1//2
        d3 = d1//4
        l8 = -l3+4*d3*d[1]//d2
        g2 = exp1(l8*l8,g,p)
        l9 = l3+4*d[1]//d2
        t1 = inverse(g1,p)*g2%p
        s[3] = s[3]*t1%p
        # h4 = k.series23(l8,l9,d1,0,1)
        # print("\n \n h4 = ",h4,"  s[3] = ",s[3])

        # 5
        g1 = exp1(l3*l3,g,p)
        d2 = d1*d1//2
        d3 = d1//4
        l10 = -l3-4*d3*d[1]//d2
        g2 = exp1(l10*l10,g,p)
        l11 = l3-4*d[1]//d2
        t1 = inverse(g1,p)*g2%p
        s[4] = s[4]*t1%p
        # h5 = k.series23(l10,l11,d1,0,1)
        # print("\n \n h5 = ",h5,"  s[4] = ",s[4])

        # k6 = k.series24(-l2,l2,[d7[1]],d1*d1)
        # s1 = init2(5)
        # for i in range(5):
            # s1[i] = multcnvl2(m[i],k6,p)      
 
        if d[1]>d7[1]:
            l3 = l2*d1
            d2 = d1*d1//2
            d3 = d1//4
        
            y1 = l3+2*d3*d7[1]//d2
            y2 = l3+2*d3*d[1]//d2
            h6 = k.series23(y1+d1,y2,d1,0,1)
            y3 = l3-2*d3*d[1]//d2
            y4 = l3-2*d3*d7[1]//d2
            h7 = k.series23(y3+d1,y4,d1,0,1)
            t1 = ((p-1)*h6[0]+h7[0])%p
            # print("\n \n in equation40 t1 = ",t1)

            y1 = l3+4*d3*d7[1]//d2
            y2 = l3+4*d3*d[1]//d2
            h6 = k.series23(y1+d1,y2,d1,0,1)
            y3 = l3-4*d3*d[1]//d2
            y4 = l3-4*d3*d7[1]//d2
            h7 = k.series23(y3+d1,y4,d1,0,1)
            t2 = ((p-1)*h6[0]+h7[0])%p
            # print("\n \n in equation40 t2 = ",t2)

        if d[1]<d7[1]:
            l3 = l2*d1
            d2 = d1*d1//2
            d3 = d1//4
        
            y1 = l3+2*d3*d[1]//d2
            y2 = l3+2*d3*d7[1]//d2
            h6 = k.series23(y1+d1,y2,d1,0,1)
            y3 = l3-2*d3*d7[1]//d2
            y4 = l3-2*d3*d[1]//d2
            h7 = k.series23(y3+d1,y4,d1,0,1)
            t1 = (h6[0]+(p-1)*h7[0])%p
            # print("\n \n in equation40 t1 = ",t1)

            y1 = l3+4*d3*d[1]//d2
            y2 = l3+4*d3*d7[1]//d2
            h6 = k.series23(y1+d1,y2,d1,0,1)
            y3 = l3-4*d3*d7[1]//d2
            y4 = l3-4*d3*d[1]//d2
            h7 = k.series23(y3+d1,y4,d1,0,1)
            t2 = (h6[0]+(p-1)*h7[0])%p
            # print("\n \n in equation40 t2 = ",t2)

        l3 = l2*d1
        g1 = exp1(l3*l3,g,p)
        d2 = d1*d1//2
        d3 = d1//4
        s2 = init2(5)
    
        # 1
        s2[0] = 1

        # 2
        l4 = -l3+2*d3*d7[1]//d2
        g2 = exp1(l4*l4,g,p)
        s2[1] = inverse(g1,p)*g2%p

        # 3
        l4 = -l3-2*d3*d7[1]//d2
        g2 = exp1(l4*l4,g,p)
        s2[2] = inverse(g1,p)*g2%p

        # 4
        l4 = -l3+4*d3*d7[1]//d2
        g2 = exp1(l4*l4,g,p)
        s2[3] = inverse(g1,p)*g2%p

        # 5
        l4 = -l3-4*d3*d7[1]//d2
        g2 = exp1(l4*l4,g,p)
        s2[4] = inverse(g1,p)*g2%p

        for i in range(5):
            for j in range(5):
                m[i][j] = m[i][j]*s2[i]%p            

        v1 = init2(5)
        v1[0] = s[0]
        v1[1] = (s[1]+t1)%p
        v1[2] = v1[1]
        v1[3] = (s[3]+t2)%p
        v1[4] = v1[3]
    
        # print("\n \n in equation40 v1 = ",v1)
        solve2(5,m,v1,p)
        t1 = det(5,m)
        # print("\n \n in equation40 det = ",t1)
        # display(0,4,0,4,m,v1)
        h1 = init2(5)
        l2solve(5,h1,v1,m,p)

        return(h1)
          
    def add(self,s):        
        if s==0:
            pass
        if s==1 or s==-1:
            k = self
            h1 = k.equation35(k.l2,k.d,k.d1,s,k.series)
            k.l2 = k.l2+s
            k.series = h1

    def double(self,k25):
        k = self
        d = [(k.d1*k.d1)//2 , k.d[0]]
        h1 = k.equation32(k.l2,d,k.d1,k25)
        k.l2 = 2*k.l2
        t = k.d[0]
        if t%2==1:
            print("\n \n error in double function d mod 2 should equal 0")
        k.d = [t//2]
        k.d1 = k.d1//2
        k.series = h1

    def adjust(self,n):
        k = self
        d2 = k.d1*k.d1
        if n%d2!=0:
            print("\n \n error in adjust function n mod d2 should equal 0")
            print("\n \n in this case n =",n," and d2 =",d2)

        if n%d2==0:
            l2 = k.l2
            d1 = k.d1
            d = [d2//2 , k.d[0]]
            c = k.d[0]+n
            if c<0:
                print("\n \n error in adjust function c<0")
            if (c==0) or (c>0):
                d7 = [d2//2 , c]
                k5 = k.series
                h1 = k.equation40v2(l2,d,d7,d1,k5)
                k.series = h1
                k.d = [c]

   
""" This prints the complex nth roots of unity in GF(p) for p = 1 (mod 4)
k is defined as k = group(g,p) for some modulus p where p = 1 (mod 4) and
where p = 1 (mod n) and where g generates a subgroup whose order is
divisible by n assuming that g mod p does not equal 0,1 or -1 mod p.
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

""" Add two vectors a and b together mod n"""
def add(a,b,n):
    t1 = len(a)
    t2 = len(b)
    t = min(t1,t2)
    s = init2(t)
    for i in range(t):
        s[i] = (a[i]+b[i])%n
    return(s)







