from series4v1 import *


def display81(b):
    for i in range(4):
        print("(",end=' ')
        for j in range(9):
            print("{0:2}".format(b[27*i+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(9):
            print("{0:2}".format(b[27*i+9+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(9):
            print("{0:2}".format(b[27*i+18+j]),end=' ')     
        print(")")


def display81v2(b):
    for i in range(3):
        print("(",end=' ')
        for j in range(9):
            print("{0:2}".format(b[27*i+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(9):
            print("{0:2}".format(b[27*i+9+j]),end=' ')
        print(")  ","(",end=' ')
        for j in range(9):
            print("{0:2}".format(b[27*i+18+j]),end=' ')     
        print(")")  


def equal2(m,c,s,t):
    s1 = 9*s[0]+s[1]
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

def mult2(m,e1,c1,c2,p):
    m[e1] = init2(81)
    for i in range(9):
        for j in range(9):
            t1 = c1[i]
            t2 = c2[j]
            t3 = t1*t2%p
            t = 9*i+j
            m[e1][t] = t3                

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

def series26(c1,c2,g,a2,i2,d,d1,p):
    h1 = init2(9)
    d2 = d[0]
    for i3 in range(c1,c2+1):
        t = abs(i3)
        g1 = exp1(t,g,p)
        g2 = exp1(t,g1,p)
        g1 = exp1(d1,g2,p)

        t = i3-c1
        a3 = exp2a(t,a2,p)
        a4 = exp2a(d2,a3,p)    

        for i in range(9):
            t1 = exp1(8-i,a4[0],p)
            t2 = exp1(i,a4[1],p)
            t1 = t1*t2%p          

            t4 = g1*t1%p            
            h1[i] = (h1[i]+t4)%p

    return(h1) 

def series27(c1,c2,g,a2,i2,d,d1,p):
    h1 = init2(81)
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

        for i in range(9):
            for j in range(9):
                s1 = exp1(8-i,a4[0],p)
                s2 = exp1(i,a4[1],p)
                t1 = s1*s2%p

                s1 = exp1(8-j,a5[0],p)
                s2 = exp1(j,a5[1],p)
                t2 = s1*s2%p

                t4 = g1*t1%p
                t4 = t2*t4%p
                t = 9*i+j
                h1[t] = (h1[t]+t4)%p

    return(h1)  

def series28(c1,c2,s,g,a2,d,d1,p):
    h1 = init2(4)
    t1 = 0
    for i in range(c1,c2+1,s):
        t = abs(i)
        g1 = exp1(t,g,p)
        g2 = exp1(t,g1,p)
        g1 = exp1(d1,g2,p)

        a3 = exp2a(t1,a2,p)
        a4 = exp2a(d,a3,p)
        t1 = t1+1

        s1 = a4[0]**3%p
        s2 = (a4[0]**2)*a4[1]%p
        s3 = a4[0]*(a4[1]**2)%p
        s4 = a4[1]**3%p
        h1[0] = (h1[0]+s1*g1)%p
        h1[1] = (h1[1]+s2*g1)%p
        h1[2] = (h1[2]+s3*g1)%p
        h1[3] = (h1[3]+s4*g1)%p

    return(h1)

def series29(c1,c2,s,g,a2,d,d1,p):
    h1 = init2(8)
    t1 = 0
    for i in range(c1,c2+1,s):
        t = abs(i)
        g1 = exp1(t,g,p)
        g2 = exp1(t,g1,p)
        g1 = exp1(d1,g2,p)

        a3 = exp2a(t1,a2,p)
        a4 = exp2a(d[0],a3,p)
        a5 = exp2a(d[1],a3,p)
        t1 = t1+1

        s1 = a4[0]**3%p
        s2 = (a4[0]**2)*a4[1]%p
        s3 = a4[0]*(a4[1]**2)%p
        s4 = a4[1]**3%p
        ct = a5[0]
        st = a5[1]
        
        h1[0] = (h1[0]+ct*s1*g1)%p
        h1[1] = (h1[1]+ct*s2*g1)%p
        h1[2] = (h1[2]+ct*s3*g1)%p
        h1[3] = (h1[3]+ct*s4*g1)%p
        
        h1[4] = (h1[4]+st*s1*g1)%p
        h1[5] = (h1[5]+st*s2*g1)%p
        h1[6] = (h1[6]+st*s3*g1)%p
        h1[7] = (h1[7]+st*s4*g1)%p

    return(h1)

def mult25(m,c1,c2,d1,d2,d3,p):
    for i in range(25):
        t1 = c1*m[d1][i]%p
        t2 = c2*m[d2][i]%p
        m[d3][i] = (t1+t2)%p
        

def mult81(m,c1,c2,d1,d2,d3,p):
    for i in range(81):
        t1 = c1*m[d1][i]%p
        t2 = c2*m[d2][i]%p
        m[d3][i] = (t1+t2)%p

def equation20(k,l2,d,d1,d2,m,e1,b1):
    a2 = k.a2
    p = k.p

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
    if d2[0]==6:
        c1,s1 = t5,t6
    if d2[0]==8:
        c1,s1 = t7,t8
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8

    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    
    # 1
    l3 = l2*d1
    mult81(m,1,p-1,t,t+3,90,p)
    mult81(m,1,1,t+1,t+2,91,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(-l3,l3,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation20 t1 = ",t1,"   h1 = ",h1)
    
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],90,91,e1,p)
    
    
    # 2
    mult81(m,1,1,t,t+3,92,p)
    mult81(m,1,p-1,t+1,t+2,93,p)

    t2 = d2[0]*d[0]-d2[1]*d[1]
    h2 = series23(-l3,l3,d1,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation20 t2 = ",t2,"   h2 = ",h2)
    
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],92,93,e1+1,p)
    
def equation20v2(k,l2,d,d1,d2,m,e1,b1):
    a2 = k.a2
    p = k.p

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]

    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
    if d2[0]==6:
        c1,s1 = t5,t6
    if d2[0]==8:
        c1,s1 = t7,t8
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8

    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    
    # 1
    l3 = l2*d1
    mult81(m,1,p-1,t,t+3,90,p)
    mult81(m,1,1,t+1,t+2,91,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]
    # h1 = series23(-l3,l3,d1,k.g,k.a2,t1,1,p)
    # print("\n \n in equation20 t1 = ",t1,"   h1 = ",h1)
    
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],90,91,e1,p)
    
    
    # 2
    mult81(m,1,1,t,t+3,92,p)
    mult81(m,1,p-1,t+1,t+2,93,p)

    t2 = d2[0]*d[0]-d2[1]*d[1]
    # h2 = series23(-l3,l3,d1,k.g,k.a2,abs(t2),1,p)
    # print("\n \n in equation20 t2 = ",t2,"   h2 = ",h2)
    
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],92,93,e1+1,p)


def equation21(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]

    c1,s1 = t1,t2

    if d2[0]==2:
        c2,s2 = t1,t2
    if d2[0]==4:
        c2,s2 = t3,t4
    if d2[0]==6:
        c2,s2 = t5,t6
    if d2[0]==8:
        c2,s2 = t7,t8
     

    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)    

    l3 = l2*d1
    d4 = d1//4
    mult81(m,1,i2,t,t+2,94,p)
    mult81(m,1,i2,t+1,t+3,95,p)

    t1 = d2[0]*d[1]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(-l3+2*d4,l3+2*d4,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation21 t1 = ",t1,"   h1 = ",h1)

    g1 = exp1(l3*l3,g,p)
    g2 = exp1((l3-2*d4)*(l3-2*d4),g,p)
    t2 = inverse(g1,p)*g2%p
    mult81(m,t2,0,94,94,90,p)
    mult81(m,t2,0,95,95,91,p)

    l4 = (2*l2-1)*t1//2
    a3 = exp2a(l4,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],90,91,92,p)
    m[e1][:] = m[92]
    
    l5 = (2*l2+1)*t1//2
    a4 = exp2a(l5,a2,p)
    g3 = exp1((l3+2*d4)*(l3+2*d4),g,p)
    t3 = a4[1]*g3%p
    b1[e1] = t3
    print("\n \n in equation21 t3 = ",t3)


def equation21v2(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]

    c1,s1 = t1,t2

    if d2[0]==2:
        c2,s2 = t1,t2
    if d2[0]==4:
        c2,s2 = t3,t4
    if d2[0]==6:
        c2,s2 = t5,t6
    if d2[0]==8:
        c2,s2 = t7,t8
     

    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)    

    l3 = l2*d1
    d4 = d1//4
    mult81(m,1,i2,t,t+2,94,p)
    mult81(m,1,i2,t+1,t+3,95,p)

    t1 = d2[0]*d[1]
    # h1 = series23(-l3+2*d4,l3+2*d4,d1,k.g,k.a2,t1,1,p)
    # print("\n \n in equation21 t1 = ",t1,"   h1 = ",h1)

    g1 = exp1(l3*l3,g,p)
    g2 = exp1((l3-2*d4)*(l3-2*d4),g,p)
    t2 = inverse(g1,p)*g2%p
    mult81(m,t2,0,94,94,90,p)
    mult81(m,t2,0,95,95,91,p)

    l4 = (2*l2-1)*t1//2
    a3 = exp2a(l4,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],90,91,92,p)
    m[e1][:] = m[92]
    
    l5 = (2*l2+1)*t1//2
    a4 = exp2a(l5,a2,p)
    g3 = exp1((l3+2*d4)*(l3+2*d4),g,p)
    t3 = a4[1]*g3%p
    b1[e1] = t3
    # print("\n \n in equation21 t3 = ",t3)
    

