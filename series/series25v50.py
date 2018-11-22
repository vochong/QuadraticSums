from series4v1 import *

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

def equation26(k,l2,d,d1,m):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    t1 = [1,0,0,0,p-1]
    t2 = [0,2,0,2,0]
    t3 = [1,0,p-6,0,1]
    t4 = [0,4,0,p-4,0]

    # 1
    t = 25
    c1,s1 = t1,t2
    c2,s2 = t1,t2

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,23,p)
    # mult25(m,1,1,t+1,t+2,24,p)   
    
    # 2
    c1,s1 = t1,t2
    c2,s2 = t3,t4

    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,24,p)
    # mult25(m,1,1,t+1,t+2,24,p)

def equation26v2(k,l2,d,d1,m):
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

    print("\n \n in equation26v2")
    t1 = 2*d[0]+2*d[1]
    h1 = series23(-d4,d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(-d4,d4,t1,h1))

    mult25(m,1,1,t+0,t+3,27,p)
    mult25(m,1,p-1,t+1,t+2,28,p)
          
    print("\n \n in equation26v2")
    t1 = -2*d[0]+2*d[1]
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

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    print("\n \n in equation26v2")
    t1 = 2*d[0]+4*d[1]
    h1 = series23(-d4,d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(-d4,d4,t1,h1))

    mult25(m,1,1,t+0,t+3,32,p)
    mult25(m,1,p-1,t+1,t+2,33,p)

    print("\n \n in equation26v2")
    t1 = -2*d[0]+4*d[1]
    h1 = series23(-d4,d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(-d4,d4,t1,h1))

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
    print("\n \n in equation26v2 l3 = ",l3)
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
    print("\n \n in equation26v2 l3 = ",l3)
    t1 = 0
    h1 = series23(-l3-d4,-l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))

    # m[23][:] = m[40]
    # m[24][:] = m[41]

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
          
