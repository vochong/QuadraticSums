from group51 import *

def display25(b):
    for j in range(5):
        print("(",end=' ')
        for k in range(5):
            print("{0:2}".format(b[5*j+k]),end=' ')
        print(")",end=' ')        
        
def display50(b):
    for i in range(2):
        if i==1:
            print()
        for j in range(5):
            print("(",end=' ')
            for k in range(5):
                print("{0:2}".format(b[25*i+5*j+k]),end=' ')
            print(")",end=' ')            

def equal2(m,c,s,t):
    s1 = 5*s[0]+s[1]
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
    # m[e1] = init2(125)
    m[e1] = init2(25)
    for i in range(5):
        for j in range(5):
            t1 = c1[i]
            t2 = c2[j]
            t3 = t1*t2%p
            t = 5*i+j
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

def mult25(m,c1,c2,d1,d2,d3,p):
    for i in range(25):
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

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)
    
    # 1
    l3 = l2*d1
    mult25(m,1,p-1,t,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]
    # h1 = series23(-20,20,4,k.g,k.a2,t1,1,p)
    h1 = series23(-l3,l3,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation21 t1 = ",t1,"   h1 = ",h1)
    
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult25(m,a3[1],a3[0],30,31,e1,p)    
    
    # 2
    mult25(m,1,1,t,t+3,32,p)
    mult25(m,1,p-1,t+1,t+2,33,p)

    t2 = d2[0]*d[0]-d2[1]*d[1]
    h2 = series23(-l3,l3,d1,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation21 t2 = ",t2,"   h2 = ",h2)
    
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult25(m,a3[1],a3[0],32,33,e1+1,p)  

def equation22(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    for i in range(10):
        m[i+25] = init2(25)
    

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
 

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)
    
    # 1
    mult25(m,1,p-1,t,t+3,45,p)
    mult25(m,1,1,t+1,t+2,46,p)

    t1 = d[0]+d2[0]*d[1]
    h1 = series23(-19,21,4,k.g,k.a2,t1,1,p)
    print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)


    t1 = exp1(20*20,g,p)
    l3 = 19
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,30,p)
    mult25(m,s,0,46,46,31,p)

    """
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],133,134,e1,p)
    """
    
    # 2
    mult25(m,1,1,t,t+3,45,p)
    mult25(m,1,p-1,t+1,t+2,46,p)

    t2 = d[0]-d2[0]*d[1]
    h2 = series23(-19,21,4,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation22 t2 = ",t2,"   h2 = ",h2)

    t1 = exp1(20*20,g,p)
    l3 = 19
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,32,p)
    mult25(m,s,0,46,46,33,p)

    """
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],133,134,e1,p)
    """

    c1 = [1 , (p-3)*i2%p   , p-3,          i2,    0]
    s1 = [0,  1,            (p-3)*i2%p,    p-3,       i2]

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)
  
    # 3
    mult25(m,1,p-1,t,t+3,45,p)
    mult25(m,1,1,t+1,t+2,46,p)

    t3 = d[0]+d2[0]*d[1]
    h3 = series23(-23,17,4,k.g,k.a2,t3,1,p)
    print("\n \n in equation22 t3 = ",t3,"   h3 = ",h3)

    t1 = exp1(20*20,g,p)
    l3 = 23
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,35,p)
    mult25(m,s,0,46,46,36,p)

    """
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],133,134,e1,p)
    """
  
    # 4
    mult25(m,1,1,t,t+3,45,p)
    mult25(m,1,p-1,t+1,t+2,46,p)

    t4 = d[0]-d2[0]*d[1]
    h4 = series23(-23,17,4,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation22 t4 = ",t4,"   h4 = ",h4)


    t1 = exp1(20*20,g,p)
    l3 = 23
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,37,p)
    mult25(m,s,0,46,46,38,p)

    """
    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],133,134,e1,p)
    """

    # m[18][:] = m[30]
    # m[19][:] = m[31]
    # m[20][:] = m[35]
    # m[21][:] = m[36]    

    # 1
    s1 = d[0]+d2[0]*d[1]
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],30,31,40,p)
    mult25(m,(p-a3[1])%p,a3[0],30,31,41,p)
    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],35,36,42,p)
    mult25(m,(p-a4[1])%p,a4[0],35,36,43,p)

    mult25(m,1,p-1,40,42,e1,p)
    mult25(m,1,p-1,41,43,e1+1,p)

    l3 = l2*d1+1
    l4 = l2*d1+3
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
    t4 = (t1+t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t4 = ",t4)

    # 2
    s = d[0]-d2[0]*d[1]
    s1 = abs(s)
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],32,33,45,p)
    mult25(m,(p-a3[1])%p,a3[0],32,33,46,p)
    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],37,38,47,p)
    mult25(m,(p-a4[1])%p,a4[0],37,38,48,p)

    mult25(m,1,p-1,45,47,e1+2,p)
    # mult25(m,1,p-1,46,48,e1+3,p)

    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t5 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t5 = ",t5)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t6 = (t1+t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n in equation22 t6 = ",t6)

def equation23(k,l2,d,d1,d2,m,e1,b1):
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

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)
    
    # 1
    l3 = l2*d1
    mult25(m,1,p-1,t,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    t1 = d2[0]*d[0]+d2[1]*d[1]

    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    mult25(m,a3[1],a3[0],30,31,e1,p)    
    
    # 2
    mult25(m,1,1,t,t+3,32,p)
    mult25(m,1,p-1,t+1,t+2,33,p)

    t2 = d2[0]*d[0]-d2[1]*d[1]
    
    a3 = exp2a(abs(l2*t2),a2,p)
    a3[1] = (p-a3[1])%p
    if t2>0:
        a3[1] = (p-a3[1])%p
    mult25(m,a3[1],a3[0],32,33,e1+1,p)

def equation24(k,l2,d,d1,d2,m,e1,b1):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    for i in range(10):
        m[i+25] = init2(25)    

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

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)
    
    # 1
    mult25(m,1,p-1,t,t+3,45,p)
    mult25(m,1,1,t+1,t+2,46,p)

    """
    t1 = d[0]+d2[0]*d[1]
    h1 = series23(-19,21,4,k.g,k.a2,t1,1,p)
    print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)
    """

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    l3 = d4-(d1//4)
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,30,p)
    mult25(m,s,0,46,46,31,p)
    
    # 2
    mult25(m,1,1,t,t+3,45,p)
    mult25(m,1,p-1,t+1,t+2,46,p)

    """
    t2 = d[0]-d2[0]*d[1]
    h2 = series23(-19,21,4,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation22 t2 = ",t2,"   h2 = ",h2)
    """

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    l3 = d4-(d1//4)
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,32,p)
    mult25(m,s,0,46,46,33,p)

    c1 = [1 , (p-3)*i2%p   , p-3,          i2,    0]
    s1 = [0,  1,            (p-3)*i2%p,    p-3,       i2]

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)
  
    # 3
    mult25(m,1,p-1,t,t+3,45,p)
    mult25(m,1,1,t+1,t+2,46,p)

    """
    t3 = d[0]+d2[0]*d[1]
    h3 = series23(-23,17,4,k.g,k.a2,t3,1,p)
    print("\n \n in equation22 t3 = ",t3,"   h3 = ",h3)
    """

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    l3 = d4+3*(d1//4)
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,35,p)
    mult25(m,s,0,46,46,36,p)
  
    # 4
    mult25(m,1,1,t,t+3,45,p)
    mult25(m,1,p-1,t+1,t+2,46,p)

    """
    t4 = d[0]-d2[0]*d[1]
    h4 = series23(-23,17,4,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation22 t4 = ",t4,"   h4 = ",h4)
    """

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    l3 = d4+3*(d1//4)
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,37,p)
    mult25(m,s,0,46,46,38,p)    

    # 1
    s1 = d[0]+d2[0]*d[1]
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],30,31,40,p)
    mult25(m,(p-a3[1])%p,a3[0],30,31,41,p)
    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],35,36,42,p)
    mult25(m,(p-a4[1])%p,a4[0],35,36,43,p)

    mult25(m,1,p-1,40,42,e1,p)
    mult25(m,1,p-1,41,43,e1+1,p)

    l3 = l2*d1+(d1//4)
    l4 = l2*d1+3*(d1//4)
    # print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    # print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    # print("\n \n in equation22 t4 = ",t4)
    b1[e1] = t3
    b1[e1+1] = t4

    # 2
    s = d[0]-d2[0]*d[1]
    s1 = abs(s)
    s2 = l2*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],32,33,45,p)
    mult25(m,(p-a3[1])%p,a3[0],32,33,46,p)
    s3 = (l2+1)*s1
    a4 = exp2a(s3,a2,p)
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],37,38,47,p)
    mult25(m,(p-a4[1])%p,a4[0],37,38,48,p)

    mult25(m,1,p-1,45,47,e1+2,p)
    # mult25(m,1,p-1,46,48,e1+3,p)

    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t5 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    # print("\n \n in equation22 t5 = ",t5)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t6 = (t1+t2)%p
    # print("\n \n in equation22  t1 = {0}  t2 = {1}".format(t1,t2))
    # print("\n \n in equation22 t6 = ",t6)
    b1[e1+2] = t5    

