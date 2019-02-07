from series4v3 import *

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

def equation26v3(k,l2,d,d1,m,flag):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    # 1
    d4 = d1*l2
    t = 45
    c1,s1 = t1,t2
    c2,s2 = t1,t2

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,35,p)
    mult25(m,1,1,t+1,t+2,36,p)

    if flag==1:
        print("\n \n in equation26v3")
        t1 = 2*d[0]+2*d[1]
        h1 = series23(-d4,d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(-d4,d4,t1,h1))

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]   
    
    # 2
    c1,s1 = t1,t2
    c2,s2 = t3,t4

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,37,p)
    mult25(m,1,1,t+1,t+2,38,p)

    if flag==1:
        print("\n \n in equation26v3")
        t1 = 2*d[0]+4*d[1]
        h1 = series23(-d4,d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(-d4,d4,t1,h1))

    m[23][:] = m[35]
    m[24][:] = m[37]


def equation26v4(k,l2,d,d1,m,flag):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    # 1
    d4 = d1*l2
    t = 45
    c1,s1 = t1,t2
    c2,s2 = t1,t2

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,25,p)
    mult25(m,1,1,t+1,t+2,26,p)

    mult25(m,1,1,t+0,t+3,27,p)
    mult25(m,1,p-1,t+1,t+2,28,p)

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]   
    
    # 2
    c1,s1 = t1,t2
    c2,s2 = t3,t4

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    mult25(m,1,1,t+0,t+3,32,p)
    mult25(m,1,p-1,t+1,t+2,33,p)

    m[23][:] = m[25]
    m[24][:] = m[30]

    # 1
    d4 = d1*l2
    l3 = (2*d[0]+2*d[1])//(2*d1)
    l4 = l3+d4
    mult25(m,1,p-i2,25,26,45,p)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l4*l4,g,p)
    g3 = inverse(g1,p)*g2%p
    mult25(m,g3,0,45,45,40,p)
    if flag==1:
        print("\n \n in equation26v4 l3 = ",l3)
        t1 = 0
        h1 = series23(-l3-d4,-l3+d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))

    # 2
    d4 = d1*l2
    l3 = (2*d[0]+4*d[1])//(2*d1)
    l4 = l3+d4
    mult25(m,1,p-i2,30,31,46,p)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l4*l4,g,p)
    g3 = inverse(g1,p)*g2%p
    mult25(m,g3,0,46,46,41,p)
    if flag==1:
        print("\n \n in equation26v4 l3 = ",l3)
        t1 = 0
        h1 = series23(-l3-d4,-l3+d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))

    m[23][:] = m[40]
    m[24][:] = m[41]

