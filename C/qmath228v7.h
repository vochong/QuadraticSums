/*
#include "stdio.h"
#include "time.h"
#include "alloc.h"
#include "process.h"
*/

typedef int integer;
typedef integer *STRING[220];

const int m = 220;
const d1 = 8;
const d2 = 144;

const integer m80[81]= {1,0,4,0,6,0,4,0,1,
                        1,0,2,0,0,0,-2,0,-1,
                        0,2,0,6,0,6,0,2,0,
                        1,0,-4,0,-10,0,-4,0,1,
                        0,4,0,4,0,-4,0,-4,0,
                        1,0,-14,0,0,0,14,0,-1,
                        0,6,0,-14,0,-14,0,6,0,
                        1,0,-28,0,70,0,-28,0,1,
                        0,8,0,-56,0,56,0,-8,0};

void setzero (int m2, STRING ptr2);
void setzero2a (int m2, int r1, int r2, STRING ptr2);
void swtc (int m2, int e1, int e2, STRING ptr2, integer v1[]);
void addm (int m2, int e1, int e2, STRING ptr2, integer v1[], integer p);
void multm (int m2, integer c, int e1, STRING ptr2, integer v1[], integer p);
void iter2 (int m2, int e1, STRING ptr2, integer v1[]);
void solve2m (int m2, STRING ptr2, integer v1[], integer p);
unsigned int det (unsigned int c, STRING ptr2);
void set7 (unsigned int r, unsigned int c, integer t1, STRING ptr2);
void setzero2 (int c1, integer h1[]);
void cmult (integer a1[], integer a2[], integer a3[], integer p);
void equal2 (integer a1[], integer a2[]);
void exp7(int e, integer a1[], integer a2[], integer p);
void set2d(unsigned int r, unsigned int r1, STRING ptr2);
void equal4 (int m2, int e1, int e2, STRING ptr2, integer v1[], integer p);
void addm4 (int m2, int e1, int e2, int e3, STRING ptr2, integer v1[], integer p);
void multm4 (int m2, integer c, int e1, int e2, STRING ptr2, integer v1[], integer p);
void mult4 (int m2, int e1, int e2, STRING ptr2, integer p);
void add5 (int m2, int e1, int e2, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add5a (int m2, int e1, int e2, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add41 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add41a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add42 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add42a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add43 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add43a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add44 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void add44a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p);
void det5 (int c1, int c2, int c3, int c4, int m2, int e, int s1, int s2,
           STRING ptr2, integer v1[], integer p);
void set4a (int r, int c1, STRING ptr2);
void set4b (unsigned int r, int d, int c1, int c2, STRING ptr2, integer p);
void mult50 (int m2, integer c1, integer c2, int e1, int e2, int s1, int s2,
             STRING ptr2, integer v1[], integer p);
void mult51 (int m2, int e, int s1, STRING ptr2, integer v1[], integer p);
void mult8a (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p);
void mult8b (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p);
void mult8c (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p);
void mult8d (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p);
integer multcnvl (int l2, int e1, int e2, STRING ptr2, integer p);
void setcs(int d, integer a2[], integer cs[], integer sn[], integer p);
void setcs1(int d, integer a2[], integer cs1[], integer sn1[], integer p);
void setcs2(int d, integer a2[], integer cs1[], integer sn1[], integer p);
void displaycs(int c, integer cs[], integer sn[]);
void swtc2(int c1, int c2, int c, int s1, int s2, STRING ptr2);
void det5b (int c1, int c2, int c3, int c4, int m2, int e, int e1,
            int s1, int s2, STRING ptr2, integer v1[], integer p);
void equation41(STRING ptr2);
void equation42(STRING ptr2, integer p);
void equation43a(STRING ptr2);
void equation43b(STRING ptr2, integer p);
void equation43c(STRING ptr2, integer p);
void equation44(int m2, integer cs[], integer sn[], integer cs1[], integer sn1[],
                STRING ptr2, integer b1[], integer p);
void equation46a(int m2, integer cs[], integer sn[],integer cs1[], integer sn1[],
                 STRING ptr2, integer b1[], integer p);
void equation46b(int m2, integer cs[], integer sn[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p);
void equation47n2(int m2, integer cs[], integer sn[], integer cs1[], integer sn1[],
                  STRING ptr2, integer b1[], integer p);
void equation48a1(int m2, integer cs[], integer sn[],
                  integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p);
void equation48b1(int m2, integer cs[], integer sn[], integer cs1[], integer sn1[],
                  STRING ptr2, integer b1[], integer p);
void equation31a(int m2, integer a1[], integer cs[], integer sn[], integer cs1[], integer sn1[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p);
void equation32a(int m2, integer a1[], integer cs[], integer sn[], integer cs1[], integer sn1[],
                 STRING ptr2, integer b1[], integer p);
void equation33a(int m2, integer a1[], integer cs[], integer sn[],integer cs1[], integer sn1[],
                 STRING ptr2, integer b1[], integer p);
void equation34a(int m2, integer a1[], integer cs[], integer sn[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p);
void equation35a(int m2, integer a1[], integer cs[], integer sn[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p);
void equation36a(int m2, integer a1[], integer cs[], integer sn[], integer cs1[], integer sn1[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p);
integer inverse2(integer a, integer b);
void lsolve(int m2, int r , int c, integer h11[], integer h12[], STRING ptr2, integer p);
void l2solve(int m2, integer h11[], integer h12[], STRING ptr2, integer p);
void equation61(integer ws1[], STRING ptr2, integer b2[]);
void equation64(integer ws1[], STRING ptr2, integer b2[], integer p);
integer fn66a(unsigned int c, integer ws1[], integer p);
integer fn66b(unsigned int c, integer ws1[], integer p);
void equation66(int l2, integer ws1[],integer ws2[], integer cs[], integer sn[],
                integer h11[], integer h12[], STRING ptr2, integer b2[], integer p);
integer fn67a(unsigned int c, integer hs1[], integer p);
integer fn67b(unsigned int c, integer hs1[], integer p);
integer fn67c(unsigned int i, integer c8[], integer p);
integer fn67e1(integer c8[], integer p);
integer fn67e2(integer c8[], integer p);
void equation67a4(int l2, integer a2[], integer hs1[], integer hs2[], integer h11[],
                  integer h12[], STRING ptr2, integer b2[], integer p);
void equation63a(int l2, integer a2[], integer h11[], integer h12[],
                 STRING ptr2, integer b2[], integer p);
void equation63b(int l2, integer a2[], integer a10[], integer a11[], integer h11[],
                 integer h12[], STRING ptr2, integer b2[], integer p);
void fn68(integer c8[], integer h11[], integer h12[], integer p);
void equation68(int l2, integer a2[], integer a10[], integer a11[], integer hs2[],
                integer h11[], integer h12[], integer b2[], integer p);
void equation62(integer b2[]);
void set138(int m2, int l2, integer a2[], integer a10[], integer a11[],
            integer a12[], integer ws1[], integer hs1[], integer ws2[],
            integer hs2[], integer cs[], integer sn[], integer h11[],
            integer h12[], integer cs1[], integer sn1[], integer cs2[],
            integer sn2[], STRING ptr2, integer b2[], integer p);
void series(int c1, int c2, integer a2[], int d, integer h11[], long int d1, integer p);
void series1(int c1, int c2, int s, integer a2[], int d, integer h11[], long int d1, integer p);
void series3(int l2, integer a2[], int d, integer h11[], long int d1, integer p);
void series4d(int l2, integer a2[], int d, integer h11[], long int d1, integer p);


void setzero (int m2, STRING ptr2)
{
int i,j;

for (i=0;i<m2;i++)
	{
	for (j=0;j<m2;j++)
		{
		*(ptr2[i]+j) = 0;
		}
	}
}

void setzero2a (int m2, int r1, int r2, STRING ptr2)
{
int i,j;

for (i=r1;i<(r2+1);i++)
	{
	for (j=0;j<m2;j++)
		{
		*(ptr2[i]+j) = 0;
		}
	}
}

void swtc (int m2, int e1, int e2, STRING ptr2, integer v1[])
{
int i;
integer t;
integer t1[220] = {0};
integer t2[220] = {0};
/*
integer t1[m] = {0};
integer t2[m] = {0};
*/

for (i=0;i<m2;i++)
	{
	t1[i] = *(ptr2[e1]+i);
	t2[i] = *(ptr2[e2]+i);
	}
for (i=0;i<m2;i++)
	{
	*(ptr2[e1]+i) = t2[i];
	*(ptr2[e2]+i) = t1[i];
	}
t = v1[e1];
v1[e1] = v1[e2];
v1[e2] = t;
}

void addm (int m2, int e1, int e2, STRING ptr2, integer v1[], integer p)
{
int i;
integer t1;
integer t2;

for (i=0;i<m2;i++)
	{
	t1 = *(ptr2[e1]+i);
	t2 = *(ptr2[e2]+i);
	*(ptr2[e1]+i) = (t1+t2)%p;
	}
v1[e1] = (v1[e1] + v1[e2])%p;
}

void multm (int m2, integer c, int e1, STRING ptr2, integer v1[], integer p)
{
int i;
integer t1;

for (i=0;i<m2;i++)
	{
	t1 = *(ptr2[e1]+i);
	*(ptr2[e1]+i) = (c*t1)%p;
	}
v1[e1] = (c*v1[e1])%p;
}

void iter2 (int m2, int e1, STRING ptr2, integer v1[])
{
int i;
int t;
integer t2;

t = 0;
for (i=0;i<e1+1;i++)
	{
	t2 = *(ptr2[i] + (m2-1-e1));
	if ((t2 != 0) && (t == 0))
		{
		t = i+1;
		}
	}
if (t == 0)
	{
	printf("\n \n error in iter2 det = 0");
	t = 1;
	}
swtc(m2,t-1,e1,ptr2,v1);
}

void solve2m (int m2, STRING ptr2, integer v1[], integer p)
{
int i;
int j;
integer t1;
integer t2;
integer t3;

for (i=1;i<m2;i++)
	{
	iter2(m2,m2-i,ptr2,v1);
	for (j=0;j<m2-i;j++)
		{
		t3 = *(ptr2[j] + i-1);
		if (t3 != 0)
			{
			t1 = (*(ptr2[j] + i-1))%p;
			t2 = (*(ptr2[m2-i] + i-1))%p;
			t2 = p-t2;
			multm(m2,t1,m2-i,ptr2,v1,p);
			multm(m2,t2,j,ptr2,v1,p);
			addm(m2,j,m2-i,ptr2,v1,p);
			}
		}
	}
}

unsigned int det (unsigned int c, STRING ptr2)
{
unsigned int i;
unsigned int s1,s2;
integer s5;
unsigned int t1;

	s1 = 0;
	s2 = c-1;
	t1 = 0;
	for (i=0;i<c;i++)
		{
		s5 = *(ptr2[s2] + s1);
		if (s5!=0)
			{
			t1 = t1+1;
			}
		s1 = s1+1;
		s2 = s2-1;
		}
	return(t1);
}

void set7 (unsigned int r, unsigned int c, integer t1, STRING ptr2)
{
*(ptr2[r] + c) = t1;
}

void setzero2 (int c1, integer h1[])
{
unsigned int i;

for(i=0;i<c1;i++)
	{
	h1[i] = 0;
	}
}

void cmult (integer a1[], integer a2[], integer a3[], integer p)
{
integer t1,t2;

t1 = (a1[0]*a2[0])%p;
t2 = (a1[1]*a2[1])%p;
t2 = p-t2;
a3[0] = (t1+t2)%p;

t1 = (a1[0]*a2[1])%p;
t2 = (a1[1]*a2[0])%p;
a3[1] = (t1+t2)%p;
}

void equal2 (integer a1[], integer a2[])
{
a2[0] = a1[0];
a2[1] = a1[1];
}

void exp7 (int e, integer a1[], integer a2[], integer p)
{
int e1;
integer sq[2] = {0};
integer t[2] = {0};
integer t1[2] = {0};

t[0] = 1;
t[1] = 0;
equal2(a1,sq);
e1 = e;
while(e1 != 0)
	{
	if ((e1 % 2) == 1)
		{
		cmult(sq,t,t1,p);
		equal2(t1,t);
		e1 = (e1 - 1) / 2;
		}
	else
		{
		e1 = e1 / 2;
		}
	cmult(sq,sq,t1,p);
	equal2(t1,sq);
	}
equal2(t,a2);
}

void set2d(unsigned int r, unsigned int r1, STRING ptr2)
{
unsigned int i;

for(i=0;i<d2;i++)
	{
	*(ptr2[r] + i) = *(ptr2[r1] + i);
	}
}

void equal4 (int m2, int e1, int e2, STRING ptr2, integer v1[], integer p)
{
int i;
integer t1;

for (i=0;i<m2;i++)
	{
	t1 = *(ptr2[e1]+i);
	*(ptr2[e2]+i) = t1%p;
	}
v1[e2] = v1[e1]%p;
}

void addm4 (int m2, int e1, int e2, int e3, STRING ptr2, integer v1[], integer p)
{
int i;
integer t1;
integer t2;

for (i=0;i<m2;i++)
	{
	t1 = *(ptr2[e1]+i);
	t2 = *(ptr2[e2]+i);
	*(ptr2[e3]+i) = (t1+t2)%p;
	}
v1[e3] = (v1[e1] + v1[e2])%p;
}

void multm4 (int m2, integer c, int e1, int e2, STRING ptr2, integer v1[], integer p)
{
int i;
integer t1;

for (i=0;i<m2;i++)
	{
	t1 = *(ptr2[e1]+i);
	*(ptr2[e2]+i) = (c*t1)%p;
	}
v1[e2] = (c*v1[e1])%p;
}

void mult4 (int m2, int e1, int e2, STRING ptr2, integer p)
{
int i;
integer t1;

for (i=0;i<m2-1;i++)
	{
	t1 = *(ptr2[e1]+i);
	*(ptr2[e2]+i+1) = t1%p;
	}
*(ptr2[e2]+0) = 0;
}

void add5 (int m2, int e1, int e2, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
mult4(m2,e2,s1,ptr2,p);
multm4(m2,p-1,s1,s1,ptr2,v1,p);
addm4(m2,e1,s1,s1,ptr2,v1,p);

mult4(m2,e1,s2,ptr2,p);
addm4(m2,e2,s2,s2,ptr2,v1,p);

equal4(m2,s1,e1,ptr2,v1,p);
equal4(m2,s2,e2,ptr2,v1,p);
}

void add5a (int m2, int e1, int e2, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
mult4(m2,e2,s1,ptr2,p);
addm4(m2,e1,s1,s1,ptr2,v1,p);

mult4(m2,e1,s2,ptr2,p);
multm4(m2,p-1,s2,s2,ptr2,v1,p);
addm4(m2,e2,s2,s2,ptr2,v1,p);

equal4(m2,s1,e1,ptr2,v1,p);
equal4(m2,s2,e2,ptr2,v1,p);
}

void add41 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5(m2,e+1,e+3,s1,s2,ptr2,v1,p);
add5(m2,e+2,e+4,s1,s2,ptr2,v1,p);

add5(m2,e+5,e+7,s1,s2,ptr2,v1,p);
add5(m2,e+6,e+8,s1,s2,ptr2,v1,p);

add5(m2,e+9,e+11,s1,s2,ptr2,v1,p);
add5(m2,e+10,e+12,s1,s2,ptr2,v1,p);

add5(m2,e+13,e+15,s1,s2,ptr2,v1,p);
add5(m2,e+14,e+16,s1,s2,ptr2,v1,p);
}

void add41a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5a(m2,e+1,e+3,s1,s2,ptr2,v1,p);
add5a(m2,e+2,e+4,s1,s2,ptr2,v1,p);

add5a(m2,e+5,e+7,s1,s2,ptr2,v1,p);
add5a(m2,e+6,e+8,s1,s2,ptr2,v1,p);

add5a(m2,e+9,e+11,s1,s2,ptr2,v1,p);
add5a(m2,e+10,e+12,s1,s2,ptr2,v1,p);

add5a(m2,e+13,e+15,s1,s2,ptr2,v1,p);
add5a(m2,e+14,e+16,s1,s2,ptr2,v1,p);
}

void add42 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5(m2,e+1,e+2,s1,s2,ptr2,v1,p);
add5(m2,e+3,e+4,s1,s2,ptr2,v1,p);

add5(m2,e+5,e+6,s1,s2,ptr2,v1,p);
add5(m2,e+7,e+8,s1,s2,ptr2,v1,p);

add5(m2,e+9,e+10,s1,s2,ptr2,v1,p);
add5(m2,e+11,e+12,s1,s2,ptr2,v1,p);

add5(m2,e+13,e+14,s1,s2,ptr2,v1,p);
add5(m2,e+15,e+16,s1,s2,ptr2,v1,p);
}

void add42a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5a(m2,e+1,e+2,s1,s2,ptr2,v1,p);
add5a(m2,e+3,e+4,s1,s2,ptr2,v1,p);

add5a(m2,e+5,e+6,s1,s2,ptr2,v1,p);
add5a(m2,e+7,e+8,s1,s2,ptr2,v1,p);

add5a(m2,e+9,e+10,s1,s2,ptr2,v1,p);
add5a(m2,e+11,e+12,s1,s2,ptr2,v1,p);

add5a(m2,e+13,e+14,s1,s2,ptr2,v1,p);
add5a(m2,e+15,e+16,s1,s2,ptr2,v1,p);
}

void add43 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5(m2,e+1,e+5,s1,s2,ptr2,v1,p);
add5(m2,e+2,e+6,s1,s2,ptr2,v1,p);

add5(m2,e+3,e+7,s1,s2,ptr2,v1,p);
add5(m2,e+4,e+8,s1,s2,ptr2,v1,p);

add5(m2,e+9,e+13,s1,s2,ptr2,v1,p);
add5(m2,e+10,e+14,s1,s2,ptr2,v1,p);

add5(m2,e+11,e+15,s1,s2,ptr2,v1,p);
add5(m2,e+12,e+16,s1,s2,ptr2,v1,p);
}

void add43a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5a(m2,e+1,e+5,s1,s2,ptr2,v1,p);
add5a(m2,e+2,e+6,s1,s2,ptr2,v1,p);

add5a(m2,e+3,e+7,s1,s2,ptr2,v1,p);
add5a(m2,e+4,e+8,s1,s2,ptr2,v1,p);

add5a(m2,e+9,e+13,s1,s2,ptr2,v1,p);
add5a(m2,e+10,e+14,s1,s2,ptr2,v1,p);

add5a(m2,e+11,e+15,s1,s2,ptr2,v1,p);
add5a(m2,e+12,e+16,s1,s2,ptr2,v1,p);
}