def init25(g,l2,d,d1,h1,h2,p):
    k = group(g,p)
    a2 = k.a2
    m = init1(50,25)
    b1 = init2(25)

    c = 0
    for i in range(5):
        m[c] = init2(25)
        s = [0,i]
        equal2(m,c,s,1)
        s = [2,i]
        equal2(m,c,s,2)
        s = [4,i]
        equal2(m,c,s,1)
        c = c+1

    for i in range(4):
        m[c] = init2(25)
        s = [i,0]
        equal2(m,c,s,1)
        s = [i,2]
        equal2(m,c,s,2)
        s = [i,4]
        equal2(m,c,s,1)
        c = c+1

    d3 = [[2,2] , [2,4] , [4,2] , [4,4]]

    # d1 = 4
    for i in range(4):
        d2 = d3[i]
        equation23(k,l2,d,d1,d2,m,2*i+9,b1)
    
    d2 = [2]    
    equation24(k,l2,d,d1,d2,m,17,b1)

    d2 = [4]
    equation24(k,l2,d,d1,d2,m,20,b1)    

    # d1 = 4
    # d2 = [2,4]
    # equation27(k,l2,d,d1,d2,m,17,b1)
    
    equation29(k,l2,d,d1,m)
    equation30(k,l2,d,d1,m)

    for i in range(5):
        b1[i] = h2[i]
    for i in range(4):
        b1[i+5] = h1[i]
    
    return(m,b1)  

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

    # 1
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]
   
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,   p-1,        (p-1)*i3%p]

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-i2,t+0,t+2,23,p)
    # mult25(m,1,1,t+1,t+2,24,p)

    # 2
    c1,s1 = t1,t2
    c2,s2 = t1,t2

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,23,p)
    # mult25(m,1,1,t+1,t+2,24,p)  
    
    # 3
    c1,s1 = t1,t2
    c2,s2 = t3,t4

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,24,p)
    # mult25(m,1,1,t+1,t+2,24,p)

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

    # 1
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    c2 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s2 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    g1 = exp1(20*20,g,p)
    t1 = (3*d[0]+3*d[1])
    l3 = (d[0]+d[1])//8
    l4 = l3-20
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,25,p)
    mult25(m,t2,0,31,31,26,p)

    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)    

    # 2
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    i3 = p-i2
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,   p-1,        (p-1)*i3%p]

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,30,p)
    mult25(m,1,p-1,t+1,t+2,31,p)

    g1 = exp1(20*20,g,p)
    t1 = (3*d[0]-3*d[1])
    l3 = (d[0]-d[1])//8
    l4 = l3-20
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,27,p)
    mult25(m,t2,0,31,31,28,p)

    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)

    # 3
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]

    c1,s1 = t1,t2
    c2,s2 = t1,t2

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,30,p)
    mult25(m,1,p-1,t+1,t+2,31,p)

    t1 = (2*d[0]-2*d[1])
    # mult25(m,1,0,30,30,27,p)
    # mult25(m,1,0,31,31,28,p)

    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)   

    # 4
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]

    c1,s1 = t1,t2
    c2,s2 = t1,t2

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,32,p)
    mult25(m,1,1,t+1,t+2,33,p)

    t1 = (2*d[0]+2*d[1])

    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)

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

    # 1
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    i3 = (p-i2)%p
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,   p-1,        (p-1)*i3%p]

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    g1 = exp1(20*20,g,p)
    t1 = (3*d[0]+3*d[1])
    l3 = (d[0]-d[1])//8
    l4 = l3-20
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,25,p)
    mult25(m,t2,0,31,31,26,p)

    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)    

    # 2
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    i3 = (p+i2)%p
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,   p-1,        (p-1)*i3%p]

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,30,p)
    mult25(m,1,p-1,t+1,t+2,31,p)

    g1 = exp1(20*20,g,p)
    t1 = (3*d[0]-3*d[1])
    l3 = (d[0]+d[1])//8
    l4 = l3-20
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,27,p)
    mult25(m,t2,0,31,31,28,p)

    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)

    # 3
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    c1,s1 = t1,t2
    c2,s2 = t3,t4

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,30,p)
    mult25(m,1,p-1,t+1,t+2,31,p)

    t1 = (2*d[0]-4*d[1])
    # mult25(m,1,0,30,30,27,p)
    # mult25(m,1,0,31,31,28,p)

    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)   

    # 4
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    c1,s1 = t1,t2
    c2,s2 = t3,t4

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,32,p)
    mult25(m,1,1,t+1,t+2,33,p)

    t1 = (2*d[0]+4*d[1])

    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)   

def equation29(k,l2,d,d1,m):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p 

    # 1
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    c2 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s2 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (3*d[0]+3*d[1])
    l3 = (d[0]+d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,25,p)
    mult25(m,t2,0,31,31,26,p)

    """
    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)
    """    

    # 2
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    i3 = p-i2
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,   p-1,        (p-1)*i3%p]

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,30,p)
    mult25(m,1,p-1,t+1,t+2,31,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (3*d[0]-3*d[1])
    l3 = (d[0]-d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,27,p)
    mult25(m,t2,0,31,31,28,p)

    """
    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)
    """

    # 3
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]

    c1,s1 = t1,t2
    c2,s2 = t1,t2

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,30,p)
    mult25(m,1,p-1,t+1,t+2,31,p)

    t1 = (2*d[0]-2*d[1])
    # mult25(m,1,0,30,30,27,p)
    # mult25(m,1,0,31,31,28,p)

    """
    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)
    """

    # 4
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]

    c1,s1 = t1,t2
    c2,s2 = t1,t2

    t = 35
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,32,p)
    mult25(m,1,1,t+1,t+2,33,p)

    t1 = (2*d[0]+2*d[1])

    """
    print("\n \n in equation27 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation27 t1 = ",t1,"   h1 = ",h1)
    """

def equation30(k,l2,d,d1,m):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    # 1
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    i3 = (p-i2)%p
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,   p-1,        (p-1)*i3%p]

    t = 40
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,45,p)
    mult25(m,1,1,t+1,t+2,46,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (3*d[0]+3*d[1])
    l3 = (d[0]-d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,45,45,35,p)
    mult25(m,t2,0,46,46,36,p)

    """
    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)
    """    

    # 2
    i3 = (p+i2)%p
    c1 = [1,  i2,  p-3,     (p-3)*i2%p,  0]
    s1 = [0,  3,   3*i2%p,   p-1,        (p-1)*i2%p]

    i3 = (p+i2)%p
    c2 = [1,  i3,  p-3,     (p-3)*i3%p,  0]
    s2 = [0,  3,   3*i3%p,   p-1,        (p-1)*i3%p]

    t = 40
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,45,p)
    mult25(m,1,p-1,t+1,t+2,46,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (3*d[0]-3*d[1])
    l3 = (d[0]+d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,45,45,37,p)
    mult25(m,t2,0,46,46,38,p)

    """
    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(l3-20,l3+20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)
    """

    # 3
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    c1,s1 = t1,t2
    c2,s2 = t3,t4

    t = 45
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,1,t+0,t+3,40,p)
    mult25(m,1,p-1,t+1,t+2,41,p)

    t1 = (2*d[0]-4*d[1])
    # mult25(m,1,0,30,30,27,p)
    # mult25(m,1,0,31,31,28,p)

    """
    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)
    """   

    # 4
    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    c1,s1 = t1,t2
    c2,s2 = t3,t4

    t = 45
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,42,p)
    mult25(m,1,1,t+1,t+2,43,p)

    t1 = (2*d[0]+4*d[1])

    """
    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(-20,20,4,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)
    """   