def equation22(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t7 = 2*i2%p
    t8 = p-t7
    t1 = [1 , t7 , 0 , t7 , p-2 , t8 , 0 , t8 , 1]
    t7 = 4*i2%p
    t8 = 8*i2%p
    t2 = [0 , 2 , t7 , 2 , t8 , p-2 , t7 , p-2 , 0]    

    t7 = 2*i2%p
    t8 = (p-10)*i2%p
    t3 = [1 , t7 , p-6 , t8 , 0 , t8 , 6 , t7 , p-1]
    t7 = 8*i2%p
    t8 = p-t7
    t4 = [0 , 4 , t7 , p-4 , 0 , p-4 , t8 , 4 , 0]

    t7 = 2*i2%p
    t8 = 30*i2%p
    t5 = [1 , t7 , p-16 , p-t8 , 30 , t8 , p-16 , p-t7 , 1]
    t7 = 12*i2%p
    t8 = (p-40)*i2%p
    t6 = [0 , 6 , t7 , p-26 , t8 , 26 , t7 , p-6 , 0]
    

    if d2[0]==2:
        c1,s1 = t1,t2        
    if d2[0]==4:
        c1,s1 = t3,t4
    if d2[0]==6:
        c1,s1 = t5,t6
        

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]


    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8
     

    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)    

    # 1
    l3 = l2*d1
    d4 = d1//4
    mult81(m,1,p-1,t,t+3,94,p)
    mult81(m,1,1,t+1,t+2,95,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(-l3+2*d4,l3+2*d4,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)

    g1 = exp1(l3*l3,g,p)
    g2 = exp1((l3-2*d4)*(l3-2*d4),g,p)
    t2 = inverse(g1,p)*g2%p
    mult81(m,t2,0,94,94,90,p)
    mult81(m,t2,0,95,95,91,p)

    l4 = (2*l2-1)*t1//2
    a3 = exp2a(l4,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],90,91,92,p)
    m[e1][:] = m[92]
    
    l5 = (2*l2+1)*t1//2
    a4 = exp2a(l5,a2,p)
    g3 = exp1((l3+2*d4)*(l3+2*d4),g,p)
    t3 = a4[1]*g3%p
    b1[e1] = t3
    print("\n \n in equation22 t3 = ",t3)
    

    # 2
    l3 = l2*d1
    mult81(m,1,1,t,t+3,94,p)
    mult81(m,1,p-1,t+1,t+2,95,p)

    t1 = d2[0]*d[0]-d2[1]*d[1]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(-l3+2*d4,l3+2*d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)

    g1 = exp1(l3*l3,g,p)
    g2 = exp1((l3-2*d4)*(l3-2*d4),g,p)
    t2 = inverse(g1,p)*g2%p
    mult81(m,t2,0,94,94,96,p)
    mult81(m,t2,0,95,95,97,p)

    l4 = (2*l2-1)*abs(t1)//2
    a3 = exp2a(l4,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],96,97,98,p)
    m[e1+1][:] = m[98]
    
    l5 = (2*l2+1)*abs(t1)//2
    a4 = exp2a(l5,a2,p)
    g3 = exp1((l3+2*d4)*(l3+2*d4),g,p)
    t3 = a4[1]*g3%p
    b1[e1+1] = t3
    print("\n \n in equation22 t3 = ",t3)