void add44 (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5(m2,e+1,e+9,s1,s2,ptr2,v1,p);
add5(m2,e+2,e+10,s1,s2,ptr2,v1,p);

add5(m2,e+3,e+11,s1,s2,ptr2,v1,p);
add5(m2,e+4,e+12,s1,s2,ptr2,v1,p);

add5(m2,e+5,e+13,s1,s2,ptr2,v1,p);
add5(m2,e+6,e+14,s1,s2,ptr2,v1,p);

add5(m2,e+7,e+15,s1,s2,ptr2,v1,p);
add5(m2,e+8,e+16,s1,s2,ptr2,v1,p);
}

void add44a (int m2, int e, int s1, int s2, STRING ptr2, integer v1[], integer p)
{
add5a(m2,e+1,e+9,s1,s2,ptr2,v1,p);
add5a(m2,e+2,e+10,s1,s2,ptr2,v1,p);

add5a(m2,e+3,e+11,s1,s2,ptr2,v1,p);
add5a(m2,e+4,e+12,s1,s2,ptr2,v1,p);

add5a(m2,e+5,e+13,s1,s2,ptr2,v1,p);
add5a(m2,e+6,e+14,s1,s2,ptr2,v1,p);

add5a(m2,e+7,e+15,s1,s2,ptr2,v1,p);
add5a(m2,e+8,e+16,s1,s2,ptr2,v1,p);
}

void det5 (int c1, int c2, int c3, int c4, int m2, int e, int s1, int s2,
           STRING ptr2, integer v1[], integer p)
{
int t1,t2,t3,t4;

unsigned int i;
unsigned int d;

d = d1+1;

t1 = c1;
t2 = c2;
t3 = c3;
t4 = c4;

if (c1<0)
	{
	t1 = -1*c1;
	}
if (c2<0)
	{
	t2 = -1*c2;
	}
if (c3<0)
	{
	t3 = -1*c3;
	}
if (c4<0)
	{
	t4 = -1*c4;
	}

setzero2a (m2,e+1,e+16,ptr2);

set7(e+1,0,1,ptr2);
set7(e+2,d,1,ptr2);
set7(e+3,2*d,1,ptr2);
set7(e+4,3*d,1,ptr2);
set7(e+5,4*d,1,ptr2);
set7(e+6,5*d,1,ptr2);
set7(e+7,6*d,1,ptr2);
set7(e+8,7*d,1,ptr2);

set7(e+9,8*d,1,ptr2);
set7(e+10,9*d,1,ptr2);
set7(e+11,10*d,1,ptr2);
set7(e+12,11*d,1,ptr2);
set7(e+13,12*d,1,ptr2);
set7(e+14,13*d,1,ptr2);
set7(e+15,14*d,1,ptr2);
set7(e+16,15*d,1,ptr2);

if (c1>0)
	{
	for(i=0;i<t1;i++)
		{
		add41(m2,e,s1,s2,ptr2,v1,p);
		}
	}
if (c1<0)
	{
	for(i=0;i<t1;i++)
		{
		add41a(m2,e,s1,s2,ptr2,v1,p);
		}
	}
if (c2>0)
	{
	for(i=0;i<t2;i++)
		{
		add42(m2,e,s1,s2,ptr2,v1,p);
		}
	}
if (c2<0)
	{
	for(i=0;i<t2;i++)
		{
		add42a(m2,e,s1,s2,ptr2,v1,p);
		}
	}
if (c3>0)
	{
	for(i=0;i<t3;i++)
		{
		add43(m2,e,s1,s2,ptr2,v1,p);
		}
	}
if (c3<0)
	{
	for(i=0;i<t3;i++)
		{
		add43a(m2,e,s1,s2,ptr2,v1,p);
		}
	}
if (c4>0)
	{
	for(i=0;i<t4;i++)
		{
		add44(m2,e,s1,s2,ptr2,v1,p);
		}
	}
if (c4<0)
	{
	for(i=0;i<t4;i++)
		{
		add44a(m2,e,s1,s2,ptr2,v1,p);
		}
	}
}

