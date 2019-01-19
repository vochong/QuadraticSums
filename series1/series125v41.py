from series4v3 import *

def display125(b):
    for i in range(5):       
        for j in range(5):
            print("(",end=' ')
            for k in range(5):
                print("{0:2}".format(b[25*i+5*j+k]),end=' ')
            print(")  ",end=' ')      
        print()
    
def display149(b):
    for i in range(5):       
        for j in range(5):
            print("(",end=' ')
            for k in range(5):
                print("{0:2}".format(b[25*i+5*j+k]),end=' ')
            print(")  ",end=' ')      
        print()       
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

def series22v2(c1,c2,g,a2,d,d1,p):
    h1 = init2(4)
    for i in range(c1,c2+1):
        t = abs(i)
        g1 = exp1(t,g,p)
        g2 = exp1(t,g1,p)
        g1 = exp1(d1,g2,p)

        t = i-c1
        a3 = exp2a(t,a2,p)
        a4 = exp2a(d[0],a3,p)
        a5 = exp2a(d[1],a3,p)

        h1[0] = (h1[0]+a4[0]*a5[0]*g1)%p
        h1[1] = (h1[1]+a4[0]*a5[1]*g1)%p
        h1[2] = (h1[2]+a4[1]*a5[0]*g1)%p
        h1[3] = (h1[3]+a4[1]*a5[1]*g1)%p

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

def series23v2(c1,c2,s,g,a2,d,d1,p):
    h1 = init2(4)
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

        h1[0] = (h1[0]+a4[0]*a5[0]*g1)%p
        h1[1] = (h1[1]+a4[0]*a5[1]*g1)%p
        h1[2] = (h1[2]+a4[1]*a5[0]*g1)%p
        h1[3] = (h1[3]+a4[1]*a5[1]*g1)%p

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

def mult25(m,c1,c2,d1,d2,d3,p):
    for i in range(25):
        t1 = c1*m[d1][i]%p
        t2 = c2*m[d2][i]%p
        m[d3][i] = (t1+t2)%p      

def mult125(m,c1,c2,d1,d2,d3,p):
    for i in range(125):
        t1 = c1*m[d1][i]%p
        t2 = c2*m[d2][i]%p
        m[d3][i] = (t1+t2)%p        

def equation21v2(k,l2,d,d1,d2,m,e1,b1):
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
    # h1 = series23(-l3,l3,d1,k.g,k.a2,t1,1,p)
    # print("\n \n in equation21 t1 = ",t1,"   h1 = ",h1)

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
    # h2 = series23(-l3,l3,d1,k.g,k.a2,abs(t2),1,p)
    # print("\n \n in equation21 t2 = ",t2,"   h2 = ",h2)
    
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
    # h3 = series23(-l3,l3,d1,k.g,k.a2,abs(t3),1,p)
    # print("\n \n in equation21 t3 = ",t3,"   h3 = ",h3)

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
    # h4 = series23(-l3,l3,d1,k.g,k.a2,abs(t4),1,p)
    # print("\n \n in equation21 t4 = ",t4,"   h4 = ",h4)

    a3 = exp2a(abs(l2*t4),a2,p)
    a3[1] = (p-a3[1])%p
    if t4>0:
        a3[1] = (p-a3[1])%p
    mult125(m,a3[1],a3[0],139,140,e1+3,p)   
   