def equation22v2(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t7 = 2*i2%p
    t8 = p-t7
    t1 = [1 , t7 , 0 , t7 , p-2 , t8 , 0 , t8 , 1]
    t7 = 4*i2%p
    t8 = 8*i2%p
    t2 = [0 , 2 , t7 , 2 , t8 , p-2 , t7 , p-2 , 0]    

    t7 = 2*i2%p
    t8 = (p-10)*i2%p
    t3 = [1 , t7 , p-6 , t8 , 0 , t8 , 6 , t7 , p-1]
    t7 = 8*i2%p
    t8 = p-t7
    t4 = [0 , 4 , t7 , p-4 , 0 , p-4 , t8 , 4 , 0]

    t7 = 2*i2%p
    t8 = 30*i2%p
    t5 = [1 , t7 , p-16 , p-t8 , 30 , t8 , p-16 , p-t7 , 1]
    t7 = 12*i2%p
    t8 = (p-40)*i2%p
    t6 = [0 , 6 , t7 , p-26 , t8 , 26 , t7 , p-6 , 0]
    

    if d2[0]==2:
        c1,s1 = t1,t2        
    if d2[0]==4:
        c1,s1 = t3,t4
    if d2[0]==6:
        c1,s1 = t5,t6
        

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]


    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8
     

    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)    

    # 1
    l3 = l2*d1
    d4 = d1//4
    mult81(m,1,p-1,t,t+3,94,p)
    mult81(m,1,1,t+1,t+2,95,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]
    # h1 = series23(-l3+2*d4,l3+2*d4,d1,k.g,k.a2,t1,1,p)
    # print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)

    g1 = exp1(l3*l3,g,p)
    g2 = exp1((l3-2*d4)*(l3-2*d4),g,p)
    t2 = inverse(g1,p)*g2%p
    mult81(m,t2,0,94,94,90,p)
    mult81(m,t2,0,95,95,91,p)

    l4 = (2*l2-1)*t1//2
    a3 = exp2a(l4,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],90,91,92,p)
    m[e1][:] = m[92]
    
    l5 = (2*l2+1)*t1//2
    a4 = exp2a(l5,a2,p)
    g3 = exp1((l3+2*d4)*(l3+2*d4),g,p)
    t3 = a4[1]*g3%p
    b1[e1] = t3
    # print("\n \n in equation22 t3 = ",t3)
    

    # 2
    l3 = l2*d1
    mult81(m,1,1,t,t+3,94,p)
    mult81(m,1,p-1,t+1,t+2,95,p)

    t1 = d2[0]*d[0]-d2[1]*d[1]
    # h1 = series23(-l3+2*d4,l3+2*d4,d1,k.g,k.a2,abs(t1),1,p)
    # print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)

    g1 = exp1(l3*l3,g,p)
    g2 = exp1((l3-2*d4)*(l3-2*d4),g,p)
    t2 = inverse(g1,p)*g2%p
    mult81(m,t2,0,94,94,96,p)
    mult81(m,t2,0,95,95,97,p)

    l4 = (2*l2-1)*abs(t1)//2
    a3 = exp2a(l4,a2,p)
    a3[1] = (p-a3[1])%p
    mult81(m,a3[1],a3[0],96,97,98,p)
    m[e1+1][:] = m[98]
    
    l5 = (2*l2+1)*abs(t1)//2
    a4 = exp2a(l5,a2,p)
    g3 = exp1((l3+2*d4)*(l3+2*d4),g,p)
    t3 = a4[1]*g3%p
    b1[e1+1] = t3
    # print("\n \n in equation22 t3 = ",t3)