void set4a (int r, int c1, STRING ptr2)
{
set7(r,c1,1,ptr2);
set7(r,c1+2,3,ptr2);
set7(r,c1+4,3,ptr2);
set7(r,c1+6,1,ptr2);
}

void set4b (unsigned int r, int d, int c1, int c2, STRING ptr2, integer p)
{
int t;
unsigned int i;

t = d+1;
for(i=0;i<t;i++)
	{
	set7(r+i,c1*t+i,1,ptr2);
	set7(r+i,c2*t+i,p-1,ptr2);
	}
}

void mult50 (int m2, integer c1, integer c2, int e1, int e2, int s1, int s2,
             STRING ptr2, integer v1[], integer p)
{
multm4(m2,c1,e1,s1,ptr2,v1,p);
multm4(m2,c2,e2,s2,ptr2,v1,p);
addm4(m2,s1,s2,s1,ptr2,v1,p);
}

void mult51 (int m2, int e, int s1, STRING ptr2, integer v1[], integer p)
{
unsigned int i;

for(i=0;i<16;i++)
	{
	mult4(m2,e+i+1,s1,ptr2,p);
	multm4(m2,1,s1,e+i+1,ptr2,v1,p);
	}
}


void mult8a (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p)
{
int i,j;
int a,b;
integer t;

t = (p-s)%p;
for(i=0;i<4;i++)
	{
	for(j=0;j<2;j++)
		{
		a = 4*i+1+j;
		b = a+2;
		mult50(m2,c,t,e+a,e+b,s1,s2,ptr2,v1,p);
		multm4(m2,1,s1,k+a,ptr2,v1,p);
		mult50(m2,s,c,e+a,e+b,s1,s2,ptr2,v1,p);
		multm4(m2,1,s1,k+b,ptr2,v1,p);
		}
	}
}

void mult8b (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p)
{
int i;
int a,b;
integer t;

t = (p-s)%p;
for(i=0;i<8;i++)
	{
	a = 2*i+1;
	b = a+1;
	mult50(m2,c,t,e+a,e+b,s1,s2,ptr2,v1,p);
	multm4(m2,1,s1,k+a,ptr2,v1,p);
	mult50(m2,s,c,e+a,e+b,s1,s2,ptr2,v1,p);
	multm4(m2,1,s1,k+b,ptr2,v1,p);
	}
}

void mult8c (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p)
{
int i,j;
int a,b;
integer t;


t = (p-s)%p;
for(i=0;i<4;i++)
	{
	for(j=0;j<2;j++)
		{
		a = i+1+8*j;
		b = a+4;
		mult50(m2,c,t,e+a,e+b,s1,s2,ptr2,v1,p);
		multm4(m2,1,s1,k+a,ptr2,v1,p);
		mult50(m2,s,c,e+a,e+b,s1,s2,ptr2,v1,p);
		multm4(m2,1,s1,k+b,ptr2,v1,p);
		}
	}
}

void mult8d (int m2, integer c, integer s, int e, int k, int s1, int s2,
             STRING ptr2, integer v1[], integer p)
{
int i;
int a,b;
integer t;

t = (p-s)%p;
for(i=0;i<8;i++)
	{
	a = i+1;
	b = a+8;
	mult50(m2,c,t,e+a,e+b,s1,s2,ptr2,v1,p);
	multm4(m2,1,s1,k+a,ptr2,v1,p);
	mult50(m2,s,c,e+a,e+b,s1,s2,ptr2,v1,p);
	multm4(m2,1,s1,k+b,ptr2,v1,p);
	}
}


integer multcnvl (int l2, int e1, int e2, STRING ptr2, integer p)
{
int i;
integer t1,t2,t3,t4;

t4 = 0;
for (i=0;i<(l2+1);i++)
	{
	t1 = *(ptr2[e1]+i);
	t2 = *(ptr2[e2]+i);
	t3 = (t1*t2)%p;
	t4 = (t4+t3)%p;
	}
return(t4);
}

void setcs(int d, integer a2[], integer cs[], integer sn[], integer p)
{
int i;
int a3[2] = {0};
int a4[2] = {0};
int a5[2] = {0};

exp7(d/2,a2,a3,p);
exp7(d/2,a3,a5,p);
for(i=0;i<10;i++)
	{
	exp7(i,a5,a3,p);
	exp7(i,a3,a4,p);
	cs[i] = a4[0];
	sn[i] = a4[1];
	}
}

void setcs1(int d, integer a2[], integer cs1[], integer sn1[], integer p)
{
int i;
int t1,t2;
int a3[2] = {0};
int a4[2] = {0};
int a5[2] = {0};
int a6[2] = {0};

exp7(d/2,a2,a3,p);
exp7(d/2,a3,a5,p);

exp7(d,a2,a3,p);
exp7(d,a3,a6,p);

a6[1] = p-a6[1];

cs1[0] = 1;
sn1[0] = 0;

cmult(a5,a6,a3,p);
cs1[1] = a3[0];
sn1[1] = a3[1];

cs1[2] = a6[0];
sn1[2] = a6[1];

cs1[3] = a3[0];
sn1[3] = a3[1];

cs1[4] = 1;
sn1[4] = 0;

t1 = d/2;
for(i=5;i<10;i++)
	{
	t2 = (i-2)*t1;
	exp7(t2,a2,a3,p);
	exp7(t2,a3,a4,p);
	cmult(a4,a6,a3,p);
	cs1[i] = a3[0];
	sn1[i] = a3[1];
	}
}

void setcs2(int d, integer a2[], integer cs2[], integer sn2[], integer p)
{
int i;
int t1,t2;
int a3[2] = {0};
int a4[2] = {0};
int a5[2] = {0};
int a6[2] = {0};

exp7(d/2,a2,a3,p);
exp7(d/2,a3,a5,p);

exp7(d,a2,a3,p);
exp7(d,a3,a6,p);

a6[1] = p-a6[1];

cs2[0] = 1;
sn2[0] = 0;
t1 = d/2;
for(i=1;i<10;i++)
	{
	t2 = i*t1+d;
	exp7(t2,a2,a3,p);
	exp7(t2,a3,a4,p);
	cmult(a4,a6,a3,p);
	cs2[i] = a3[0];
	sn2[i] = a3[1];
	}
}

void displaycs(int c, integer cs[], integer sn[])
{
int i;

printf("(");
for(i=0;i<c-1;i++)
	{
	printf("%d,",cs[i]);
	}
printf("%d)",cs[c-1]);

printf("\n(");
for(i=0;i<c-1;i++)
	{
	printf("%d,",sn[i]);
	}
printf("%d)",sn[c-1]);
}

void swtc2(int c1, int c2, int c, int s1, int s2, STRING ptr2)
{
unsigned int i,j;

for(i=0;i<144;i++)

{
	for(j=0;j<c;j++)
		{
		*(ptr2[s1]+j) = *(ptr2[i]+c1+j);
		}
	for(j=0;j<c;j++)
		{
		*(ptr2[s2]+j) = *(ptr2[i]+c2+j);
		}
	for(j=0;j<c;j++)
		{
		*(ptr2[i]+c1+j) = *(ptr2[s2]+j);
		}
	for(j=0;j<c;j++)
		{
		*(ptr2[i]+c2+j) = *(ptr2[s1]+j);
		}
}

}

void det5b (int c1, int c2, int c3, int c4, int m2, int e, int e1,
            int s1, int s2, STRING ptr2, integer v1[], integer p)
{
int t;
int t1,t2,t3,t4;

unsigned int i;
/*
unsigned int d;

d = d1+1;
*/

t1 = c1;
t2 = c2;
t3 = c3;
t4 = c4;

if (c1<0)
	{
	t1 = -1*c1;
	}
if (c2<0)
	{
	t2 = -1*c2;
	}
if (c3<0)
	{
	t3 = -1*c3;
	}
if (c4<0)
	{
	t4 = -1*c4;
	}

t = t1+t2+t3+t4;
if (t==8)
	{
	det5(c1,c2,c3,c4,m2,e,s1,s2,ptr2,v1,p);
	}

if (t==6)
	{
	det5(c1,c2,c3,c4,m2,e,s1,s2,ptr2,v1,p);
	det5(c1,c2,c3,c4,m2,e1,s1,s2,ptr2,v1,p);

	mult51(m2,e1,s1,ptr2,v1,p);
	mult51(m2,e1,s1,ptr2,v1,p);

	for(i=0;i<16;i++)
		{
		addm4(m2,e+i+1,e1+i+1,e+i+1,ptr2,v1,p);
		}
	}

if (t==4)
	{
	det5(c1,c2,c3,c4,m2,e,s1,s2,ptr2,v1,p);
	det5(c1,c2,c3,c4,m2,e1,s1,s2,ptr2,v1,p);

	mult51(m2,e1,s1,ptr2,v1,p);
	mult51(m2,e1,s1,ptr2,v1,p);

	for(i=0;i<16;i++)
		{
		addm4(m2,e+i+1,e1+i+1,e+i+1,ptr2,v1,p);
		}

	mult8a(m2,1,0,e,e1,s1,s2,ptr2,v1,p);

	mult51(m2,e1,s1,ptr2,v1,p);
	mult51(m2,e1,s1,ptr2,v1,p);

	for(i=0;i<16;i++)
		{
		addm4(m2,e+i+1,e1+i+1,e+i+1,ptr2,v1,p);
		}
	}
}

void equation41(STRING ptr2)
{
unsigned int i;
unsigned int t1,t2;
unsigned int a[9] = {0,1,3,4,5,7,12,14,15};

	for(i=0;i<9;i++)
		{
		t1 = 3*i;
		t2 = 9*a[i];
		set4a(t1,t2,ptr2);
		set4a(t1+1,t2+1,ptr2);
		set4a(t1+2,t2+2,ptr2);
		}
}