def equation31(k,l2,d,d1,m):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    # 1
    i3 = i2
    c1 = [1,  3*i3%p,  p-3,  (p-1)*i3%p,  0]
    s1 = [0,  1,  3*i3%p,  p-3,  (p-1)*i3%p]

    c2 = [1,0,0,0,p-1]
    s2 = [0,2,0,2,0]

    t = 45
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (1*d[0]+2*d[1])
    l3 = (3*d[0]+0*d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,25,p)
    mult25(m,t2,0,31,31,26,p)

    a3 = exp2a(d[0]*(2*l2-1)//2,a2,p)
    mult25(m,a3[0],a3[1],t+0,t+2,40,p)
    mult25(m,a3[0],a3[1],t+1,t+3,41,p)
    
    a3 = exp2a(d[1]*(2*l2-1),a2,p)
    mult25(m,a3[0],(p-a3[1])%p,41,40,30,p)
    mult25(m,t2,0,30,30,42,p)    
    
    print("\n \n in equation31 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))

    # 2
    i3 = p-i2
    c1 = [1,  i3,  1,   i3,  0]
    s1 = [0,  1,   i3,  1,   i3]

    c2 = [1,0,0,0,p-1]
    s2 = [0,2,0,2,0]

    t = 45
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (1*d[0]+2*d[1])
    l3 = (-1*d[0]+0*d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,27,p)
    mult25(m,t2,0,31,31,28,p)

    a3 = exp2a(d[0]*(2*l2-1)//2,a2,p)
    mult25(m,a3[0],a3[1],t+0,t+2,40,p)
    mult25(m,a3[0],a3[1],t+1,t+3,41,p)
    
    a3 = exp2a(d[1]*(2*l2-1),a2,p)
    mult25(m,a3[0],(p-a3[1])%p,41,40,30,p)
    mult25(m,t2,0,30,30,43,p)    


    print("\n \n in equation31 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))

    # mult25(m,1,p-1,42,43,23,p)
    
    """
    # 1
    c1 = [1,  i2,  1,   i2,  0]
    s1 = [0,  1,   i2,  1,   i2]

    i3 = p-i2
    c2 = [1,  3*i3%p,  p-3,  (p-1)*i3%p,  0]
    s2 = [0,  1,  3*i3%p,  p-3,  (p-1)*i3%p] 

    t = 25
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (1*d[0]+1*d[1])
    l3 = (d[0]-3*d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,25,p)
    mult25(m,t2,0,31,31,26,p)


    print("\n \n in equation31 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))

    

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

    mult25(m,1,p-1,t+0,t+3,30,p)
    mult25(m,1,1,t+1,t+2,31,p)
    

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (3*d[0]+3*d[1])
    l3 = (d[0]-d[1])//(2*d1)
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,30,30,27,p)
    mult25(m,t2,0,31,31,28,p)

    
    print("\n \n in equation31 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    # print("\n \n in equation31 t1 = ",t1,"   h1 = ",h1)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))
    """   
   
    # 3
    c1 = [1,0,0,0,p-1]
    s1 = [0,2,0,2,0]

    i3 = i2
    c2 = [1,  3*i3%p,  p-3,  (p-1)*i3%p,  0]
    s2 = [0,  1,  3*i3%p,  p-3,  (p-1)*i3%p] 

    t = 45
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,40,p)
    mult25(m,1,1,t+1,t+2,41,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (2*d[0]+1*d[1])    
    l3 = (0*d[0]+3*d[1])//(2*d1)    
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,40,40,30,p)
    mult25(m,t2,0,41,41,31,p)

    print("\n \n in equation31 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))

    # 4
    c1 = [1,0,0,0,p-1]
    s1 = [0,2,0,2,0]

    i3 = i2
    c2 = [1,  i3,  1,   i3,  0]
    s2 = [0,  1,   i3,  1,   i3] 

    t = 45
    mult2(m,t+0,c1,c2,p)
    mult2(m,t+1,c1,s2,p)    
    mult2(m,t+2,s1,c2,p)
    mult2(m,t+3,s1,s2,p)

    mult25(m,1,p-1,t+0,t+3,40,p)
    mult25(m,1,1,t+1,t+2,41,p)

    d4 = l2*d1
    g1 = exp1(d4*d4,g,p)
    t1 = (2*d[0]+1*d[1])    
    l3 = (0*d[0]+1*d[1])//(2*d1)    
    l4 = l3-d4
    g2 = exp1(l4*l4,g,p)
    t2 = inverse(g1,p)*g2%p
    mult25(m,t2,0,40,40,32,p)
    mult25(m,t2,0,41,41,33,p)


    print("\n \n in equation31 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n ({0} , {1}) t1 = {2}   h1 = {3}".format(l3-d4,l3+d4,t1,h1))


def equation38(k,l2,d,d1,d2,m,e1,b1):
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

    t1 = d[0]+d2[0]*d[1]
    y1 = -(4*l2-9*d1//4)
    y2 = 4*l2+9*d1//4
    h1 = series23(y1,y2,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation38 t1 = ",t1,"   h1 = ",h1)

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

    """
    t2 = d[0]-d2[0]*d[1]
    h2 = series23(-19,21,4,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation22 t2 = ",t2,"   h2 = ",h2)
    """

    t2 = d[0]-d2[0]*d[1]
    y1 = -(4*l2-9*d1//4)
    y2 = 4*l2+9*d1//4
    h2 = series23(y1,y2,4,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation38 t2 = ",t2,"   h2 = ",h2)

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

    """
    t3 = d[0]+d2[0]*d[1]
    h3 = series23(-23,17,4,k.g,k.a2,t3,1,p)
    print("\n \n in equation22 t3 = ",t3,"   h3 = ",h3)
    """

    t3 = d[0]+d2[0]*d[1]
    y1 = -(4*l2+27*d1//4)
    y2 = 4*l2-27*d1//4
    h3 = series23(y1,y2,4,k.g,k.a2,t3,1,p)
    print("\n \n in equation38 t3 = ",t3,"   h3 = ",h3)

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

    """
    t4 = d[0]-d2[0]*d[1]
    h4 = series23(-23,17,4,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation22 t4 = ",t4,"   h4 = ",h4)
    """

    t4 = d[0]-d2[0]*d[1]
    y1 = -(4*l2+27*d1//4)
    y2 = 4*l2-27*d1//4
    h4 = series23(y1,y2,4,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation38 t4 = ",t4,"   h4 = ",h4)

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    
    # l3 = d4+3*(d1//4)
    l3 = d4+27*(d1//4)    
    
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,37,p)
    mult25(m,s,0,46,46,38,p)    

    # 1
    # s1 = d[0]+d2[0]*d[1]
    # s2 = l2*s1
    # a3 = exp2a(s2,a2,p)
    # mult25(m,a3[0],a3[1],30,31,40,p)
    # mult25(m,(p-a3[1])%p,a3[0],30,31,41,p)
    # s3 = (l2+1)*s1
    # a4 = exp2a(s3,a2,p)

    s1 = d[0]+d2[0]*d[1]
    s2 = (l2-2)*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],30,31,40,p)
    mult25(m,(p-a3[1])%p,a3[0],30,31,41,p)
    s3 = (l2+7)*s1
    a4 = exp2a(s3,a2,p)
    
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],35,36,42,p)
    mult25(m,(p-a4[1])%p,a4[0],35,36,43,p)

    mult25(m,1,p-1,40,42,e1,p)
    mult25(m,1,p-1,41,43,e1+1,p)

    """
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
    """

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
    # s = d[0]-d2[0]*d[1]
    # s1 = abs(s)
    # s2 = l2*s1
    # a3 = exp2a(s2,a2,p)
    # mult25(m,a3[0],a3[1],32,33,45,p)
    # mult25(m,(p-a3[1])%p,a3[0],32,33,46,p)
    # s3 = (l2+1)*s1
    # a4 = exp2a(s3,a2,p)

    s = d[0]-d2[0]*d[1]
    s1 = abs(s)
    s2 = (l2-2)*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],32,33,45,p)
    mult25(m,(p-a3[1])%p,a3[0],32,33,46,p)
    s3 = (l2+7)*s1
    a4 = exp2a(s3,a2,p)
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],37,38,47,p)
    mult25(m,(p-a4[1])%p,a4[0],37,38,48,p)

    mult25(m,1,p-1,45,47,e1+2,p)
    # mult25(m,1,p-1,46,48,e1+3,p)

    """
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
    """

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

def equation38v2(k,l2,d,d1,d2,m,e1,b1):
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

    t1 = d[0]+d2[0]*d[1]
    y1 = -(4*l2-9*d1//4)
    y2 = 4*l2+9*d1//4
    """
    h1 = series23(y1,y2,d1,k.g,k.a2,t1,1,p)
    print("\n \n in equation38 t1 = ",t1,"   h1 = ",h1)
    """

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

    """
    t2 = d[0]-d2[0]*d[1]
    h2 = series23(-19,21,4,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation22 t2 = ",t2,"   h2 = ",h2)
    """

    t2 = d[0]-d2[0]*d[1]
    y1 = -(4*l2-9*d1//4)
    y2 = 4*l2+9*d1//4
    """
    h2 = series23(y1,y2,4,k.g,k.a2,abs(t2),1,p)
    print("\n \n in equation38 t2 = ",t2,"   h2 = ",h2)
    """

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

    """
    t3 = d[0]+d2[0]*d[1]
    h3 = series23(-23,17,4,k.g,k.a2,t3,1,p)
    print("\n \n in equation22 t3 = ",t3,"   h3 = ",h3)
    """

    t3 = d[0]+d2[0]*d[1]
    y1 = -(4*l2+27*d1//4)
    y2 = 4*l2-27*d1//4
    """
    h3 = series23(y1,y2,4,k.g,k.a2,t3,1,p)
    print("\n \n in equation38 t3 = ",t3,"   h3 = ",h3)
    """

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

    """
    t4 = d[0]-d2[0]*d[1]
    h4 = series23(-23,17,4,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation22 t4 = ",t4,"   h4 = ",h4)
    """

    t4 = d[0]-d2[0]*d[1]
    y1 = -(4*l2+27*d1//4)
    y2 = 4*l2-27*d1//4
    """
    h4 = series23(y1,y2,4,k.g,k.a2,abs(t4),1,p)
    print("\n \n in equation38 t4 = ",t4,"   h4 = ",h4)
    """

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    
    # l3 = d4+3*(d1//4)
    l3 = d4+27*(d1//4)    
    
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult25(m,s,0,45,45,37,p)
    mult25(m,s,0,46,46,38,p)    

    # 1
    # s1 = d[0]+d2[0]*d[1]
    # s2 = l2*s1
    # a3 = exp2a(s2,a2,p)
    # mult25(m,a3[0],a3[1],30,31,40,p)
    # mult25(m,(p-a3[1])%p,a3[0],30,31,41,p)
    # s3 = (l2+1)*s1
    # a4 = exp2a(s3,a2,p)

    s1 = d[0]+d2[0]*d[1]
    s2 = (l2-2)*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],30,31,40,p)
    mult25(m,(p-a3[1])%p,a3[0],30,31,41,p)
    s3 = (l2+7)*s1
    a4 = exp2a(s3,a2,p)
    
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],35,36,42,p)
    mult25(m,(p-a4[1])%p,a4[0],35,36,43,p)

    mult25(m,1,p-1,40,42,e1,p)
    mult25(m,1,p-1,41,43,e1+1,p)

    """
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
    """

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
    # s = d[0]-d2[0]*d[1]
    # s1 = abs(s)
    # s2 = l2*s1
    # a3 = exp2a(s2,a2,p)
    # mult25(m,a3[0],a3[1],32,33,45,p)
    # mult25(m,(p-a3[1])%p,a3[0],32,33,46,p)
    # s3 = (l2+1)*s1
    # a4 = exp2a(s3,a2,p)

    s = d[0]-d2[0]*d[1]
    s1 = abs(s)
    s2 = (l2-2)*s1
    a3 = exp2a(s2,a2,p)
    mult25(m,a3[0],a3[1],32,33,45,p)
    mult25(m,(p-a3[1])%p,a3[0],32,33,46,p)
    s3 = (l2+7)*s1
    a4 = exp2a(s3,a2,p)
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult25(m,a4[0],a4[1],37,38,47,p)
    mult25(m,(p-a4[1])%p,a4[0],37,38,48,p)

    mult25(m,1,p-1,45,47,e1+2,p)
    # mult25(m,1,p-1,46,48,e1+3,p)

    """
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
    """

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

def equation40(k,l2,d,d7,d1,k5):
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
    h1 = k.series23(-l3,l3,d1,0,1)
    print("\n \n h1 = ",h1,"  s[0] = ",s[0])

    # 2
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l4 = -l3+d3*(2*d[1]//d2)
    g2 = exp1(l4*l4,g,p)
    l5 = l3+d3*(2*d[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s[1] = s[1]*t1%p
    h2 = k.series23(l4,l5,d1,0,1)
    print("\n \n h2 = ",h2,"  s[1] = ",s[1])

    # 3
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l6 = -l3-d3*(2*d[1]//d2)
    g2 = exp1(l6*l6,g,p)
    l7 = l3-d3*(2*d[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s[2] = s[2]*t1%p
    h3 = k.series23(l6,l7,d1,0,1)
    print("\n \n h3 = ",h3,"  s[2] = ",s[2])

    # 4
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l8 = -l3+d3*(4*d[1]//d2)
    g2 = exp1(l8*l8,g,p)
    l9 = l3+d3*(4*d[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s[3] = s[3]*t1%p
    h4 = k.series23(l8,l9,d1,0,1)
    print("\n \n h4 = ",h4,"  s[3] = ",s[3])

    # 5
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l10 = -l3-d3*(4*d[1]//d2)
    g2 = exp1(l10*l10,g,p)
    l11 = l3-d3*(4*d[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s[4] = s[4]*t1%p
    h5 = k.series23(l10,l11,d1,0,1)
    print("\n \n h5 = ",h5,"  s[4] = ",s[4])



    k6 = k.series24(-l2,l2,[d7[1]],d1*d1)
    s1 = init2(5)
    for i in range(5):
        s1[i] = multcnvl2(m[i],k6,p)
        
    # 1
    l3 = l2*d1
    h1 = k.series23(-l3,l3,d1,0,1)
    print("\n \n h1 = ",h1,"  s1[0] = ",s1[0])

    # 2
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l4 = -l3+d3*(2*d7[1]//d2)
    g2 = exp1(l4*l4,g,p)
    l5 = l3+d3*(2*d7[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s1[1] = s1[1]*t1%p
    h2 = k.series23(l4,l5,d1,0,1)
    print("\n \n h2 = ",h2,"  s1[1] = ",s1[1])

    # 3
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l6 = -l3-d3*(2*d7[1]//d2)
    g2 = exp1(l6*l6,g,p)
    l7 = l3-d3*(2*d7[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s1[2] = s1[2]*t1%p
    h3 = k.series23(l6,l7,d1,0,1)
    print("\n \n h3 = ",h3,"  s1[2] = ",s1[2])

    # 4
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l8 = -l3+d3*(4*d7[1]//d2)
    g2 = exp1(l8*l8,g,p)
    l9 = l3+d3*(4*d7[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s1[3] = s1[3]*t1%p
    h4 = k.series23(l8,l9,d1,0,1)
    print("\n \n h4 = ",h4,"  s1[3] = ",s1[3])

    # 5
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    l10 = -l3-d3*(4*d7[1]//d2)
    g2 = exp1(l10*l10,g,p)
    l11 = l3-d3*(4*d7[1]//d2)
    t1 = inverse(g1,p)*g2%p
    s1[4] = s1[4]*t1%p
    h5 = k.series23(l10,l11,d1,0,1)
    print("\n \n h5 = ",h5,"  s1[4] = ",s1[4])

    if d[1]>d7[1]:
        l3 = l2*d1
        d2 = d1*d1//2
        d3 = d1//4
        
        y1 = l3+d3*(2*d7[1]//d2)
        y2 = l3+d3*(2*d[1]//d2)
        h6 = k.series23(y1+d1,y2,d1,0,1)
        y3 = l3-d3*(2*d[1]//d2)
        y4 = l3-d3*(2*d7[1]//d2)
        h7 = k.series23(y3+d1,y4,d1,0,1)
        t1 = ((p-1)*h6[0]+h7[0])%p
        print("\n \n in equation40 t1 = ",t1)

        y1 = l3+d3*(4*d7[1]//d2)
        y2 = l3+d3*(4*d[1]//d2)
        h6 = k.series23(y1+d1,y2,d1,0,1)
        y3 = l3-d3*(4*d[1]//d2)
        y4 = l3-d3*(4*d7[1]//d2)
        h7 = k.series23(y3+d1,y4,d1,0,1)
        t2 = ((p-1)*h6[0]+h7[0])%p
        print("\n \n in equation40 t2 = ",t2)


    if d[1]<d7[1]:
        l3 = l2*d1
        d2 = d1*d1//2
        d3 = d1//4
        
        y1 = l3+d3*(2*d[1]//d2)
        y2 = l3+d3*(2*d7[1]//d2)
        h6 = k.series23(y1+d1,y2,d1,0,1)
        y3 = l3-d3*(2*d7[1]//d2)
        y4 = l3-d3*(2*d[1]//d2)
        h7 = k.series23(y3+d1,y4,d1,0,1)
        t1 = (h6[0]+(p-1)*h7[0])%p
        print("\n \n in equation40 t1 = ",t1)

        y1 = l3+d3*(4*d[1]//d2)
        y2 = l3+d3*(4*d7[1]//d2)
        h6 = k.series23(y1+d1,y2,d1,0,1)
        y3 = l3-d3*(4*d7[1]//d2)
        y4 = l3-d3*(4*d[1]//d2)
        h7 = k.series23(y3+d1,y4,d1,0,1)
        t2 = (h6[0]+(p-1)*h7[0])%p
        print("\n \n in equation40 t2 = ",t2)



    l3 = l2*d1
    g1 = exp1(l3*l3,g,p)
    d2 = d1*d1//2
    d3 = d1//4
    s2 = init2(5)
    
    # 1
    s2[0] = 1

    # 2
    l4 = -l3+d3*(2*d7[1]//d2)
    g2 = exp1(l4*l4,g,p)
    s2[1] = inverse(g1,p)*g2%p

    # 3
    l4 = -l3-d3*(2*d7[1]//d2)
    g2 = exp1(l4*l4,g,p)
    s2[2] = inverse(g1,p)*g2%p

    # 4
    l4 = -l3+d3*(4*d7[1]//d2)
    g2 = exp1(l4*l4,g,p)
    s2[3] = inverse(g1,p)*g2%p

    # 5
    l4 = -l3-d3*(4*d7[1]//d2)
    g2 = exp1(l4*l4,g,p)
    s2[4] = inverse(g1,p)*g2%p

    for i in range(5):
        for j in range(5):
            m[i][j] = m[i][j]*s2[i]%p
            

    v1 = init2(5)
    # v1[:] = s1
    v1[0] = s[0]
    v1[1] = (s[1]+t1)%p
    v1[2] = v1[1]
    v1[3] = (s[3]+t2)%p
    v1[4] = v1[3]
    
    print("\n \n in equation40 v1 = ",v1)
    solve2(5,m,v1,p)
    t1 = det(5,m)
    print("\n \n in equation40 det = ",t1)
    display(0,4,0,4,m,v1)
    h1 = init2(5)
    l2solve(5,h1,v1,m,p)
    print("\n \n after solve2 h1 = ",h1)
    print("\n \n k5 = ",k5)
    print("\n \n k6 = ",k6)
    # l3 = l2+1
    # h2 = k.series24(-l3,l3,[d[0]],d1*d1)    
       
def equation40v2(k,l2,d,d7,d1,k5):
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

def init25(g,l2,d,d1,h1,h2,p):
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
        equation38v2(k,l2,d,d1,d2,m,17,b1)
        d2 = [4]
        equation38v2(k,l2,d,d1,d2,m,20,b1)
  
    
    # equation26(k,l2,d,d1,m)
    
    equation26v2(k,l2,d,d1,m)
    

    equation29(k,l2,d,d1,m)
    
    equation30(k,l2,d,d1,m)    
    
    # equation31(k,l2,d,d1,m)    


    for i in range(5):
        b1[i] = h2[i]
    for i in range(4):
        b1[i+5] = h1[i]
    
    return(m,b1)


def init50(g,a2,l2,d,d7,d1,h,p,flag):

    # 1
    h1 = h[0]
    h2 = h[1]
    m1,b1 = init25(g,l2,d,d1,h1,h2,p)
    if flag==1:
        k = series(g,p)
        print("\n \n in init50 (1) k.i2 = ",k.i2)
        k25 = series25(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)
        
        y1 = init2(50)
        for i in range(50):
            y1[i] = multcnvl2(m1[i],k25,p)


        print("\n \n in init50 y1 = ")
        display50(y1)
        print("\n \n in init50 b1 = ")
        display25(b1)

    # 2
    h1 = h[2]
    h2 = h[3]
    l3 = l2+0
    # m2,b2 = init25(g,l3,d7,d1,h1,h2,p)

    t1 = exp1((p-1)//3,g,p)
    g1 = g*t1%p
    g2 = g1*t1%p
    
    m2,b2 = init25(g1,l3,d,d1,h1,h2,p)
    if flag==1:
        k = series(g1,p)
        print("\n \n in init50 (2) k.i2 = ",k.i2)
        k26 = series25(-l3,l3,k.g,k.a2,k.i2,d,d1*d1,p)
        
        y2 = init2(50)
        for i in range(50):
            y2[i] = multcnvl2(m2[i],k26,p)


        print("\n \n in init50 y2 = ")
        display50(y2)
        print("\n \n in init50 b2 = ")
        display25(b2)

    m = init1(50,50)
    t = init2(25)
    for i in range(25):
        m[i] = m1[i]+t
        m[i+25] = t+m2[i]

    k = series(g,p)
    i2 = k.i2
    i3 = k.i2
    mult25(m1,1,p-i3,25,26,40,p)
    mult25(m2,1,i3,25,26,40,p)
    
    m[24] = m1[40]+m2[40]

    mult25(m1,1,p-i3,30,31,41,p)
    mult25(m2,1,i3,30,31,41,p)
    
    # m[48] = m1[41]+m2[41]


    #1
    v1 = init2(25)
    print("\n \n this is m1")
    

    e = [1,0,0,1,1]

    e = [1,0*1,0,0,0]

    
    h1 = [0 for i in range(25)]


    m7 = m1
    v1[:] = y1
    v1[23] = (v1[23]+e[0])%p

    solve2(25,m7,v1,p)
    t1 = det(25,m7)
    print("\n \n det = ",t1)
    # display(0,4,15,24,m7,v1)
    l2solve(25,h1,v1,m7,p)
    print("\n \n after solve2 = ",h1)
    print("\n \n k25 = ",k25)


    a = m7[25]
    b = m7[26]
    t1 = multcnvl2(h1,a,p)
    t2 = multcnvl2(h1,b,p)
    print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n y1[25] = ",y1[25],"  y1[26] = ",y1[26])

    a = m7[27]
    b = m7[28]
    t3 = multcnvl2(h1,a,p)
    t4 = multcnvl2(h1,b,p)
    print("\n \n t3 = {0}  t4 = {1}".format(t3,t4))
    print("\n \n y1[27] = ",y1[27],"  y1[28] = ",y1[28])
    
    a = m7[30]
    b = m7[31]
    t5 = multcnvl2(h1,a,p)
    t6 = multcnvl2(h1,b,p)
    print("\n \n t5 = {0}  t6 = {1}".format(t5,t6))
    print("\n \n y1[50] = ",y1[30],"  y1[31] = ",y1[31])

    a = m7[32]
    b = m7[33]
    t7 = multcnvl2(h1,a,p)
    t8 = multcnvl2(h1,b,p)
    print("\n \n t7 = {0}  t8 = {1}".format(t7,t8))
    print("\n \n y1[32] = ",y1[32],"  y1[33] = ",y1[33])


    #2
    v1 = init2(25)
    print("\n \n this is m1")
    
    h1 = [0 for i in range(25)]

    m7 = m2
    v1[:] = y2
    v1[23] = (v1[23]+e[0])%p

    solve2(25,m7,v1,p)
    t1 = det(25,m7)
    print("\n \n det = ",t1)
    # display(0,4,15,24,m7,v1)
    l2solve(25,h1,v1,m7,p)
    print("\n \n after solve2 = ",h1)
    print("\n \n k26 = ",k26)


    a = m7[25]
    b = m7[26]
    t1 = multcnvl2(h1,a,p)
    t2 = multcnvl2(h1,b,p)
    print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))
    print("\n \n y2[25] = ",y2[25],"  y2[26] = ",y2[26])

    a = m7[27]
    b = m7[28]
    t3 = multcnvl2(h1,a,p)
    t4 = multcnvl2(h1,b,p)
    print("\n \n t3 = {0}  t4 = {1}".format(t3,t4))
    print("\n \n y2[27] = ",y2[27],"  y2[28] = ",y2[28])
    print("\n \n")

    a = m7[30]
    b = m7[31]
    t5 = multcnvl2(h1,a,p)
    t6 = multcnvl2(h1,b,p)
    print("\n \n t5 = {0}  t6 = {1}".format(t5,t6))
    print("\n \n y2[30] = ",y2[30],"  y2[31] = ",y2[31])
    print("\n \n")

    a = m7[32]
    b = m7[33]
    t7 = multcnvl2(h1,a,p)
    t8 = multcnvl2(h1,b,p)
    print("\n \n t7 = {0}  t8 = {1}".format(t7,t8))
    print("\n \n y2[32] = ",y2[32],"  y2[33] = ",y2[33])
    print("\n \n")

    """
    # 1
    t1 = (1*d[0]+4*d[1])
    a3 = exp2a(2*t1,a2,p)
    
    print("\n \n (1) in init50 t1 = ",t1,"  a3 = ",a3,"   p =",p)
    a3[1] = (p-a3[1])%p
    mult25(m1,a3[0],p-a3[1],27,28,40,p)
    mult25(m1,a3[1],a3[0],27,28,41,p)
    
    mult25(m2,p-1,0,25,25,42,p)
    mult25(m2,p-1,0,26,26,43,p)
    
    t = init2(25)
    m[24] = m1[40]+m2[42]
    # m[48] = m1[41]+m2[43]


    t1 = (1*d[0]+4*d[1])
    a3 = exp2a(6*t1,a2,p)

    mult25(m1,a3[0],p-a3[1],32,33,40,p)
    mult25(m1,a3[1],a3[0],32,33,41,p)
    
    mult25(m2,p-1,0,30,30,42,p)
    mult25(m2,p-1,0,31,31,43,p)
    
    t = init2(25)
    m[48] = m1[40]+m2[42]
    # m[48] = m1[41]+m2[43]
    """
    

    """
    t1 = (1*d[0]+2*d[1])
    a3 = exp2a(2*t1,a2,p)

    a3 = exp2a((2*l2+1)*t1,a2,p)
        
    print("\n \n (1) in init50 t1 = ",t1,"  a3 = ",a3,"   p =",p)
    # a3[1] = (p-a3[1])%p
    mult25(m1,a3[0],a3[1],25,26,40,p)
    mult25(m2,p-1,0,27,27,40,p)
    m[23] = m1[40]+m2[40]

    a3 = exp2a((2*l2-1)*t1,a2,p)
    
    mult25(m1,a3[0],a3[1],25,26,41,p)
    mult25(m1,1,p-1,41,27,42,p)
    temp = init2(25)
    m[48] = m1[42]+temp
    
    mult25(m2,a3[0],(p+a3[1])%p,30,31,41,p)
    mult25(m1,p-1,0,30,30,41,p)
    # m[49] = m1[41]+m2[41]   
    
    
    t1 = (1*d[0]+2*d[1])  
    a3 = exp2a(2*t1,a2,p)
    
    print("\n \n (2) in init50 t1 = ",t1,"  a3 = ",a3,"   p =",p)
    a3[1] = (p+a3[1])%p
    mult25(m1,a3[0],p-a3[1],27,28,40,p)
    mult25(m2,p-1,0,27,27,40,p)
    # m[48] = m1[40]+m2[40]
    mult25(m1,a3[1],a3[0],27,28,41,p)
    mult25(m2,(p-1)%p,0,28,28,41,p)
    # m[49] = m1[41]+m2[41]
    """ 
  
    v1 = init2(50)
    solve2(50,m,v1,p)
    t1 = det(50,m)
    print("\n \n in ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^   init50 det = ",t1)    
    
    # display(0,49,0,49,m,v1)
    # l2solve(50,h1,v1,m,p)
    # print("\n \n after solve2 = ",h1)
    # print("\n \n k25 = ",k25)
    




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


    print("\n \n in equation29 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation29 t1 = ",t1,"   h1 = ",h1)
    
    

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

    
    print("\n \n in equation29 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation29 t1 = ",t1,"   h1 = ",h1)
    


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
    mult25(m,t2,0,45,45,30,p)
    mult25(m,t2,0,46,46,31,p)


    print("\n \n in equation30 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation30 t1 = ",t1,"   h1 = ",h1)
    

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

    print("\n \n in equation28 l3 = ",l3)
    h1 = series23(l3-d4,l3+d4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in equation28 t1 = ",t1,"   h1 = ",h1)   



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
    


p = 2473


b1 = init2(50)

k = series(0,p)
k = series(exp1(1,k.g,p),p)
g = k.g
print("\n \n g = {0}".format(g))


k = series(g,p)

# d = [32 , 2048+64*0]

d = [32, 64*5]

# d = [9*32 , 2048-8*32]


e2 = 0
e3 = 0

""" l2 should be > 5 """

l2 = 17+2+2
d1 = 8
k25 = series25(-l2,l2,k.g,k.a2,k.i2,d,d1*d1,p)



h1 = series24(-l2,l2,k.g,k.a2,k.i2,[d[0]],d1*d1,p)
print("\n \n h1 = ",h1)
h2 = series24(-l2,l2,k.g,k.a2,k.i2,[d[1]],d1*d1,p)
print("\n \n h2 = ",h2)
h3 = k.series24(-l2,l2,[d[0]],d1*d1)
print("\n \n h3 = ",h3)
h4 = k.series24(-l2,l2,[d[1]],d1*d1)
print("\n \n h4 = ",h4)



# test 1
m4,b4 = init25(g,l2,d,d1,h3,h4,p)

b3 = [0 for i in range(50)]
for i in range(50):
    b3[i] = multcnvl2(m4[i],k25,p)

print("\n \n b3 = ")
display50(b3)
print("\n \n b4 = ")
display25(b4)



h = init2(4)
for i in range(4):
    h[i] = init2(5)

g = 0
k = series(g,p)
g = k.g
t1 = exp1((p-1)//3,g,p)
g1 = g*t1%p
g2 = g1*t1%p
k1 = series(g1,p)
k2 = series(g2,p)

d1 = 8
# d = [d1*d1//2 , 2048+64*1]
l2 = l2

d2 = d1*d1
h[0] = k.series24(-l2,l2,[d[0]],d2)
h[1] = k.series24(-l2,l2,[d[1]],d2)


d7 = [9*d[0] , 2048-8*d[0]]

d7 = d

print("\n \n ^^^^^^^^^^^^^^^^^^^^^^   d = ",d,"   d7 = ",d7)
l3 = l2+0
h[2] = k1.series24(-l3,l3,[d7[0]],d2)
h[3] = k1.series24(-l3,l3,[d7[1]],d2)


init50(k.g,k.a2,l2,d,d7,d1,h,p,1)


# print("\n\n b1 =",b1)
# m[23][:] = init2(25)
# m[24][:] = init2(25)


print("\n \n in init50 b3 = ")
display50(b3)
print("\n \n in init50 b4 = ")
display25(b4)

v1 = init2(25)
v1[:] = b3

m = m4

################################################
# test
v1[23] = (v1[23]+e2)%p
v1[24] = (v1[24]+e3)%p


h1 = [0 for i in range(25)]

solve2(25,m,v1,p)
t1 = det(25,m)
print("\n \n det = ",t1)
display(0,4,15,24,m,v1)
l2solve(25,h1,v1,m,p)
print("\n \n after solve2 = ",h1)
print("\n \n k25 = ",k25)

# 1

c1 = d[1]
k2 = series4(g,l2,[c1],8,p)
k2.double(h1)
print("\n \n after double k2.series = ",k2.series)
c = (k2.series[0]+(p-1)*k2.series[4])%p
s = 2*(k2.series[1]+k2.series[3])%p
t1 = 2*l2*(2*(c1)//2)
a3 = exp2a(t1,k2.a2,p)
s1 = (a3[0]*c+a3[1]*s)%p
s2 = (-a3[1]*c+a3[0]*s)%p
print("\n \n c = {0}  s = {1}  s1 = {2}  s2 = {3}".format(c,s,s1,s2))


k3 = series4(g,2*l2,[c1//2],4,p)
print("\n \n k3.series = ",k3.series)
c = (k3.series[0]+(p-1)*k3.series[4])%p
s = 2*(k3.series[1]+k3.series[3])%p
t1 = 2*l2*(2*(c1)//2)
a3 = exp2a(t1,k2.a2,p)
s1 = (a3[0]*c+a3[1]*s)%p
s2 = (-a3[1]*c+a3[0]*s)%p
print("\n \n c = {0}  s = {1}  s1 = {2}  s2 = {3}".format(c,s,s1,s2))

# 2
"""
c1 = d[1]
k2 = series4(g,l2,[c1],8,p)
k2.double(h1)
print("\n \n after double k2.series = ",k2.series)
c = (k2.series[0]+(p-6)*k2.series[2]+k2.series[4])%p
s = 4*(k2.series[1]+(p-1)*k2.series[3])%p
t1 = 4*l2*(2*(c1)//2)
a3 = exp2a(t1,k2.a2,p)
s1 = (a3[0]*c+a3[1]*s)%p
s2 = (-a3[1]*c+a3[0]*s)%p
print("\n \n c = {0}  s = {1}  s1 = {2}  s2 = {3}".format(c,s,s1,s2))


k3 = series4(g,2*l2,[c1//2],4,p)
print("\n \n k3.series = ",k3.series)
c = (k3.series[0]+(p-6)*k3.series[2]+k3.series[4])%p
s = 4*(k3.series[1]+(p-1)*k3.series[3])%p
t1 = 4*l2*(2*(c1)//2)
a3 = exp2a(t1,k2.a2,p)
s1 = (a3[0]*c+a3[1]*s)%p
s2 = (-a3[1]*c+a3[0]*s)%p
print("\n \n c = {0}  s = {1}  s1 = {2}  s2 = {3}".format(c,s,s1,s2))
"""

a = m[30]
b = m[31]
t1 = multcnvl2(h1,a,p)
t2 = multcnvl2(h1,b,p)
print("\n \n t1 = {0}  t2 = {1}".format(t1,t2))

a = m[32]
b = m[33]
t3 = multcnvl2(h1,a,p)
t4 = multcnvl2(h1,b,p)
print("\n \n t3 = {0}  t4 = {1}".format(t3,t4))

d2 = d1*d1//2
t = 64*2*(3*d[0]+3*d[1])//(4*d2)
t = 16*2048
a3 = exp2a(t,k.a2,p)
print("\n \n a3 = ",a3)

t = 64*4*(d[0]+d[1])//(4*d2)
t = 8*2048
a4 = exp2a(t,k.a2,p)
print("\n \n a4 = ",a4)
       