def equation23(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p    
        

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]


    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8


    # 1
    c1,s1 = t1,t2

    s2 = [1 , 0 , p-10 , 0 , 5 , 0 , 0 , 0 , 0]
    s3 = [0 , 1 , 0 , p-10 , 0 , 5 , 0 , 0 , 0]
    s4 = [0 , 0 , 1 , 0 , p-10 , 0 , 5 , 0 , 0]
    s5 = [0 , 0 , 0 , 1 , 0 , p-10 , 0 , 5 , 0]

    s6 = [0 , 5 , 0 , p-10 , 0 , 1 , 0 , 0 , 0]
    s7 = [0 , 0 , 5 , 0 , p-10 , 0 , 1 , 0 , 0]
    s8 = [0 , 0 , 0 , 5 , 0 , p-10 , 0 , 1 , 0]
    s9 = [0 , 0 , 0 , 0 , 5 , 0 , p-10 , 0 , 1]

    # 1
    t = 81
    mult2(m,t+0,c1,s2,p)
    mult2(m,t+1,c1,s3,p)    
    mult2(m,t+2,c1,s4,p)
    mult2(m,t+3,c1,s5,p)

    mult2(m,t+4,s1,s2,p)
    mult2(m,t+5,s1,s3,p)    
    mult2(m,t+6,s1,s4,p)
    mult2(m,t+7,s1,s5,p)

    mult81(m,1,i2,t+0,t+4,100,p)
    mult81(m,1,i2,t+1,t+5,101,p)
    mult81(m,1,i2,t+2,t+6,102,p)
    mult81(m,1,i2,t+3,t+7,103,p)    

    # g1 = exp1(20*20,g,p)
    # g2 = exp1(18*18,g,p)
    l3 = l2*d1
    d3 = d[0]//4
    l4 = l3-d3
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    g3 = inverse(g1,p)*g2%p
    mult81(m,g3,0,100,100,90,p)
    mult81(m,g3,0,101,101,91,p)
    mult81(m,g3,0,102,102,92,p)
    mult81(m,g3,0,103,103,93,p)


    # 2
    t = 81
    mult2(m,t+0,c1,s6,p)
    mult2(m,t+1,c1,s7,p)    
    mult2(m,t+2,c1,s8,p)
    mult2(m,t+3,c1,s9,p)

    mult2(m,t+4,s1,s6,p)
    mult2(m,t+5,s1,s7,p)    
    mult2(m,t+6,s1,s8,p)
    mult2(m,t+7,s1,s9,p)

    mult81(m,1,i2,t+0,t+4,100,p)
    mult81(m,1,i2,t+1,t+5,101,p)
    mult81(m,1,i2,t+2,t+6,102,p)
    mult81(m,1,i2,t+3,t+7,103,p)    

    mult81(m,g3,0,100,100,94,p)
    mult81(m,g3,0,101,101,95,p)
    mult81(m,g3,0,102,102,96,p)
    mult81(m,g3,0,103,103,97,p)
    

    # h1 = series23(-l3+5,l3+5,d1,k.g,k.a2,abs(d2[1]),1,p)
    l3 = l2*d1
    d3 = d[0]//4
    # h1 = series28(-18,22,d1,g,a2,abs(2*d[1]),1,p)
    # h1 = series28(-l3+d3,l3+d3,d1,g,a2,abs(2*d[1]),1,p)
    d4 = [ d[1] , 5*d[1] ]
    h1 = series29(-l3+d3,l3+d3,d1,g,a2,d4,1,p)    
    print("\n \n in equation23 h1 = ",h1)

    a3 = exp2a(5*9*d[1]//2,a2,p)
    # a3[0],a3[1] = p-a3[1] , a3[0]
    mult81(m,a3[0],a3[1],90,94,100,p)
    mult81(m,a3[0],a3[1],91,95,101,p)
    mult81(m,a3[0],a3[1],92,96,102,p)
    mult81(m,a3[0],a3[1],93,97,103,p)

    """
    a3[0],a3[1] = p-a3[1] , a3[0]
    mult81(m,a3[0],a3[1],90,94,100,p)
    mult81(m,a3[0],a3[1],91,95,101,p)
    mult81(m,a3[0],a3[1],92,96,102,p)
    mult81(m,a3[0],a3[1],93,97,103,p)
    """
    
    """
    m[77][:] = m[81]
    m[78][:] = m[82]
    m[79][:] = m[85]
    m[80][:] = m[86]
    """
    
    a4 = exp2a(9*d[1]//2,a2,p)
    # a4[0],a4[1] = p-a4[1] , a4[0]
    mult81(m,a4[0],a4[1],100,101,81,p)
    mult81(m,a4[0],a4[1],101,102,82,p)
    mult81(m,a4[0],a4[1],102,103,83,p)   
    
    a5 = exp2a(9*d[1],a2,p)
    mult81(m,a5[0],a5[1],82,83,80,p)
    
    # mult81(m,1,1,84,82,80,p)

    #m[80][:] = m[82]
    



    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]

    c1,s1 = t1,t2

    c2,s2 = t1,t2

    c3,s3 = t3,t4

    c4,s4 = t5,t6

    t = 81
    mult2(m,t+0,s1,c2,p)
    mult2(m,t+1,s1,s3,p)    
    mult2(m,t+2,c1,c4,p)
    mult2(m,t+3,s1,s2,p)

    # m[77][:] = m[t]
    m[78][:] = m[t+1]
    m[79][:] = m[t+2]




def equation24(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p 
        
    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]

    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8

    c1,s1 = t5,t6

    s2 = [1 , 0 , p-1 , 0 , p-1 , 0 , 1 , 0 , 0]
    s3 = [0 , 1 , 0 , p-1 , 0 , p-1 , 0 , 1 , 0]
    s4 = [0 , 2 , 0 , 0 , 0 , p-2 , 0 , 0 , 0]
    s5 = [0 , 0 , 2 , 0 , 0 , 0 , p-2 , 0 , 0]

    """
    s2 = [0 , 1 , 0 , p-1 , 0 , p-1 , 0 , 1 , 0]
    s3 = [0 , 0 , 1 , 0 , p-1 , 0 , p-1 , 0 , 1]
    s4 = [0 , 0 , 2 , 0 , 0 , 0 , p-2 , 0 , 0]
    s5 = [0 , 0 , 0 , 2 , 0 , 0 , 0 , p-2 , 0]
    """
    
    t = 81
    mult2(m,t+0,c1,s2,p)
    mult2(m,t+1,c1,s3,p)    
    mult2(m,t+2,c1,s4,p)
    mult2(m,t+3,c1,s5,p)

    mult2(m,t+4,s1,s2,p)
    mult2(m,t+5,s1,s3,p)    
    mult2(m,t+6,s1,s4,p)
    mult2(m,t+7,s1,s5,p)

    mult81(m,1,i2,t+0,t+4,90,p)
    mult81(m,1,i2,t+1,t+5,91,p)
    mult81(m,1,i2,t+2,t+6,92,p)
    mult81(m,1,i2,t+3,t+7,93,p)

    a3 = exp2a(7*d[1],a2,p)
    mult81(m,a3[0],a3[1],90,91,94,p)
    mult81(m,a3[0],a3[1],92,93,95,p)    

    a3 = exp2a(3*7*d[1],a2,p)
    mult81(m,p-a3[1],a3[0],94,95,78,p)

    c1,s1 = t5,t6

    c2,s2 = t1,t2
    
    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)
    
    mult81(m,1,i2,t+0,t+2,79,p)
    