def init5(k,m1,g,d,s,flag4):
    s1 = s[0]
    s2 = s[1]
    s3 = s[2]
    s4 = s[3]
    s5 = s[4]
    if flag4==1:
        
        c1 = exp1((p-1)//3,g,p)
        c2 = c1**2%p

        # 1
        t1 = c2
        t2 = 1
        t3 = c1
        t4 = 0
        t5 = 0
        # t20 = (t1*s1[1]+t2*s2[1]+t3*s3[1]+t4*s3[1]+t5*s3[1])%p
        t20 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s3[3]+t5*s3[3])%p
        print("\n \n in init5 t20 = ",t20)
        m1[0] = [t1,t2,t3,t4,t5]

        # 2
        t1 = (1+(p-1)*c1)%p
        t2 = 0 
        t3 = (3*c2)%p
        t4 = c2-1
        t5 = c2-1
        t21 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init5 t21 = ",t21)
        m1[1] = [t1,t2,t3,t4,t5]

        # 3
        t1 = 0
        t2 = c2
        t3 = c2
        t4 = p-1
        t5 = p-1
        t22 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init5 t22 = ",t22)
        m1[2] = [t1,t2,t3,t4,t5]

        c = 4
        i2 = k.i2
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p
        
        # 4
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t23 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t23 = ",t23)

        # 5
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t24 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n  in init5 t24 = ",t24)

        # 6
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t25 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t25 = ",t25)  

        # 9
        t1 = (2*c2+c1)%p
        t2 = p-3
        t3 = 0
        t4 = (2*c1+1)%p
        t5 = (2*c1+1)%p
        t28 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t28 = ",t28)
        m1[3] = [t1,t2,t3,t4,t5]

        # 10    
        t1 = (2*c1+c2)%p
        t2 = 0
        t3 = p-3
        t4 = (2*c2+1)%p
        t5 = (2*c2+1)%p
        t29 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t29 = ",t29)
        m1[4] = [t1,t2,t3,t4,t5]

        t1 = (c1*t23+c2*t24+c2*t25)%p
        t2 = (c2*t23+c1*t24+c1*t25)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)        

        c = 6
        i2 = k.i2
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p

        # 14
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t30 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t30 = ",t30)

        # 15
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t31 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t31 = ",t31)

        # 16
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t32 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t32 = ",t32)

        # 17
        t1 = (2*c1+1)%p
        t2 = 0
        t3 = 0
        t4 = (2*c2+c1)%p
        t5 = (2*c1+1)%p
        t33 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t33 = ",t33)

        # 18
        t1 = (2*c2+1)%p
        t2 = 0
        t3 = 0
        t4 = (2*c2+1)%p
        t5 = (2*c1+c2)%p
        t34 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t34 = ",t34)    
   
        # 19
        t1 = (2*c1+1)%p
        t2 = p-3
        t3 = 0  
        t4 = (2*c1+1)%p
        t5 = (2*c2+c1)%p
        t35 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t35 = ",t35)
        m1[2] = [t1,t2,t3,t4,t5]

        # 20
        t1 = (2*c2+1)%p
        t2 = 0
        t3 = p-3 
        t4 = (2*c1+c2)%p
        t5 = (2*c2+1)%p
        t36 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t36 = ",t36)
        # m[4] = [t1,t2,t3,t4,t5]
    
        t1 = (c1*t30+1*t31+c1*t32)%p
        t2 = (c2*t30+1*t31+c2*t32)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)

    if flag4==2:
        
        c1 = exp1((p-1)//3,g,p)
        c2 = c1**2%p

        # 1
        t1 = c2
        t2 = 1
        t3 = c1
        t4 = 0
        t5 = 0
        # t20 = (t1*s1[1]+t2*s2[1]+t3*s3[1]+t4*s3[1]+t5*s3[1])%p
        t20 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s3[3]+t5*s3[3])%p
        print("\n \n in init5 t20 = ",t20)
        m1[0] = [t1,t2,t3,t4,t5]

        # 2
        t1 = (1+(p-1)*c1)%p
        t2 = 0 
        t3 = (3*c2)%p
        t4 = c2-1
        t5 = c2-1
        t21 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init5 t21 = ",t21)
        m1[1] = [t1,t2,t3,t4,t5]

        # 3
        t1 = 0
        t2 = c2
        t3 = c2
        t4 = p-1
        t5 = p-1
        t22 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init5 t22 = ",t22)
        m1[2] = [t1,t2,t3,t4,t5]

        c = 4
        i2 = k.i2
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p

        # 4
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t23 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t23 = ",t23)

        # 5
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t24 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n  in init5 t24 = ",t24)

        # 6
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t25 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t25 = ",t25)    
        
        # 9
        t1 = (2*c1+1)%p
        t2 = p-3
        t3 = 0
        t4 = (2*c1+1)%p
        t5 = (2*c2+c1)%p
        t28 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t28 = ",t28)
        m1[2] = [t1,t2,t3,t4,t5]

        # 10
        t1 = (2*c2+1)%p
        t2 = 0
        t3 = p-3
        t4 = (2*c1+c2)%p
        t5 = (2*c2+1)%p
        t29 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t29 = ",t29)
        # m1[4] = [t1,t2,t3,t4,t5]          

        print("==================== hi")
        print("\n \n")
        t1 = 1
        t2 = 1
        t3 = 1
        for i3 in range(3):
            for j3 in range(3):
                for k3 in range(3):
                    if i3==0:
                        t1 = 1
                    if i3==1:
                        t1 = c1
                    if i3==2:
                        t1 = c2
                
                    if j3==0:
                        t2 = 1
                    if j3==1:
                        t2 = c1
                    if j3==2:
                        t2 = c2

                    if k3==0:
                        t3 = 1
                    if k3==1:
                        t3 = c1
                    if k3==2:
                        t3 = c2

                    t4 = (t1*t23+t2*t24+t3*t25)%p
                    a = [i3,j3,k3]
                    b = [t1,t2,t3]
                    print(9*i3+3*j3+k3,a,b,t4)

        t1 = (c1*t23+c2*t24+c2*t25)%p
        t2 = (c2*t23+c1*t24+c1*t25)%p

        t1 = (c1*t23+c1*t24+1*t25)%p
        t2 = (c2*t23+c2*t24+1*t25)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)

        c = 6
        i2 = (p-k.i2)%p
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p

        # 14
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t30 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t30 = ",t30)

        # 15
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t31 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t31 = ",t31)

        # 16
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t32 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t32 = ",t32)
  
        # 19
        t1 = (2*c2+c1)%p
        t2 = p-3
        t3 = 0
        t4 = (2*c1+1)%p
        t5 = (2*c1+1)%p
        t33 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t33 = ",t33)
        m1[3] = [t1,t2,t3,t4,t5]

        # 20    
        t1 = (2*c1+c2)%p
        t2 = 0
        t3 = p-3
        t4 = (2*c2+1)%p
        t5 = (2*c2+1)%p
        t34 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init5 t34 = ",t34)
        m1[4] = [t1,t2,t3,t4,t5]

        print("==================== hi2")
        print("\n \n")
        t1 = 1
        t2 = 1
        t3 = 1
        for i3 in range(3):
            for j3 in range(3):
                for k3 in range(3):
                    if i3==0:
                        t1 = 1
                    if i3==1:
                        t1 = c1
                    if i3==2:
                        t1 = c2
                
                    if j3==0:
                        t2 = 1
                    if j3==1:
                        t2 = c1
                    if j3==2:
                        t2 = c2

                    if k3==0:
                        t3 = 1
                    if k3==1:
                        t3 = c1
                    if k3==2:
                        t3 = c2

                    t4 = (t1*t30+t2*t31+t3*t32)%p
                    a = [i3,j3,k3]
                    b = [t1,t2,t3]
                    print(9*i3+3*j3+k3,a,b,t4)

        t1 = (c1*t23+c2*t24+c2*t25)%p
        t2 = (c2*t23+c1*t24+c1*t25)%p

        t1 = (c1*t30+c1*t31+1*t32)%p
        t2 = (c2*t30+c2*t31+1*t32)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)