void equation42(STRING ptr2, integer p)
{
	set4b (27,8,1,2,ptr2,p);
	set4b (36,8,5,6,ptr2,p);
	set4b (45,8,9,10,ptr2,p);
	set4b (54,8,13,14,ptr2,p);

	set4b (63,8,4,8,ptr2,p);
	set4b (72,8,5,9,ptr2,p);
	set4b (81,8,7,11,ptr2,p);
}

void equation43a(STRING ptr2)
{
unsigned int i;
unsigned int t1;

	for(i=0;i<6;i++)
		{
		t1 = 90+i;
		set7(t1,0*9+i,1,ptr2);
		set7(t1,3*9+i,1,ptr2);
		set7(t1,12*9+i,1,ptr2);
		set7(t1,15*9+i,1,ptr2);
		}
}

void equation43b(STRING ptr2, integer p)
{
unsigned int i;
unsigned int t1;

	for(i=0;i<6;i++)
		{
		t1 = 96+i;
		set7(t1,0*9+i,1,ptr2);
		set7(t1,3*9+i,p-1,ptr2);
		set7(t1,9*9+i,4,ptr2);
		set7(t1,12*9+i,p-1,ptr2);
		set7(t1,15*9+i,1,ptr2);
		}
}

void equation43c(STRING ptr2, integer p)
{
unsigned int i;
unsigned int t1;

	for(i=0;i<6;i++)
		{
		t1 = 102+i;
		set7(t1,1*9+i,p-1,ptr2);
		set7(t1,8*9+i,1,ptr2);
		set7(t1,11*9+i,p-1,ptr2);
		set7(t1,13*9+i,1,ptr2);
		}
}