def equation25(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p    
        

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]


    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8


    # 1
    c1,s1 = t1,t2

    s2 = [1 , 0 , p-2 , 0 , 0 , 0 , 2 , 0 , p-1]
    s3 = [0 , 2 , 0 , p-2 , 0 , p-2 , 0 , 2 , 0]
    s4 = [0 , 0 , 4 , 0 , 0 , 0 , p-4 , 0 , 0]
    s5 = [0 , 0 , 0 , 8 , 0 , 8 , 0 , 0 , 0]  
    
    t = 81
    mult2(m,t+0,c1,s2,p)
    mult2(m,t+1,c1,s3,p)    
    mult2(m,t+2,c1,s4,p)
    mult2(m,t+3,c1,s5,p)

    mult2(m,t+4,s1,s2,p)
    mult2(m,t+5,s1,s3,p)    
    mult2(m,t+6,s1,s4,p)
    mult2(m,t+7,s1,s5,p)

    mult81(m,1,i2,t+0,t+4,94,p)
    mult81(m,1,i2,t+1,t+5,95,p)
    mult81(m,1,i2,t+2,t+6,96,p)
    mult81(m,1,i2,t+3,t+7,97,p)    

    # g1 = exp1(20*20,g,p)
    # g2 = exp1(18*18,g,p)
    l3 = l2*d1
    d3 = d[0]//4
    l4 = l3-d3
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    g3 = inverse(g1,p)*g2%p
    mult81(m,g3,0,94,94,100,p)
    mult81(m,g3,0,95,95,101,p)
    mult81(m,g3,0,96,96,102,p)
    mult81(m,g3,0,97,97,103,p)

    # h1 = series23(-l3+5,l3+5,d1,k.g,k.a2,abs(d2[1]),1,p)
    l3 = l2*d1
    d3 = d[0]//4
    # h1 = series28(-18,22,d1,g,a2,abs(2*d[1]),1,p)
    h1 = series28(-l3+d3,l3+d3,d1,g,a2,abs(2*d[1]),1,p)
    print("\n \n in equation25 h1 = ",h1)

    a3 = exp2a(2*9*d[1],a2,p)    
    mult81(m,a3[0],a3[1],100,101,90,p)
    mult81(m,a3[0],a3[1],101,102,91,p)
    mult81(m,a3[0],a3[1],102,103,92,p)

    mult81(m,p-a3[1],a3[0],100,101,81,p)
    mult81(m,p-a3[1],a3[0],101,102,82,p)
    mult81(m,p-a3[1],a3[0],81,82,83,p)


    mult81(m,1,p-1,92,83,80,p)

    # m[79][:] = m[92]

    
    # test 1
    # mult81(m,p-a3[1],a3[0],100,101,90,p)
    # mult81(m,p-a3[1],a3[0],101,102,91,p)

    # m[79][:] = m[90]
    # m[80][:] = m[91]
    
    a4 = exp2a(2*9*d[1],a2,p)
    # mult81(m,p-a4[1],a4[0],90,91,80,p)
    # test 1
    # mult81(m,a4[0],a4[1],90,91,80,p)


    # test2
    # mult81(m,a4[0],a4[1],90,91,81,p)
    # mult81(m,p-a4[1],a4[0],91,92,82,p)
    # mult81(m,1,1,81,82,97,p)
    # mult81(m,2*a4[0]%p,a4[1],96,97,80,p)    
    


    # 2
    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]

    c1,s1 = t1,t2

    c2,s2 = t1,t2

    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult81(m,1,i2,t+0,t+2,90,p)
    mult81(m,1,i2,t+1,t+3,91,p)

    mult81(m,g3,0,90,90,92,p)
    mult81(m,g3,0,91,91,93,p)

    a3 = exp2a(9*d[1],a2,p)
    mult81(m,a3[0],a3[1],92,93,98,p)

    a5 = exp2a(2*9*d[1],a2,p)
    # mult81(m,2,a5[1],96,98,80,p)

    # m[79][:] = m[t]
    # m[80][:] = m[91]
    