def equation22v2(k,l2,d,d2,m,e1,b1):
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
    # h1 = series23(-19,21,4,k.g,k.a2,t1,1,p)
    # print("\n \n in equation22 t1 = ",t1,"   h1 = ",h1)

    d4 = l2*d1
    t1 = exp1(d4*d4,g,p)
    l3 = d4-(d1//4)
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult125(m,s,0,143,143,133,p)
    mult125(m,s,0,144,144,134,p)

    # 2
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,143,p)

    mult125(m,1,1,t+1,t+2,141,p)
    mult125(m,1,p-1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,144,p)

    t2 = d[0]-d2[0]*d[1]-d2[1]*d[2]
    # h2 = series23(-(d4-d1//4),d4+d1//4,4,k.g,k.a2,abs(t2),1,p)
    # print("\n \n in equation22 t2 = ",t2,"   h2 = ",h2)

    mult125(m,s,0,143,143,135,p)
    mult125(m,s,0,144,144,136,p)

    # 3
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,1,141,142,143,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,1,141,142,144,p)

    t3 = d[0]+d2[0]*d[1]-d2[1]*d[2]
    # h3 = series23(-(d4-d1//4),d4+d1//4,4,k.g,k.a2,abs(t3),1,p)
    # print("\n \n in equation22 t3 = ",t3,"   h3 = ",h3)

    mult125(m,s,0,143,143,137,p)
    mult125(m,s,0,144,144,138,p)

    # 4
    mult125(m,1,1,t,t+3,141,p)
    mult125(m,1,p-1,t+5,t+6,142,p)
    mult125(m,1,p-1,141,142,143,p)

    mult125(m,p-1,1,t+1,t+2,141,p)
    mult125(m,1,1,t+4,t+7,142,p)
    mult125(m,1,p-1,141,142,144,p)

    t4 = d[0]-d2[0]*d[1]+d2[1]*d[2]
    # h4 = series23(-(d4-d1//4),d4+d1//4,4,k.g,k.a2,abs(t4),1,p)
    # print("\n \n in equation22 t4 = ",t4,"   h4 = ",h4)

    mult125(m,s,0,143,143,139,p)
    mult125(m,s,0,144,144,140,p) 

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
    # h5 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,t5,1,p)
    # print("\n \n in equation22 t5 = ",t5,"   h5 = ",h5)

    t1 = exp1(d4*d4,g,p)
    l3 = d4+3*d1//4
    t2 = exp1(l3*l3,g,p)
    s = inverse(t1,p)*t2%p
    mult125(m,s,0,153,153,141,p)
    mult125(m,s,0,154,154,142,p)    
 
    # 6
    mult125(m,1,p-1,t,t+3,151,p)
    mult125(m,1,1,t+5,t+6,152,p)
    mult125(m,1,1,151,152,153,p)

    mult125(m,1,1,t+1,t+2,151,p)
    mult125(m,1,p-1,t+4,t+7,152,p)
    mult125(m,1,p-1,151,152,154,p)

    t6 = d[0]-d2[0]*d[1]-d2[1]*d[2]
    # h6 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,abs(t6),1,p)
    # print("\n \n in equation22 t6 = ",t6,"   h6 = ",h6)

    mult125(m,s,0,153,153,143,p)
    mult125(m,s,0,154,154,144,p)

    # 7
    mult125(m,1,1,t,t+3,151,p)
    mult125(m,1,p-1,t+5,t+6,152,p)
    mult125(m,1,1,151,152,153,p)

    mult125(m,p-1,1,t+1,t+2,151,p)
    mult125(m,1,1,t+4,t+7,152,p)
    mult125(m,1,1,151,152,154,p)

    t7 = d[0]+d2[0]*d[1]-d2[1]*d[2]
    # h7 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,abs(t7),1,p)
    # print("\n \n in equation22 t7 = ",t7,"   h7 = ",h7)

    mult125(m,s,0,153,153,145,p)
    mult125(m,s,0,154,154,146,p)

    # 8
    mult125(m,1,1,t,t+3,151,p)
    mult125(m,1,p-1,t+5,t+6,152,p)
    mult125(m,1,p-1,151,152,153,p)

    mult125(m,p-1,1,t+1,t+2,151,p)
    mult125(m,1,1,t+4,t+7,152,p)
    mult125(m,1,p-1,151,152,154,p)

    t8 = d[0]-d2[0]*d[1]+d2[1]*d[2]
    # h7 = series23(-(d4+3*d1//4),d4-3*d1//4,4,k.g,k.a2,abs(t8),1,p)
    # print("\n \n in equation22 t8 = ",t8,"   h7 = ",h7)

    mult125(m,s,0,153,153,147,p)
    mult125(m,s,0,154,154,148,p)
    
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
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}".format(s2,s3))
    
    mult125(m,a4[0],a4[1],141,142,127,p)
    mult125(m,(p-a4[1])%p,a4[0],141,142,128,p)

    mult125(m,1,p-1,125,127,e1,p)
    mult125(m,1,p-1,126,128,e1+1,p)


    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    # print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22 t4 = ",t4)
    b1[e1] = t3
    b1[e1+1] = t4
   
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
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}  s = {2}".format(s2,s3,s))

    if (s>0):
        a3[1] = (p-a3[1])%p
        a4[1] = (p-a4[1])%p
        
    mult125(m,a3[0],a3[1],135,136,125,p)
    mult125(m,(p-a3[1])%p,a3[0],135,136,126,p)
    mult125(m,a4[0],a4[1],143,144,127,p)
    mult125(m,(p-a4[1])%p,a4[0],143,144,128,p)

    mult125(m,1,p-1,125,127,e1+2,p)
    # mult125(m,1,p-1,126,128,103,p)
 
    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    # print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22 t4 = ",t4)
    b1[e1+2] = t3

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
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}   s = {2}".format(s2,s3,s))
    
    if (s<0):
        a3[1] = (p-a3[1])%p
        a4[1] = (p-a4[1])%p

    mult125(m,a3[0],a3[1],137,138,125,p)
    mult125(m,(p-a3[1])%p,a3[0],137,138,126,p) 
    mult125(m,a4[0],a4[1],145,146,127,p)
    mult125(m,(p-a4[1])%p,a4[0],145,146,128,p)

    mult125(m,1,p-1,125,127,e1+3,p)
    mult125(m,1,p-1,126,128,e1+4,p)
 
    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    # print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22 t4 = ",t4)
    b1[e1+3] = t3
    b1[e1+4] = t4

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
    
    # print("\n \n in equation22 s2 = {0}  s3 = {1}  s = {2}".format(s2,s3,s))

    if (s>0):
        a3[1] = (p-a3[1])%p
        a4[1] = (p-a4[1])%p

    mult125(m,a3[0],a3[1],139,140,125,p)
    mult125(m,(p-a3[1])%p,a3[0],139,140,126,p)  
    mult125(m,a4[0],a4[1],147,148,127,p)
    mult125(m,(p-a4[1])%p,a4[0],147,148,128,p)

    mult125(m,1,p-1,125,127,e1+5,p)
    # mult125(m,1,p-1,126,128,106,p)

    l3 = l2*d1+1*d1//4
    l4 = l2*d1+3*d1//4
    # print("\n \n in equation22  l3 = {0}  l4 = {1}".format(l3,l4))
    g1 = exp1(l3*l3,g,p)
    g2 = exp1(l4*l4,g,p)
    t1 = a3[0]*g1%p
    t2 = a4[0]*g2%p
    t3 = (t1+(p-1)*t2)%p
    # print("\n \n in equation22 t3 = ",t3)
    t1 = a3[1]*g1%p
    t2 = a4[1]*g2%p
    t4 = (t1+(p+1)*t2)%p
    # print("\n \n in equation22 t4 = ",t4)
    b1[e1+5] = t3  

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