void equation44(int m2, integer cs[], integer sn[], integer cs1[], integer sn1[],
                STRING ptr2, integer b1[], integer p)
{
integer t1,t2;

	det5(-2,-2,2,2,m2,170,198,199,ptr2,b1,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	set2d(108,171,ptr2);
	set2d(109,172,ptr2);
	set2d(110,174,ptr2);
	set2d(111,175,ptr2);
}


void equation46a(int m2, integer cs[], integer sn[], integer cs1[], integer sn1[],
                 STRING ptr2, integer b1[], integer p)
{
integer t1,t2;

	det5(1,1,3,3,m2,170,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs1[3];
	t2 = sn1[3];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[3];
	t2 = sn1[3];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	set2d(112,171,ptr2);
	set2d(113,172,ptr2);
	set2d(114,174,ptr2);

	set2d(115,175,ptr2);
}

void equation46b(int m2, integer cs[], integer sn[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p)
{
integer t1,t2;

	det5(-3,-3,-1,-1,m2,170,198,199,ptr2,b1,p);
	t1 = cs[3];
	t2 = sn[3];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[3];
	t2 = sn[3];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs2[1];
	t2 = sn2[1];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs2[1];
	t2 = sn2[1];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	set2d(116,171,ptr2);
}

void equation47n2(int m2, integer cs[], integer sn[], integer cs1[], integer sn1[],
                  STRING ptr2, integer b1[], integer p)
{
integer t1,t2;

	det5b(3,-1,1,1,m2,170,200,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	set2d(121,171,ptr2);
	set2d(122,172,ptr2);

	det5b(-1,-1,1,-3,m2,170,200,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	set2d(123,171,ptr2);
	set2d(124,172,ptr2);

	set2d(125,175,ptr2);
	set2d(126,176,ptr2);
}

void equation48a1(int m2, integer cs[], integer sn[],
                  integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p)
{
integer t1,t2;

	det5b(-2,-2,-2,0,m2,170,200,198,199,ptr2,b1,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs2[0];
	t2 = sn2[0];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs2[0];
	t2 = sn2[0];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,174,200,199,ptr2,b1,p);
	mult50(m2,1,p-1,186,183,201,199,ptr2,b1,p);
	mult50(m2,p-1,p-1,176,177,202,199,ptr2,b1,p);
	mult50(m2,p-1,p-1,180,181,203,199,ptr2,b1,p);
	mult50(m2,1,1,200,201,204,199,ptr2,b1,p);
	mult50(m2,1,1,202,203,205,199,ptr2,b1,p);
	mult50(m2,1,1,204,205,206,199,ptr2,b1,p);
	set2d(127,206,ptr2);

	mult50(m2,1,p-1,179,182,200,199,ptr2,b1,p);
	mult50(m2,1,p-1,175,178,201,199,ptr2,b1,p);
	mult50(m2,1,p-1,172,184,202,199,ptr2,b1,p);
	mult50(m2,1,p-1,173,185,203,199,ptr2,b1,p);
	mult50(m2,1,1,200,201,204,199,ptr2,b1,p);
	mult50(m2,1,1,202,203,205,199,ptr2,b1,p);
	mult50(m2,1,1,204,205,206,199,ptr2,b1,p);
	set2d(128,206,ptr2);
}

void equation48b1(int m2, integer cs[], integer sn[], integer cs1[], integer sn1[],
                  STRING ptr2, integer b1[], integer p)
{
integer t1,t2;

	det5b(2,0,2,2,m2,170,200,198,199,ptr2,b1,p);
	t1 = cs[0];
	t2 = sn[0];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[0];
	t2 = sn[0];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,174,200,199,ptr2,b1,p);
	mult50(m2,1,p-1,186,183,201,199,ptr2,b1,p);
	mult50(m2,p-1,p-1,176,177,202,199,ptr2,b1,p);
	mult50(m2,p-1,p-1,180,181,203,199,ptr2,b1,p);
	mult50(m2,1,1,200,201,204,199,ptr2,b1,p);
	mult50(m2,1,1,202,203,205,199,ptr2,b1,p);
	mult50(m2,1,1,204,205,206,199,ptr2,b1,p);
	set2d(129,206,ptr2);

	mult50(m2,1,p-1,179,182,200,199,ptr2,b1,p);
	mult50(m2,1,p-1,175,178,201,199,ptr2,b1,p);
	mult50(m2,1,p-1,172,184,202,199,ptr2,b1,p);
	mult50(m2,1,p-1,173,185,203,199,ptr2,b1,p);
	mult50(m2,1,1,200,201,204,199,ptr2,b1,p);
	mult50(m2,1,1,202,203,205,199,ptr2,b1,p);
	mult50(m2,1,1,204,205,206,199,ptr2,b1,p);
	set2d(130,206,ptr2);
/*
	set2d(129,175,ptr2);
	set2d(130,176,ptr2);
*/
}

void equation31a(int m2, integer a1[], integer cs[], integer sn[], integer cs1[], integer sn1[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p)
{
integer t1,t2;
integer a2[2] = {0};
integer a3[2] = {0};

	det5b(3,-1,-1,1,m2,170,200,198,199,ptr2,b1,p);
	t1 = cs[3];
	t2 = sn[3];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs2[1];
	t2 = sn2[1];
	mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	det5(-5,1,1,1,m2,200,198,199,ptr2,b1,p);
	t1 = cs[5];
	t2 = sn[5];
	mult8a(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,150,200,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8c(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8d(m2,t1,t2,150,200,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,201,198,199,ptr2,b1,p);
	set2d(133,198,ptr2);

	mult50(m2,1,p-1,172,205,198,199,ptr2,b1,p);
	set2d(134,198,ptr2);
}

void equation32a(int m2, integer a1[], integer cs[], integer sn[], integer cs1[], integer sn1[],
                 STRING ptr2, integer b1[], integer p)
{
integer t1,t2;
integer a2[2] = {0};
integer a3[2] = {0};

	det5b(-5,-2,1,0,m2,150,200,198,199,ptr2,b1,p);
	t1 = cs[5];
	t2 = sn[5];
	mult8a(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs[2];
	t2 = sn[2];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8c(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	det5(3,-1,2,2,m2,200,198,199,ptr2,b1,p);
	t1 = cs[3];
	t2 = sn[3];
	mult8a(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,150,200,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8c(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8d(m2,t1,t2,150,200,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,201,198,199,ptr2,b1,p);
	set2d(135,198,ptr2);

	mult50(m2,1,p-1,172,209,198,199,ptr2,b1,p);
	set2d(136,198,ptr2);
}

void equation33a(int m2, integer a1[], integer cs[], integer sn[], integer cs1[], integer sn1[],
                 STRING ptr2, integer b1[], integer p)
{
integer t1,t2;
integer a2[2] = {0};
integer a3[2] = {0};

	det5(-7,-1,0,0,m2,170,198,199,ptr2,b1,p);
	t1 = cs[7];
	t2 = sn[7];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	det5(5,0,2,1,m2,200,198,199,ptr2,b1,p);
	t1 = cs[5];
	t2 = sn[5];
	mult8a(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs[0];
	t2 = sn[0];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,150,200,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8c(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs1[1];
	t2 = sn1[1];
	mult8d(m2,t1,t2,150,200,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,201,198,199,ptr2,b1,p);
	set2d(137,198,ptr2);

	mult50(m2,1,p-1,172,209,198,199,ptr2,b1,p);
	set2d(138,198,ptr2);
}

void equation34a(int m2, integer a1[], integer cs[], integer sn[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p)
{
integer t1,t2;
integer a2[2] = {0};
integer a3[2] = {0};

	det5(4,4,0,0,m2,170,198,199,ptr2,b1,p);
	t1 = cs[4];
	t2 = sn[4];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs[4];
	t2 = sn[4];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	det5(0,0,-4,-4,m2,150,198,199,ptr2,b1,p);
	t1 = cs[0];
	t2 = sn[0];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8a(m2,t1,t2,150,200,198,199,ptr2,b1,p);
	t1 = cs[0];
	t2 = sn[0];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs2[4];
	t2 = sn2[4];
	mult8c(m2,t1,t2,150,200,198,199,ptr2,b1,p);
	t1 = cs2[4];
	t2 = sn2[4];
	mult8d(m2,t1,t2,200,150,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,151,198,199,ptr2,b1,p);
	set2d(139,198,ptr2);

	mult50(m2,1,p-1,172,159,198,199,ptr2,b1,p);
	set2d(140,198,ptr2);
}

void equation35a(int m2, integer a1[], integer cs[], integer sn[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p)
{
integer t1,t2;
integer a2[2] = {0};
integer a3[2] = {0};

	det5b(4,3,-1,0,m2,150,200,198,199,ptr2,b1,p);
	t1 = cs[4];
	t2 = sn[4];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8a(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs[3];
	t2 = sn[3];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs2[1];
	t2 = sn2[1];
	mult8c(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	det5(1,0,-3,-4,m2,200,198,199,ptr2,b1,p);
	t1 = cs[1];
	t2 = sn[1];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8a(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs[0];
	t2 = sn[0];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,150,200,198,199,ptr2,b1,p);
	t1 = cs2[3];
	t2 = sn2[3];
	mult8c(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs2[4];
	t2 = sn2[4];
	mult8d(m2,t1,t2,150,200,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,201,198,199,ptr2,b1,p);
	set2d(141,198,ptr2);

	mult50(m2,1,p-1,176,207,198,199,ptr2,b1,p);
	set2d(142,198,ptr2);

	mult50(m2,1,p-1,186,216,198,199,ptr2,b1,p);
	set2d(117,198,ptr2);
}

void equation36a(int m2, integer a1[], integer cs[], integer sn[], integer cs1[], integer sn1[],
                 integer cs2[], integer sn2[], STRING ptr2, integer b1[], integer p)
{
integer t1,t2;
integer a2[2] = {0};
integer a3[2] = {0};

	det5b(4,2,0,2,m2,150,200,198,199,ptr2,b1,p);
	t1 = cs[4];
	t2 = sn[4];
	mult8a(m2,t1,t2,150,170,198,199,ptr2,b1,p);
	t1 = cs[2];
	t2 = sn[2];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8b(m2,t1,t2,170,150,198,199,ptr2,b1,p);
	t1 = cs1[2];
	t2 = sn1[2];
	mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

	det5(0,-6,-2,0,m2,150,198,199,ptr2,b1,p);
	t1 = cs[0];
	t2 = sn[0];
	a2[0] = t1;
	a2[1] = t2;
	cmult(a1,a2,a3,p);
	t1 = a3[0];
	t2 = a3[1];
	mult8a(m2,t1,t2,150,200,198,199,ptr2,b1,p);
	t1 = cs[6];
	t2 = sn[6];
	mult8b(m2,t1,t2,200,150,198,199,ptr2,b1,p);
	t1 = cs2[2];
	t2 = sn2[2];
	mult8c(m2,t1,t2,150,200,198,199,ptr2,b1,p);

	mult50(m2,1,p-1,171,201,198,199,ptr2,b1,p);
	set2d(143,198,ptr2);

	mult50(m2,1,p-1,186,216,198,199,ptr2,b1,p);
	set2d(118,198,ptr2);
}



integer inverse2(integer a, integer b)
{
integer temp;

if ((a == 0) || (b == 0)) { return (0); }

if (a == 1) { return (1);}
else
	{
	 temp = (b - ((b * inverse2(b % a , a)) / a));
	 return (temp);

	}
}

void lsolve(int m2, int r , int c, integer h11[], integer h12[], STRING ptr2, integer p)
{
int i;
integer t1,t2,t3,t4;
int t;

if (c==0)
	{
	t1 = *(ptr2[r] + (m2-1));
	t2 = h12[r];
	t3 = inverse2(t1,p);
	t3 = (t3*t2)%p;
	}
if (c>0)
	{
	t1 = 0;
	for(i=0;i<c;i++)
		{
		t = (m2-1)-i;
		t4 = *(ptr2[r] + t);
		t2 = (t4*h11[t])%p;
		t1 = (t1+t2)%p;
		}
		t1 = p-t1;
		t1 = (t1+h12[r])%p;
		t = (m2-1)-c;
		t4 = *(ptr2[r] + t);
		t2 = inverse2(t4,p);
/*
		printf("\n \n in lsolve t2 = %d",t2);
*/
		t3 = (t1*t2)%p;
	}
t = (m2-1)-r;
h11[t] = t3;
}

void l2solve(int m2, integer h11[], integer h12[], STRING ptr2, integer p)
{
int i;

for(i=0;i<m2;i++)
	{
	lsolve(m2,i,i,h11,h12,ptr2,p);
	}
}

void equation61(integer ws1[], STRING ptr2, integer b2[])
{
int i;
unsigned int t;

for(i=0;i<3;i++)
	{
	t = 198;
	set7(t,0,ws1[0+i],ptr2);
	set7(t,1,ws1[3+i],ptr2);
	set7(t,2,ws1[3+i],ptr2);
	set7(t,3,ws1[6+i],ptr2);

	set7(t,4,ws1[9+i],ptr2);
	set7(t,5,ws1[12+i],ptr2);
	set7(t,6,ws1[12+i],ptr2);
	set7(t,7,ws1[15+i],ptr2);

	set7(t,8,ws1[9+i],ptr2);
	set7(t,9,ws1[12+i],ptr2);
	set7(t,10,ws1[12+i],ptr2);
	set7(t,11,ws1[15+i],ptr2);

	set7(t,12,ws1[18+i],ptr2);
	set7(t,13,ws1[21+i],ptr2);
	set7(t,14,ws1[21+i],ptr2);
	set7(t,15,ws1[24+i],ptr2);

	b2[0+i] = *(ptr2[198]+0);
	b2[3+i] = *(ptr2[198]+1);
	b2[6+i] = *(ptr2[198]+3);

	b2[9+i] = *(ptr2[198]+4);
	b2[12+i] = *(ptr2[198]+5);
	b2[15+i] = *(ptr2[198]+7);

	b2[18+i] = *(ptr2[198]+12);
	b2[21+i] = *(ptr2[198]+14);
	b2[24+i] = *(ptr2[198]+15);
	}
}

void equation64(integer ws1[], STRING ptr2, integer b2[], integer p)
{
unsigned int t;
integer t1;

	t = 198;
	t1 = (ws1[0]+ws1[2])%p;
	set7(t,0,t1,ptr2);
	t1 = (ws1[3]+ws1[5])%p;
	set7(t,1,t1,ptr2);
	set7(t,2,t1,ptr2);
	t1 = (ws1[6]+ws1[8])%p;
	set7(t,3,t1,ptr2);

	t1 = (ws1[9]+ws1[11])%p;
	set7(t,4,t1,ptr2);
	t1 = (ws1[12]+ws1[14])%p;
	set7(t,5,t1,ptr2);
	set7(t,6,t1,ptr2);
	t1 = (ws1[15]+ws1[17])%p;
	set7(t,7,t1,ptr2);

	t1 = (ws1[9]+ws1[11])%p;
	set7(t,8,t1,ptr2);
	t1 = (ws1[12]+ws1[14])%p;
	set7(t,9,t1,ptr2);
	set7(t,10,t1,ptr2);
	t1 = (ws1[15]+ws1[17])%p;
	set7(t,11,t1,ptr2);

	t1 = (ws1[18]+ws1[20])%p;
	set7(t,12,t1,ptr2);
	t1 = (ws1[21]+ws1[23])%p;
	set7(t,13,t1,ptr2);
	set7(t,14,t1,ptr2);
	t1 = (ws1[24]+ws1[26])%p;
	set7(t,15,t1,ptr2);

	b2[108] = *(ptr2[198]+0);
	b2[109] = *(ptr2[198]+8);
	b2[110] = *(ptr2[198]+12);
	b2[111] = *(ptr2[198]+2);
}

integer fn66a(unsigned int c, integer ws1[], integer p)
{
integer t1,t2,t3,t4,t5,t6;

	t1 = ws1[0*3+c];
	t2 = ((p-1)*ws1[2*3+c])%p;
	t3 = ws1[6*3+c];
	t4 = ((p-1)*ws1[8*3+c])%p;
	t5 = (t1+t2)%p;
	t6 = (t3+t4)%p;
	t6 = (t5+t6)%p;
	return(t6);
}

integer fn66b(unsigned int c, integer ws1[], integer p)
{
integer t1,t2;

	t1 = (2*ws1[1*3+c])%p;
	t2 = (2*ws1[7*3+c])%p;
	t2 = (t1+t2)%p;
	return(t2);
}

void equation66(int l2, integer ws1[], integer ws2[], integer cs[], integer sn[],
                integer h11[], integer h12[], STRING ptr2, integer b2[], integer p)
{
unsigned int t;
/*
unsigned int t1;
*/
integer c11,c12,c22,s11,s12,s22;
integer t2,t3,t4;
integer c,s;
int a1[2] = {0};
int a2[2] = {0};
int a3[2] = {0};
int a4[2] = {0};

	t = 150;
	set7(t,0,1,ptr2);
	set7(t,1,0,ptr2);
	set7(t,2,2,ptr2);
	set7(t,3,0,ptr2);
	set7(t,4,1,ptr2);

	set7(t+1,0,1,ptr2);
	set7(t+1,1,0,ptr2);
	set7(t+1,2,0,ptr2);
	set7(t+1,3,0,ptr2);
	set7(t+1,4,p-1,ptr2);

	set7(t+2,0,0,ptr2);
	set7(t+2,1,2,ptr2);
	set7(t+2,2,0,ptr2);
	set7(t+2,3,2,ptr2);
	set7(t+2,4,0,ptr2);

	set7(t+3,0,1,ptr2);
	set7(t+3,1,0,ptr2);
	set7(t+3,2,p-6,ptr2);
	set7(t+3,3,0,ptr2);
	set7(t+3,4,1,ptr2);

	set7(t+4,0,0,ptr2);
	set7(t+4,1,4,ptr2);
	set7(t+4,2,0,ptr2);
	set7(t+4,3,p-4,ptr2);
	set7(t+4,4,0,ptr2);

	h12[0] = (l2+1)%p;

/* 1 */
	c11 = fn66a(0,ws1,p);
	c12 = fn66a(1,ws1,p);
	c22 = fn66a(2,ws1,p);

	s11 = fn66b(0,ws1,p);
	s12 = fn66b(1,ws1,p);
	s22 = fn66b(2,ws1,p);

	t2 = (p-c22)%p;
	t3 = ((p-2)*s12)%p;
	t4 = (c11+t2)%p;
	c = (t3+t4)%p;

	t2 = (p-s22)%p;
	t3 = (2*c12)%p;
	t4 = (s11+t2)%p;
	s = (t3+t4)%p;

	a1[0] = cs[1];
	a1[1] = sn[1];

	a3[0] = c;
	a3[1] = s;

	cmult(a1,a1,a2,p);
	cmult(a2,a3,a4,p);

	h12[1] = a4[0];
	h12[2] = a4[1];

/* 2 */
	c11 = fn66a(0,ws2,p);
	c12 = fn66a(1,ws2,p);
	c22 = fn66a(2,ws2,p);

	s11 = fn66b(0,ws2,p);
	s12 = fn66b(1,ws2,p);
	s22 = fn66b(2,ws2,p);

	t2 = (p-c22)%p;
	t3 = ((p-2)*s12)%p;
	t4 = (c11+t2)%p;
	c = (t3+t4)%p;

	t2 = (p-s22)%p;
	t3 = (2*c12)%p;
	t4 = (s11+t2)%p;
	s = (t3+t4)%p;

	a3[0] = c;
	a3[1] = s;

	cmult(a2,a2,a1,p);
	cmult(a1,a3,a4,p);

	h12[3] = a4[0];
	h12[4] = a4[1];

	solve2m(5,&ptr2[t],h12,p);
/*
	t1 = det(5,&ptr2[t]);
*/
	setzero2(10,h11);

	l2solve(5,h11,h12,&ptr2[t],p);

	h12[0] = h11[0];
	h12[1] = h11[1];
	h12[2] = h11[1];
	h12[3] = h11[2];

	h12[4] = h11[1];
	h12[5] = h11[2];
	h12[6] = h11[2];
	h12[7] = h11[3];

	h12[8] = h11[1];
	h12[9] = h11[2];
	h12[10] = h11[2];
	h12[11] = h11[3];

	h12[12] = h11[2];
	h12[13] = h11[3];
	h12[14] = h11[3];
	h12[15] = h11[4];

	b2[112] = h12[0];
	b2[113] = h12[1];
	b2[114] = h12[3];
	b2[115] = h12[4];

	b2[116] = h12[0];
}

integer fn67a(unsigned int c, integer hs1[], integer p)
{
integer t1,t2,t3,t4,t5,t6;

	t1 = hs1[0*9+c];
	t2 = ((p-1)*hs1[3*9+c])%p;
	t3 = hs1[12*9+c];
	t4 = ((p-1)*hs1[15*9+c])%p;
	t5 = (t1+t2)%p;
	t6 = (t3+t4)%p;
	t6 = (t5+t6)%p;
	return(t6);
}

integer fn67b(unsigned int c, integer hs1[], integer p)
{
integer t1,t2,t3,t4,t5,t6;

	t1 = hs1[1*9+c];
	t2 = hs1[2*9+c];
	t3 = hs1[13*9+c];
	t4 = hs1[14*9+c];
	t5 = (t1+t2)%p;
	t6 = (t3+t4)%p;
	t6 = (t5+t6)%p;
	return(t6);
}

integer fn67c(unsigned int i, integer c8[], integer p)
{
integer t1,t2,t3;

t1 = c8[i];
t2 = c8[i+2];
t3 = c8[i+4];
t1 = (t1+t3)%p;
t2 = (2*t2)%p;
t3 = (t1+t2)%p;
return(t3);
}

integer fn67e1(integer c8[], integer p)
{
integer t1,t2,t3,t4,t5;

t1 = c8[0];
t2 = 28%p;
t2 = (p-t2)%p;
t2 = (t2*c8[2])%p;
t3 = 70%p;
t3 = (t3*c8[4])%p;
t4 = 28%p;
t4 = (p-t4)%p;
t4 = (t4*c8[6])%p;
t5 = c8[8];
t1 = (t1+t2)%p;
t3 = (t3+t4)%p;
t2 = (t1+t3)%p;
t2 = (t2+t5)%p;
return(t2);
}

integer fn67e2(integer c8[], integer p)
{
integer t1,t2,t3,t4;

t1 = 8%p;
t1 = (t1*c8[1])%p;
t2 = 56%p;
t2 = (p-t2)%p;
t2 = (t2*c8[3])%p;
t3 = 56%p;
t3 = (t3*c8[5])%p;
t4 = 8%p;
t4 = (p-t4)%p;
t4 = (t4*c8[7])%p;

t1 = (t1+t2)%p;
t3 = (t3+t4)%p;
t2 = (t1+t3)%p;

return(t2);
}

void equation67a4(int l2, integer a2[], integer hs1[], integer hs2[], integer h11[],
                  integer h12[], STRING ptr2, integer b2[], integer p)
{
unsigned int i,j;
unsigned int t;
unsigned int s;
/*
unsigned int t1;
*/
integer c8[9] = {0};
integer s8[9] = {0};
integer t2,t3,t4,t5,t6;
integer c1111,c1112,c1122,c1222,c2222;
integer s1111,s1112,s1122,s1222,s2222;
integer c1,c2,s1,s2;
integer nc1,nc2,ns1,ns2;
integer c41,c42,s41,s42;
int a[8] = {0,1,1,2,5,6,6,7};
int a3[2] = {0};
int a4[2] = {0};
int a5[2] = {0};
int a6[2] = {0};

	t = 150;
	set7(t,0,1,ptr2);
	set7(t,1,0,ptr2);
	set7(t,2,2,ptr2);
	set7(t,3,0,ptr2);
	set7(t,4,1,ptr2);

	set7(t+1,0,1,ptr2);
	set7(t+1,1,0,ptr2);
	set7(t+1,2,0,ptr2);
	set7(t+1,3,0,ptr2);
	set7(t+1,4,p-1,ptr2);

	set7(t+2,0,0,ptr2);
	set7(t+2,1,2,ptr2);
	set7(t+2,2,0,ptr2);
	set7(t+2,3,2,ptr2);
	set7(t+2,4,0,ptr2);

	set7(t+3,0,1,ptr2);
	set7(t+3,1,0,ptr2);
	set7(t+3,2,p-6,ptr2);
	set7(t+3,3,0,ptr2);
	set7(t+3,4,1,ptr2);

	set7(t+4,0,0,ptr2);
	set7(t+4,1,4,ptr2);
	set7(t+4,2,0,ptr2);
	set7(t+4,3,p-4,ptr2);
	set7(t+4,4,0,ptr2);

/* 1 */
	for(i=0;i<9;i++)
		{
		c8[i] = fn67a(i,hs1,p);
		s8[i] = fn67b(i,hs1,p);
		}

	c1 = fn67e1(c8,p);
	c2 = fn67e2(c8,p);
	s1 = fn67e1(s8,p);
	s2 = fn67e2(s8,p);

	exp7(l2,a2,a4,p);
	exp7(l2,a4,a6,p);
	cmult(a6,a6,a3,p);
	exp7(l2,a2,a5,p);
	exp7(l2,a5,a6,p);
	cmult(a6,a6,a4,p);

	t2 = (a3[0]*c1)%p;
	t3 = (a3[1]*c2)%p;
/*
	t3 = (p-t3)%p;
*/
	t2 = (t2+t3)%p;

	t4 = (a3[1]*c1)%p;
	t5 = (a3[0]*c2)%p;
	t5 = (p-t5)%p;
	t3 = (t4+t5)%p;

	t4 = (a4[0]*c1)%p;
	t5 = (a4[1]*c2)%p;
	t5 = p-t5;
	t4 = (t4+t5)%p;

	t5 = (a4[1]*c1)%p;
	t6 = (a4[0]*c2)%p;
	t5 = (t5+t6)%p;

	t6 = (t2+t4)%p;
	t2 = (p-a3[0])%p;
	nc1 = (t6+t2)%p;

	t4 = (t3+t5)%p;
	t2 = (p-a3[1])%p;
	nc2 = (t2+t4)%p;

	t2 = (a3[0]*s1)%p;
	t3 = (a3[1]*s2)%p;
	t2 = (t2+t3)%p;

	t4 = (a3[1]*s1)%p;
	t5 = (a3[0]*s2)%p;
	t5 = (p-t5)%p;
	t3 = (t4+t5)%p;

	t4 = (a4[0]*s1)%p;
	t5 = (a4[1]*s2)%p;
	t5 = p-t5;
	t4 = (t4+t5)%p;

	t5 = (a4[1]*s1)%p;
	t6 = (a4[0]*s2)%p;
	t5 = (t5+t6)%p;

	t6 = (t2+t4)%p;
	ns1 = t6;

	ns2 = (t3+t5)%p;

/* 2 */
	for(i=0;i<9;i++)
		{
		c8[i] = fn67a(i,hs2,p);
		s8[i] = fn67b(i,hs2,p);
		}

	c1111 = fn67c(0,c8,p);
	c1112 = fn67c(1,c8,p);
	c1122 = fn67c(2,c8,p);
	c1222 = fn67c(3,c8,p);
	c2222 = fn67c(4,c8,p);

	s1111 = fn67c(0,s8,p);
	s1112 = fn67c(1,s8,p);
	s1122 = fn67c(2,s8,p);
	s1222 = fn67c(3,s8,p);
	s2222 = fn67c(4,s8,p);

	t2 = (c1111 + c2222)%p;
	t3 = ((p-6)*c1122)%p;
	c1 = (t2+t3)%p;

	t2 = (p-c1222)%p;
	t3 = (c1112+t2)%p;
	c2 = (4*t3)%p;

	t2 = (s1111 + s2222)%p;
	t3 = ((p-6)*s1122)%p;
	s1 = (t2+t3)%p;

	t2 = (p-s1222)%p;
	t3 = (s1112+t2)%p;
	s2 = (4*t3)%p;

	t2 = (a3[0]*c1)%p;
	t3 = (a3[1]*c2)%p;
	t2 = (t2+t3)%p;

	t4 = (a3[1]*c1)%p;
	t5 = (a3[0]*c2)%p;
	t5 = (p-t5)%p;
	t3 = (t4+t5)%p;

	t4 = (a4[0]*c1)%p;
	t5 = (a4[1]*c2)%p;
	t5 = p-t5;
	t4 = (t4+t5)%p;

	t5 = (a4[1]*c1)%p;
	t6 = (a4[0]*c2)%p;
	t5 = (t5+t6)%p;

	t6 = (t2+t4)%p;
	t2 = (p-a3[0])%p;
	c41 = (t6+t2)%p;

	t4 = (t3+t5)%p;
	t2 = (p-a3[1])%p;
	c42 = (t2+t4)%p;

	t2 = (a3[0]*s1)%p;
	t3 = (a3[1]*s2)%p;
	t2 = (t2+t3)%p;

	t4 = (a3[1]*s1)%p;
	t5 = (a3[0]*s2)%p;
	t5 = (p-t5)%p;
	t3 = (t4+t5)%p;

	t4 = (a4[0]*s1)%p;
	t5 = (a4[1]*s2)%p;
	t5 = p-t5;
	t4 = (t4+t5)%p;

	t5 = (a4[1]*s1)%p;
	t6 = (a4[0]*s2)%p;
	t5 = (t5+t6)%p;

	t6 = (t2+t4)%p;
	s41 = t6;
	s42 = (t3+t5)%p;

	exp7(l2,a2,a5,p);
	exp7(4,a5,a3,p);
	exp7(2,a4,a5,p);
	cmult(a5,a3,a4,p);

	a4[0] = (a4[0]+(p-1))%p;
	a3[0] = (a3[0]+(p-1))%p;
	exp7(p*p-2,a3,a5,p);
	cmult(a4,a5,a3,p);

	h12[0] = a3[0];
	h12[1] = nc1;
	h12[2] = ns1;
	h12[3] = c41;
	h12[4] = s41;

	solve2m(5,&ptr2[t],h12,p);
/*
	t1 = det(5,&ptr2[t]);
*/
	setzero2(10,h11);

	l2solve(5,h11,h12,&ptr2[t],p);

	t = 150;
	set7(t,0,1,ptr2);
	set7(t,1,0,ptr2);
	set7(t,2,2,ptr2);
	set7(t,3,0,ptr2);
	set7(t,4,1,ptr2);

	set7(t+1,0,1,ptr2);
	set7(t+1,1,0,ptr2);
	set7(t+1,2,0,ptr2);
	set7(t+1,3,0,ptr2);
	set7(t+1,4,p-1,ptr2);

	set7(t+2,0,0,ptr2);
	set7(t+2,1,2,ptr2);
	set7(t+2,2,0,ptr2);
	set7(t+2,3,2,ptr2);
	set7(t+2,4,0,ptr2);

	set7(t+3,0,1,ptr2);
	set7(t+3,1,0,ptr2);
	set7(t+3,2,p-6,ptr2);
	set7(t+3,3,0,ptr2);
	set7(t+3,4,1,ptr2);

	set7(t+4,0,0,ptr2);
	set7(t+4,1,4,ptr2);
	set7(t+4,2,0,ptr2);
	set7(t+4,3,p-4,ptr2);
	set7(t+4,4,0,ptr2);

	h12[0] = a3[1];
	h12[1] = nc2;
	h12[2] = ns2;
	h12[3] = c42;
	h12[4] = s42;

	solve2m(5,&ptr2[t],h12,p);
/*
	t1 = det(5,&ptr2[t]);
*/
	l2solve(5,&h11[5],h12,&ptr2[t],p);

	for(j=0;j<8;j++)
		{
		t = 4*j;
		s = a[j];
		if(j>3)
			{
			t = t+4;
			}
		set7(200,t,h11[s],ptr2);
		set7(200,t+1,h11[s+1],ptr2);
		set7(200,t+2,h11[s+1],ptr2);
		set7(200,t+3,h11[s+2],ptr2);
		}
	for(j=0;j<8;j++)
		{
		t = 4*j;
		s = a[j];
		if(j>3)
			{
			t = t+4;
			}
		h12[t] = h11[s];
		h12[t+1] = h11[s+1];
		h12[t+2] = h11[s+1];
		h12[t+3] = h11[s+2];
		}
	for(j=0;j<4;j++)
		{
		t = 2*j;
		h11[0+t] = (h12[0+t] + h12[28+t])%p;
		h11[8+t] = ((p-h12[20+t]) + h12[8+t])%p;
		h11[1+t] = (h12[1+t] + h12[29+t])%p;
		h11[9+t] = ((p-h12[21+t]) + h12[9+t])%p;
		}

	b2[123] = h11[0];
	b2[124] = h11[1];
	b2[125] = h11[4];
	b2[126] = h11[5];

	for(i=0;i<16;i++)
		{
		h12[i] = *(ptr2[200]+i);
		h12[i+20] = *(ptr2[200]+i+20);
		}
	for(j=0;j<4;j++)
		{
		t = 4*j;
		h11[0+t] = (h12[0+t] + (p-h12[22+t]))%p;
		h11[2+t] = (h12[2+t] + h12[20+t])%p;
		h11[1+t] = (h12[1+t] + (p-h12[23+t]))%p;
		h11[3+t] = (h12[3+t] + h12[21+t])%p;
		}
	b2[121] = h11[0];
	b2[122] = h11[1];
}


void equation63a(int l2, integer a2[], integer h11[], integer h12[],
                 STRING ptr2, integer b2[], integer p)
{
unsigned int i,j;
unsigned int t1;
integer t2,t3;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer a6[2] = {0};
integer a7[2] = {0};
integer a8[2] = {0};
integer a9[2] = {0};

	exp7(l2,a2,a5,p);
	cmult(a5,a5,a3,p);
	equal2(a3,a8);
	exp7(l2+1,a3,a4,p);
	equal2(a4,a9);

	h12[0] = (l2+1)%p;
	for(i=0;i<4;i++)
		{
		exp7(i+1,a8,a3,p);
		exp7(i+1,a9,a4,p);

		a6[0] = (a4[0] + (p-1))%p;
		a6[1] = a4[1];
		a7[0] = (a3[0] + (p-1))%p;
		a7[1] = a3[1];
		exp7(p*p-2,a7,a5,p);
		cmult(a5,a6,a7,p);

		h12[2*i+1] = a7[0];
		h12[2*i+2] = a7[1];
		}

	for(i=0;i<9;i++)
		{
		for(j=0;j<9;j++)
			{
			t2 = m80[9*i+j];
			t3 = 1;
			if (t2<0)
				{
				t2 = -t2;
				t3 = p-1;
				}
			t2 = t2%p;
			*(ptr2[150+i]+j) = (t2*t3)%p;
			}
		}

	solve2m(9,&ptr2[150],h12,p);

	t1 = det(9,&ptr2[150]);
	if (t1<9)
		{
		printf("\n \n error in equation63a");
		}

	l2solve(9,h11,h12,&ptr2[150],p);

	b2[90] = h11[0];
	b2[91] = h11[1];
	b2[92] = h11[2];
	b2[93] = h11[3];
	b2[94] = h11[4];
	b2[95] = h11[5];
}

void equation63b(int l2, integer a2[], integer a10[], integer a11[], integer h11[],
                 integer h12[], STRING ptr2, integer b2[], integer p)
{
unsigned int i,j;
unsigned int t1;
integer t2,t3,t4,t5,t6;
integer a3[2];
integer a4[2];
integer a5[2];
integer a6[2];
integer a7[2];
integer a8[2];
integer a9[2];
integer a20[2];
integer a21[2];
integer a22[2];

	exp7(l2,a2,a5,p);
	cmult(a5,a5,a3,p);
	equal2(a3,a8);
	exp7(l2+1,a3,a4,p);
	equal2(a4,a9);

	cmult(a8,a8,a20,p);
	exp7(l2,a8,a21,p);
	exp7(l2+1,a20,a22,p);

/* 123 */
	exp7(l2+1,a20,a3,p);
	a3[0] = (a3[0] + (p-1))%p;
	a6[0] = (a20[0] + (p-1))%p;
	a6[1] = a20[1];
	exp7(p*p-2,a6,a4,p);
	cmult(a3,a4,a7,p);

	h12[0] = a7[0];
	h12[20] = a7[1];

	for(i=0;i<4;i++)
		{
		exp7(i+1,a8,a5,p);
		exp7(i+1,a9,a6,p);

		cmult(a5,a20,a3,p);
		cmult(a6,a22,a4,p);


		a6[0] = (a4[0] + (p-1))%p;
		a6[1] = a4[1];
		a7[0] = (a3[0] + (p-1))%p;
		a7[1] = a3[1];
		exp7(p*p-2,a7,a5,p);
		cmult(a5,a6,a7,p);

		if((a3[0]==1) && (a3[1]==0))
			{
			a7[0] = (l2+1)%p;
			a7[1] = 0;
			}

		h12[2*i+1] = a7[0];
		h12[2*i+2] = a7[1];
		}

	a20[1] = (p-a20[1])%p;
	a22[1] = (p-a22[1])%p;
	for(i=0;i<4;i++)
		{
		exp7(i+1,a8,a5,p);
		exp7(i+1,a9,a6,p);

		cmult(a5,a20,a3,p);
		cmult(a6,a22,a4,p);

		a6[0] = (a4[0] + (p-1))%p;
		a6[1] = a4[1];
		a7[0] = (a3[0] + (p-1))%p;
		a7[1] = a3[1];
		exp7(p*p-2,a7,a5,p);
		cmult(a5,a6,a7,p);

		if((a3[0]==1) && (a3[1]==0))
			{
			a7[0] = (l2+1)%p;
			a7[1] = 0;
			}

		h12[2*i+21] = a7[0];
		h12[2*i+22] = a7[1];
		}

	t6 = (p+1)/2;
	h11[0] = h12[0];
	h11[20] = h12[20];
	for(i=0;i<4;i++)
		{
		t2 = (h12[2*i+1] + h12[2*i+21])%p;
		t2 = (t6*t2)%p;
		t5 = (p-h12[2*i+1])%p;
		t5 = (h12[2*i+21] + t5)%p;
		t5 = (t6*t5)%p;

		t4 = (h12[2*i+2] + h12[2*i+22])%p;
		t4 = (t6*t4)%p;
		t3 = (p-h12[2*i+22])%p;
		t3 = (h12[2*i+2] + t3)%p;
		t3 = (t6*t3)%p;

		h11[2*i+1] = t2;
		h11[2*i+2] = t4;
		h11[2*i+21] = t3;
		h11[2*i+22] = t5;
		}
/* 1 */
	for(i=0;i<9;i++)
		{
		for(j=0;j<9;j++)
			{
			t2 = m80[9*i+j];
			t3 = 1;
			if (t2<0)
				{
				t2 = -t2;
				t3 = p-1;
				}
			t2 = t2%p;
			*(ptr2[150+i]+j) = (t2*t3)%p;
			}
		}

	solve2m(9,&ptr2[150],h11,p);

	t1 = det(9,&ptr2[150]);
	if (t1<9)
		{
		printf("\n \n error in equation63b");
		}

	setzero2(40,h12);
	l2solve(9,h12,h11,&ptr2[150],p);


/* 2 */
	for(i=0;i<9;i++)
		{
		for(j=0;j<9;j++)
			{
			t2 = m80[9*i+j];
			t3 = 1;
			if (t2<0)
				{
				t2 = -t2;
				t3 = p-1;
				}
			t2 = t2%p;
			*(ptr2[150+i]+j) = (t2*t3)%p;
			}
		}

	solve2m(9,&ptr2[150],&h11[20],p);

	t1 = det(9,&ptr2[150]);

	l2solve(9,&h12[20],&h11[20],&ptr2[150],p);

	a4[0] = a11[0];
	a4[1] = (p-a11[1])%p;
	cmult(a4,a10,a5,p);
	cmult(a5,a5,a6,p);
	a21[1] = (p-a21[1])%p;
	for(i=0;i<9;i++)
		{
		a3[0] = h12[i];
		a3[1] = h12[i+20];
		cmult(a3,a21,a5,p);
		cmult(a5,a6,a7,p);
		h12[i] = a7[0];
		h12[i+20] = a7[1];
		}

	b2[96] = h12[0];
	b2[97] = h12[1];
	b2[98] = h12[2];
	b2[99] = h12[3];
	b2[100] = h12[4];
	b2[101] = h12[5];

	t2 = (p-1)/2;
	b2[102] = (t2*h12[20])%p;
	b2[103] = (t2*h12[21])%p;
	b2[104] = (t2*h12[22])%p;
	b2[105] = (t2*h12[23])%p;
	b2[106] = (t2*h12[24])%p;
	b2[107] = (t2*h12[25])%p;
}

void fn68(integer c8[], integer h11[], integer h12[], integer p)
{
unsigned int i;

for(i=0;i<3;i++)
	{
	h11[0] = (c8[0+i]+c8[6+i])%p;
	h11[1] = (c8[2+i]+c8[4+i])%p;
	h11[1] = ((p-5)*h11[1])%p;
	h11[2] = (h11[0]+h11[1])%p;
	h12[i] = h11[2];

	h11[0] = (p-c8[5+i])%p;
	h11[1] = (h11[0]+c8[1+i])%p;
	h12[i+3] = (4*h11[1])%p;
	}
}

void equation68(int l2, integer a2[], integer a10[], integer a11[], integer hs2[],
                integer h11[], integer h12[], integer b2[], integer p)
{
unsigned int i;
integer c8[9] = {0};
integer s8[9] = {0};
integer t2,t3,t4,t5,t6;

integer c1,c2,s1,s2;
integer c41,c42,s41,s42;

int a3[2] = {0};
int a4[2] = {0};
int a5[2] = {0};

	for(i=0;i<9;i++)
		{
		c8[i] = fn67a(i,hs2,p);
		s8[i] = fn67b(i,hs2,p);
		}

	t2 = (2*c8[2])%p;
	t3 = (t2+c8[0])%p;
	t4 = (2*c8[6])%p;
	t5 = (t4+c8[8])%p;
	t6 = (p-t5)%p;
	c1 = (t3+t6)%p;

	t2 = (c8[1]+c8[7])%p;
	t3 = (2*t2)%p;
	t4 = (c8[3]+c8[5])%p;
	t5 = (6*t4)%p;
	c2 = (t3+t5)%p;

	t2 = (2*s8[2])%p;
	t3 = (t2+s8[0])%p;
	t4 = (2*s8[6])%p;
	t5 = (t4+s8[8])%p;
	t6 = (p-t5)%p;
	s1 = (t3+t6)%p;

	t2 = (s8[1]+s8[7])%p;
	t3 = (2*t2)%p;
	t4 = (s8[3]+s8[5])%p;
	t5 = (6*t4)%p;
	s2 = (t3+t5)%p;

	fn68(c8,h11,h12,p);
	fn68(s8,h11,&h12[6],p);

	exp7(l2,a2,a3,p);
	exp7(l2,a3,a4,p);

	t2 = (h12[0]+h12[11])%p;
	t3 = (h12[2]+h12[9])%p;
	t3 = (p-t3)%p;
	a3[0] = (t2+t3)%p;

	t2 = (h12[3]+h12[6])%p;
	t3 = (h12[5]+h12[8])%p;
	t3 = (p-t3)%p;
	a3[1]  = (t2+t3)%p;

	cmult(a3,a4,a5,p);
	c41 = a5[0];
	s41 = a5[1];

	t2 = (p-h12[10])%p;
	t2 = (t2+h12[1])%p;
	a3[0] = (2*t2)%p;

	t2 = (h12[4]+h12[7])%p;
	a3[1] = (2*t2)%p;

	cmult(a3,a4,a5,p);
	c42 = a5[0];
	s42 = a5[1];


	a3[0] = c41;
	a3[1] = c42;
	cmult(a3,a4,a5,p);
	c41 = a5[0];
	c42 = a5[1];

	a3[0] = s41;
	a3[1] = s42;
	cmult(a3,a4,a5,p);
	s41 = a5[0];
	s42 = a5[1];

	exp7(l2,a2,a3,p);
	exp7(l2,a3,a4,p);

	c41 = (c1+c41)%p;
	c42 = (c2+c42)%p;
	s41 = (s1+s41)%p;
	s42 = (s2+s42)%p;

	t2 = (a4[0]*a4[0])%p;
	t2 = (p-t2)%p;
	c41 = (c41+t2)%p;

	t2 = (a4[0]*a4[1])%p;
	t2 = (p-t2)%p;
	c42 = (c42+t2)%p;

	t2 = (a4[1]*a4[0])%p;
	t2 = (p-t2)%p;
	s41 = (s41+t2)%p;

	t2 = (a4[1]*a4[1])%p;
	t2 = (p-t2)%p;
	s42 = (s42+t2)%p;

	cmult(a10,a11,a3,p);
	cmult(a3,a3,a4,p);

	t2 = (p-s42)%p;
	a3[0] = (c41+t2)%p;
	a3[1] = (c42+s41)%p;

	cmult(a3,a4,a5,p);

	exp7(l2,a2,a3,p);
	exp7(l2,a3,a4,p);
	cmult(a4,a4,a3,p);
	a3[1] = (p-a3[1])%p;

	cmult(a3,a5,a4,p);

	b2[127] = a4[0];
	b2[128] = a4[1];
	b2[129] = a5[0];
	b2[130] = a5[1];
}

void equation62(integer b2[])
{
unsigned int i;

for(i=27;i<90;i++)
	{
	b2[i] = 0;
	}
for (i=117;i<121;i++)
	{
	b2[i] = 0;
	}
for (i=131;i<144;i++)
	{
	b2[i] = 0;
	}
}

void set138(int m2, int l2, integer a2[], integer a10[], integer a11[],
            integer a12[], integer ws1[], integer hs1[], integer ws2[],
            integer hs2[], integer cs[], integer sn[], integer h11[],
            integer h12[], integer cs1[], integer sn1[], integer cs2[],
            integer sn2[], STRING ptr2, integer b2[], integer p)
{
	a10[1] = (p-(a10[1]%p))%p;
	cmult(a10,a11,a12,p);
	a10[1] = (p-a10[1])%p;

	setzero(200,ptr2);

	equation41(ptr2);
	equation42(ptr2,p);

	equation43a(ptr2);
	equation43b(ptr2,p);
	equation43c(ptr2,p);

	equation44(m2,cs,sn,cs1,sn1,ptr2,b2,p);
	equation46a(m2,cs,sn,cs1,sn1,ptr2,b2,p);
	equation46b(m2,cs,sn,cs2,sn2,ptr2,b2,p);

	equation47n2(m2,cs,sn,cs1,sn1,ptr2,b2,p);
	equation48a1(m2,cs,sn,cs2,sn2,ptr2,b2,p);
	equation48b1(m2,cs,sn,cs1,sn1,ptr2,b2,p);

	equation31a(m2,a12,cs,sn,cs1,sn1,cs2,sn2,ptr2,b2,p);
	equation32a(m2,a12,cs,sn,cs1,sn1,ptr2,b2,p);
	equation33a(m2,a12,cs,sn,cs1,sn1,ptr2,b2,p);
	equation34a(m2,a12,cs,sn,cs2,sn2,ptr2,b2,p);
	equation35a(m2,a12,cs,sn,cs2,sn2,ptr2,b2,p);
	equation36a(m2,a12,cs,sn,cs1,sn1,cs2,sn2,ptr2,b2,p);

	equation61(ws1,ptr2,b2);
	equation64(ws1,ptr2,b2,p);
	equation66(l2,ws1,ws2,cs,sn,h11,h12,ptr2,b2,p);
	equation67a4(l2,a2,hs1,hs2,h11,h12,ptr2,b2,p);

	equation63a(l2,a2,h11,h12,ptr2,b2,p);
	equation63b(l2,a2,a10,a11,h11,h12,ptr2,b2,p);
	equation68(l2,a2,a10,a11,hs2,h11,h12,b2,p);
	equation62(b2);
}

void series(int c1, int c2, integer a2[], int d, integer h11[], long int d1, integer p)
{
int i;
integer a3[2] = {0,0};
integer a4[2] = {0,0};
integer a6[2] = {0,0};

h11[0] = 0;
h11[1] = 0;
h11[2] = 0;
h11[3] = 0;
for(i=c1;i<(c2+1);i++)
	{
	exp7(i,a2,a3,p);
	exp7(i,a3,a4,p);
	exp7(d1,a4,a3,p);

	exp7(i,a2,a4,p);
	exp7(d,a4,a6,p);

	a4[0] = (a3[0]*a6[0])%p;
	a4[1] = (a3[1]*a6[0])%p;

	h11[0] = (h11[0]+a4[0])%p;
	h11[1] = (h11[1]+a4[1])%p;

	a4[0] = (a3[0]*a6[1])%p;
	a4[1] = (a3[1]*a6[1])%p;

	h11[2] = (h11[2]+a4[0])%p;
	h11[3] = (h11[3]+a4[1])%p;
	}
}

void series1(int c1, int c2, int s, integer a2[], int d, integer h11[], long int d1, integer p)
{
int i;
integer a3[2] = {0,0};
integer a4[2] = {0,0};
integer a6[2] = {0,0};

h11[0] = 0;
h11[1] = 0;
h11[2] = 0;
h11[3] = 0;
for(i=c1;i<(c2+1);i=i+s)
	{
	exp7(i,a2,a3,p);
	exp7(i,a3,a4,p);
	exp7(d1,a4,a3,p);

	exp7(i,a2,a4,p);
	exp7(d,a4,a6,p);

	a4[0] = (a3[0]*a6[0])%p;
	a4[1] = (a3[1]*a6[0])%p;

	h11[0] = (h11[0]+a4[0])%p;
	h11[1] = (h11[1]+a4[1])%p;

	a4[0] = (a3[0]*a6[1])%p;
	a4[1] = (a3[1]*a6[1])%p;

	h11[2] = (h11[2]+a4[0])%p;
	h11[3] = (h11[3]+a4[1])%p;
	}
}

void series3(int l2, integer a2[], int d, integer h11[], long int d1, integer p)
{
int i;
integer a3[2] = {0,0};
integer a4[2] = {0,0};
integer a5[2] = {0,0};
integer a6[2] = {0,0};

h11[0] = 0;
h11[1] = 0;
h11[2] = 0;
h11[3] = 0;
for(i=0;i<(l2+1);i++)
	{
	exp7(i,a2,a3,p);
	exp7(i,a3,a4,p);
	exp7(d1,a4,a3,p);

	exp7(l2-i,a2,a4,p);
	exp7(l2-i,a4,a6,p);
	exp7(d1,a6,a5,p);

	exp7(i,a2,a4,p);
	exp7(d,a4,a6,p);

    cmult(a3,a5,a4,p);
	a3[0] = a4[0];
	a3[1] = a4[1];

	a4[0] = (a3[0]*a6[0])%p;
	a4[1] = (a3[1]*a6[0])%p;

	h11[0] = (h11[0]+a4[0])%p;
	h11[1] = (h11[1]+a4[1])%p;

	a4[0] = (a3[0]*a6[1])%p;
	a4[1] = (a3[1]*a6[1])%p;

	h11[2] = (h11[2]+a4[0])%p;
	h11[3] = (h11[3]+a4[1])%p;
	}
}

void series4d(int l2, integer a2[], int d, integer h11[], long int d1, integer p)
{
int i;
integer a3[2] = {0,0};
integer a4[2] = {0,0};
integer a6[2] = {0,0};

h11[0] = 0;
h11[1] = 0;
h11[2] = 0;
h11[3] = 0;
for(i=0;i<(l2+1);i++)
	{
	exp7(l2-i,a2,a3,p);
	exp7(l2-i,a3,a4,p);
	exp7(d1,a4,a3,p);

	exp7(i,a2,a4,p);
	exp7(d,a4,a6,p);

	a4[0] = (a3[0]*a6[0])%p;
	a4[1] = (a3[1]*a6[0])%p;

	h11[0] = (h11[0]+a4[0])%p;
	h11[1] = (h11[1]+a4[1])%p;

	a4[0] = (a3[0]*a6[1])%p;
	a4[1] = (a3[1]*a6[1])%p;

	h11[2] = (h11[2]+a4[0])%p;
	h11[3] = (h11[3]+a4[1])%p;
	}
}