def init6(k,m1,g,d,s,flag4):
    s1 = s[0]
    s2 = s[1]
    s3 = s[2]
    s4 = s[3]
    s5 = s[4]
    if flag4==1:
        
        c1 = exp1((p-1)//3,g,p)
        c2 = c1**2%p

        # 1
        t1 = c2
        t2 = 1
        t3 = c1
        t4 = 0
        t5 = 0
        # t20 = (t1*s1[1]+t2*s2[1]+t3*s3[1]+t4*s3[1]+t5*s3[1])%p
        t20 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s3[3]+t5*s3[3])%p
        print("\n \n in init6 t20 = ",t20)
        m1[0] = [t1,t2,t3,t4,t5]


        # 2
        t1 = (1+(p-1)*c1)%p
        t2 = 0 
        t3 = (3*c2)%p
        t4 = c2-1
        t5 = c2-1
        t21 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init6 t21 = ",t21)
        m1[1] = [t1,t2,t3,t4,t5]


        # 3
        t1 = 0
        t2 = c2
        t3 = c2
        t4 = p-1
        t5 = p-1
        t22 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init6 t22 = ",t22)
        m1[2] = [t1,t2,t3,t4,t5]



        c = 4
        i2 = k.i2
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p

        # 4
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t23 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t23 = ",t23)

        # 5
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t24 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n  in init6 t24 = ",t24)

        # 6
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t25 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t25 = ",t25)    
        
        # 9
        t1 = (2*c1+1)%p
        t2 = p-3
        t3 = 0
        t4 = (2*c2+c1)%p
        t5 = (2*c1+1)%p
        t28 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t28 = ",t28)
        m1[2] = [t1,t2,t3,t4,t5]


        # 10
        t1 = (2*c2+1)%p
        t2 = 0
        t3 = p-3
        t4 = (2*c2+1)%p
        t5 = (2*c1+c2)%p
        t29 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t29 = ",t29)
        # m1[4] = [t1,t2,t3,t4,t5]
        
        print()

        t1 = (c1*t23+c2*t24+c2*t25)%p
        t2 = (c2*t23+c1*t24+c1*t25)%p        
        
        t1 = 1
        t2 = 1
        t3 = 1
        for i3 in range(3):
            for j3 in range(3):
                for k3 in range(3):
                    if i3==0:
                        t1 = 1
                    if i3==1:
                        t1 = c1
                    if i3==2:
                        t1 = c2
                
                    if j3==0:
                        t2 = 1
                    if j3==1:
                        t2 = c1
                    if j3==2:
                        t2 = c2

                    if k3==0:
                        t3 = 1
                    if k3==1:
                        t3 = c1
                    if k3==2:
                        t3 = c2

                    t4 = (t1*t23+t2*t24+t3*t25)%p
                    a = [i3,j3,k3]
                    b = [t1,t2,t3]
                    print(9*i3+3*j3+k3,a,b,t4)

        t1 = (c1*t23+c2*t24+c2*t25)%p
        t2 = (c2*t23+c1*t24+c1*t25)%p

        t1 = (c1*t23+c1*t24+1*t25)%p
        t2 = (c2*t23+c2*t24+1*t25)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)
        

        
        c = 6
        i2 = p-k.i2
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p

        # 14
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t30 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t30 = ",t30)

        # 15
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t31 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t31 = ",t31)
        
        # 16
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t32 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t32 = ",t32)  
    
        # 17
        t1 = (2*c2+c1)%p
        t2 = p-3
        t3 = 0
        t4 = (2*c1+1)%p
        t5 = (2*c1+1)%p
        t33 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t33 = ",t33)
        m1[3] = [t1,t2,t3,t4,t5]

        # 18  
        t1 = (2*c1+c2)%p
        t2 = 0
        t3 = p-3
        t4 = (2*c2+1)%p
        t5 = (2*c2+1)%p
        t34 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t34 = ",t34)
        m1[4] = [t1,t2,t3,t4,t5]   

        
        t1 = 1
        t2 = 1
        t3 = 1
        for i3 in range(3):
            for j3 in range(3):
                for k3 in range(3):
                    if i3==0:
                        t1 = 1
                    if i3==1:
                        t1 = c1
                    if i3==2:
                        t1 = c2
                
                    if j3==0:
                        t2 = 1
                    if j3==1:
                        t2 = c1
                    if j3==2:
                        t2 = c2

                    if k3==0:
                        t3 = 1
                    if k3==1:
                        t3 = c1
                    if k3==2:
                        t3 = c2

                    t4 = (t1*t30+t2*t31+t3*t32)%p
                    a = [i3,j3,k3]
                    b = [t1,t2,t3]
                    print(9*i3+3*j3+k3,a,b,t4)

 
    
        t1 = (c1*t30+c2*t31+c2*t32)%p
        t2 = (c2*t30+c1*t31+c1*t32)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)


    if flag4==2:
        
        c1 = exp1((p-1)//3,g,p)
        c2 = c1**2%p

        # 1
        t1 = c2
        t2 = 1
        t3 = c1
        t4 = 0
        t5 = 0
        # t20 = (t1*s1[1]+t2*s2[1]+t3*s3[1]+t4*s3[1]+t5*s3[1])%p
        t20 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s3[3]+t5*s3[3])%p
        print("\n \n in init6 t20 = ",t20)
        m1[0] = [t1,t2,t3,t4,t5]


        # 2
        t1 = (1+(p-1)*c1)%p
        t2 = 0 
        t3 = (3*c2)%p
        t4 = c2-1
        t5 = c2-1
        t21 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init6 t21 = ",t21)
        m1[1] = [t1,t2,t3,t4,t5]


        # 3
        t1 = 0
        t2 = c2
        t3 = c2
        t4 = p-1
        t5 = p-1
        t22 = (t1*s1[3]+t2*s2[3]+t3*s3[3]+t4*s4[3]+t5*s5[3])%p
        print("\n \n in init6 t22 = ",t22)
        m1[2] = [t1,t2,t3,t4,t5]



        c = 4
        i2 = k.i2
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p

        # 4
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t23 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t23 = ",t23)



        # 5
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t24 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n  in init6 t24 = ",t24)

        # 6
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t25 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t25 = ",t25)    
        
        # 9
        t1 = (2*c2+c1)%p
        t2 = p-3
        t3 = 0
        t4 = (2*c1+1)%p
        t5 = (2*c1+1)%p
        t28 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t28 = ",t28)
        m1[3] = [t1,t2,t3,t4,t5]

        # 10    
        t1 = (2*c1+c2)%p
        t2 = 0
        t3 = p-3
        t4 = (2*c2+1)%p
        t5 = (2*c2+1)%p
        t29 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t29 = ",t29)
        m1[4] = [t1,t2,t3,t4,t5]
        
        print()        
 
        t1 = 1
        t2 = 1
        t3 = 1
        for i3 in range(3):
            for j3 in range(3):
                for k3 in range(3):
                    if i3==0:
                        t1 = 1
                    if i3==1:
                        t1 = c1
                    if i3==2:
                        t1 = c2
                
                    if j3==0:
                        t2 = 1
                    if j3==1:
                        t2 = c1
                    if j3==2:
                        t2 = c2

                    if k3==0:
                        t3 = 1
                    if k3==1:
                        t3 = c1
                    if k3==2:
                        t3 = c2

                    t4 = (t1*t23+t2*t24+t3*t25)%p
                    a = [i3,j3,k3]
                    b = [t1,t2,t3]
                    print(9*i3+3*j3+k3,a,b,t4)

        t1 = (c1*t23+c2*t24+c2*t25)%p
        t2 = (c2*t23+c1*t24+c1*t25)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)
        

        
        c = 6
        i2 = k.i2
        f1 = (s1[c]+i2*s1[c+1])%p
        f2 = (s2[c]+i2*s2[c+1])%p
        f3 = (s3[c]+i2*s3[c+1])%p
        f4 = (s4[c]+i2*s4[c+1])%p
        f5 = (s5[c]+i2*s5[c+1])%p

        # 14
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = 1
        t5 = 1
        t30 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t30 = ",t30)

        # 15
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c1
        t5 = c2
        t31 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t31 = ",t31)
        
        # 16
        t1 = 1
        t2 = 0
        t3 = 0
        t4 = c2
        t5 = c1
        t32 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t32 = ",t32)  

    
      
        # 17
        t1 = (2*c1+1)%p
        t2 = p-3
        t3 = 0
        t4 = (2*c2+c1)%p
        t5 = (2*c1+1)%p
        t33 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t33 = ",t33)
        m1[2] = [t1,t2,t3,t4,t5]


        # 18
        t1 = (2*c2+1)%p
        t2 = 0
        t3 = p-3
        t4 = (2*c2+1)%p
        t5 = (2*c1+c2)%p
        t34 = (t1*f1+t2*f2+t3*f3+t4*f4+t5*f5)%p
        print("\n \n in init6 t34 = ",t34)
        # m1[4] = [t1,t2,t3,t4,t5]

        print()
        

        
        t1 = 1
        t2 = 1
        t3 = 1
        for i3 in range(3):
            for j3 in range(3):
                for k3 in range(3):
                    if i3==0:
                        t1 = 1
                    if i3==1:
                        t1 = c1
                    if i3==2:
                        t1 = c2
                
                    if j3==0:
                        t2 = 1
                    if j3==1:
                        t2 = c1
                    if j3==2:
                        t2 = c2

                    if k3==0:
                        t3 = 1
                    if k3==1:
                        t3 = c1
                    if k3==2:
                        t3 = c2

                    t4 = (t1*t30+t2*t31+t3*t32)%p
                    a = [i3,j3,k3]
                    b = [t1,t2,t3]
                    print(9*i3+3*j3+k3,a,b,t4)


    
        # t1 = (c1*t30+c2*t31+c2*t32)%p
        # t2 = (c2*t30+c1*t31+c1*t32)%p

        t1 = (c1*t30+c1*t31+1*t32)%p
        t2 = (c2*t30+c2*t31+1*t32)%p

        print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
        print("\n")
        print(3*f2%p,3*f3%p)


