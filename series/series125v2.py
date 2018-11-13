from a24v051 import *
import random
from math import floor 


def test2(k,m,v,p):
    h11 = init2(k)
    for i in range(k):
        for j in range(k):    
            a = random.random()
            b = floor(10000*a)
            m[i][j] = b%p
        v[i] = m[i][0]
        a = random.random()
        b = floor(10000*a)
        v[i] = b%p

    # print(" The random",k,"x",k,"matrix is ")
    # display(0,k-1,0,k-1,m,v)
        
    solve2(k,m,v,p)
    t1 = det(k,m)
    if (t1<k):
        print("\n \n This matrix could not be solved since all equations")
        print(" are not linearly independent ")
    print("\n t1 = ",t1)

    print(" \n \n from test2 the output of solve2 is ")
    # display(0,k-1,0,k-1,m,v)
    l2solve(k,h11,v,m,p)    
    return(h11)



def display149(b):
    for i in range(5):
        print("(",end=' ')
        for j in range(5):
            print("{0:2}".format(b[25*i+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(5):
            print("{0:2}".format(b[25*i+5+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(5):
            print("{0:2}".format(b[25*i+10+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(5):
            print("{0:2}".format(b[25*i+15+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(5):
            print("{0:2}".format(b[25*i+20+j]),end=' ')     
        print(")")
    print("(",end=' ')
    for i in range(125,133):
         print("{0:2}".format(b[i]),end=' ')
    print(")",end='    ')
    print("(",end=' ')
    for i in range(133,141):
         print("{0:2}".format(b[i]),end=' ')
    print(")")
    print("(",end=' ')
    for i in range(141,149):
         print("{0:2}".format(b[i]),end=' ')
    print(")")


def equal2(m,c,s,t):
    s1 = 25*s[0]+5*s[1]+s[2]
    m[c][s1] = t



def series22(c1,c2,g,a2,d,d1,p):
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



def series23(c1,c2,s,g,a2,d,d1,p):
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


def series24(c1,c2,g,a2,i2,d,d1,p):
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



def series25(c1,c2,g,a2,i2,d,d1,p):
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


def mult3(m,e1,c1,c2,c3,p):
    m[e1] = init2(125)
    for i in range(5):
        for j in range(5):
            for k in range(5):
                t1 = c1[i]
                t2 = c2[j]
                t3 = c3[k]
                t4 = t1*t2*t3%p
                t = 25*i+5*j+k
                m[e1][t] = t4
                

def series125(c1,c2,g,a2,i2,d,d1,p):
    h1 = init2(125)
    d2 = d[0]
    d3 = d[1]
    d4 = d[2]
    for i3 in range(c1,c2+1):
        t = abs(i3)
        g1 = exp1(t,g,p)
        g2 = exp1(t,g1,p)
        g1 = exp1(d1,g2,p)

        t = i3-c1
        a3 = exp2a(t,a2,p)
        a4 = exp2a(d2,a3,p)
        a5 = exp2a(d3,a3,p)
        a6 = exp2a(d4,a3,p)        

        for i in range(5):
            for j in range(5):
                for k in range(5):
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

                    if k==0:
                        t3 = a6[0]**4%p
                    if k==1:
                        t3 = (a6[0]**3)*a6[1]%p
                    if k==2:
                        t3 = (a6[0]*a6[1])**2%p
                    if k==3:
                        t3 = a6[0]*(a6[1]**3)%p
                    if k==4:
                        t3 = a6[1]**4%p               

                    t4 = g1*t1%p
                    t5 = t2*t3%p
                    t4 = t4*t5%p
                    t = 25*i+5*j+k
                    h1[t] = (h1[t]+t4)%p

    return(h1)  


def mult125(m,c1,c2,d1,d2,d3,p):
    for i in range(125):
        t1 = c1*m[d1][i]%p
        t2 = c2*m[d2][i]%p
        m[d3][i] = (t1+t2)%p
        

def equation21(k,l2,d,d1,d2,m,e1,b1):
    a2 = k.a2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4


    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    
    # 1
    l3 = l2*d1
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,133,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,134,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]+d2[2]*d[2]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(-l3,l3,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation21 t1 = ",t1,"   h1 = ",h1)

    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],133,134,e1,p)

    # 2
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,135,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,136,p)

    t2 = (d2[0]*d[0]-d2[1]*d[1]-d2[2]*d[2])
    h2 = series23(-l3,l3,d1,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation21 t2 = ",t2,"   h2 = ",h2)
    
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],135,136,e1+1,p)   

    # 3
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,137,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,138,p)

    t3 = (d2[0]*d[0]+d2[1]*d[1]-d2[2]*d[2])
    h3 = series23(-l3,l3,d1,k.g,k.a2,abs(t3),1,p)
    print("\n \n in equation21 t3 = ",t3,"   h3 = ",h3)

    a3 = exp2a(abs(l2*t3),a2,p)
    a3[1] = (p-a3[1])%p
    if t3<0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],137,138,e1+2,p)   
    


    # 4
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,139,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,140,p)

    t4 = (d2[0]*d[0]-d2[1]*d[1]+d2[2]*d[2])
    h4 = series23(-l3,l3,d1,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation21 t4 = ",t4,"   h4 = ",h4)

    a3 = exp2a(abs(l2*t4),a2,p)
    a3[1] = (p-a3[1])%p
    if t4>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],139,140,e1+3,p)   
    

def equation22(k,l2,d,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    for i in range(8):
        m[i+141] = init2(125)
    

    t1 = [1,i2,1,i2,0]
    t2 = [0,1,i2,1,i2]
    t3 = [1,0,0,0,p-1]
    t4 = [0,2,0,2,0]
    t5 = [1,0,p-6,0,1]
    t6 = [0,4,0,p-4,0]


    c1,s1 = t1,t2
        
    if d2[0]==2:
        c2,s2 = t3,t4
    if d2[0]==4:
        c2,s2 = t5,t6

    if d2[1]==2:
        c3,s3 = t3,t4
    if d2[1]==4:
        c3,s3 = t5,t6


    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    
    # 1
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,143,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,144,p)

    t1 = d[0]+d2[0]*d[1]+d2[1]*d[2]
    h1 = series23(-19,21,4,k.g,k.a2,t1,1,p)
    print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)


    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    l3 = d4-(d1//4)
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult125(m,s,0,143,143,133,p)
    mult125(m,s,0,144,144,134,p)

    """
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],133,134,e1,p)
    """

    # 2
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,143,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,144,p)

    t2 = d[0]-d2[0]*d[1]-d2[1]*d[2]
    h2 = series23(-(d4-d1//4),d4+d1//4,4,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation22 t2 = ",t2,"   h2 = ",h2)

    mult125(m,s,0,143,143,135,p)
    mult125(m,s,0,144,144,136,p)

    """
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],135,136,e1+1,p)
    """


    # 3
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,143,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,144,p)

    t3 = d[0]+d2[0]*d[1]-d2[1]*d[2]
    h3 = series23(-(d4-d1//4),d4+d1//4,4,k.g,k.a2,abs(t3),1,p)
    print("\n \n in equation22 t3 = ",t3,"   h3 = ",h3)

    mult125(m,s,0,143,143,137,p)
    mult125(m,s,0,144,144,138,p)

    """
    a3 = exp2a(abs(l2*t3),a2,p)
    a3[1] = (p-a3[1])%p
    if t3<0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],137,138,e1+2,p)   
    """



    # 4
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,143,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,144,p)

    t4 = d[0]-d2[0]*d[1]+d2[1]*d[2]
    h4 = series23(-(d4-d1//4),d4+d1//4,4,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation22 t4 = ",t4,"   h4 = ",h4)

    mult125(m,s,0,143,143,139,p)
    mult125(m,s,0,144,144,140,p)

    """
    a3 = exp2a(abs(l2*t4),a2,p)
    a3[1] = (p-a3[1])%p
    if t4>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],139,140,e1+3,p)
    """

 


    c1 = [1 , (p-3)*i2%p   , p-3,          i2,    0]
    s1 = [0,  1,            (p-3)*i2%p,    p-3,       i2]

    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)


    # 5
    m[141] = init2(125)
    m[142] = init2(125)
    m[143] = init2(125)
    m[144] = init2(125)
    
    mult125(m,1,p-1,t,t+3,151,p)
    mult125(m,1,1,t+5,t+6,152,p)
    mult125(m,1,p-1,151,152,153,p)

    mult125(m,1,1,t+1,t+2,151,p)
    mult125(m,1,p-1,t+4,t+7,152,p)
    mult125(m,1,1,151,152,154,p)

    t5 = d[0]+d2[0]*d[1]+d2[1]*d[2]
    h5 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,t5,1,p)
    print("\n \n in equation22 t5 = ",t5,"   h5 = ",h5)

    t1 = exp1(d4*d4,g,p)
    l3 = d4+3*d1//4
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult125(m,s,0,153,153,141,p)
    mult125(m,s,0,154,154,142,p)
    
    """
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],133,134,e1,p)
    """



    # 6
    mult125(m,1,p-1,t,t+3,151,p)
    mult125(m,1,1,t+5,t+6,152,p)
    mult125(m,1,1,151,152,153,p)

    mult125(m,1,1,t+1,t+2,151,p)
    mult125(m,1,p-1,t+4,t+7,152,p)
    mult125(m,1,p-1,151,152,154,p)

    t6 = d[0]-d2[0]*d[1]-d2[1]*d[2]
    h6 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,abs(t6),1,p)
    print("\n \n in equation22 t6 = ",t6,"   h6 = ",h6)

    mult125(m,s,0,153,153,143,p)
    mult125(m,s,0,154,154,144,p)

    """
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],135,136,e1+1,p)
    """



    # 7
    mult125(m,1,1,t,t+3,151,p)
    mult125(m,1,p-1,t+5,t+6,152,p)
    mult125(m,1,1,151,152,153,p)

    mult125(m,p-1,1,t+1,t+2,151,p)
    mult125(m,1,1,t+4,t+7,152,p)
    mult125(m,1,1,151,152,154,p)

    t7 = d[0]+d2[0]*d[1]-d2[1]*d[2]
    h7 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,abs(t7),1,p)
    print("\n \n in equation22 t7 = ",t7,"   h7 = ",h7)

    mult125(m,s,0,153,153,145,p)
    mult125(m,s,0,154,154,146,p)

    """
    a3 = exp2a(abs(l2*t3),a2,p)
    a3[1] = (p-a3[1])%p
    if t3<0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],137,138,e1+2,p)   
    """



    # 8
    mult125(m,1,1,t,t+3,151,p)
    mult125(m,1,p-1,t+5,t+6,152,p)
    mult125(m,1,p-1,151,152,153,p)

    mult125(m,p-1,1,t+1,t+2,151,p)
    mult125(m,1,1,t+4,t+7,152,p)
    mult125(m,1,p-1,151,152,154,p)

    t8 = d[0]-d2[0]*d[1]+d2[1]*d[2]
    h7 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,abs(t8),1,p)
    print("\n \n in equation22 t8 = ",t8,"   h7 = ",h7)

    mult125(m,s,0,153,153,147,p)
    mult125(m,s,0,154,154,148,p)

    """
    a3 = exp2a(abs(l2*t4),a2,p)
    a3[1] = (p-a3[1])%p
    if t4>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],139,140,e1+3,p)
    """

    """
    m[100][:] = m[133]
    m[101][:] = m[134]
    m[102][:] = m[141]
    m[103][:] = m[142]
    """



    
    # 1    
    m[125][:] = init2(125)
    m[126][:] = init2(125)
    m[127][:] = init2(125)
    m[128][:] = init2(125)

    s1 = d[0]+d2[0]*d[1]+d2[1]*d[2]
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)
    mult125(m,a3[0],a3[1],133,134,125,p)
    mult125(m,(p-a3[1])%p,a3[0],133,134,126,p)
    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult125(m,a4[0],a4[1],141,142,127,p)
    mult125(m,(p-a4[1])%p,a4[0],141,142,128,p)

    mult125(m,1,p-1,125,127,e1,p)
    mult125(m,1,p-1,126,128,e1+1,p)

    """
    # m[100][:] = m[133]
    # m[101][:] = m[134]
    m[102][:] = m[141]
    m[103][:] = m[142]
    """

    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t4 = ",t4)



   
    # 2    
    m[125][:] = init2(125)
    m[126][:] = init2(125)
    m[127][:] = init2(125)
    m[128][:] = init2(125)

    s = d[0]-d2[0]*d[1]-d2[1]*d[2]
    s1 = abs(s)
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)
 
    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    print("\n \n in equation22 s2 = {0}  s3 = {1}  s = {2}".format(s2,s3,s))

    if (s>0):
        a3[1] = (p-a3[1])%p
        a4[1] = (p-a4[1])%p
        
    mult125(m,a3[0],a3[1],135,136,125,p)
    mult125(m,(p-a3[1])%p,a3[0],135,136,126,p)
    mult125(m,a4[0],a4[1],143,144,127,p)
    mult125(m,(p-a4[1])%p,a4[0],143,144,128,p)

    mult125(m,1,p-1,125,127,e1+2,p)
    # mult125(m,1,p-1,126,128,103,p)

    """
    # m[100][:] = m[133]
    # m[101][:] = m[134]
    m[102][:] = m[141]
    m[103][:] = m[142]
    """

    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t4 = ",t4)



    # 3    
    m[125][:] = init2(125)
    m[126][:] = init2(125)
    m[127][:] = init2(125)
    m[128][:] = init2(125)

    s = d[0]+d2[0]*d[1]-d2[1]*d[2]
    s1 = abs(s)
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)
 
    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    print("\n \n in equation22 s2 = {0}  s3 = {1}   s = {2}".format(s2,s3,s))
    
    if (s<0):
        a3[1] = (p-a3[1])%p
        a4[1] = (p-a4[1])%p

    mult125(m,a3[0],a3[1],137,138,125,p)
    mult125(m,(p-a3[1])%p,a3[0],137,138,126,p) 
    mult125(m,a4[0],a4[1],145,146,127,p)
    mult125(m,(p-a4[1])%p,a4[0],145,146,128,p)

    mult125(m,1,p-1,125,127,e1+3,p)
    mult125(m,1,p-1,126,128,e1+4,p)

    """
    # m[100][:] = m[133]
    # m[101][:] = m[134]
    m[102][:] = m[141]
    m[103][:] = m[142]
    """

    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t4 = ",t4)





    # 4    
    m[125][:] = init2(125)
    m[126][:] = init2(125)
    m[127][:] = init2(125)
    m[128][:] = init2(125)

    s = d[0]-d2[0]*d[1]+d2[1]*d[2]
    s1 = abs(s)
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)

    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    print("\n \n in equation22 s2 = {0}  s3 = {1}  s = {2}".format(s2,s3,s))

    if (s>0):
        a3[1] = (p-a3[1])%p
        a4[1] = (p-a4[1])%p

    mult125(m,a3[0],a3[1],139,140,125,p)
    mult125(m,(p-a3[1])%p,a3[0],139,140,126,p)  
    mult125(m,a4[0],a4[1],147,148,127,p)
    mult125(m,(p-a4[1])%p,a4[0],147,148,128,p)

    mult125(m,1,p-1,125,127,e1+5,p)
    # mult125(m,1,p-1,126,128,106,p)

    """
    # m[100][:] = m[133]
    # m[101][:] = m[134]
    m[102][:] = m[141]
    m[103][:] = m[142]
    """

    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t4 = ",t4)

    