def equation38v3(k,l2,d,d1,d2,m,e1,b1):
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
    y1 = -(4*l2-9*d1//4)
    y2 = 4*l2+9*d1//4

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    
    # l3 = d4-(d1//4)
    l3 = d4-9*(d1//4)
    
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,30,p)
    mult25(m,s,0,46,46,31,p)    
    
    # 2
    mult25(m,1,1,t,t+3,45,p)
    mult25(m,1,p-1,t+1,t+2,46,p)

    t2 = d[0]-d2[0]*d[1]
    y1 = -(4*l2-9*d1//4)
    y2 = 4*l2+9*d1//4

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    
    # l3 = d4-(d1//4)
    l3 = d4-9*(d1//4)
    
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

    t3 = d[0]+d2[0]*d[1]
    y1 = -(4*l2+27*d1//4)
    y2 = 4*l2-27*d1//4

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    
    # l3 = d4+3*(d1//4)
    l3 = d4+27*(d1//4)
    
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,35,p)
    mult25(m,s,0,46,46,36,p)    
  
    # 4
    mult25(m,1,1,t,t+3,45,p)
    mult25(m,1,p-1,t+1,t+2,46,p)

    t4 = d[0]-d2[0]*d[1]
    y1 = -(4*l2+27*d1//4)
    y2 = 4*l2-27*d1//4

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    
    # l3 = d4+3*(d1//4)
    l3 = d4+27*(d1//4)    
    
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,37,p)
    mult25(m,s,0,46,46,38,p)    

    # 1
    s1 = d[0]+d2[0]*d[1]
    s2 = (l2-2)*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],30,31,40,p)
    mult25(m,(p-a3[1])%p,a3[0],30,31,41,p)
    s3 = (l2+7)*s1
    a4 = exp2a(s3,a2,p) 
    
    mult25(m,a4[0],a4[1],35,36,42,p)
    mult25(m,(p-a4[1])%p,a4[0],35,36,43,p)

    mult25(m,1,p-1,40,42,e1,p)
    mult25(m,1,p-1,41,43,e1+1,p)

    t1 = d[0]+d2[0]*d[1]
    y1 = d1*l2+9*(d1//4)-8*d1
    y2 = d1*l2+9*(d1//4)
    h1 = series23(y1,y2,d1,k.g,k.a2,t1,1,p)
    e = t1*((y1-d1//4)//d1)
    a3 = exp2a(e,a2,p)
    a5 = cmult(a3,h1,p)
    # print("\n \n in equation38 t1 = ",t1,"   h1 = ",h1)
    y3 = -(d1*l2+27*d1//4)
    y4 = -(d1*l2+27*d1//4)+8*d1
    h2 = series23(y3,y4,d1,k.g,k.a2,t1,1,p)
    e = t1*(abs(y3)+d1//4)//d1
    a4 = exp2a(e,a2,p)
    a4[1] = (p-a4[1])%p
    a6 = cmult(a4,h2,p)
    b1[e1] = (a5[0]+(p-1)*a6[0])%p
    b1[e1+1] = (a5[1]+(p-1)*a6[1])%p    

    # 2
    s = d[0]-d2[0]*d[1]
    s1 = abs(s)
    s2 = (l2-2)*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],32,33,45,p)
    mult25(m,(p-a3[1])%p,a3[0],32,33,46,p)
    s3 = (l2+7)*s1
    a4 = exp2a(s3,a2,p)    
   
    mult25(m,a4[0],a4[1],37,38,47,p)
    mult25(m,(p-a4[1])%p,a4[0],37,38,48,p)

    mult25(m,1,p-1,45,47,e1+2,p)
    # mult25(m,1,p-1,46,48,e1+3,p)

    t1 = abs(d[0]-d2[0]*d[1])
    y1 = d1*l2+9*(d1//4)-8*d1
    y2 = d1*l2+9*(d1//4)
    h1 = series23(y1,y2,d1,k.g,k.a2,t1,1,p)
    e = t1*((y1-d1//4)//d1)
    a3 = exp2a(e,a2,p)
    a5 = cmult(a3,h1,p)
    # print("\n \n in equation38 t1 = ",t1,"   h1 = ",h1)
    y3 = -(d1*l2+27*d1//4)
    y4 = -(d1*l2+27*d1//4)+8*d1
    h2 = series23(y3,y4,d1,k.g,k.a2,t1,1,p)
    e = t1*(abs(y3)+d1//4)//d1
    a4 = exp2a(e,a2,p)
    a4[1] = (p-a4[1])%p
    a6 = cmult(a4,h2,p)
    b1[e1+2] = (a5[0]+(p-1)*a6[0])%p
    # b1[e1+3] = (a5[1]+(p-1)*a6[1])%p

def init25(g,l2,d,d1,h1,h2,p,flag):
    k = series(g,p)
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
    
    for i in range(4):
        d2 = d3[i]
        equation23(k,l2,d,d1,d2,m,2*i+9,b1)

    t1 = d1*d1//2
    if (d[0]==t1):    
        d2 = [2]    
        equation24(k,l2,d,d1,d2,m,17,b1)
        d2 = [4]
        equation24(k,l2,d,d1,d2,m,20,b1)

    if (d[0]==9*t1):    
        d2 = [2]    
        equation38v3(k,l2,d,d1,d2,m,17,b1)
        d2 = [4]
        equation38v3(k,l2,d,d1,d2,m,20,b1)  

    equation26v4(k,l2,d,d1,m,flag)

    equation29(k,l2,d,d1,m,flag)    
    equation30(k,l2,d,d1,m,flag)
    
    #equation26v3(k,l2,d,d1,m,flag) 

    for i in range(5):
        b1[i] = h2[i]
    for i in range(4):
        b1[i+5] = h1[i]
    
    return(m,b1)

def equation29(k,l2,d,d1,m,flag):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p 

    # 1
    i3 = (p-i2)%p
    c1 = [1,0,0,0,p-1]
    s1 = [0,2,0,2,0]

    c2 = [1, 3*i2%p, p-3, i3, 0]
    s2 = [0, 1, 3*i2%p, p-3, i3]

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (2*d[0]+1*d[1])
    l3 = (0*d[0]+3*d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,25,p)
    mult25(m,t2,0,31,31,26,p)

    if flag==1:
        h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n in equation29 l3 = ",l3,"   t1 = ",t1,"   h1 = ",h1) 
    
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

    if flag==1:
        h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n in equation29 l3 = ",l3,"  t1 = ",t1,"   h1 = ",h1)

def equation30(k,l2,d,d1,m,flag):
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
    mult25(m,t2,0,45,45,30,p)
    mult25(m,t2,0,46,46,31,p)

    if flag==1:        
        h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n in equation30 l3 = ",l3,"   t1 = ",t1,"   h1 = ",h1)    

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
    mult25(m,t2,0,45,45,32,p)
    mult25(m,t2,0,46,46,33,p)

    if flag==1:
        h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
        print("\n \n in equation30 l3 = ",l3,"   t1 = ",t1,"   h1 = ",h1)        