def init125(g,g1,g2,l2,d,d1,h,p,flag):

    # 1
    h1 = h[0]
    h2 = h[1]
    m1,b1 = init25(g,l2,d,d1,h1,h2,p)
    if flag==1:
        k = group(g,p)
        k25 = series25(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)
        
        y1 = init2(50)
        for i in range(50):
            y1[i] = multcnvl2(m1[i],k25,p)


        print("\n \n in init125 y1 = ")
        display50(y1)
        print("\n \n in init125 b1 = ")
        display25(b1)

    # 2
    h1 = h[2]
    h2 = h[3]
    m2,b2 = init25(g1,l2,d,d1,h1,h2,p)
    if flag==1:
        k = group(g1,p)
        k25 = series25(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)
        
        y2 = init2(50)
        for i in range(50):
            y2[i] = multcnvl2(m2[i],k25,p)


        print("\n \n in init125 y2 = ")
        display50(y2)
        print("\n \n in init125 b2 = ")
        display25(b2)

    # 3
    h1 = h[4]
    h2 = h[5]
    m3,b3 = init25(g2,l2,d,d1,h1,h2,p)
    if flag==1:
        k = group(g2,p)
        k25 = series25(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)
        
        y3 = init2(50)
        for i in range(50):
            y3[i] = multcnvl2(m3[i],k25,p)


        print("\n \n in init125 y3 = ")
        display50(y3)
        print("\n \n in init125 b3 = ")
        display25(b3)
    

    # 4
    print("\n \n in init125 d = ",d)
    h1 = h[6]
    h2 = h[7]
    e1 = d[0]*(p-1)//3
    d2 = [d[0] , e1+d[1]]
    m4,b4 = init25(g,l2,d2,d1,h1,h2,p)
    if flag==1:
        k = group(g,p)
        k25 = series25(-l2,l2,k.g,k.a2,k.i2,d2,d1*d1,p)
        
        y4 = init2(50)
        for i in range(50):
            y4[i] = multcnvl2(m4[i],k25,p)


        print("\n \n in init125 y4 = ")
        display50(y4)
        print("\n \n in init125 b4 = ")
        display25(b4)
    
    # 5
    h1 = h[8]
    h2 = h[9]
    e1 = d[0]*(p-1)//3
    d2 = [d[0] , 2*e1+d[1]]
    m5,b5 = init25(g,l2,d2,d1,h1,h2,p)
    if flag==1:
        k = group(g,p)
        k25 = series25(-l2,l2,k.g,k.a2,k.i2,d2,d1*d1,p)
        
        y5 = init2(50)
        for i in range(50):
            y5[i] = multcnvl2(m5[i],k25,p)


        print("\n \n in init125 y5 = ")
        display50(y5)
        print("\n \n in init125 b5 = ")
        display25(b5)


    s1 = [y1[25] , y1[26] , y1[27] , y1[28] , y1[30], y1[31] , y1[32] , y1[33]]
    s2 = [y2[25] , y2[26] , y2[27] , y2[28] , y2[30], y2[31] , y2[32] , y2[33]]
    s3 = [y3[25] , y3[26] , y3[27] , y3[28] , y3[30], y3[31] , y3[32] , y3[33]]
    s4 = [y4[25] , y4[26] , y4[27] , y4[28] , y4[30], y4[31] , y4[32] , y4[33]]
    s5 = [y5[25] , y5[26] , y5[27] , y5[28] , y5[30], y5[31] , y5[32] , y5[33]]
    
    s6 =  [y1[35] , y1[36] , y1[37] , y1[38] , y1[40], y1[41] , y1[42] , y1[43]]
    s7 =  [y2[35] , y2[36] , y2[37] , y2[38] , y2[40], y2[41] , y2[42] , y2[43]]
    s8 =  [y3[35] , y3[36] , y3[37] , y3[38] , y3[40], y3[41] , y3[42] , y3[43]]
    s9 =  [y4[35] , y4[36] , y4[37] , y4[38] , y4[40], y4[41] , y4[42] , y4[43]]
    s10 = [y5[35] , y5[36] , y5[37] , y5[38] , y5[40], y5[41] , y5[42] , y5[43]]


    k = group(g,p)
    i2 = k.i2
    v1 = init2(5)
    v2 = init2(5)
    v3 = init2(5)
    v4 = init2(5)
    v5 = init2(5)
    
    v1 = [s1[0] , s2[0] , s3[0] , s4[0] ,s5[0]]
    
    v2[0] = (s1[4]+i2*s1[5])%p
    v2[1] = (s2[4]+i2*s2[5])%p
    v2[2] = (s3[4]+i2*s3[5])%p
    v2[3] = (s4[4]+i2*s4[5])%p
    v2[4] = (s5[4]+i2*s5[5])%p
    
    v3[0] = (s1[6]+i2*s1[7])%p
    v3[1] = (s2[6]+i2*s2[7])%p
    v3[2] = (s3[6]+i2*s3[7])%p
    v3[3] = (s4[6]+i2*s4[7])%p
    v3[4] = (s5[6]+i2*s5[7])%p

    i2 = p-i2
    v4[0] = (s1[4]+i2*s1[5])%p
    v4[1] = (s2[4]+i2*s2[5])%p
    v4[2] = (s3[4]+i2*s3[5])%p
    v4[3] = (s4[4]+i2*s4[5])%p
    v4[4] = (s5[4]+i2*s5[5])%p
    
    v5[0] = (s1[6]+i2*s1[7])%p
    v5[1] = (s2[6]+i2*s2[7])%p
    v5[2] = (s3[6]+i2*s3[7])%p
    v5[3] = (s4[6]+i2*s4[7])%p
    v5[4] = (s5[6]+i2*s5[7])%p


    t1 = d[0]%3
    t2 = d[1]%3

    m7 = init1(5,5)
    c1 = exp1((p-1)//3,g,p)
    c2 = c1**2%p
    if (t1==2) and (t2==1):
        m7[0] = [c2,1,c1,0,0]
        m7[1] = [(1+(p-1)*c1)%p , 0 , 3*c2%p , c2-1 , c2-1]
        # m7[2] = [0, c2 , c2 , p-1 , p-1]

        m7[2] = [(2*c1+1)%p , p-3 , 0 , (2*c1+1)%p , (2*c2+c1)%p]
        m7[3] = [(2*c2+c1)%p , p-3 , 0 , (2*c1+1)%p , (2*c1+1)%p]
        m7[4] = [(2*c1+c2)%p , 0 , p-3 , (2*c2+1)%p , (2*c2+1)%p]

        v = [v1,v1,v3,v2,v2]

    if (t1==2) and (t2==2):
        m7[0] = [c2,1,c1,0,0]
        m7[1] = [(1+(p-1)*c1)%p , 0 , 3*c2%p , c2-1 , c2-1]
        # m7[2] = [0, c2 , c2 , p-1 , p-1]

        m7[2] = [(2*c1+1)%p , p-3 , 0 , (2*c1+1)%p , (2*c2+c1)%p]
        m7[3] = [(2*c2+c1)%p , p-3 , 0 , (2*c1+1)%p , (2*c1+1)%p]
        m7[4] = [(2*c1+c2)%p , 0 , p-3 , (2*c2+1)%p , (2*c2+1)%p]

        v = [v1,v1,v2,v5,v5]
        
    if flag==1:
        print("\n \n")
        for i in range(5):
            t1 = v[i]
            t = multcnvl2(m7[i],t1,p)
            print("\n in init125 i = ",i,"  t = ",t)


    k = group(g,p)
    i2 = k.i2
    v6 = init2(5)
    v7 = init2(5)
    v8 = init2(5)
    v9 = init2(5)
    v10 = init2(5)
    
    v6 = [s6[0] , s7[0] , s8[0] , s9[0] ,s10[0]]
    
    v7[0] = (s6[4]+i2*s6[5])%p
    v7[1] = (s7[4]+i2*s7[5])%p
    v7[2] = (s8[4]+i2*s8[5])%p
    v7[3] = (s9[4]+i2*s9[5])%p
    v7[4] = (s10[4]+i2*s10[5])%p
    
    v8[0] = (s6[6]+i2*s6[7])%p
    v8[1] = (s7[6]+i2*s7[7])%p
    v8[2] = (s8[6]+i2*s8[7])%p
    v8[3] = (s9[6]+i2*s9[7])%p
    v8[4] = (s10[6]+i2*s10[7])%p

    i2 = p-i2
    v9[0] = (s6[4]+i2*s6[5])%p
    v9[1] = (s7[4]+i2*s7[5])%p
    v9[2] = (s8[4]+i2*s8[5])%p
    v9[3] = (s9[4]+i2*s9[5])%p
    v9[4] = (s10[4]+i2*s10[5])%p
    
    v10[0] = (s6[6]+i2*s6[7])%p
    v10[1] = (s7[6]+i2*s7[7])%p
    v10[2] = (s8[6]+i2*s8[7])%p
    v10[3] = (s9[6]+i2*s9[7])%p
    v10[4] = (s10[6]+i2*s10[7])%p


    
    t1 = d[0]%3
    t2 = d[1]%3

    m8 = init1(5,5)
    c1 = exp1((p-1)//3,g,p)
    c2 = c1**2%p
    if (t1==2) and (t2==1):
        m8[0] = [c2,1,c1,0,0]
        m8[1] = [(1+(p-1)*c1)%p , 0 , 3*c2%p , c2-1 , c2-1]
        # m8[2] = [0, c2 , c2 , p-1 , p-1]

        m8[2] = [(2*c1+1)%p , p-3 , 0 , (2*c2+c1)%p , (2*c1+1)%p]
        m8[3] = [(2*c2+c1)%p , p-3 , 0 , (2*c1+1)%p , (2*c1+1)%p]
        m8[4] = [(2*c1+c2)%p , 0 , p-3 , (2*c2+1)%p , (2*c2+1)%p]

        v = [v6,v6,v7,v10,v10]

    if (t1==2) and (t2==2):
        m8[0] = [c2,1,c1,0,0]
        m8[1] = [(1+(p-1)*c1)%p , 0 , 3*c2%p , c2-1 , c2-1]
        # m8[2] = [0, c2 , c2 , p-1 , p-1]

        m8[2] = [(2*c1+1)%p , p-3 , 0 , (2*c2+c1)%p , (2*c1+1)%p]
        m8[3] = [(2*c2+c1)%p , p-3 , 0 , (2*c1+1)%p , (2*c1+1)%p]
        m8[4] = [(2*c1+c2)%p , 0 , p-3 , (2*c2+1)%p , (2*c2+1)%p]

        v = [v6,v6,v8,v7,v7]
        
    if flag==1:
        print("\n \n")
        for i in range(5):
            t1 = v[i]
            t = multcnvl2(m8[i],t1,p)
            print("\n in init125 i = ",i,"  t = ",t)


    if flag==1:
        v1 = init2(5)
        solve2(5,m7,v1,p)
        t1 = det(5,m7)
        print("\n \n in init125 det = ",t1)
        display(0,4,0,4,m7,v1)
        # h1 = init2(5)
        # l2solve(5,h1,v1,m7,p)
        # print("\n \n after solve2 = ",h1)

        v1 = init2(5)
        solve2(5,m8,v1,p)
        t2 = det(5,m8)
        print("\n \n in init125 det = ",t2)
        display(0,4,0,4,m8,v1)





def equation31(k,l2,d,d1,k25):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    m = init1(20,25)
    b1 = init2(5)

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

 

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
    print("\n \n in equation31 t1 = ",t1)
    l4 = l3-(d1//2)
    l5 = l3+(d1//2)
    print("\n \n in equation31 l4 = {0}  l5 = {1}".format(l4,l5))
    t2 = k.series23(-l4,l5,d1,0,1)
    print("\n \n in equation31 t2 = ",t2)
    t3 = multcnvl2(k25,m[3],p)
    print("\n \n in equation31 t3 = ",t3)
    g3 = exp1(l5*l5,g,p)
    t4 = (t3+(p-1)*g3)%p
    print("\n \n in equation31 t4 = ",t4)  
    t5 = k.series23(-l3,l3,d1//2,0,1)
    print("\n \n in equation31 t5 = ",t5)
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
    print("\n \n in equation31 t6 = ",t6)
    t7 = multcnvl2(k25,m[1],p)
    print("\n \n in equation31 t7 = ",t7)
    t8 = k.series23(-l3,l5,d1//2,d[1],1)
    print("\n \n in equation31 t8 = ",t8)

    g3 = exp1(l5*l5,g,p)
    t1 = (4*l2+1)*d[1]
    a3 = exp2a(t1,a2,p)
    a3[0] = g3*a3[0]%p
    a3[1] = g3*a3[1]%p
    t9 = (t6+(p-1)*a3[0])%p
    t10 = (t7+(p-1)*a3[1])%p
    print("\n \n in equation31 t9 = {0}  t10 = {1}".format(t9,t10))
    t11 = k.series23(-l3,l3,d1//2,d[1],1)
    print("\n \n in equation31 t11 = ",t11)
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
    print("\n \n in equation31 t6 = ",t6)
    t7 = multcnvl2(k25,m[1],p)
    print("\n \n in equation31 t7 = ",t7)
    t8 = k.series23(-l3,l5,d1//2,d[1],1)
    print("\n \n in equation31 t8 = ",t8)

    g3 = exp1(l5*l5,g,p)
    t1 = (4*l2+1)*(2*d[1])
    a3 = exp2a(t1,a2,p)
    a3[0] = g3*a3[0]%p
    a3[1] = g3*a3[1]%p
    t9 = (t6+(p-1)*a3[0])%p
    t10 = (t7+(p-1)*a3[1])%p
    print("\n \n in equation31 t9 = {0}  t10 = {1}".format(t9,t10))
    t11 = k.series23(-l3,l3,d1//2,2*d[1],1)
    print("\n \n in equation31 t11 = ",t11)
    b1[3] = t9
    b1[4] = t10
    print("\n \n in equation31 b1 = ",b1)


    m1 = init1(5,5)
    m1[0] = [1,0,2,0,1]    
    m1[1] = [1,0,0,0,p-1]
    m1[2] = [0,2,0,2,0]
    m1[3] = [1,0,p-6,0,1]
    m1[4] = [0,4,0,p-4,0]

    v1[:] = b1
    solve2(5,m1,v1,p)
    t1 = det(5,m1)
    print("\n \n in equation31 det = ",t1)
    display(0,4,0,4,m1,v1)
    h1 = init2(5)
    l2solve(5,h1,v1,m1,p)
    print("\n \n after solve2 = ",h1)
    l3 = 2*l2
    h2 = k.series24(-l3,l3,[d[1]//2],(d1*d1)//4)
    print("\n \n h2 = ",h2)





def equation32(k,l2,d,d1,k25):
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



def equation34(k,l2,d,d1,s,k5):
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
        print("\n \n in equation34 t2 = ",t2)
        l3 = l2*d1+d1
        g1 = exp1(l3*l3,g,p)
        b1[0] = (t2+2*g1)%p    
        h1 = k.series22(-l2,l2,0,d1*d1)
        print("\n \n in equation34 h1 = ",h1)    
        l3 = l2+1
        h2 = k.series22(-l3,l3,0,d1*d1)
        print("\n \n in equation34 h2 = ",h2)


        # 2
        c1 = [1,0,0,0,p-1]
        s1 = [0,2,0,2,0]

        t1 = multcnvl2(k5,c1,p)
        print("\n \n in equation34 t1 = ",t1)
        t2 = multcnvl2(k5,s1,p)
        print("\n \n in equation34 t2 = ",t2)
        h3 = k.series22(-l2,l2,2*d[0],d1*d1)
        print("\n \n in equation34 h3 = ",h3)
        print("\n \n in equation34 d[0] = ",d[0])
        a3 = exp2a(d[0],a2,p)
        a4 = exp2a(2,a3,p)
        a3 = cmult(a4,[t1,t2],p)
        a5 = exp2a(2*l3,a4,p)
        t3 = (a5[0]+1)*g1%p
        t4 = a5[1]*g1%p
        t3 = (t3+a3[0])%p
        t4 = (t4+a3[1])%p
        print("\n \n in equation34 t3 = ",t3)
        print("\n \n in equation34 t4 = ",t4)
        b1[1] = t3
        b1[2] = t4
        h4 = k.series22(-l3,l3,2*d[0],d1*d1)
        print("\n \n in equation34 h4 = ",h4)
    

        # 3
        c1 = [1,0,p-6,0,1]
        s1 = [0,4,0,p-4,0]

        t1 = multcnvl2(k5,c1,p)
        print("\n \n in equation34 t1 = ",t1)
        t2 = multcnvl2(k5,s1,p)
        print("\n \n in equation34 t2 = ",t2)
        h5 = k.series22(-l2,l2,4*d[0],d1*d1)
        print("\n \n in equation34 h5 = ",h5)
        print("\n \n in equation34 d[0] = ",d[0])
        a3 = exp2a(d[0],a2,p)
        a4 = exp2a(4,a3,p)
        a3 = cmult(a4,[t1,t2],p)
        a5 = exp2a(2*l3,a4,p)
        t3 = (a5[0]+1)*g1%p
        t4 = a5[1]*g1%p
        t3 = (t3+a3[0])%p
        t4 = (t4+a3[1])%p
        print("\n \n in equation34 t3 = ",t3)
        print("\n \n in equation34 t4 = ",t4)
        b1[3] = t3
        b1[4] = t4
        h6 = k.series22(-l3,l3,4*d[0],d1*d1)
        print("\n \n in equation34 h6 = ",h6)


        m1 = init1(5,5)
        m1[0] = [1,0,2,0,1]    
        m1[1] = [1,0,0,0,p-1]
        m1[2] = [0,2,0,2,0]
        m1[3] = [1,0,p-6,0,1]
        m1[4] = [0,4,0,p-4,0]
    
        v1[:] = b1
        solve2(5,m1,v1,p)
        # t1 = det(5,m1)
        # print("\n \n in equation31 det = ",t1)
        # display(0,4,0,4,m1,v1)
        h1 = init2(5)
        l2solve(5,h1,v1,m1,p)
        print("\n \n after solve2 = ",h1)
        l3 = l2+1
        h2 = k.series24(-l3,l3,[d[0]],d1*d1)
        print("\n \n in equation32 h2 = ",h2)
    
        print("\n \n b1 = ",b1)


    if s==-1:
        # 1
        t1 = [1,0,2,0,1]

        t2 = multcnvl2(k5,t1,p)
        print("\n \n in equation34 t2 = ",t2)
        l3 = l2*d1
        g1 = exp1(l3*l3,g,p)
        b1[0] = (t2+(p-2)*g1)%p    
        h1 = k.series22(-l2,l2,0,d1*d1)
        print("\n \n in equation34 h1 = ",h1)    
        l3 = l2-1
        h2 = k.series22(-l3,l3,0,d1*d1)
        print("\n \n in equation34 h2 = ",h2)

        
        # 2
        c1 = [1,0,0,0,p-1]
        s1 = [0,2,0,2,0]

        t1 = multcnvl2(k5,c1,p)
        print("\n \n in equation34 t1 = ",t1)
        t2 = multcnvl2(k5,s1,p)
        print("\n \n in equation34 t2 = ",t2)
        h3 = k.series22(-l2,l2,2*d[0],d1*d1)
        print("\n \n in equation34 h3 = ",h3)
        print("\n \n in equation34 d[0] = ",d[0])
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
        print("\n \n a3 = ",a3) 
    
        b1[1] = a3[0]
        b1[2] = a3[1]
        l3 = l2-1
        h4 = k.series22(-l3,l3,2*d[0],d1*d1)
        print("\n \n in equation34 h4 = ",h4)


        # 3
        c1 = [1,0,p-6,0,1]
        s1 = [0,4,0,p-4,0]

        t1 = multcnvl2(k5,c1,p)
        print("\n \n in equation34 t1 = ",t1)
        t2 = multcnvl2(k5,s1,p)
        print("\n \n in equation34 t2 = ",t2)
        h3 = k.series22(-l2,l2,2*d[0],d1*d1)
        print("\n \n in equation34 h3 = ",h3)
        print("\n \n in equation34 d[0] = ",d[0])
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
        print("\n \n a3 = ",a3) 
    
        b1[3] = a3[0]
        b1[4] = a3[1]
        l3 = l2-1
        h4 = k.series22(-l3,l3,4*d[0],d1*d1)
        print("\n \n in equation34 h4 = ",h4)
    


        m1 = init1(5,5)
        m1[0] = [1,0,2,0,1]    
        m1[1] = [1,0,0,0,p-1]
        m1[2] = [0,2,0,2,0]
        m1[3] = [1,0,p-6,0,1]
        m1[4] = [0,4,0,p-4,0]
    
        v1[:] = b1
        solve2(5,m1,v1,p)
        # t1 = det(5,m1)
        # print("\n \n in equation31 det = ",t1)
        # display(0,4,0,4,m1,v1)
        h1 = init2(5)
        l2solve(5,h1,v1,m1,p)
        print("\n \n after solve2 = ",h1)
        l3 = l2-1
        h2 = k.series24(-l3,l3,[d[0]],d1*d1)
        print("\n \n in equation32 h2 = ",h2)  
    
        print("\n \n b1 = ",b1)
        
    

def equation35(k,l2,d,d1,s,k5):
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
    
  
        
                

p = 4013

p = 2473




m = init1(50,25)

v = init2(25)


c = 0
for i in range(5):
    m[c] = init2(25)
    s = [0,i]
    equal2(m,c,s,1)
    s = [2,i]
    equal2(m,c,s,2)
    s = [4,i]
    equal2(m,c,s,1)
    c = c+1


for i in range(4):
    m[c] = init2(25)
    s = [i,0]
    equal2(m,c,s,1)
    s = [i,2]
    equal2(m,c,s,2)
    s = [i,4]
    equal2(m,c,s,1)
    c = c+1



b1 = init2(50)

k = group(0,p)
k = group(exp1(1,k.g,p),p)
g = k.g
t1 = exp1((p-1)//3,k.g,p)
t2 = t1**2%p
g1 = g*t1%p
g2 = g*t2%p
print("\n \n g = {0}  g1 = {1}  g2 = {2}".format(g,g1,g2))


k = group(g,p)

d = [32,8*0+224]

flag4 = d[1]%3


e1 = 32*(p-1)//3
d = [32,8*0+224+0*e1]


e2 = 0
e3 = 0

l2 = 17
d1 = 8
k25 = series25(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)

# d1 = 16
# k25 = series25(-l2,l2,k.g,k.a2,k.i2,d,d1,p)





"""
d1 = 4
d2 = [2,4]
equation21(k,l2,d,d1,d2,m,10,b1)
"""


d3 = [[2,2] , [2,4] , [4,2] , [4,4]]

d1 = d1
for i in range(4):
    d2 = d3[i]
    equation21(k,l2,d,d1,d2,m,2*i+9,b1)


d1 = d1
d2 = [2]
equation22(k,l2,d,d1,d2,m,17,b1)

d2 = [4]
equation22(k,l2,d,d1,d2,m,20,b1)



d1 = d1
d2 = [2,4]
equation26(k,l2,d,d1,d2,m,17,b1)

# m[23] = init2(25)
# m[24] = init2(25)



d1 = d1
d2 = [2,4]
equation27(k,l2,d,d1,d2,m,17,b1)


"""
d1 = 4
d2 = [2,4]
equation28(k,l2,d,d1,d2,m,17,b1)
"""


h1 = series24(-l2,l2,k.g,k.a2,k.i2,[d[0]],d1*d1,p)
print("\n \n h1 = ",h1)
h2 = series24(-l2,l2,k.g,k.a2,k.i2,[d[1]],d1*d1,p)
print("\n \n h2 = ",h2)
h3 = k.series24(-l2,l2,[d[0]],d1*d1)
print("\n \n h3 = ",h3)
h4 = k.series24(-l2,l2,[d[1]],d1*d1)
print("\n \n h4 = ",h4)


b2 = [0 for i in range(50)]
for i in range(50):
    b2[i] = multcnvl2(m[i],k25,p)


print("\n \n b2 = ")
display50(b2)


# test 1
m4,b4 = init25(g,l2,d,d1,h3,h4,p)

b3 = [0 for i in range(50)]
for i in range(50):
    b3[i] = multcnvl2(m4[i],k25,p)

print("\n \n b3 = ")
display50(b3)

print("\n \n b4 = ")
display25(b4)



h = init2(10)
for i in range(10):
    h[i] = init2(5)

k1 = group(g,p)
k2 = group(g1,p)
k3 = group(g2,p)

d2 = d1*d1
h[0] = k1.series24(-l2,l2,[d[0]],d2)
h[1] = k1.series24(-l2,l2,[d[1]],d2)

h[2] = k2.series24(-l2,l2,[d[0]],d2)
h[3] = k2.series24(-l2,l2,[d[1]],d2)

h[4] = k3.series24(-l2,l2,[d[0]],d2)
h[5] = k3.series24(-l2,l2,[d[1]],d2)

e1 = 8*(p-1)//3
h[6] = k1.series24(-l2,l2,[d[0]],d2)
h[7] = k1.series24(-l2,l2,[1*e1+d[1]],d2)

h[8] = k1.series24(-l2,l2,[d[0]],d2)
h[9] = k1.series24(-l2,l2,[2*e1+d[1]],d2)

init125(g,g1,g2,l2,d,d1,h,p,1)





# print("\n\n b1 =",b1)


# m[23][:] = init2(25)
# m[24][:] = init2(25)

v1 = init2(25)

v1[:] = b2


################################################
# test
v1[23] = (v1[23]+e2)%p
v1[24] = (v1[24]+e3)%p




print("\n \n")
# display(0,24,0,24,m,v1)

h1 = [0 for i in range(25)]

solve2(25,m,v1,p)
t1 = det(25,m)
print("\n \n det = ",t1)
display(0,4,15,24,m,v1)
l2solve(25,h1,v1,m,p)
print("\n \n after solve2 = ",h1)

a = m[25]
b = m[26]
t1 = multcnvl2(h1,a,p)
t2 = multcnvl2(h1,b,p)
print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))

a = m[27]
b = m[28]
t3 = multcnvl2(h1,a,p)
t4 = multcnvl2(h1,b,p)
print("\n \n t3 = {0}  t4 = {1}".format(t3,t4))

a = m[30]
b = m[31]
t5 = multcnvl2(h1,a,p)
t6 = multcnvl2(h1,b,p)
print("\n \n t5 = {0}  t6 = {1}".format(t5,t6))

a = m[32]
b = m[33]
t7 = multcnvl2(h1,a,p)
t8 = multcnvl2(h1,b,p)
print("\n \n t7 = {0}  t8 = {1}".format(t7,t8))
print("\n \n")


s1 = [1943,1748,2358,1984,1871,1017,508,2252]
s2 = [1857,1469,1882,811,1575,2314,1709,2242]
s3 = [205,538,790,593,605,198,654,1075]
s4 = [1678,1214,2068,1798,2219,37,846,52]
s5 = [1567,612,2077,1287,1447,1211,1678,1213]

s6 = [628,2403,1649,1614,2432,2434,1209,686]
s7 = [2037,987,1406,382,1053,152,2000,918]
s8 = [2360,35,994,756,1113,1836,2069,141]
s9 = [510,1291,498,24,1929,1229,1605,1091]
s10 = [1153,246,2070,155,1197,1906,198,544]



"""
s1 = [465,1036,1454,1823,1463,1325]
s2 = [2232,423,2303,1379,1294,653]
s3 = [2358,35,323,2397,2361,857]
s4 = [868,375,1773,561,243,591]
s5 = [1323,2044,196,1402,1394,287]
"""


"""
s1 = [1655,1950,456,778,610,1620,74,719]
s2 = [1762,903,576,256,1022,510,696,2017]
s3 = [1862,1265,2306,1386,353,63,1832,1358]
s4 = [1839,628,1041,1704,1138,1047,1680,244]
s5 = [1643,1395,1103,597,676,1795,2391,940]

s6 = [2418,1218,902,1331,1209,686,703,2401]
s7 = [1459,2472,741,1103,2000,918,1962,2427]
s8 = [1441,2003,1099,289,2069,141,2019,2417]
s9 = [565,931,718,1312,1605,1091,1456,1249]
s10 = [65,766,2240,1958,198,544,973,534]
"""



m = init1(5,5)

c1 = exp1((p-1)//3,g,p)
c2 = c1**2%p


""" test 1 """

m1 = init1(5,5)
v2 = init2(5)
s = [s1,s2,s3,s4,s5]
init5(k,m1,g,d,s,flag4)

print("\n \n m1 = ")
display(0,4,0,4,m1,v2)
print("\n \n")


""" test 2 """
"""
m2 = init1(5,5)
v2 = init2(5)
s = [s6,s7,s8,s9,s10]
init6(k,m2,g,d,s,flag4)

print("\n \n m2 = ")
display(0,4,0,4,m2,v2)
print("\n \n")
"""


m = m1
# m = m2

# m[2] = init2(5)
# m[4] = init2(5)

v1 = [m[0][0] , m[1][0] , m[2][0] , m[3][0] , m[4][0]]

h1 = init2(5)

print("\n \n")
display(0,4,0,4,m,v1)
print("\n \n")

solve2(5,m,v1,p)
t1 = det(5,m)
print("\n \n det = ",t1)
display(0,4,0,4,m,v1)
l2solve(5,h1,v1,m,p)
print("\n \n after solve2 = ",h1)


print("\n \n test of equation31")
equation31(k,l2,d,d1,k25)


print("\n \n test of equation32")
h1 = equation32(k,l2,d,d1,k25)
print("\n \n h1 = ",h1)
l3 = 2*l2
h2 = k.series24(-l3,l3,[d[1]//2],(d1*d1)//4)
print("\n \n h2 = ",h2)


print("\n \n test of equation34")
k5 = k.series24(-l2,l2,[d[1]],d1*d1)
print("\n \n k5 = ",k5)
s = -1
equation34(k,l2,[d[1]],d1,s,k5)


print("\n \n test of equation35")
k5 = k.series24(-l2,l2,[d[1]],d1*d1)
print("\n \n k5 = ",k5)
s = 1
h1 = equation35(k,l2,[d[1]],d1,s,k5)
print("\n \n h1 = ",h1)
l3 = l2+s
h2 = k.series24(-l3,l3,[d[1]],d1*d1)
print("\n \n h2 = ",h2)



        
