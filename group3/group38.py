from math104 import *
from modsqrt2 import sqrt1 

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

        self.c80 = ((1,4,6,4,1),
                    (1,2,0,-2,-1),
                    (1,-4,-10,-4,1),
                    (1,-14,0,14,-1),
                    (1,-28,70,-28,1))

        self.s80 = ((0,0,0,0),
                    (2,6,6,2),
                    (4,4,-4,-4),
                    (6,-14,-14,6),
                    (8,-56,56,-8))

        self.functionlist = ("functions","variables","find2","find3",
        "find4","calc2","printlist","printlist2","printlist3","calc20",
        "calc21","calc22","calc23","calc24","calc25","calc26","calc27",
        "calc28","calc29","list1","list2","series_d","series_d1","series_d3",
        "series_d20","hs20","hs21","hs","ws","f1","f20","f21","k32","calc32",
        "f32","calc64","f81","f81d","f27","f9","k60","k61","calc6",
        "exp4b2","exp","h20","series","series1","series3","series20",
        "display","display2","display4")
                
                        
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
        print("p =",k.p,"   g =",k.g,"   i2 =",k.i2,end="")
        print("   a2 =",k.a2,"   qnr =",k.qnr)
    
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

    def printlist(self,a,k2,d1):
        t = len(k2)//2
        for i in range(t):
            t1 = k2[2*i]
            t2 = k2[2*i+1]
            h14 = self.series(t1,t2,0,d1)
            c1 = str(t1).rjust(a)        
            c2 = str(t2).rjust(a)
            c3 = str(h14[0]).rjust(a)
            c4 = str(h14[1]).rjust(a)
            print(i,"  ({0} , {1})".format(c1,c2),end="")
            print("    [{0} , {1}]".format(c3,c4))

    def printlist2(self,a,k2,d1):
        t = len(k2)//2
        for i in range(t):
            t1 = k2[2*i]
            t2 = k2[2*i+1]
            h14 = self.series(t1,t2,0,d1)
            c1 = str(t1).rjust(a)        
            c2 = str(t2).rjust(a)
            c3 = str(h14[0]).rjust(a)
            c4 = str(h14[1]).rjust(a)
            h1 = self.series1(t1+(t1%2),t2,2,0,d1)
            h2 = self.series1(t1+1-(t1%2),t2,2,0,d1)
            c5 = str(h1[0]).rjust(a)
            c6 = str(h1[1]).rjust(a)
            c7 = str(h2[0]).rjust(a)
            c8 = str(h2[1]).rjust(a)
            s = str(i).rjust(2)
            print(s,"  ({0} , {1})".format(c1,c2),end="")
            print("    [{0} , {1}]".format(c3,c4),end="")            
            print("   e = [{0} , {1}]".format(c5,c6),end="")
            print("   o = [{0} , {1}]".format(c7,c8))

    def printlist3(self,a,k2,q,d1):
        t = len(k2)//2
        for i in range(t):
            t1 = k2[2*i]
            t2 = k2[2*i+1]
            h14 = self.series(t1,t2,0,d1)
            c1 = str(t1).rjust(a)        
            c2 = str(t2).rjust(a)
            c3 = str(h14[0]).rjust(a)
            c4 = str(h14[1]).rjust(a)
            h15 = init2(4)
            if ((q%3)==0):
                h15 = self.series(t1,t2,2*q//3,d1)
            c5 = str(h15[0]).rjust(a)
            c6 = str(h15[1]).rjust(a)
            c7 = str(h15[2]).rjust(a)
            c8 = str(h15[3]).rjust(a)            
            print(i,"  ({0} , {1})".format(c1,c2),end="")
            print("    [{0} , {1}]".format(c3,c4),end="")
            print("    [{0} , {1} , {2} , {3}]".format(c5,c6,c7,c8))

    def calc20(self,flag4,d1,q,p):
        k2 = init2(12)
        if (q%2==0):
            t1 = q%6
            t2 = (q-1)//6
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+1
            k2[3] = (q//2)-(t2+1)
            k2[4] = k2[3]+1
            k2[5] = (q//2)-1
            for i in range(6):
                k2[i+6] = k2[i]+(q//2)

        if (q%2==1):
            t1 = q%6
            t2 = (q-1)//6
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+1
            k2[3] = 2*t2
            k2[4] = 2*t2+1
            k2[5] = (q-1)//2

            k2[6] = k2[5]+1
            k2[7] = q-(2*t2+1)
            k2[8] = k2[7]+1
            k2[9] = q-(t2+1)
            k2[10] = k2[9]+1
            k2[11] = q-1

        if (flag4==1):
            print("\n \n     p =",p,"  q =",q)
            a = len(str(p))
            # self.printlist(a,k2,d1)
            self.printlist3(a,k2,q,d1)        
        return(k2)

    def calc21(self,flag4,d1,q,p):
        k2 = init2(24)
        if ((q%4)==0):
            t1 = q%12
            t2 = (q-t1)//12
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+1
            k2[3] = (q//4)-(t2+1)
            k2[4] = k2[3]+1
            k2[5] = (q//4)-1
            for i in range(6):
                k2[i+6] = k2[i]+q//4
            for i in range(12):
                k2[i+12] = k2[i]+q//2
                
        if ((flag4==1) and (q%4==0)):
            print("\n \n      p =",p,"  q =",q)
            a = len(str(p))
            self.printlist2(a,k2,d1) 
        return(k2)


    def calc22(self,flag4,d1,q,p):
        k2 = init2(30)
        t1 = q%15
        t2 = (q-t1)//15
        k2[0] = 1
        k2[1] = t2
        k2[2] = k2[1]+1
        k2[3] = 2*t2
        k2[4] = k2[3]+1
        k2[5] = 3*t2
        k2[6] = k2[5]+1
        k2[7] = 4*t2
        k2[8] = k2[7]+1
        k2[9] = 5*t2
        k2[10] = k2[9]+1
        k2[11] = 6*t2
        k2[12]=  k2[11]+1
        k2[13] = 7*t2
        k2[14] = k2[13]+1
        k2[15] = q-7*t2-1
        k2[16] = q-7*t2
        k2[17] = q-6*t2-1
        k2[18] = q-6*t2
        k2[19] = q-5*t2-1
        k2[20] = q-5*t2
        k2[21] = q-4*t2-1
        k2[22] = q-4*t2
        k2[23] = q-3*t2-1
        k2[24] = q-3*t2
        k2[25] = q-2*t2-1
        k2[26] = q-2*t2
        k2[27] = q-t2-1
        k2[28] = q-t2
        k2[29] = q-1

        if (flag4==1):
            print("\n \n     p =",p,"   q =",q)
            a = len(str(p))
            self.printlist(a,k2,d1)
        return(k2)

    def calc23(self,flag4,d1,q,p):
        k2 = init2(6)
        t1 = q%3
        t2 = (q-t1)//3
        k2[0] = 1
        k2[1] = t2
        k2[2] = t2+1
        k2[3] = q-t2-1
        k2[4] = q-t2
        k2[5] = q-1

        if (flag4==1):
            print("\n \n     p =",p,"   q =",q)
            a = len(str(p))
            self.printlist(a,k2,d1)
        return(k2)
        
    def calc24(self,flag4,d1,q,p):
        k2 = init2(8)
        if ((q%4)==0):
            k2[0] = 1
            k2[1] = q//4-1
            k2[2] = k2[1]+2
            k2[3] = 2*(k2[1]+1)-1
            k2[4] = k2[3]+2
            k2[5] = 3*(k2[1]+1)-1
            k2[6] = k2[5]+2
            k2[7] = q-1

        if ((q%4)==2):
            t1 = q//2
            t2 = (t1-1)//2
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+1
            k2[3] = t1-1
            k2[4] = t1+1
            k2[5] = q-(t2+1)
            k2[6] = k2[5]+1
            k2[7] = q-1

        if ((q%2)==1):
            t3 = 0
            t1 = q%4
            t2 = (q-t1)//4
            if (t1==3):
                t2 = t2+1
                t3 = 1
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+1
            k2[3] = 2*t2-t3
            k2[4] = k2[3]+1
            k2[5] = q-(t2+1)
            k2[6] = k2[5]+1
            k2[7] = q-1

        if (flag4==1):
            print("\n \n     p =",p,"   q =",q)
            a = len(str(p))
            self.printlist(a,k2,d1)
        return(k2)

    def calc25(self,flag4,d1,q,p):
        k2 = init2(10)
        t1 = q%5
        t2 = (q-t1)//5
        k2[0] = 1
        k2[1] = t2
        k2[2] = t2+1
        k2[3] = 2*t2
        k2[4] = k2[3]+1
        k2[5] = q-2*t2-1
        k2[6] = q-2*t2
        k2[7] = q-t2-1
        k2[8] = q-t2
        k2[9] = q-1

        if (flag4==1):
            print("\n \n     p =",p,"   q =",q)
            a = len(str(p))
            self.printlist(a,k2,d1)
        return(k2)

    def calc26(self,flag4,d1,q,p):
        k2 = init2(40)
        if ((q%4)==0):
            t1 = q%20
            t2 = (q-t1)//20
            t3 = q//4
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+1
            k2[3] = 2*t2
            k2[4] = k2[3]+1
            k2[5] = t3-2*t2-1
            k2[6] = t3-2*t2
            k2[7] = t3-t2-1
            k2[8] = t3-t2
            k2[9] = t3-1           
            for i in range(10):
                k2[i+10] = k2[i]+q//4
            for i in range(20):
                k2[i+20] = k2[i]+q//2
                
        if ((flag4==1) and (q%4==0)):
            print("\n \n      p =",p,"  q =",q)
            a = len(str(p))
            self.printlist2(a,k2,d1) 
        return(k2)

    def calc27(self,flag4,d1,q,p):
        k2 = init2(14)
        t1 = q%7
        t2 = (q-t1)//7
        k2[0] = 1
        k2[1] = t2
        k2[2] = t2+1
        k2[3] = 2*t2
        k2[4] = k2[3]+1
        k2[5] = 3*t2
        k2[6] = k2[5]+1
        k2[7] = q-(3*t2)-1
        k2[8] = q-(3*t2)
        k2[9] = q-(2*t2)-1
        k2[10] = q-(2*t2)
        k2[11] = q-(t2+1)
        k2[12] = q-t2
        k2[13] = q-1           

        if (flag4==1):
            print("\n \n     p =",p,"   q =",q)
            a = len(str(p))
            self.printlist(a,k2,d1)
        return(k2)         

    def calc28(self,flag4,d1,q,p):
        k2 = init2(16)
        if (q%8==4):
            t1 = q//4
            t2 = (t1-1)//2
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+1
            k2[3] = t1-1
            k2[4] = k2[0]+t1
            k2[5] = k2[1]+t1
            k2[6] = k2[2]+t1
            k2[7] = k2[3]+t1

        if (q%8==0):
            t1 = q//4
            t2 = (q//8)-1
            k2[0] = 1
            k2[1] = t2
            k2[2] = t2+2
            k2[3] = t1-1
            k2[4] = k2[0]+t1
            k2[5] = k2[1]+t1
            k2[6] = k2[2]+t1
            k2[7] = k2[3]+t1

        for i in range(8):
            k2[i+8] = k2[i]+(q//2)

        if ((flag4==1) and (q%4==0)):
            print("\n \n     p =",p,"   q =",q)
            a = len(str(p))
            self.printlist2(a,k2,d1)            
        return(k2)

    def calc29(self,flag4,d1,q,p):
        k2 = init2(18)
        t1 = q%9
        t2 = (q-t1)//9
        k2[0] = 1
        k2[1] = t2
        k2[2] = t2+1
        k2[3] = 2*t2
        k2[4] = k2[3]+1
        k2[5] = 3*t2
        k2[6] = k2[5]+1
        k2[7] = 4*t2
        k2[8] = k2[7]+1
        k2[9] = q-(4*t2)-1
        k2[10] = q-(4*t2)
        k2[11] = q-(3*t2)-1
        k2[12] = q-(3*t2)
        k2[13] = q-(2*t2)-1
        k2[14] = q-(2*t2)
        k2[15] = q-(t2+1)
        k2[16] = q-t2
        k2[17] = q-1           

        if (flag4==1):
            print("\n \n     p =",p,"   q =",q)
            a = len(str(p))
            self.printlist(a,k2,d1)
        return(k2)         
                       
    def list1(self,n,d1,q):
        d1 = abs(d1)
        if (d1==0):
            d1 = 1
        a = [3,4,5,6,7,8,9,12,15,20]
        k = self
        if n in a:
            if (n==3):
                k2 = k.calc23(1,d1,q,k.p)
            if (n==4):
                k2 = k.calc24(1,d1,q,k.p)
            if (n==5):
                k2 = k.calc25(1,d1,q,k.p)
            if (n==6):
                k2 = k.calc20(1,d1,q,k.p)
            if (n==7):
                k2 = k.calc27(1,d1,q,k.p)
            if (n==8):
                k2 = k.calc28(1,d1,q,k.p)
            if (n==9):
                k2 = k.calc29(1,d1,q,k.p)                
            if (n==12):
                k2 = k.calc21(1,d1,q,k.p)
            if (n==15):
                k2 = k.calc22(1,d1,q,k.p)
            if (n==20):
                k2 = k.calc26(1,d1,q,k.p)

    def list2(self,n,d1):
        d1 = abs(d1)
        if (d1==0):
            d1 = 1
        q = self.p-1
        if (q%d1==0):
            q = q//d1
            self.list1(n,d1,q)               

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
        c80 = self.c80
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
        s80 = self.s80
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

    def k32(self,q,d1):
        k = self
        p = k.p
        q = abs(q)
        d1 = abs(d1)
        if (d1==0):
            d1 = 1
        if (q==0):
            q = (p-1)//d1

        if ((q%16)!=0):
             print("error in calc32 q mod 16 should equal 0")
             
        q1 = q//16        
        a = [1,3,5,7,2,6,4,8]
        t = init2(16)
        for j in range(8):
            t1 = a[j]%8
            h1 = k.series1(t1,q1,8,0,d1)
            t[2*j] = h1[0]
            t[2*j+1] = h1[1]
        return(t)
             
    def calc32(self,e1,e2,q,d1):
        """ p = 32q + 1 """
        k = self
        g = k.g
        p = k.p
        e = q//16
        s = init2(2)
        d1 = abs(d1)
        if (d1==0):
            d1 = 1

        if ((q%16)!=0):
            print("error in calc32 q mod 16 should equal 0")

        e1 = abs(e1)
        e2 = abs(e2)
        if (e2<e1):
            e2 = e1

        if (e2>50):
            print("error in calc32 value of e2 is too large")
            print("e1 being set to 0 and e2 to 3")
            e1 = 0
            e2 = 3

        a = [1,3,5,7,2,6,4,8]      
        c = (e2+1)-e1
        t = init2(16*c)
        for i in range(e1,e2+1):        
            for j in range(8):
                t1 = (i*e)%8
                t1 = (8-t1)%8
                t1 = (t1+a[j])%8
                c1 = i-e1
                t[16*c1+2*j] = i*e+t1
                t[16*c1+2*j+1] = (i+1)*e

        t2 = init2(16)
        a3 = init2(2)
        for i in range(c):
            c1 = (e1+i)*e
            c2 = c1+e
            h1 = k.series(c1,c2,0,2)
            s[0] = h1[0]
            s[1] = h1[1]
            print(" (",i+e1,")","   s(",c1," , ",c2,") = ",s,sep="")
            s = [0,0]
            for j in range(8):
                c1 = t[16*i+2*j]
                c2 = t[16*i+2*j+1]
                h1 = k.series1(c1,c2,8,0,d1)
                a3[0] = h1[0]
                a3[1] = h1[1]
                print(" ",a[j],"  (",c1," , ",c2,")  ",a3,sep="")
                s[0] = (s[0]+a3[0])%p
                s[1] = (s[1]+a3[1])%p
                if (i==e1):
                    t2[2*j] = h1[0]
                    t2[2*j+1] = h1[1]
            print(" s","  (",(e1+i)*e," , ",(e1+i+1)*e,")  ",s,sep="")
            print()
        return(t2)

    def f32(self,e1,e2,d1):
        d1 = abs(d1)
        if (d1==0):
            d1 = 1
        e1 = abs(e1)
        e2 = abs(e2)
        q = self.p-1
        if ((q%d1)==0):
            q = q//d1           
            t = self.calc32(e1,e2,q,d1)

    def calc64(self,e1,e2,q,d1):
        """ p = 64q + 1 """
        k = self
        g = k.g
        p = k.p
        e = q//32
        s = init2(2)
        d1 = abs(d1)
        if (d1==0):
            d1 = 1

        if ((q%32)!=0):
            print("error in calc64 q mod 32 should equal 0")

        e1 = abs(e1)
        e2 = abs(e2)
        if (e2<e1):
            e2 = e1

        if (e2>50):
            print("error in calc64 value of e2 is too large")
            print("e1 being set to 0 and e2 to 3")
            e1 = 0
            e2 = 3

        a = [1,3,5,7,9,11,13,15,2,6,10,14,4,8,12,16]      
        c = (e2+1)-e1
        t = init2(32*c)
        for i in range(e1,e2+1):        
            for j in range(16):
                t1 = (i*e)%16
                t1 = (16-t1)%16
                t1 = (t1+a[j])%16
                c1 = i-e1
                t[32*c1+2*j] = i*e+t1
                t[32*c1+2*j+1] = (i+1)*e

        t2 = init2(32)
        a3 = init2(2)
        for i in range(c):
            c1 = (e1+i)*e
            c2 = c1+e
            h1 = k.series(c1,c2,0,2)
            s[0] = h1[0]
            s[1] = h1[1]
            print(" (",i+e1,")","   s(",c1," , ",c2,") = ",s,sep="")
            s = [0,0]
            for j in range(16):
                c1 = t[32*i+2*j]
                c2 = t[32*i+2*j+1]
                h1 = k.series1(c1,c2,16,0,d1)
                a3[0] = h1[0]
                a3[1] = h1[1]
                print(" ",a[j],"  (",c1," , ",c2,")  ",a3,sep="")
                s[0] = (s[0]+a3[0])%p
                s[1] = (s[1]+a3[1])%p
                if (i==e1):
                    t2[2*j] = h1[0]
                    t2[2*j+1] = h1[1]
            print(" s","  (",(e1+i)*e," , ",(e1+i+1)*e,")  ",s,sep="")
            print()
        return(t2)

    def f81(self,flag4,q,d1):
        k = self
        q = abs(q)
        p = k.p
        s = init2(8)
        s1 = init2(10)
        if (q==0):
            q = (p-1)//d1
        if (q%27)!=0:
            print("\n \n error in f81 q mod 27 should equal 0")
        k2 = k.calc29(flag4,d1,q,p)
        if (flag4==1):
            print("\n k2 = ",k2)
        for i in range(5):
            h1 = k.series(k2[2*i],k2[2*i+1],0,2)
            s1[2*i] =  h1[0]
            s1[2*i+1] = h1[1]
        if (flag4==1):
            print("\n s1 = ",s1)
        t1 = (s1[0]+s1[4])%p
        s[0] = (s1[6]+t1)%p
        t1 = (s1[1]+s1[5])%p
        s[1] = (s1[7]+t1)%p
        t1 = (2*s1[2])%p
        s[2] = (t1+s1[8])%p
        t1 = (2*s1[3])%p
        s[3] = (t1+s1[9])%p        

        g1 = exp1(9,k.g,p)
        k1 = group(g1,p)
        k3 = k1.calc20(flag4,d1,q//9,p)
        if (flag4==1):
            print()
            k1.variables()   
            print("\n \n k3 = ",k3)
        t = 2*q//27
        h1 = k1.series(1,k3[1],t,2)
        if (flag4==1):
            print("\n h1( 1 ,",k3[1],") = ",h1,"   t = ",t)
        s[4] = h1[0]
        s[5] = h1[1]
        s[6] = h1[2]
        s[7] = h1[3]     
        return(s)        

    def f81d(self,flag4,q,d1):
        k = self
        q = abs(q)
        p = k.p
        s = init2(12)
        s1 = init2(10)
        if (q==0):
            q = (p-1)//d1
        if (q%27)!=0:
            print("\n \n error in f81 q mod 27 should equal 0")
        k2 = k.calc29(flag4,d1,q,p)
        if (flag4==1):
            print("\n k2 = ",k2)
        for i in range(5):
            h1 = k.series(k2[2*i],k2[2*i+1],0,2)
            s1[2*i] =  h1[0]
            s1[2*i+1] = h1[1]
        if (flag4==1):
            print("\n s1 = ",s1)
        t1 = (s1[0]+s1[4])%p
        s[0] = (s1[6]+t1)%p
        t1 = (s1[1]+s1[5])%p
        s[1] = (s1[7]+t1)%p
        t1 = (2*s1[2])%p
        s[2] = (t1+s1[8])%p
        t1 = (2*s1[3])%p
        s[3] = (t1+s1[9])%p       

        t = exp1(12*q//9,k.g,p)
        g1 = (k.g*t)%p
        if (flag4==1):
            print("\n \n t = ",t,"  g = ",k.g,"  g1 = ",g1,end="")
            t1 = exp1((p-1)//3,k.g,p)
            t2 = exp1((p-1)//3,g1,p)
            print("   ",t1,t2)
        k4 = group(g1,p)
        k2 = k4.calc29(flag4,d1,q,p)
        if (flag4==1):
            print("\n k2 = ",k2)
        for i in range(5):
            h1 = k4.series(k2[2*i],k2[2*i+1],0,2)
            s1[2*i] =  h1[0]
            s1[2*i+1] = h1[1]
        if (flag4==1):
            print("\n s1 = ",s1)
        t1 = (s1[0]+s1[4])%p
        s[4] = (s1[6]+t1)%p
        t1 = (s1[1]+s1[5])%p
        s[5] = (s1[7]+t1)%p
        t1 = (2*s1[2])%p
        s[6] = (t1+s1[8])%p
        t1 = (2*s1[3])%p
        s[7] = (t1+s1[9])%p

        t = exp1(6*q//9,k.g,p)
        g2 = (k.g*t)%p
        if (flag4==1):
            print("\n \n t = ",t,"  g = ",k.g,"  g1 = ",g1," g2 = ",g2,end="")
            t1 = exp1((p-1)//3,k.g,p)
            t2 = exp1((p-1)//3,g1,p)
            t3 = exp1((p-1)//3,g2,p)
            print("   ",t1,t2,t3)
        k4 = group(g2,p)
        k2 = k4.calc29(flag4,d1,q,p)      
       
        g1 = exp1(9,k.g,p)
        k1 = group(g1,p)
        k3 = k1.calc20(flag4,d1,q//9,p)
        if (flag4==1):
            print()
            k1.variables()   
            print("\n \n k3 = ",k3)
        t = 2*q//27
        h1 = k1.series(1,k3[1],t,2)
        if (flag4==1):
            print("\n h1( 1 ,",k3[1],") = ",h1,"   t = ",t)
        s[8] = h1[0]
        s[9] = h1[1]
        s[10] = h1[2]
        s[11] = h1[3]      
        return(s)

    def f27(self,flag4,q,d1):
        k = self
        q = abs(q)
        p = k.p
        s1 = init2(10)
        s2 = init2(10)
        s3 = init2(10)
        s4 = init2(4)
        b1 = k.calc29(flag4,d1,q,p)
        for i in range(5):
            h1 = k.series(b1[2*i],b1[2*i+1],0,d1)
            s1[2*i] = h1[0]
            s1[2*i+1] = h1[1]
        print("\n in f27 s1 = ",s1)
        
        t = exp1(12*q//9,k.g,p)
        g1 = (k.g*t)%p
        k1 = group(g1,p)
        for i in range(5):
            h1 = k1.series(b1[2*i],b1[2*i+1],0,d1)
            s2[2*i] = h1[0]
            s2[2*i+1] = h1[1]        
        print("\n in f27 s2 = ",s2)
        
        t = exp1(6*q//9,k.g,p)
        g2 = (k.g*t)%p
        k2 = group(g2,p)
        for i in range(5):
            h1 = k2.series(b1[2*i],b1[2*i+1],0,d1)
            s3[2*i] = h1[0]
            s3[2*i+1] = h1[1]        
        print("\n in f27 s3 = ",s3)

        g3 = exp1(9,k.g,p)
        k3 = group(g3,p)
        print("\n g =",k.g," g1 =",g1," g2 =",g2,"  g3 =",g3)
        b2 = k3.calc20(1,d1,q//9,p)
        print("\n in f27 b2 = ",b2)
        h1 = k3.series(b2[0],b2[3],0,d1)
        h2 = k3.series(b2[4],b2[5],0,d1)
        s4[0] = h1[0]
        s4[1] = h1[1]
        s4[2] = (2*h2[0])%p
        s4[3] = (2*h2[1])%p
        print("\n in f27 s4 = ",s4)

        return(s1,s2,s3,s4)

    def f9(self,flag4,q,d1):
        k = self
        q = abs(q)
        p = k.p
        s1 = init2(10)
        s2 = init2(10)
        b1 = k.calc29(flag4,d1,q,p)
        for i in range(5):
            h1 = k.series(b1[2*i],b1[2*i+1],0,d1)
            s1[2*i] = h1[0]
            s1[2*i+1] = h1[1]
        print("\n in f20 s1 = ",s1)     

        g1 = exp1(9,k.g,p)
        k1 = group(g1,p)
        print("\n \n g = ",k.g,"  g1 = ",g1)
        b2 = k1.calc20(1,d1,q//9,p)
        print("\n in f20 b2 = ",b2)        
      
        h1 = k1.series1(1,b2[3],3,0,d1)
        h2 = k1.series1(2,b2[3],3,0,d1)
        h3 = k1.series1(3,b2[3],3,0,d1)

        c1 = 0
        c2 = 0
        if (b2[4]%3)==2:
            c1 = 0
            c2 = 2
        if (b2[4]%3)==1:
            c1 = 1
            c2 = 0
        if (b2[4]%3)==0:
            c2 = 2
        h4 = k1.series1(b2[4]+c1,b2[7],3,0,d1)
        h5 = k1.series1(b2[4]+c2,b2[7],3,0,d1)

        s2[0] = h1[0]
        s2[1] = h1[1]
        s2[2] = h2[0]
        s2[3] = h2[1]
        s2[4] = h3[0]
        s2[5] = h3[1]
        s2[6] = h4[0]
        s2[7] = h4[1]
        s2[8] = h5[0]
        s2[9] = h5[1]
        print("\n in f20 s2 = ",s2)

        s = s1+s2
        return(s)

    def k60(self,flag4,q,d1):
        k = self
        p = k.p
        if (q%75!=0):
            print("\n \n error in k60 q mod 75 should equal 0")
        b = k.calc22(1,d1,q,p)
        a = [0,2,3,5,6]
        s = init2(8)
        for i in range(5):
            c = a[i]
            h1 = k.series(b[2*c],b[2*c+1],0,d1)
            s[0] = (s[0]+h1[0])%p
            s[1] = (s[1]+h1[1])%p
        h1 = k.series(b[2],b[3],0,d1)
        h2 = k.series(b[8],b[9],0,d1)
        h3 = k.series(b[14],b[15],0,d1)
        t1 = h1[0]
        t2 = h1[1]
        t3 = h2[0]
        t4 = h2[1]
        t5 = h3[0]
        t6 = h3[1]
        s[2] = (2*t1+2*t3+t5)%p
        s[3] = (2*t2+2*t4+t6)%p

        g1 = exp1(25,k.g,p)
        k1 = group(g1,p)
        k3 = k1.calc20(flag4,d1,q//25,p)
        if (flag4==1):
            print()
            k1.variables()   
            print("\n \n k3 = ",k3)
        t = 2*q//75
        h1 = k1.series(1,k3[1],t,2)
        if (flag4==1):
            print("\n h1( 1 ,",k3[1],") = ",h1,"   t = ",t)
        s[4] = h1[0]
        s[5] = h1[1]
        s[6] = h1[2]
        s[7] = h1[3]
        return(s)

    def k61(self,flag4,q,d1):
        k = self
        p = k.p
        if (q%15!=0):
            print("\n \n error in k61 q mod 15 should equal 0")
        b = k.calc22(1,d1,q,p)
        s1 = init2(16)
        for i in range(8):
            h1 = k.series(b[2*i],b[2*i+1],0,d1)
            s1[2*i]=  h1[0]
            s1[2*i+1] = h1[1]

        g1 = exp1(25,k.g,p)
        k1 = group(g1,p)
        k3 = k1.calc20(flag4,d1,q//5,p)
        if (flag4==1):
            print()
            k1.variables()   
            print("\n \n k3 = ",k3)
        t = 2*q//15
        h1 = k1.series(1,k3[1],t,2)
        if (flag4==1):
            print("\n h1( 1 ,",k3[1],") = ",h1,"   t = ",t)
        s2 = init2(4)
        s2[0] = h1[0]
        s2[1] = h1[1]
        s2[2] = h1[2]
        s2[3] = h1[3]
        s = s1+s2
        return(s)
         
    def calc6(self,c1,e1):
        c80 = self.c80
        s80 = self.s80
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
        print(" h2 = ",h2,"   h4 = ",h4)
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
            g1 = self.find3(p)
        if (t2==1):
            t1 = self.p-1
            while (t1%2==0):
                g1 = (g1*g1)%p
                t1 = t1//2
        self.g = g1
        # i2 = sqrt1(p-1,p)

        i2 = self.find4(self.g,p-1,p)
        self.i2 = i2
        
        t = exp1((p-1)//2,self.g,p)        
        self.qnr = True
        if (t==1):
            self.qnr = False
            
        # if (t==(p-1)):
        #    i2 = exp1((p-1)//4,self.g,p)
        # self.i2 = i2
        
        self.a2 = self.calc2(self.g,self.i2,self.p)

        self.h = h
        if (h%p==0):
            self.h = 1
        self.a3 = self.calc2(self.h,self.i2,self.p)

        self.c80 = ((1,4,6,4,1),
                    (1,2,0,-2,-1),
                    (1,-4,-10,-4,1),
                    (1,-14,0,14,-1),
                    (1,-28,70,-28,1))

        self.s80 = ((0,0,0,0),
                    (2,6,6,2),
                    (4,4,-4,-4),
                    (6,-14,-14,6),
                    (8,-56,56,-8))

        self.functionlist = ("functions","variables","find2","find3","find4",
        "calc2","series_d","series_d1","series_d3","series_d5","hs20","hs21",
        "hs","f1","f20","exp","series","series1","series3","series5",
        "display","display5")                     

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
        print("p =",k.p,"  g =",k.g,"  h =",k.h,end=" ")
        print("  i2 =",k.i2,"  a2 =",k.a2,"  a3 =",k.a3,"  qnr =",k.qnr)
    
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
        c80 = self.c80
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
        s80 = self.s80
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

    def f1(self,e1):
        p = self.p
        c = [0,0]
        s = [0,0]
        c[0] = init2(9)
        s[0] = init2(9)
        c[1] = init2(9)
        s[1] = init2(9)
        for k in range(2):
            a = e1[k]
            for i in range(9):
                t1 = (a[0*9+i]+a[15*9+i])%p
                t2 = (a[3*9+i]+a[12*9+i])%p
                t2 = (p-t2)%p
                t1 = (t1+t2)%p
                t2 = (4*a[5*9+i])%p
                t2 = (p-t2)%p
                c[k][i] = (t1+t2)%p

                t1 = (a[1*9+i]+a[4*9+i])%p
                t2 = (a[7*9+i]+a[13*9+i])%p
                t2 = (p-t2)%p
                t1 = (t1+t2)%p
                s[k][i] = (2*t1)%p
        return(c[0],s[0],c[1],s[1])

    def f20(self,e1):
        p = self.p
        c = [0,0]
        s = [0,0]
        c[0] = init2(9)
        s[0] = init2(9)
        c[1] = init2(9)
        s[1] = init2(9)
        for k in range(2):
            a = e1[k]
            for i in range(9):
                t1 = (a[0*9+i]+a[12*9+i])%p
                t2 = (a[3*9+i]+a[15*9+i])%p
                t2 = (p-t2)%p
                c[k][i] = (t1+t2)%p

                t1 = (a[1*9+i]+a[13*9+i])%p
                s[k][i] = (2*t1)%p
        return(c[0],s[0],c[1],s[1])
    

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

def series21(c1,c2,a2,d,d1,p):
    h1 = init2(4)
    for i in range(c1,c2+1):
        t = abs(i)
        a3 = exp2a(t,a2,p)
        a4 = exp2a(t,a3,p)
        a3 = exp2a(d1,a4,p)

        t = i-c1
        a4 = exp2a(t,a2,p)
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
and assuming that d1 mod 4 = 0 and d2 mod 4 = 0.  If (d2-d1) is reasonably small
and if (t1-c1) is reasonably small then this algorithm runs in polynomial time """
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

    return(h15)    
    
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

def find4(g,q,p):
    q1 = q
    i = 0
    if (q1%4==0):
        while (q1%2==0):
            i = i+1
            q1 = q1//2
    n = i
    print(n,q1)
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