def equation30(k,l2,d,d1,d2,m,e1,b1):
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

    b2 = init2(4)
    
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
    print("\n \n in equation30 d2 = ",d2)
    print("\n \n in equation30 t1 = ",t1,"   h1 = ",h1)

    a3 = exp2a(l2*t1,a2,p)
    a3[1] = (p-a3[1])%p
    # mult125(m,a3[1],a3[0],133,134,e1,p)
    # test
    mult125(m,1,0,133,134,e1,p)

    g1 = exp1(l3*l3,g,p)
    l4 = -l3+(t1//(2*d1))
    l5 = l3+(t1//(2*d1))
    g2 = exp1(l4*l4,g,p)
    s1 = inverse(g1,p)*g2%p
    s2 = s1*i2%p
    mult125(m,s1,s2,133,134,e1,p)
    b2[0] = l4
    b2[1]=  l5
    h1 = series23(l4,l5,d1,k.g,k.a2,0,1,p)
    print("\n \n in e30 t = {0}  ({1} , {2})  h1 = {3}".format(0,l4,l5,h1))
    

    if (d2[1]==4 and d2[2]==2):
        mult125(m,1,0,133,134,147,p)
        mult125(m,0,1,133,134,148,p)

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

    g1 = exp1(l3*l3,g,p)
    l4 = -l3-(t4//(2*d1))
    l5 = l3-(t4//(2*d1))
    g2 = exp1(l4*l4,g,p)
    s1 = inverse(g1,p)*g2%p
    s2 = s1*i2%p
    mult125(m,s1,s2,139,140,e1+1,p)
    b2[2] = l4
    b2[3] = l5
    h1 = series23(l4,l5,d1,k.g,k.a2,0,1,p)
    print("\n \n in equation30 t1 = ",0,"   h1 = ",h1)

    return(b2)

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

def init81(g,l2,d,d1,h1,h2,h3,p):
    k = series(g,p)
    a2 = k.a2
    m = init1(157,125)
    b1 = init2(125)

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

    for i in range(25):
        b1[i] = h1[i]

    for i in range(20):
        b1[i+25] = h2[i]

    for i in range(4):
        for j in range(4):
            b1[4*i+j+45] = h3[5*i+j]

    d3 = [[2,2,2] , [2,2,4] , [2,4,2] , [4,2,2],
          [2,4,4] , [4,2,4] , [4,4,2] , [4,4,4]]

    for i in range(8):
        d2 = d3[i]
        equation21v2(k,l2,d,d1,d2,m,4*i+61,b1)

    d2 = [4,2]
    equation22v2(k,l2,d,d2,m,93,b1)
    d2 = [2,4]
    equation22v2(k,l2,d,d2,m,99,b1)
    d2 = [2,2]
    equation22v2(k,l2,d,d2,m,105,b1)
    d2 = [4,4]
    equation22v2(k,l2,d,d2,m,111,b1)

    d2 = [2,2,2]
    t1 = equation30(k,l2,d,d1,d2,m,117,b1)
    d2 = [2,2,4]
    t2 = equation30(k,l2,d,d1,d2,m,119,b1)
    d2 = [2,4,2]
    t3 = equation30(k,l2,d,d1,d2,m,121,b1)
    d2 = [2,4,4]
    t4 = equation30(k,l2,d,d1,d2,m,123,b1)
    b2 = t1+t2+t3+t4


    k25 = init2(25)
    k25[:] = h2
    d3 = [d[0] , d[2]]
    t1 = equation31(k,l2,d3,d1,b1,b2,k25)
    mult125(m,p-1,1,119,121,141,p)
    mult125(m,1,0,141,141,119,p)
    b1[119] = t1

    print("\n \n in init81 t1 = {0} t2 = {1}".format(t1,t2))
    print("\n           t3 = {0} t4 = {1}".format(t3,t4))    

    equation42(k,l2,d,d1,m,b1)

    equation43(k,l2,d,d1,m,b1)

    # 1    
    t1 = (-2*d[0]+3*d[1]+3*d[2])//2
    a3 = exp2a(t1,a2,p)
    t2 = (2*l2-1)
    a4 = exp2a(t2,a3,p)
    a4[1] = (p-a4[1])%p
    # mult125(m,a4[1],a4[0],129,130,121,p)

    a4[1] = (p-a4[1])%p
    # mult125(m,a4[0],a4[1],129,130,121,p)
    """ test """
    # mult125(m,a4[0],a4[1],129,130,132,p)


    print("\n \n in init81 t1 = {0}  d = {1}".format(t1,d))
    t = d[1]-d[2]
    t2 = d1*d1
    if t==t2:
        t2 = (2*l2+1)
        a5 = exp2a(t2,a3,p)
        d4 = l2*d1
        t1 = d4+(d1//2)
        g1 = exp1(t1*t1,g,p)
        t2 = g1*a5[1]%p
        print("\n \n in init81 t1 = {0}  t2 = {1}".format(t1,t2))
    
    return(m,b1)

def equation42(k,l2,d,d1,m,b1):
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

    i3 = p-i2
    t2 = [1,4*i3%p,p-6,4*i2%p,1]

    c1 = [1,0,p-6,0,1]
    s1 = [0,4,0,p-4,0]

    t = 133
    mult3(m,t+0,t1,t2,c1,p)
    mult3(m,t+1,t1,t2,s1,p) 


    d4 = l2*d1
    l3 = -d4+(2*d[0]-4*d[1]+0*d[2])//(2*d1)
    l4 = d4+(2*d[0]-4*d[1]+0*d[2])//(2*d1)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p
    
    mult125(m,1,0,t,t,141,p)
    mult125(m,1,0,t+1,t+1,142,p)
    mult125(m,g3,0,141,141,125,p)
    mult125(m,g3,0,142,142,126,p) 

    t1 = 0*d[0]+0*d[1]+4*d[2]
    h1 = series23(l3,l4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in e42 ({0} , {1}) t1 = {2}   h1 = {3}".format(l3,l4,t1,h1))


    # 2
    c1 = [1,0,0,0,p-1]
    s1 = [0,2,0,2,0]
    
    c2 = [1, 3*i2%p, p-3, p-i2, 0]
    s2 = [0, 1, 3*i2%p, p-3, p-i2]

    i3 = p-i2
    c3 = [1, i2, p-3, 3*i3%p, 0]
    s3 = [0, 3, 3*i2%p, p-1, i3]


    t = 133
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)
    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)    
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)



    d4 = l2*d1
    l3 = -d4+(0*d[0]+3*d[1]+1*d[2])//(2*d1)
    l4 = d4+(0*d[0]+3*d[1]+1*d[2])//(2*d1)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p
    
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+1,t+2,142,p)
    mult125(m,1,p-1,t+4,t+7,143,p)
    mult125(m,1,1,t+5,t+6,144,p)
    
    mult125(m,1,1,141,144,145,p)
    mult125(m,1,p-1,142,143,146,p)
    
    mult125(m,g3,0,145,145,127,p)
    mult125(m,g3,0,146,146,128,p) 

    t1 = -2*d[0]+1*d[1]+3*d[2]
    h1 = series23(l3,l4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in e42 ({0} , {1}) t1 = {2}   h1 = {3}".format(l3,l4,t1,h1))



    # 3
    c1 = [1,0,0,0,p-1]
    s1 = [0,2,0,2,0]

    i3 = p-i2
    c2 = [1, i2, p-3, 3*i3%p, 0]
    s2 = [0, 3, 3*i2%p, p-1, i3]
    
    c3 = [1, i3, p-3, 3*i2%p, 0]
    s3 = [0, 3, 3*i3%p, p-1, i2]


    t = 133
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)
    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)    
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)



    d4 = l2*d1
    l3 = -d4+(0*d[0]+1*d[1]-1*d[2])//(2*d1)
    l4 = d4+(0*d[0]+1*d[1]-1*d[2])//(2*d1)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p
    
    mult125(m,1,p-1,t,t+3,141,p)
    mult125(m,1,1,t+1,t+2,142,p)
    mult125(m,1,p-1,t+4,t+7,143,p)
    mult125(m,1,1,t+5,t+6,144,p)
    
    mult125(m,1,1,141,144,145,p)
    mult125(m,1,p-1,142,143,146,p)
    
    mult125(m,g3,0,145,145,129,p)
    mult125(m,g3,0,146,146,130,p) 

    t1 = -2*d[0]+3*d[1]+3*d[2]
    h1 = series23(l3,l4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in e42 ({0} , {1}) t1 = {2}   h1 = {3}".format(l3,l4,t1,h1))


    # 4
    c1 = [1, i2, 1, i2, 0]
    s1 = [0, 1, i2, 1, i2]
    
    c2 = [1, 3*i2%p, p-3, p-i2, 0]
    s2 = [0, 1, 3*i2%p, p-3, p-i2]

    c3 = [1, 3*i2%p, p-3, p-i2, 0]
    s3 = [0, 1, 3*i2%p, p-3, p-i2]


    t = 133
    mult3(m,t+0,c1,c2,c3,p)
    mult3(m,t+1,c1,c2,s3,p)    
    mult3(m,t+2,c1,s2,c3,p)
    mult3(m,t+3,c1,s2,s3,p)
    mult3(m,t+4,s1,c2,c3,p)
    mult3(m,t+5,s1,c2,s3,p)    
    mult3(m,t+6,s1,s2,c3,p)
    mult3(m,t+7,s1,s2,s3,p)

    d4 = l2*d1
    l3 = -d4+(1*d[0]+3*d[1]+3*d[2])//(2*d1)
    l4 = d4+(1*d[0]+3*d[1]+3*d[2])//(2*d1)
    g1 = exp1(d4*d4,g,p)
    g2 = exp1(l3*l3,g,p)
    g3 = inverse(g1,p)*g2%p
    
    mult125(m,1,p-1,t,t+6,141,p)
    mult125(m,1,1,t+2,t+4,142,p)
    mult125(m,1,p-1,t+1,t+7,143,p)
    mult125(m,1,1,t+3,t+5,144,p)

    mult125(m,1,1,141,144,145,p)
    mult125(m,1,p-1,142,143,146,p)
    
    mult125(m,g3,0,145,145,131,p)
    mult125(m,g3,0,146,146,132,p) 

    t1 = 1*d[0]+1*d[1]-1*d[2]
    h1 = series23(l3,l4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in e42 ({0} , {1}) t1 = {2}   h1 = {3}".format(l3,l4,t1,h1))

    

def equation31(k,l2,d,d1,b1,b2,k25):
    g = k.g
    a2 = k.a2
    i2 = k.i2
    p = k.p

    m = init1(30,25)
    h1 = init2(4)
    h2 = init2(4)
    b3 = init2(25)

    t = 25
    t1 = [1,0,2,0,1]
    
    i3 = p-i2
    t2 = [1,2*i2%p,0,2*i2%p,p-1]
    t3 = [1,2*i3%p,0,2*i3%p,p-1]
    
    t4 = [1,4*i2%p,p-6,4*i3%p,1]
    t5 = [1,4*i3%p,p-6,4*i2%p,1]

    s = [0,2,4,-2,-4]

    # 1
    d3 = [[2,4] , [-2,0] , [-2,-2] , [-2,2]]
    for i in range(4):
            e1 = i
            d2 = d3[i]
            if d2[0]==0:
                s1 = t1
        
            if d2[0]==2:
                s1 = t2
        
            if d2[0]==-2:
                s1 = t3

            if d2[0]==4:
                s1 = t4

            if d2[0]==-4:
                s1 = t5

            if d2[1]==0:
                s2 = t1
        
            if d2[1]==2:
                s2 = t2
        
            if d2[1]==-2:
                s2 = t3

            if d2[1]==4:
                s2 = t4

            if d2[1]==-4:
                s2 = t5

            mult2(m,t,s1,s2,p)
            d4 = l2*d1
            g1 = exp1(d4*d4,g,p)
            l3 = (d2[0]*d[0]+d2[1]*d[1])//(2*d1)
            l4 = -d4+l3
            l5 = d4+l3
            g2 = exp1(l4*l4,g,p)
            g3 = inverse(g1,p)*g2%p
            mult25(m,g3,0,t,t,e1,p)
            h1[e1] = multcnvl2(m[e1],k25,p)
            h2[e1] = [l4,l5]

    print("\n \n in equation31 h1 = {0}  h2 = {1}".format(h1,h2))
    print("\n \n in equation31 b2 = ",b2)
    h3 = init2(5)
    h3[0] = [b2[0] , b2[1]]
    h3[1] = [b2[2] , b2[3]]
    h3[2] = [b2[6] , b2[7]]
    h3[3] = [b2[10] , b2[11]]
    h3[4] = [b2[14] , b2[15]]
    print("\n \n in equation31 h3 = ",h3)

    t1 = h2[1]
    h2.append(t1)
    b4 = init2(5)
    for i in range(5):
        t1 = 0
        if h2[i][0]<h3[i][0]:
            h4 = k.series23(h2[i][0],h3[i][0]-d1,d1,0,1)
            h5 = k.series23(h2[i][1]+d1,h3[i][1],d1,0,1)
            t1 = (h5[0]+(p-1)*h4[0])%p
        if h2[i][0]>h3[i][0]:
            h4 = k.series23(h3[i][0],h2[i][0]-d1,d1,0,1)
            h5 = k.series23(h3[i][1]+d1,h2[i][1],d1,0,1)
            t1 = (h4[0]+(p-1)*h5[0])%p
        b4[i] = t1

    t1 = h1[1]
    h1.append(t1)    

    for i in range(5):
            h1[i] = (h1[i]+b4[i])%p

    t2 = [b2[4] , b2[5]]
    t3 = [b2[8] , b2[9]]
    if t2[0]<t3[0]:
        h4 = k.series23(t2[0],t3[0]-d1,d1,0,1)
        h5 = k.series23(t2[1]+d1,t3[1],d1,0,1)
        t1 = (h5[0]+(p-1)*h4[0])%p
    if t2[0]>t3[0]:
        h4 = k.series23(t3[0],t2[0]-d1,d1,0,1)
        h5 = k.series23(t3[1]+d1,t2[1],d1,0,1)
        t1 = (h4[0]+(p-1)*h5[0])%p
    
    h1.append(t1)
    print("\n \n in equation31 t2 = {0}  t3 = {1}".format(t2,t3))
    print("\n \n in equation31 b4 = ",b4)
    print("\n \n in equation31 h1 = ",h1)

    b1[117] = h1[0]
    b1[118] = h1[1]
    b1[120] = h1[2]
    b1[122] = h1[3]
    b1[124] = h1[4]
 
    t1 = h1[5]

    return(t1)

def equation43(k,l2,d,d1,m,b1):
    a2 = k.a2
    i2 = k.i2
    g = k.g
    p = k.p

    # 1
    i3 = p-i2
    t1 = [1 , 2*i3%p, p-1, 0, 0]
    t2 = [0 , 1 , 2*i3%p , p-1, 0]
    t3 = [0 , 0 , 1 , 2*i3%p , p-1]

    t4 = 3*d[1]//2
    t4 = t4*(2*l2+1)
    a3 = exp2a(t4,a2,p)
    c,s = a3[0],a3[1]
    # c,s = p-s,c
    c1 = [c , 3*s%p  , (p-3)*c%p ,  p-s , 0]
    s1 = [0 , c , 3*s%p  , (p-3)*c%p ,  p-s]

    t4 = 3*d[2]//2
    t4 = t4*(2*l2+1)
    a3 = exp2a(t4,a2,p)
    c,s = a3[0],a3[1]
    c,s = p-s,c
    c2 = [c , 3*s%p  , (p-3)*c%p ,  p-s , 0]
    s2 = [0 , c , 3*s%p  , (p-3)*c%p ,  p-s]

    t = 141
    mult3(m,t+0,t1,c1,c2,p)
    mult3(m,t+1,t1,c1,s2,p) 
    mult3(m,t+2,t1,s1,c2,p)
    mult3(m,t+3,t1,s1,s2,p)
    
    mult3(m,t+4,t2,c1,c2,p)
    mult3(m,t+5,t2,c1,s2,p) 
    mult3(m,t+6,t2,s1,c2,p)
    mult3(m,t+7,t2,s1,s2,p)

    mult3(m,t+8,t3,c1,c2,p)
    mult3(m,t+9,t3,c1,s2,p) 
    mult3(m,t+10,t3,s1,c2,p)
    mult3(m,t+11,t3,s1,s2,p)    
    
    mult125(m,1,p-1,t,t+5,133,p)
    mult125(m,1,p-1,t+4,t+9,134,p)
    mult125(m,1,p-1,t+2,t+7,135,p)
    mult125(m,1,p-1,t+6,t+11,136,p)

    mult125(m,1,1,t+1,t+4,137,p)
    mult125(m,1,1,t+5,t+8,138,p)
    mult125(m,1,1,t+3,t+6,139,p)
    mult125(m,1,1,t+7,t+10,140,p)

    mult125(m,1,1,133,136,141,p)
    mult125(m,p-1,1,134,135,142,p)
    mult125(m,1,1,137,140,143,p)
    mult125(m,p-1,1,138,139,144,p)

    t4 = d[1]-d[0]
    t5 = d[2]+d[0]
    print("\n \n in e43 t4 = {0}  t5 = {1}".format(t4,t5))
    t4 = 1*t4*(2*l2+1)
    a3 = exp2a(t4,a2,p)
    c,s = a3[0],a3[1]
    # c,s = p-s,c
    mult125(m,c,s,142,144,145,p)
    mult125(m,p-s,c,141,142,146,p)
    # mult125(m,c,s,145,146,147,p)
    mult125(m,1,1,145,146,132,p)
    
    # mult125(m,1,0,123,123,132,p)        

    
    """
    t1 = 0*d[0]+0*d[1]+4*d[2]
    h1 = series23(l3,l4,d1,k.g,k.a2,abs(t1),1,p)
    print("\n \n in e43 ({0} , {1}) t1 = {2}   h1 = {3}".format(l3,l4,t1,h1))
    """
    
    

p = 2473

m = init1(157,125)
v = init2(125)

k = series(1,p)
g = k.g

k = series(g,p)
print("\n \n g = {0}  p = {1}".format(g,p))

l2 = 20+2
d1 = 8


d = [d1*d1//2, 1024+0*64, 1024-1*64]

# d = [d1*d1//2, (1024)+1*64, (1024-1*64)+0*64]


k = series4(g,l2,[d[1] , d[2]],d1,p)

k125 = k.series125(-l2,l2,d,d1*d1)

d3 = [d[1] , d[2]]
h1 = k.series25(-l2,l2,d3,d1*d1)
print("\n \n h1  = ",h1)

d3 = [d[0] , d[2]]
h2 = k.series25(-l2,l2,d3,d1*d1)
print("\n \n h2  = ",h2)

d3 = [d[0] , d[1]]
h3 = k.series25(-l2,l2,d3,d1*d1)
print("\n \n h3  = ",h3)


m4,b4 = init81(g,l2,d,d1,h1,h2,h3,p)

b3 = init2(157)
for i in range(149):
    b3[i] = multcnvl2(m4[i],k125,p)


print("\n \n b3 = ")
display149(b3)

print("\n \n b4 =")
display125(b4)


m = m4

v1 = init2(125)

v1[:] = b3
t1 = 121
t1 = 123
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
print("\n \n after solve2 = ")
display125(h1)
print("\n \n k125 = ")
display125(k125)

t1 = multcnvl2(m[125],h1,p)
t2 = multcnvl2(m[126],h1,p)
print("\n \n t1 = {0}   t2 = {1}".format(t1,t2))

t3 = multcnvl2(m[127],h1,p)
t4 = multcnvl2(m[128],h1,p)
print("\n \n t3 = {0}   t4 = {1}".format(t3,t4))

t5 = multcnvl2(m[129],h1,p)
t6 = multcnvl2(m[130],h1,p)
print("\n \n t5 = {0}   t6 = {1}".format(t5,t6))

t7 = multcnvl2(m[131],h1,p)
t8 = multcnvl2(m[132],h1,p)
print("\n \n t7 = {0}   t8 = {1}".format(t7,t8))

h2 = init2(8)
h2[0] = (t1+(p-1)*b3[125])%p
h2[1] = (t2+(p-1)*b3[126])%p
h2[2] = (t3+(p-1)*b3[127])%p
h2[3] = (t4+(p-1)*b3[128])%p
h2[4] = (t5+(p-1)*b3[129])%p
h2[5] = (t6+(p-1)*b3[130])%p
h2[6] = (t7+(p-1)*b3[131])%p
h2[7] = (t8+(p-1)*b3[132])%p

print("\n \n h2 = ",h2)
print("\n \n")

k.double2(h1)
k.variables()
print("\n \n")

k2 = series4(g,2*l2,[d[1]//2 , d[2]//2],d1//2,p)
k2.variables()
t = k2.f4(4,2)

t1 = k.f4(4,2)
t2 = k.l2*(4*k.d[0]+2*k.d[1])
a3 = exp2a(t2,k.a2,p)
s1 = (a3[0]*t1[0]+a3[1]*t1[1])%p
s2 = ((p-a3[1])*t1[0]+a3[0]*t1[1])%p
print("\n \n s1 = {0}  s2 = {1}".format(s1,s2))

t1 = k.f4(4,4)
t2 = k.l2*(4*k.d[0]+4*k.d[1])
a3 = exp2a(t2,k.a2,p)
s3 = (a3[0]*t1[0]+a3[1]*t1[1])%p
s4 = ((p-a3[1])*t1[0]+a3[0]*t1[1])%p
print("\n \n s3 = {0}  s4 = {1}".format(s3,s4))

g = 5
l2 = 20
d1 = 16
d = [1024,512*7]
k1 = series4(g,l2,d,d1,p)
d2 = [(d1*d1)//2, d[0] , d[1]]
k125 = k1.series125(-l2,l2,d2,d1*d1)
k1.double2(k125)
k1.variables()
k2 = series4(g,2*l2,[d[0]//2 , d[1]//2],d1//2,p)
print()
k2.variables()

g = 5
l2 = 20
d1 = 8
d = [1024,7*512]
k1 = series4(g,l2,d,d1,p)
k1.adjust2(64,128)
print("\n \n k1 = ",k1.series)
d = [d[0]+64 , d[1]+128]
k2 = series4(g,l2,d,d1,p)
print("\n \n k2 = ",k2.series)
      
