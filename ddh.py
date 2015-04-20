from group3 import *


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

    a3 = k.calc2(x,i2,p)
    a4 = k.calc2(y,i2,p)
    a5 = k.calc2(z,i2,p)
    t1 = p-1
    h1 = k.series_d(1,t1,a2,0,1,p)
    h2 = k.series_d(1,t1,a3,0,1,p)
    h3 = k.series_d(1,t1,a4,0,1,p)
    h4 = k.series_d(1,t1,a5,0,1,p)

    s = [0,0,0,0]
    s[0] = (h1[0]+h1[1])%p
    s[1] = (h2[0]+h2[1])%p
    s[2] = (h3[0]+h3[1])%p
    s[3] = (h4[0]+h4[1])%p

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
        print("\n \n The output of ddh2 in this case cannot be relied upon.")
        print(" Either the input was incorrect or the value of c was too small.")
    if (s==(c-s1)):
        t = True
    return(t)
        
        

    




""" Example 1"""
""" p should = 1 mod 4 """
p = 613
k = group(1,p)
g = k.g
""" The following generates a Diffie-Hellman triple """
""" gcd(a,p-1) and gcd(b,p-1) should = 1 """
a = 7
b = 13
x = exp1(a,g,p)
y = exp1(b,g,p)
z = exp1(a*b,g,p)
""" This repeats the DDH test 20 times """
t = ddh2(20,k,x,y,z)
print("for the base g =",g," and the modulus p =",p)
h = (x,y,z)
if (t==True):
    print(h," is a Diffie-Hellman triple")
else:
    print(h," is not a Diffie-Hellman triple")


""" Example 2"""
""" p should = 1 mod 4 """
p = 1217
k = group(1,p)
g = k.g
""" The following generates a 3-tuple that is not a Diffie-Hellman triple """
a = 7
b = 11
x = exp1(a,g,p)
y = exp1(b,g,p)
z = exp1(a*b+1,g,p)
""" This repeats the DDH test 20 times """
t = ddh2(20,k,x,y,z)
print("\n \n")
print("for the base g =",g," and the modulus p =",p)
h = (x,y,z)
if (t==True):
    print(h," is a Diffie-Hellman triple")
else:
    print(h," is not a Diffie-Hellman triple")