def equation23(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4


    t = 125
    # t = 117
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    mult125(m,1,i2,t+0,t+4,133,p)
    mult125(m,1,i2,t+2,t+6,134,p)
    mult125(m,1,i2,133,134,140,p) 

    mult125(m,1,i2,t+1,t+5,133,p)
    mult125(m,1,i2,t+3,t+7,134,p)
    mult125(m,1,i2,133,134,141,p)

    l3 = l2
    a3 = exp2a(l3*d2[2]*d[2],a2,p)
    mult125(m,p-a3[1],a3[0],140,141,145,p)
    g1 = exp1(20*20,g,p)
    l5 = (2*d[0]+d2[1]*d[1])//8
    l5 = l5-20
    g2 = exp1(l5*l5,g,p)
    t1 = inverse(g1,p)*g2%p
    mult125(m,t1,0,145,145,122,p)

    
    i3 = (p+i2)%p
    mult125(m,1,i3,t+0,t+4,133,p)
    mult125(m,1,i3,t+2,t+6,134,p)
    mult125(m,1,p-i2,133,134,140,p) 

    mult125(m,1,i3,t+1,t+5,133,p)
    mult125(m,1,i3,t+3,t+7,134,p)
    mult125(m,1,p-i2,133,134,141,p)

    l4 = l2-1
    a3 = exp2a(l4*d2[2]*d[2],a2,p)
    mult125(m,p-a3[1],a3[0],140,141,145,p)
    l6 = (2*d[0]-d2[1]*d[1])//8
    l6 = l6-20
    g3 = exp1(l6*l6,g,p)
    t2 = inverse(g1,p)*g3%p
    mult125(m,t2,0,145,145,123,p)
    print("\n \n in equation23 l5 = {0}  l6 = {1}".format(l5,l6))
    print("\n \n in equation23 d = {0}  d2 = {1}".format(d,d2))

    # mult125(m,1,1,142,143,120,p)   
    




def equation24(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4

    # c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    # s1 = [0,  3,   3*i2%p,  p-1,         p-i2]

    # c1 = [1, 3*i2,   p-3,      p-i2,  0]
    # s1 = [0, 1,      3*i2%p,   p-3,   p-i2]
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    c2 = [1, 3*i2,   p-3,      p-i2,  0]
    s2 = [0, 1,      3*i2%p,   p-3,   p-i2]

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4


    t = 125
    # t = 118
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)


    
    mult125(m,1,p-1,t+0,t+3,133,p)
    mult125(m,1,1,t+5,t+6,134,p)
    mult125(m,1,p-1,133,134,140,p)    

    mult125(m,1,1,t+1,t+2,133,p)
    mult125(m,1,p-1,t+4,t+7,134,p)
    mult125(m,1,1,133,134,141,p)

    l3 = 2*l2*(2*d[0]+1*d[1]+d2[2]*d[2])
    a3 = exp2a(l3,a2,p)
    mult125(m,a3[0],a3[1],140,141,121,p)
   

    i3 = (p-i2)%p    
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,  p-1,         p-i3]

    c2 = [1, 3*i3,   p-3,      p-i3,  0]
    s2 = [0, 1,      3*i3%p,   p-3,   p-i3]
    

    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    mult125(m,1,p-1,t+0,t+3,133,p)
    mult125(m,1,1,t+5,t+6,134,p)
    mult125(m,1,p-1,133,134,122,p)    

 

    print("\n \n in equation24 d = {0}  d2 = {1}".format(d,d2))
    
    l3 = (2*l2-1)
    l4 = l3*(d2[1]*d[1]+d2[2]*d[2])//2
    a3 = exp2a(l4,a2,p)
    # mult125(m,p-a3[1],a3[0],140,141,120,p)


    """
    l3 = l2
    a3 = exp2a(l3*d2[2]*d[2],a2,p)
    mult125(m,a3[0],a3[1],140,141,145,p)
    g1 = exp1(20*20,g,p)
    l5 = (2*d[0]+d2[1]*d[1])//8
    l5 = l5-20
    g2 = exp1(l5*l5,g,p)
    t1 = inverse(g1,p)*g2%p
    mult125(m,t1,0,145,145,142,p)


    i3 = (p+i2)%p
    mult125(m,1,i3,t+0,t+4,133,p)
    mult125(m,1,i3,t+2,t+6,134,p)
    mult125(m,1,p-i2,133,134,140,p) 

    mult125(m,1,i3,t+1,t+5,133,p)
    mult125(m,1,i3,t+3,t+7,134,p)
    mult125(m,1,p-i2,133,134,141,p)

    l4 = l2-1
    a3 = exp2a(l4*d2[2]*d[2],a2,p)
    mult125(m,a3[0],a3[1],140,141,145,p)
    l6 = (2*d[0]-d2[1]*d[1])//8
    l6 = l6-20
    g3 = exp1(l6*l6,g,p)
    t2 = inverse(g1,p)*g3%p
    mult125(m,t2,0,145,145,143,p)
    print("\n \n in equation23 l5 = {0}  l6 = {1}".format(l5,l6))
    print("\n \n in equation23 d = {0}  d2 = {1}".format(d,d2))

    mult125(m,1,p-1,142,143,120,p)   
    """