def equation26(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p    
        

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]


    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
    if d2[0]==6:
        c1,s1 = t5,t6
    if d2[0]==8:
        c1,s1 = t7,t8
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8


    # 1    
    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult81(m,1,p-1,t+0,t+3,94,p)
    mult81(m,1,1,t+1,t+2,95,p)

    m[e1][:] = m[94]
    # m[e1+1] = m[95]



def equation27(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p    
        

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t3 = [1,0,p-4,0,p-10,0,p-4,0,1]
    t4 = [0,4,0,4,0,p-4,0,p-4,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]
    t7 = [1,0,p-28,0,70,0,p-28,0,1]
    t8 = [0,8,0,p-56,0,56,0,p-8,0]


    if d2[0]==2:
        c1,s1 = t1,t2
    if d2[0]==4:
        c1,s1 = t3,t4
    if d2[0]==6:
        c1,s1 = t5,t6
    if d2[0]==8:
        c1,s1 = t7,t8
        
    if d2[1]==2:
        c2,s2 = t1,t2
    if d2[1]==4:
        c2,s2 = t3,t4
    if d2[1]==6:
        c2,s2 = t5,t6
    if d2[1]==8:
        c2,s2 = t7,t8


    # 1    
    t = 81
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult81(m,1,p-1,t+0,t+3,94,p)
    mult81(m,1,1,t+1,t+2,95,p)

    m[e1][:] = m[95]


def equation28(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p    

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]



    i3 = p-i2
    t1 = [1, 6*i2%p, p-14, 14*i3%p, 0, 14*i3%p, 14, 6*i2%p, p-1]

    t1 = [1, 2*i2%p, 2, 6*i2%p, 0, 6*i2%p, p-2, 2*i2%p, p-1]
    
    t2 = [0, 2, 0, p-2, 0, p-2, 0, 2, 0]
    t3 = [0,0,4,0,0,0,p-4,0,0]
    t4 = [0,0,0,8,0,8,0,0,0]

    t2 = [1,0,p-2,0,0,0,2,0,p-1]
    t3 = [0, 2, 0, p-2, 0, p-2, 0, 2, 0]
    t4 = [0,0,4,0,0,0,p-4,0,0]



    # 1    
    t = 81
    mult2(m,t+0,t1,t2,p)
    mult2(m,t+1,t1,t3,p)    
    mult2(m,t+2,t1,t4,p)

    t1 = (2*d[1])*(2*l2-1)
    a3 = exp2a(t1,a2,p)
    a3[1] = (p+a3[1])%p

    a3[0],a3[1] = p-a3[1],a3[0]
    
    mult81(m,a3[0],a3[1],t+0,t+1,94,p)
    mult81(m,a3[0],a3[1],t+1,t+2,95,p)
    t1 = (2*d[1])*(2*l2-1)//2
    a4 = exp2a(t1,a2,p)
    a4[1] = (p+a4[1])%p
    
    mult81(m,a4[0],a4[1],94,95,96,p)
    
    # m[77][:] = m[96]


    # 2  
    t = 81
    
    t1 = [1, 2*i2%p, 2, 6*i2%p, 0, 6*i2%p, p-2, 2*i2%p, p-1]
    
    c1 = [1,0,2,0,0,0,p-2,0,p-1]
    s1 = [0,2,0,6,0,6,0,2,0]
    
    mult2(m,t+0,t1,c1,p)
    mult2(m,t+1,t1,s1,p)

    t1 = (2*d[1])*(2*l2-1)//2
    a3 = exp2a(t1,a2,p)
    a3[1] = (p+a3[1])%p
    mult81(m,a3[0],a3[1],t+0,t+1,97,p)

    t1 = (2*d[1])*(2*l2-1)
    a3 = exp2a(t1,a2,p)
    a3[1] = (p+a3[1])%p
    mult81(m,p-2,a3[1],96,97,77,p)



def equation28(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p    

    t1 = [1,0,2,0,0,0,p-2,0,p-1]
    t2 = [0,2,0,6,0,6,0,2,0]
    t5 = [1,0,p-14,0,0,0,14,0,p-1]
    t6 = [0,6,0,p-14,0,p-14,0,6,0]



    i3 = p-i2
    t1 = [1, 6*i2%p, p-14, 14*i3%p, 0, 14*i3%p, 14, 6*i2%p, p-1]

    t1 = [1, 2*i2%p, 2, 6*i2%p, 0, 6*i2%p, p-2, 2*i2%p, p-1]
    
    t2 = [0, 2, 0, p-2, 0, p-2, 0, 2, 0]
    t3 = [0,0,4,0,0,0,p-4,0,0]
    t4 = [0,0,0,8,0,8,0,0,0]

    t2 = [1,0,p-2,0,0,0,2,0,p-1]
    t3 = [0, 2, 0, p-2, 0, p-2, 0, 2, 0]
    t4 = [0,0,4,0,0,0,p-4,0,0]

    t2 = [0,2,0,p-6,0,6,0,p-2,0]
    t3 = [0,0,4,0,p-8,0,4,0,0]
    t4 = [0,0,0,8,0,p-8,0,0,0]
    t5 = [0,0,0,0,16,0,0,0,0]



    # 1   
    t = 81
    mult2(m,t+0,t1,t2,p)
    mult2(m,t+1,t1,t3,p)    
    mult2(m,t+2,t1,t4,p)
    mult2(m,t+3,t1,t5,p)

    t1 = (2*d[1])*(2*l2-1)
    a3 = exp2a(t1,a2,p)
    a3[1] = (p+a3[1])%p
    
    mult81(m,a3[0],a3[1],t+0,t+1,94,p)
    mult81(m,a3[0],a3[1],t+1,t+2,95,p)
    mult81(m,a3[0],a3[1],t+2,t+3,96,p)
    
    t1 = (2*d[1])*(2*l2-1)//2
    a4 = exp2a(t1,a2,p)
    a4[1] = (p+a4[1])%p
    
    mult81(m,a4[0],a4[1],94,95,97,p)
    mult81(m,a4[0],a4[1],95,96,98,p)
    
    mult81(m,a4[0],a4[1],97,98,96,p)
    
    # m[79][:] = m[96]



    # 2
    t1 = [1, 2*i2%p, 2, 6*i2%p, 0, 6*i2%p, p-2, 2*i2%p, p-1]  

    t2 = [1,0,0,0,p-2,0,0,0,1]
    t3 = [0,2,0,2,0,p-2,0,p-2,0]
    t4 = [0,0,4,0,8,0,4,0,0]

   
    t = 81
    mult2(m,t+0,t1,t2,p)
    mult2(m,t+1,t1,t3,p)    
    mult2(m,t+2,t1,t4,p)

    t1 = (2*d[1])*(2*l2-1)//1
    a3 = exp2a(t1,a2,p)
    
    mult81(m,p-a3[1],a3[0],t+0,t+1,79,p)
    mult81(m,a3[1],p-a3[0],t+1,t+2,95,p)
    mult81(m,a3[0],a3[1],94,95,97,p)

    t1 = (2*d[1])*(2*l2-1)
    a3 = exp2a(t1,a2,p)
    a3[1] = (p+a3[1])%p
    # mult81(m,p-2,a3[1],96,97,80,p)
  


def init81(g,l2,d,d1,h1,h2,p):
    k = series(g,p)
    a2 = k.a2
    m = init1(4*27,81)
    b1 = init2(81)

    c = 0
    for i in range(9):
        m[c] = init2(81)
        s = [0,i]
        equal2(m,c,s,1)
        s = [2,i]
        equal2(m,c,s,4)
        s = [4,i]
        equal2(m,c,s,6)
        s = [6,i]
        equal2(m,c,s,4)
        s = [8,i]
        equal2(m,c,s,1)
        c = c+1

    for i in range(8):
        m[c] = init2(81)
        s = [i,0]
        equal2(m,c,s,1)
        s = [i,2]
        equal2(m,c,s,4)
        s = [i,4]
        equal2(m,c,s,6)
        s = [i,6]
        equal2(m,c,s,4)
        s = [i,8]
        equal2(m,c,s,1)
        c = c+1

    
    for i in range(9):
        b1[i] = h2[i]

    for i in range(8):
        b1[i+9] = h1[i]

    d3 = [[2,2] , [2,4] , [2,6] , [2,8],
          [4,2] , [4,4] , [4,6] , [4,8],
          [6,2] , [6,4] , [6,6] , [6,8],
          [8,2] , [8,4] , [8,6] , [8,8]]

    for i in range(16):
        d2 = d3[i]
        equation20v2(k,l2,d,d1,d2,m,2*i+17,b1)


    for i in range(4):
        d2 = [2*i+2]
        equation21v2(k,l2,d,d1,d2,m,i+49,b1)


    d3 = [[2,2] , [2,4] , [2,6] , [2,8],
          [4,2] , [4,4] , [4,6] , [4,8],
          [6,2] , [6,4] , [6,6] , [6,8]]

    for i in range(12):
        d2 = d3[i]
        equation22v2(k,l2,d,d1,d2,m,2*i+53,b1)
    
    equation26(k,l2,d,d1,[2,2],m,77,b1)
    equation26(k,l2,d,d1,[2,6],m,78,b1)
    equation26(k,l2,d,d1,[2,4],m,79,b1)
    equation26(k,l2,d,d1,[2,8],m,80,b1)
    
    return(m,b1)


p = 4013

m = init1(27*4,81)
v = init2(81)


k = series(0,p)
k = series(exp1(1,k.g,p),p)
g = k.g

l2 = 17
d1 = 16
d = [d1*d1//2 , 1024]

k81 = series27(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)

h1 = series26(-l2,l2,k.g,k.a2,k.i2,[d[0]],d1*d1,p)
print("\n \n h1 = ",h1)

h2 = series26(-l2,l2,k.g,k.a2,k.i2,[d[1]],d1*d1,p)
print("\n \n h2 = ",h2)


m4,b4 = init81(g,l2,d,d1,h1,h2,p)
b3 = init2(4*27)
for i in range(4*27):
    b3[i] = multcnvl2(m4[i],k81,p)

print("\n \n b3 = ")
display81(b3)

print("\n \n b4 = ")
display81v2(b4)


m = m4
v1 = init2(81)
v1[:] = b3

print("\n \n")
# display(0,80,0,80,m,v1)

h1 = [0 for i in range(81)]

solve2(81,m,v1,p)
t1 = det(81,m)
print("\n \n det = ",t1)
display(0,5,70,80,m,v1)
l2solve(81,h1,v1,m,p)
print("\n \n after solve2 = ",h1)
print("\n \n k81 = ")
display81v2(k81)
        