def equation25(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    c2 = [1, 3*i2,   p-3,      p-i2,  0]
    s2 = [0, 1,      3*i2%p,   p-3,   p-i2]

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4

    
    # 1    
    i3 = (p+i2)%p
    c1 = [1,  i2,  1, i2,  0]
    s1 = [0,  1,   i2,  1,   i2]

    c1 = [1 , 0 , 0 , 0 , p-1]
    s1 = [0 , 2 , 0 , 2 , 0]

    c2 = [1,  i3,  1,   i3,  0]
    s2 = [0,  1,   i3,  1,   i3]

    c3 = [1,  i3,  1,   i3,  0]
    s3 = [0,  1,   i3,  1,   i3]


    t = 125
    # t = 118
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)
    
    mult125(m,1,p-1,t+0,t+3,133,p)
    mult125(m,1,1,t+5,t+6,134,p)
    mult125(m,1,p-1,133,134,145,p)    

    mult125(m,1,1,t+1,t+2,133,p)
    mult125(m,1,p-1,t+4,t+7,134,p)
    mult125(m,1,1,133,134,146,p)

    g1 = exp1(20*20,g,p)
    t1 = (2*d[0]+d[1]+d[2])
    l5 = (0*d[0]+d[1]+d[2])//8
    l6 = l5-20
    g2 = exp1(l6*l6,g,p)
    t2 = inverse(g1,p)*g2%p
    mult125(m,t2,0,145,145,141,p)
    mult125(m,t2,0,146,146,142,p)

    e1 = 2*l2*t1
    a3 = exp2a(e1,a2,p)
    mult125(m,p-a3[1],a3[0],141,142,147,p)

    # m[120][:] = m[141]
    # m[121][:] = m[142]

    print("\n \n in equation25 l5 = ",l5)
    h1 = series23(l5-20,l5+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation25 t1 = ",t1,"   h1 = ",h1)

    h1 = series23(-10,30,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation25 t1 = ",t1,"   h1 = ",h1)
                  
    # l3 = (l2+1)*(d[0]+d[1]+d[2])
    # a3 = exp2a(l3,a2,p)
    # mult125(m,a3[0],a3[1]+1,140,141,142,p)


    
    # 2
    i3 = (p-i2)%p
    c1 = [1,  i2,  1, i2,  0]
    s1 = [0,  1,   i2,  1,   i2]

    c1 = [1 , 0 , 0 , 0 , p-1]
    s1 = [0 , 2 , 0 , 2 , 0]

    c2 = [1,  i3,  1,   i3,  0]
    s2 = [0,  1,   i3,  1,   i3]

    c3 = [1,  i3,  1,   i3,  0]
    s3 = [0,  1,   i3,  1,   i3]


    t = 125
    # t = 118
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)
    
    mult125(m,1,p-1,t+0,t+3,133,p)
    mult125(m,1,1,t+5,t+6,134,p)
    mult125(m,1,p-1,133,134,145,p)    

    mult125(m,1,1,t+1,t+2,133,p)
    mult125(m,1,p-1,t+4,t+7,134,p)
    mult125(m,1,1,133,134,146,p)

    g1 = exp1(20*20,g,p)
    t1 = (2*d[0]+d[1]+d[2])
    l5 = (0*d[0]-d[1]-d[2])//8
    l6 = l5-20
    g2 = exp1(l6*l6,g,p)
    t2 = inverse(g1,p)*g2%p
    mult125(m,t2,0,145,145,143,p)
    mult125(m,t2,0,146,146,144,p)
    
    # m[144][:] = init2(125)

    # m[122][:] = m[143]
    # m[123][:] = m[144]
    # m[124][:] = init2(125)
    
    mult125(m,1,1,147,144,124,p)
    # mult125(m,1,i2,143,144,124,p)


    print("\n \n in equation25 l5 = ",l5)
    h1 = series23(l5-20,l5+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation25 t1 = ",t1,"   h1 = ",h1)

    h1 = series23(-28,12,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation25 t1 = ",t1,"   h1 = ",h1)
                  





def equation26(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4


    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    mult125(m,1,p-1,t+0,t+3,133,p)
    mult125(m,1,1,t+5,t+6,134,p)
    mult125(m,1,p-1,133,134,145,p)    

    mult125(m,1,1,t+1,t+2,133,p)
    mult125(m,1,p-1,t+4,t+7,134,p)
    mult125(m,1,1,133,134,146,p)

    mult125(m,1,p-1,t+0,t+3,133,p)
    mult125(m,1,1,t+5,t+6,134,p)
    mult125(m,1,p+1,133,134,147,p)    

    mult125(m,1,1,t+1,t+2,133,p)
    mult125(m,1,p-1,t+4,t+7,134,p)
    mult125(m,1,p-1,133,134,148,p)

    e1 = l2*(d2[0]*d[0]+d2[1]*d[1]+d2[2]*d[2])
    a3 = exp2a(e1,a2,p)
    g1 = inverse(a3[1]%p,p)    
    mult125(m,g1,0,146,146,140,p)

    e2 = l2*abs(-d2[0]*d[0]+d2[1]*d[1]+d2[2]*d[2])
    a3 = exp2a(e2,a2,p)
    g2 = inverse(a3[1]%p,p)
    mult125(m,g2,0,148,148,141,p)

    e1 = e1//l2
    e2 = e2//l2
    e3 = (e1//8)**2
    g3 = exp1(e3,g,p)
    e4 = (e2//8)**2
    g4 = exp1(e4,g,p)
    g4 = (p-g4)%p
    
    mult125(m,g3,g4,140,141,124,p)   
    
    """
    e1 = (d2[0]*d[0]+d2[1]*d[1]+d2[2]*d[2])//8
    e2 = abs(d2[0]*d[0]-d2[1]*d[1]-d2[2]*d[2])//8
    a3 = exp2a(e1*e1,a2,p)
    a4 = exp2a(e2*e2,a2,p)
    t1 = a3[0]
    t2 = (p+a4[0])%p
    mult125(m,t1,t2,145,147,124,p)
    """




def equation27(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4


    i3 = i2
    c1 = [1 , 2*i3%p , 0 , 2*i3%p , p-1]

    s1 = [1,0,0,0,0]
    s2 = [0,1,0,0,0]
    s3 = [0,0,1,0,0]
    s4 = [0,0,0,1,0]
    s5 = [0,0,0,0,1]

    c,s = t3,t4

    

    t = 125
    mult3(m,t+0,c1,s1,c,p)
    mult3(m,t+1,c1,s2,c,p)    
    mult3(m,t+2,c1,s3,c,p)
    mult3(m,t+3,c1,s4,c,p)
    mult3(m,t+4,c1,s5,c,p)

    mult3(m,t+5,c1,s1,s,p)
    mult3(m,t+6,c1,s2,s,p)    
    mult3(m,t+7,c1,s3,s,p)
    mult3(m,t+8,c1,s4,s,p)
    mult3(m,t+9,c1,s5,s,p)


   
    mult125(m,1,1,t+0,t+6,141,p)
    mult125(m,p-1,1,t+1,t+5,142,p)

    mult125(m,1,1,t+1,t+7,143,p)
    mult125(m,p-1,1,t+2,t+6,144,p)

    mult125(m,1,1,t+2,t+8,145,p)
    mult125(m,p-1,1,t+3,t+7,146,p)

    mult125(m,1,1,t+3,t+9,147,p)
    mult125(m,p-1,1,t+4,t+8,148,p)

    l3 = abs(9*(-d[1]+4*d[2])//2)
    a3 = exp2a(l3,a2,p)
    # a3[0],a3[1] = p-a3[1] , a3[0]
    mult125(m,a3[0],a3[1],141,142,125,p)
    mult125(m,a3[0],a3[1],143,144,126,p)
    mult125(m,a3[0],a3[1],145,146,127,p)
    mult125(m,a3[0],a3[1],147,148,128,p)

    l4 = 9*d[1]//2
    a4 = exp2a(l4,a2,p)
    # a4[0],a4[1] = p-a4[1] , a4[0]
    mult125(m,a4[0],a4[1],125,126,120,p)
    mult125(m,a4[0],a4[1],126,127,121,p)
    mult125(m,a4[0],a4[1],127,128,122,p)

    """
    a5 = exp2a(2,a4,p)
    mult125(m,p-a5[1],a5[0],129,130,132,p)
    mult125(m,1,1,129,131,133,p)

    mult125(m,2,a5[1],132,133,120,p) 
    """
    
            
    """
    m[119][:] = m[133]
    m[120][:] = m[134]
    m[121][:] = m[135]
    m[122][:] = m[136]
    m[123][:] = m[137]
    m[124][:] = m[138]
    """

    
    """
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    c2,s2 = t1,t2
    c3,s3 = t3,t4

    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,s1,s2,c3,p)
    mult3(m,t+3,s1,s2,s3,p)

    m[123][:] = m[t]
    m[124][:] = m[t+1]
    """
  
  







def equation28(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4




    i3 = i2
    c1 = [1 , 2*i3%p , 0 ,2*i3%p, p-1]

    c2,s2 = t1,t2

    c3 = [1 , 0 , 1 , 0 , 0]
    c4 = [0 , 1 , 0 , 1 , 0]
    c5 = [0 , 0 , 1 , 0 , 1]

    c3 = [1 , 0 , p-2 , 0 , 1]
    c4 = [0 , 2 , 0 , p-2 , 0]
    c5 = [0 , 0 , 4 , 0 , 0]
  
    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,c4,p)    
    mult3(m,t+2,c1,c2,c5,p)

    mult3(m,t+3,c1,s2,c3,p)
    mult3(m,t+4,c1,s2,c4,p)    
    mult3(m,t+5,c1,s2,c5,p)

    a3 = exp2a(2*d[1]*(2*l2-1)//2,a2,p)
    a3[1] = (p+a3[1])%p
    mult125(m,a3[0],a3[1],t+0,t+3,140,p)
    mult125(m,a3[0],a3[1],t+1,t+4,141,p)
    mult125(m,a3[0],a3[1],t+2,t+5,142,p)      

    a4 = exp2a(2*d[2]*(2*l2-1),a2,p)
    a4[1] = (p-a4[1])%p
    # mult125(m,a4[1],a4[0],140,141,124,p)



    i3 = p-i2
    c1 = [1 , 2*i3%p , 0 ,2*i3%p, p-1]


  
    c2 = [1 , 0 , p-2 , 0 , 1]
    c3 = [0 , 2 , 0 , p-2 , 0]
    c4 = [0 , 0 , 4 , 0 , 0]

    c5 = [1 , 0 , 1 , 0 , 0]
    c6 = [0 , 1 , 0 , 1 , 0]
    c7 = [0 , 0 , 1 , 0 , 1]
 
  
    t = 125
    mult3(m,t+0,c1,c2,c5,p)
    mult3(m,t+1,c1,c3,c6,p)    
    mult3(m,t+2,c1,c4,c7,p)
    mult125(m,1,p-2,t+0,t+1,140,p)
    mult125(m,1,1,140,t+2,145,p)

    mult3(m,t+3,c1,c2,c6,p)
    mult3(m,t+4,c1,c3,c5,p)    
    mult3(m,t+5,c1,c3,c7,p)
    mult3(m,t+6,c1,c4,c6,p)
    mult125(m,1,1,t+3,t+4,140,p)
    mult125(m,1,1,t+5,t+6,141,p)
    mult125(m,1,p-1,140,141,146,p)

    # m[123][:] = m[145]
    # m[124][:] = m[146]

 
    
    a4 = exp2a((2*d[1]+1*d[2])*(2*l2+1),a2,p)
    a4[1] = (p-a4[1])%p
    mult125(m,a4[1],a4[0],145,146,124,p)



    



def equation29(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4


    # 1
    c1,s1 = t1,t2

    i3 = i2
    c2 = [1,  i3,  1,   i3,  0]
    s2 = [0,  1,   i3,  1,   i3]

    i3 = p-i2
    c3 = [1,  i3,  p-3,   (p-3)*i3%p,  0]
    s3 = [0,  3,   3*i3%p,  p-1,   p-i3]

    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)
    
    mult125(m,1,i2,t+0,t+4,133,p)
    mult125(m,1,i2,t+1,t+5,134,p)
    mult125(m,1,i2,t+2,t+6,135,p)    
    mult125(m,1,i2,t+3,t+7,136,p)    

    mult125(m,1,1,133,136,145,p)
    mult125(m,1,p-1,134,135,146,p)

    g1 = exp1(20*20,g,p)
    t1 = (0*d[0]+d[1]-3*d[2])
    l5 = (2*d[0]+d[1]-d[2])//8
    l6 = l5-20
    g2 = exp1(l6*l6,g,p)
    t2 = inverse(g1,p)*g2%p
    mult125(m,t2,0,145,145,141,p)
    mult125(m,t2,0,146,146,142,p)

    print("\n \n in equation29 l5 = ",l5)
    h1 = series23(l5-20,l5+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation29 t1 = ",t1,"   h1 = ",h1)

    # m[123][:] = m[141]
    # m[124][:] = m[142]





def equation30(k,l2,d,d1,d2,m,e1,b1):
    a2 = k.a2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4

    if d2[2]==2:
        c3,s3 = t1,t2
    if d2[2]==4:
        c3,s3 = t3,t4


    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    
    # 1
    l3 = l2*d1
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,133,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,134,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]+d2[2]*d[2]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(-l3,l3,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation30 t1 = ",t1,"   h1 = ",h1)

    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    # mult125(m,a3[1],a3[0],133,134,e1,p)
    # test
    mult125(m,1,0,133,134,e1,p)

    # 2
    """
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,135,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,136,p)

    t2 = (d2[0]*d[0]-d2[1]*d[1]-d2[2]*d[2])
    h2 = series23(-l3,l3,d1,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation30 t2 = ",t2,"   h2 = ",h2)
    
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],135,136,e1+1,p)
    """

    # 3
    """
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,137,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,138,p)

    t3 = (d2[0]*d[0]+d2[1]*d[1]-d2[2]*d[2])
    h3 = series23(-l3,l3,d1,k.g,k.a2,abs(t3),1,p)
    print("\n \n in equation30 t3 = ",t3,"   h3 = ",h3)

    a3 = exp2a(abs(l2*t3),a2,p)
    a3[1] = (p-a3[1])%p
    if t3<0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],137,138,e1+2,p)   
    """


    # 4
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,139,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,140,p)

    t4 = (d2[0]*d[0]-d2[1]*d[1]+d2[2]*d[2])
    h4 = series23(-l3,l3,d1,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation30 t4 = ",t4,"   h4 = ",h4)

    a3 = exp2a(abs(l2*t4),a2,p)
    a3[1] = (p-a3[1])%p
    if t4>0:
        a3[1] = (p-a3[1])%p
    # mult125(m,a3[1],a3[0],139,140,e1+3,p)   
    # test
    mult125(m,1,0,139,140,e1+1,p) 





def equation41(k,l2,d,d1,m,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    c1 = [1,0,0,0,p-1]
    s1 = [0,2,0,2,0]

    i3 = p-i2
    c2 = [1, i2, 1, i2, 0]
    s2 = [0, 1, i2, 1, i2]

    c3 = [1, i3, 1, i3, 0]
    s3 = [0, 1, i3, 1, i3]

    i3 = p-i2
    c3 = [1, i3, p-3, 3*i2%p, 0]
    s3 = [0, 3, 3*i3%p, p-1, i2]

    



    t = 125
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)

    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)   
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    
    # 1
    l3 = -l2*d1+(d[1]-d[2])//(2*d1)
    l4 = l2*d1+(d[1]-d[2])//(2*d1)
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,133,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,134,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p

    mult125(m,g3,0,133,133,125,p)
    mult125(m,g3,0,134,134,126,p)

    t1 = 2*d[0]+1*d[1]+3*d[2]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(l3,l4,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation41 l3 = ",l3,"  l4 = ",l4,"  t1 = ",t1,"   h1 = ",h1)

    a3 = exp2a(4*t1,a2,p)
    print("\n \n in equation 41 a3 = ",a3)




    c1 = [1,0,0,0,p-1]
    s1 = [0,2,0,2,0]

    t2 = [1, 2*i2%p, 0, 2*i2%p, p-1]

    i3 = p-i2
    c3 = [1, i3, p-3, 3*i2%p, 0]
    s3 = [0, 3, 3*i3%p, p-1, i2]


    


    
    t = 130
    mult3(m,t+0,c1,t2,c3,p)
    mult3(m,t+1,c1,t2,s3,p)    
    mult3(m,t+2,s1,t2,c3,p)
    mult3(m,t+3,s1,t2,s3,p)

    
    # 2
    l3 = -l2*d1+(2*d[1]-d[2])//(2*d1)
    l4 = l2*d1+(2*d[1]-d[2])//(2*d1)
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+1,t+2,142,p)


    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p

    mult125(m,g3,0,141,141,127,p)
    mult125(m,g3,0,142,142,128,p)

    t1 = 2*d[0]+0*d[1]+3*d[2]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(l3,l4,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation41 l3 = ",l3,"  t1 = ",t1,"   h1 = ",h1)

    """
    # 2
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,139,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,140,p)

    t4 = (d2[0]*d[0]-d2[1]*d[1]+d2[2]*d[2])
    h4 = series23(-l3,l3,d1,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation41 t4 = ",t4,"   h4 = ",h4)

    a3 = exp2a(abs(l2*t4),a2,p)
    a3[1] = (p-a3[1])%p
    if t4>0:
        a3[1] = (p-a3[1])%p
    # mult125(m,a3[1],a3[0],139,140,e1+3,p)   
    # test
    # mult125(m,1,0,139,140,e1+1,p)
    """





def equation42(k,l2,d,d1,m,e1,b1):
    a2 = k.a2
    i2 = k.i2
    g = k.g
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]



    # 1
    t1 = [1, 2*i2%p, 0, 2*i2%p, p-1]
    
    c1 = [1, 3*i2%p, p-3, p-i2, 0]
    s1 = [0, 1, 3*i2%p, p-3, p-i2]

    c2 = [1, i2, 1, i2, 0]
    s2 = [0, 1, i2, 1, i2]


    t = 130
    mult3(m,t+0,t1,c1,c2,p)
    mult3(m,t+1,t1,c1,s2,p)    
    mult3(m,t+2,t1,s1,c2,p)
    mult3(m,t+3,t1,s1,s2,p)


    d4 = l2*d1
    l3 = -d4+(2*d[0]+3*d[1]+1*d[2])//(2*d1)
    l4 = d4+(2*d[0]+3*d[1]+1*d[2])//(2*d1)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p
    
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,p-1,1,t+1,t+2,142,p)
    mult125(m,g3,0,141,141,125,p)
    mult125(m,g3,0,142,142,126,p) 

    t1 = 0*d[0]+1*d[1]-1*d[2]
    h1 = series23(l3,l4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation42 t1 = ",t1,"   h1 = ",h1)




    # 2
    t1 = [1, 2*i2%p, 0, 2*i2%p, p-1]   
 
    c1 = [1, i2, 1, i2, 0]
    s1 = [0, 1, i2, 1, i2]

    c2 = [1, 3*i2%p, p-3, p-i2, 0]
    s2 = [0, 1, 3*i2%p, p-3, p-i2]


    t = 130
    mult3(m,t+0,t1,c1,c2,p)
    mult3(m,t+1,t1,c1,s2,p)    
    mult3(m,t+2,t1,s1,c2,p)
    mult3(m,t+3,t1,s1,s2,p)


    d4 = l2*d1
    l3 = -d4+(2*d[0]+1*d[1]+3*d[2])//(2*d1)
    l4 = d4+(2*d[0]+1*d[1]+3*d[2])//(2*d1)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p
    
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,p-1,1,t+1,t+2,142,p)
    mult125(m,g3,0,141,141,127,p)
    mult125(m,g3,0,142,142,128,p) 

    t2 = 0*d[0]+1*d[1]-1*d[2]
    h2 = series23(l3,l4,d1,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation42 t2 = ",t2,"   h2 = ",h2)



    mult125(m,1,0,126,128,117,p)









p = 4013

p = 2473





m = init1(157,125)

v = init2(125)
test2(125,m,v,p)


c = 0
for i in range(5):
    for j in range(5):
        m[c] = init2(125)
        s = [0,i,j]
        equal2(m,c,s,1)
        s = [2,i,j]
        equal2(m,c,s,2)
        s = [4,i,j]
        equal2(m,c,s,1)
        c = c+1

s1 = [[0,0] , [0,1] , [0,2] , [0,3] , [0,4],
      [1,0] , [1,1] , [1,2] , [1,3] , [1,4],
      [2,0] , [2,1] , [2,2] , [2,3] , [2,4],
      [3,0] , [3,1] , [3,2] , [3,3] , [3,4]]    
for i in range(5):
    for j in range(5):
        if [i,j] in s1:      
            m[c] = init2(125)
            s = [i,0,j]
            equal2(m,c,s,1)
            s = [i,2,j]
            equal2(m,c,s,2)
            s = [i,4,j]
            equal2(m,c,s,1)
            c = c+1


s1 = [[0,0] , [0,1] , [0,2] , [0,3] ,
      [1,0] , [1,1] , [1,2] , [1,3] , 
      [2,0] , [2,1] , [2,2] , [2,3] ,
      [3,0] , [3,1] , [3,2] , [3,3]]    
for i in range(5):
    for j in range(5):
        if [i,j] in s1:        
            m[c] = init2(125)
            s = [i,j,0]
            equal2(m,c,s,1)
            s = [i,j,2]
            equal2(m,c,s,2)
            s = [i,j,4]
            equal2(m,c,s,1)
            c = c+1

print("\n \n c = ",c)






b1 = init2(149)

k = group(1,p)
k = group(exp1(1,k.g,p),p)

# k = group(1932,p)

d = [8,488+96,32+32]

e = (p-1)//3
d = [32 , 1024-3*128*0, 256+128*0]

d = [32, 1024, 1024]

l2 = 17
d1 = 8
k125 = series125(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)


d3 = [[2,2,2] , [2,2,4] , [2,4,2] , [4,2,2],
      [2,4,4] , [4,2,4] , [4,4,2] , [4,4,4]]

for i in range(8):
    d2 = d3[i]
    equation21(k,l2,d,d1,d2,m,4*i+61,b1)



d2 = [4,2]
equation22(k,l2,d,d2,m,93,b1)


d2 = [2,4]
equation22(k,l2,d,d2,m,99,b1)


d2 = [2,2]
equation22(k,l2,d,d2,m,105,b1)


d2 = [4,4]
equation22(k,l2,d,d2,m,111,b1)


d2 = [2,4,2]
# equation25(k,l2,d,d1,d2,m,93,b1)

d2 = [2,4,2]
# equation24(k,l2,d,d1,d2,m,93,b1)


d2 = [2,2,2]
equation30(k,l2,d,d1,d2,m,117,b1)
d2 = [2,2,4]
equation30(k,l2,d,d1,d2,m,119,b1)
d2 = [2,4,2]
equation30(k,l2,d,d1,d2,m,121,b1)
d2 = [2,4,4]
equation30(k,l2,d,d1,d2,m,123,b1)

d2 = [2,4,2]
equation29(k,l2,d,d1,d2,m,93,b1)


equation41(k,l2,d,d1,m,b1)

e1 = 140
equation42(k,l2,d,d1,m,e1,b1)


d3 = [8,56]
d3 = [8,88]
h1 = series25(-l2,l2,k.g,k.a2,k.i2,d3,16,p)
print("\n \n h1  = ",h1)

d3 = [16,56]
h2 = series25(-l2,l2,k.g,k.a2,k.i2,d3,16,p)
print("\n \n h2  = ",h2)

d3 = [56,16]
h3 = k.series25(-l2,l2,d3,16)
print("\n \n h3  = ",h3)


b2 = [0 for i in range(149)]

for i in range(149):
    b2[i] = multcnvl2(m[i],k125,p)


print("\n \n b2 = ")
display149(b2)


# print("\n\n b1 =",b1)

v1 = init2(125)

v1[:] = b2
t1 = 117
v1[t1] = (v1[t1]+1)%p

print("\n \n")
# display(0,124,0,124,m,v1)

h1 = [0 for i in range(125)]

solve2(125,m,v1,p)
t1 = det(125,m)
print("\n \n det = ",t1)
# display(0,124,0,124,m,v1)
display(0,4,90,124,m,v1)
l2solve(125,h1,v1,m,p)
print("after solve2 = ",h1)
print("\n \n")

t1 = multcnvl2(m[125],h1,p)
t2 = multcnvl2(m[126],h1,p)
print("\n \n t1 = {0}   t2 = {1}".format(t1,t2))

t3 = multcnvl2(m[127],h1,p)
t4 = multcnvl2(m[128],h1,p)
print("\n \n t3 = {0}   t4 = {1}".format(t3,t4))
        
