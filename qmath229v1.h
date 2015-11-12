
typedef int integer;
typedef integer *STRING[220];

void display27(integer ws1[]);
void ndisplay(integer hs1[]);
void exp4(int l2, int c, int e, int e1, integer a2[], STRING ptr2, integer p);
void exp4a(int l2, int c, int e1, integer a2[], STRING ptr2, integer p);
void equation71(int m2, integer cs[], integer sn[], int r, STRING ptr2, integer b1[], integer p);
void equation72(int m2, int r, integer cs1[], integer sn1[], integer cs2[], integer sn2[],
                STRING ptr2, integer b1[], integer p);
void equation74(int m2, int l2, integer a2[], integer cs[], integer sn[], int r,
                STRING ptr2, integer b1[], integer p);
void fn52(int m2, unsigned int c1, unsigned int r, unsigned int c, STRING ptr2, integer p);
void equation52d(int m2, int l2, integer a2[], STRING ptr2, integer b1[], integer p);
void equation81(int l2, integer a2[], integer b2[], integer p);
void equation81a(int l2, integer a2[], integer b2[], integer p);
void equation82(int l2, int l3, integer a2[], integer h11[], integer b2[], integer p);
void equation83(int l2, int l3, integer a2[], integer h11[], integer b2[], integer p);
void set142(int m2, int l2, int l3, integer a2[], integer hs1[], integer cs[], integer sn[],
            integer h11[], integer cs1[], integer sn1[], integer cs2[], integer sn2[],
            STRING ptr2, integer b2[], integer p);
void equal34(int d, int e1, STRING ptr2, integer hs1[]);
void equal43(int d, int e1, STRING ptr2, integer hs1[]);
void init2(int l2, int a2[], int d, STRING ptr2, integer hs3[],
           integer *str1, integer *str1a, integer p);
void displaytuple (int d, integer *str1, integer *str1a);
void displaytuple2 (int d1, int d2, integer *str1, integer *str1a);
void detws2(int m2, int l2, integer a2[], integer hs3[], integer ws3[], integer cs[], integer sn[],
            integer h20[], integer h21[], STRING ptr2, integer b2[], integer p);
void tuple1(int d, integer *str1, integer *str2, integer *str2a, int m2, int l2, int l3,
            integer a2[], integer hs1[], integer cs[], integer sn[], integer h11[],
            integer cs1[], integer sn1[], integer cs2[], integer sn2[],
            STRING ptr2, integer b2[], integer p);
void set141(int m2, int l2, integer a2[], integer ws1[], integer hs1[], integer ws2[],
            integer hs2[], integer cs[], integer sn[], integer cs1[], integer sn1[],
            integer cs2[], integer sn2[], integer h11[], integer h12[], integer e1[],
            integer flag0, STRING ptr2, integer b2[], integer p);
void tuple2(int d, integer *str1, integer *str1a, integer *str2, integer *str2a, integer flag0,
            int y, int c6, integer c, int m2, int l2, integer a2[], integer ws1[], integer hs1[],
            integer ws2[], integer hs2[], integer cs[], integer sn[],integer h11[], integer cs1[],
            integer sn1[], integer cs2[], integer sn2[], STRING ptr2, integer b2[], integer p);
void zerotuple(int e1, int e2, integer *str1, integer *str1a);
void equaltuple2(int e1, integer *str1, integer *str1a, integer *str2, integer *str2a);


unsigned long det_sum = 0;
unsigned long det_l144 = 0;
int flag_2 = 0;




void display27(integer ws1[])
{
int i;

	for(i=0;i<27;i++)
		{
		if((i%3)==0)
			{
			printf("( ");
			}
		printf("%d ",ws1[i]);
		if((i%3)==2)
			{
			printf(") ");
			}
		if((i%9)==8)
			{
			printf("\n");
			}
		}
}

void ndisplay(integer hs1[])
{
int i,j;

	for(i=0;i<16;i++)
		{
		if((i%2)==0)
			{
			printf("\n %d(",i);
			}
		if((i%2)==1)
			{
			printf(" %d(",i);
			}
		for(j=0;j<9;j++)
			{
			printf(" %d",hs1[9*i+j]);
			}
		printf(") ");
		}
}


void exp4(int l2, int c, int e, int e1, integer a2[], STRING ptr2, integer p)
{
int i,j;
int t;
integer t1,t2,t3;
integer s1,s2,s3;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer a6[2] = {0};
integer a[16] = {0};
integer b[9] = {0};

exp7(e,a2,a3,p);
exp7(e,a3,a4,p);

t = l2-e;
if (t<0)
	{printf("error in exp4 e1 > l2");
	}

if (t>=0)
	{
	exp7(t,a2,a3,p);
	exp7(t,a3,a5,p);
	}

s1 = (a4[0]*a4[0])%p;
s2 = (a4[0]*a4[1])%p;
s3 = (a4[1]*a4[1])%p;

t1 = (a5[0]*a5[0])%p;
t2 = (a5[0]*a5[1])%p;
t3 = (a5[1]*a5[1])%p;

a[0] = (s1*t1)%p;
a[1] = (s2*t1)%p;
a[2] = a[1];
a[3] = (s3*t1)%p;

a[4] = (s1*t2)%p;
a[5] = (s2*t2)%p;
a[6] = a[5];
a[7] = (s3*t2)%p;

a[8] = a[4];
a[9] = a[5];
a[10] = a[6];
a[11] = a[7];

a[12] = (s1*t3)%p;
a[13] = (s2*t3)%p;
a[14] = a[13];
a[15] = (s3*t3)%p;

if (c==0)
	{
	exp7(l2,a2,a4,p);
	exp7(e,a4,a3,p);
	for(i=0;i<9;i++)
		{
		t = 8-i;
		a4[0] = a3[0];
		a4[1] = 0;
		exp7(t,a4,a5,p);
		t = i;
		a4[0] = a3[1];
		a4[1] = 0;
		exp7(t,a4,a6,p);
		b[i] = (a5[0]*a6[0])%p;
		}
	for(i=0;i<16;i++)
		{
		for(j=0;j<9;j++)
			{
			t = 9*i+j;
			t1 = (a[i]*b[j])%p;
			set7(e1,t,t1,ptr2);
			}
		}
	}

if (c==1)
	{
	a[2] = a[3];
	a[3] = a[4];
	a[4] = a[5];
	a[5] = a[7];
	a[6] = a[12];
	a[7] = a[13];
	a[8] = a[15];
	exp7(l2,a2,a4,p);
	exp7(e,a4,a3,p);
	b[0] = (a3[0]*a3[0])%p;
	b[1] = (a3[0]*a3[1])%p;
	b[2] = (a3[1]*a3[1])%p;

	for(i=0;i<9;i++)
		{
		for(j=0;j<3;j++)
			{
			t = 3*i+j;
			t1 = (a[i]*b[j])%p;
			set7(e1,t,t1,ptr2);
			}
		}
	}
}

void exp4a(int l2, int c, int e1, integer a2[], STRING ptr2, integer p)
{
int i;

setzero2a(144,e1,e1,ptr2);
setzero2a(144,198,198,ptr2);

for(i=0;i<(l2+1);i++)
	{
	exp4(l2,c,i,198,a2,ptr2,p);
	addm4(144,e1,198,e1,ptr2,ptr2[199],p);
	}
}

void equation71(int m2, integer cs[], integer sn[], int r, STRING ptr2, integer b1[], integer p)
{
int i;
int t;
int a1[9] = {-4,-3,-2,-4,-2, 4, 2,3,4};
int a2[9] = {-4,-3,-2, 2, 2,-2, 2,3,4};
int a3[9] = {4,3,2,1,0,1,2,3,4};
integer t1,t2;

	for(i=0;i<9;i++)
		{
		det5b(a1[i],a2[i],0,0,m2,170,200,198,199,ptr2,b1,p);
		t = a3[i];
		t1 = cs[t];
		t2 = sn[t];
		mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
		t1 = cs[t];
		t2 = sn[t];
		mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);
		t1 = cs[0];
		t2 = sn[0];
		mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);
		t1 = cs[0];
		t2 = sn[0];
		mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

		mult50(m2,1,p-1,171,174,200,199,ptr2,b1,p);
		mult50(m2,1,p-1,183,186,201,199,ptr2,b1,p);
		mult50(m2,1,1,200,201,205,199,ptr2,b1,p);
		set2d(i+r,205,ptr2);

		mult50(m2,1,1,172,173,200,199,ptr2,b1,p);
		mult50(m2,1,1,184,185,201,199,ptr2,b1,p);
		mult50(m2,1,1,200,201,206,199,ptr2,b1,p);
		set2d(i+r+9,206,ptr2);
		}
}


void equation72(int m2, int r, integer cs1[], integer sn1[], integer cs2[], integer sn2[],
                STRING ptr2, integer b1[], integer p)
{
int i;
int t;
int a1[9] = {-4,-3,-2,-4,-2, 4, 2,3,4};
int a2[9] = {-4,-3,-2, 2, 2,-2, 2,3,4};
int a3[9] = {4,3,2,1,0,1,2,3,4};
integer t1,t2;

	for(i=0;i<9;i++)
		{
		det5b(0,0,a1[i],a2[i],m2,170,200,198,199,ptr2,b1,p);
		t = a3[i];
		if (i<5)
			{
			t1 = cs2[t];
			t2 = sn2[t];
			}
		if (i>4)
			{
			t1 = cs1[t];
			t2 = sn1[t];
			}
		mult8c(m2,t1,t2,170,150,198,199,ptr2,b1,p);

		mult8d(m2,t1,t2,150,170,198,199,ptr2,b1,p);

		mult50(m2,1,p-1,171,183,200,199,ptr2,b1,p);
		mult50(m2,1,p-1,174,186,201,199,ptr2,b1,p);
		mult50(m2,1,1,200,201,205,199,ptr2,b1,p);
		set2d(i+r,205,ptr2);

		mult50(m2,1,1,175,179,200,199,ptr2,b1,p);
		mult50(m2,1,1,178,182,201,199,ptr2,b1,p);
		mult50(m2,1,1,200,201,206,199,ptr2,b1,p);
		set2d(i+r+9,206,ptr2);
		}
}

void equation74(int m2, int l2, integer a2[], integer cs[], integer sn[], int r,
                STRING ptr2, integer b1[], integer p)
{
int i;
int t;
int a0[9] = {-4,-3,-2,-4,-2, 4, 2,3,4};
int a1[9] = {-4,-3,-2, 2, 2,-2, 2,3,4};
integer t1,t2;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

	exp7(l2,a2,a3,p);
	exp7(l2,a3,a4,p);
	exp7(2,a4,a5,p);
	a5[1] = (p-a5[1])%p;
	for(i=0;i<9;i++)
		{
		det5b(a0[i],a1[i],0,0,m2,170,200,198,199,ptr2,b1,p);
		t1 = cs[0];
		t2 = sn[0];
		mult8a(m2,t1,t2,170,150,198,199,ptr2,b1,p);
		t1 = cs[0];
		t2 = sn[0];
		mult8b(m2,t1,t2,150,170,198,199,ptr2,b1,p);

		mult50(m2,1,1,171,186,200,199,ptr2,b1,p);
		mult50(m2,1,1,174,183,201,199,ptr2,b1,p);
		mult50(m2,1,p-1,200,201,202,199,ptr2,b1,p);
		mult50(m2,2,2,176,177,203,199,ptr2,b1,p);
		mult50(m2,1,p-1,202,203,205,199,ptr2,b1,p);

		mult50(m2,2,p-2,175,178,200,199,ptr2,b1,p);
		mult50(m2,1,p-1,172,184,201,199,ptr2,b1,p);
		mult50(m2,1,p-1,173,185,202,199,ptr2,b1,p);
		mult50(m2,1,1,201,202,203,199,ptr2,b1,p);
		mult50(m2,1,1,200,203,206,199,ptr2,b1,p);

		if ((l2%4)!=0)
			{
			printf("\n \n error in equation74 l2 is not divisible by 4");
			}

		t = 6-i;
		if (t<0)
			{
			t = -t;
			}
		exp7(t*t,a2,a3,p);
		exp7(l2/2,a3,a4,p);
		exp7(l2/2,a4,a3,p);
		cmult(a3,a5,a4,p);

		t1 = a4[0];
		t2 = (p-a4[1])%p;
		mult50(m2,t1,t2,205,206,207,199,ptr2,b1,p);
		t1 = a4[1];
		t2 = a4[0];
		mult50(m2,t1,t2,205,206,208,199,ptr2,b1,p);

		set2d(i+r,207,ptr2);
		set2d(i+r+9,208,ptr2);
		}
}

void fn52(int m2, unsigned int c1, unsigned int r, unsigned int c, STRING ptr2, integer p)
{
unsigned int i;
integer t1,t2;

setzero2a(m2,r,r,ptr2);

for(i=0;i<9;i++)
	{
	t1 = m80[9*c1+i];
	t2 = 1;
	if (t1<0)
		{
		t1 = -t1;
		t2 = p-1;
		}
	t1 = t1%p;
	*(ptr2[r]+9*c+i) = (t1*t2)%p;
	}
}

void equation52d(int m2, int l2, integer a2[], STRING ptr2, integer b1[], integer p)
{
int i,j;
unsigned int s1;
integer t1,t2;
integer a3[2];
integer a4[2];

exp7(l2,a2,a3,p);
exp7(l2,a3,a4,p);
exp7(2,a4,a3,p);

exp7(l2,a2,a4,p);

for(i=0;i<9;i++)
	{
	setzero2a(m2,171,186,ptr2);
	for(j=0;j<16;j++)
		{
		s1 = i;
		fn52(m2,s1,171+j,j,ptr2,p);
		}
/*	(1)  */
	mult50(m2,1,1,171,174,200,199,ptr2,b1,p);
	mult50(m2,1,1,183,186,201,199,ptr2,b1,p);
	mult50(m2,1,1,200,201,151,199,ptr2,b1,p);
/*	(c)  */
	mult50(m2,1,1,171,186,200,199,ptr2,b1,p);
	mult50(m2,1,1,174,183,201,199,ptr2,b1,p);
	mult50(m2,1,p-1,200,201,202,199,ptr2,b1,p);
	mult50(m2,1,4,202,176,152,199,ptr2,b1,p);
/*	(s)  */
	mult50(m2,2,2,172,178,200,199,ptr2,b1,p);
	mult50(m2,2,2,175,184,201,199,ptr2,b1,p);
	mult50(m2,1,p-1,200,201,153,199,ptr2,b1,p);

	t1 = a3[0];
	t2 = (p-a3[1])%p;
	mult50(m2,t1,t2,152,153,161,199,ptr2,b1,p);

	t1 = (p+a3[1])%p;
	t2 = (p+a3[0])%p;
	mult50(m2,t1,t2,152,153,162,199,ptr2,b1,p);

	set2d(i,151,ptr2);
	set2d(i+9,161,ptr2);
	set2d(i+18,162,ptr2);
	}
}

void equation81(int l2, integer a2[], integer b2[], integer p)
{
int i;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

b2[0] = (l2+1)%p;
for(i=1;i<5;i++)
	{
	exp7(2*i,a2,a4,p);
	exp7(l2,a4,a3,p);
	a3[0] = (a3[0]+(p-1))%p;
	exp7(p-2,a3,a4,p);
	exp7(p+2,a4,a5,p);
	cmult(a3,a5,a4,p);
	cmult(a3,a4,a5,p);

	a3[0] = (a3[0]+1)%p;
	exp7(l2+1,a3,a4,p);
	a4[0] = (a4[0]+(p-1))%p;

	cmult(a4,a5,a3,p);
	b2[2*i-1] = a3[0];
	b2[2*i] = a3[1];
	}
}

void equation81a(int l2, integer a2[], integer b2[], integer p)
{
int i;
integer t1,t2,t3;
int a[3] = {1,3,4};
int s,t;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer a6[2] = {0};
integer f1[5] = {0};
integer f2[5] = {0};
integer f3[5] = {0};
integer f4[5] = {0};

b2[0] = (l2+1)%p;
for(i=0;i<5;i++)
	{
	exp7(2*i,a2,a4,p);
	exp7(l2,a4,a6,p);
	exp7(4,a2,a4,p);
	exp7(l2,a4,a5,p);
	cmult(a5,a6,a3,p);
	a3[0] = (a3[0]+(p-1))%p;
	exp7(p-2,a3,a4,p);
	exp7(p+2,a4,a5,p);
	cmult(a3,a5,a4,p);
	cmult(a3,a4,a5,p);

	a3[0] = (a3[0]+1)%p;
	exp7(l2+1,a3,a4,p);
	a4[0] = (a4[0]+(p-1))%p;

	cmult(a4,a5,a3,p);
	f1[i] = a3[0];
	f2[i] = a3[1];
	}

for(i=0;i<5;i++)
	{
	exp7(2*i,a2,a4,p);
	exp7(l2,a4,a6,p);
	exp7(4,a2,a4,p);
	exp7(l2,a4,a5,p);
	a5[1] = (p-a5[1])%p;
	cmult(a5,a6,a3,p);
	a3[0] = (a3[0]+(p-1))%p;
	exp7(p-2,a3,a4,p);
	exp7(p+2,a4,a5,p);
	cmult(a3,a5,a4,p);
	cmult(a3,a4,a5,p);

	a3[0] = (a3[0]+1)%p;
	exp7(l2+1,a3,a4,p);
	a4[0] = (a4[0]+(p-1))%p;

	cmult(a4,a5,a3,p);
	f3[i] = a3[0];
	f4[i] = a3[1];
	}
/* 0 */
b2[9] = f1[0];
b2[18] = f2[0];
/* 4 */
t1 = (p+1)/2;
t2 = ((l2+1)+f1[2])%p;
b2[12] = (t1*t2)%p;
b2[13] = (t1*f2[2])%p;
b2[21] = b2[13];
t2 = (p-f1[2])%p;
t2 = ((l2+1)+t2)%p;
b2[22] = (t1*t2)%p;

for(i=0;i<3;i++)
	{
	s = 2*a[i]-1;
	t = a[i];
	t2 = (f1[t]+f3[t])%p;
	b2[9+s] = (t1*t2)%p;
	t2 = (f2[t]+f4[t])%p;
	b2[10+s] = (t1*t2)%p;
	t3 = (p-f4[t])%p;
	t2 = (f2[t]+t3)%p;
	b2[18+s] = (t1*t2)%p;
	t3 = (p-f1[t])%p;
	t2 = (f3[t]+t3)%p;
	b2[19+s] = (t1*t2)%p;
	}
}

void equation82(int l2, int l3, integer a2[], integer h11[], integer b2[], integer p)
{
int i;
integer t3,t4;
integer h1[4] = {0};
integer h2[4] = {0};

/* (-8) and (+4) */
	series(l2,l3-1,a2,0,h1,2,p);
	series(2*l2+1,2*l3,a2,0,h2,2,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[90] = (t3+h11[0])%p;
	b2[99] = (t4+h11[9])%p;
	b2[96] = b2[90];
	b2[105] = b2[99];

/* (-6) and (+2) */
	series(l2/2,(l3/2)-1,a2,0,h1,2,p);
	series(3*(l2/2)+1,3*(l3/2),a2,0,h2,2,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[91] = (t3+h11[1])%p;
	b2[100] = (t4+h11[10])%p;
	b2[95] = b2[91];
	b2[104] = b2[100];

/* (-4) and (0) */
	h1[0] = 0;
	h1[1] = 0;
	series(l2+1,l3,a2,0,h2,2,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[92] = (t3+h11[2])%p;
	b2[101] = (t4+h11[11])%p;
	b2[94] = b2[92];
	b2[103] = b2[101];

/* (-2)  */
	series((l2/2)+1,l3/2,a2,0,h2,2,p);
	t3 = (2*h2[0])%p;
	t4 = (2*h2[1])%p;
	b2[93] = (t3+h11[3])%p;
	b2[102] = (t4+h11[12])%p;

/* (+6) */
	series(3*(l2/2),3*(l3/2)-1,a2,0,h1,2,p);
	series(5*(l2/2)+1,5*(l3/2),a2,0,h2,2,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[97] = (t3+h11[7])%p;
	b2[106] = (t4+h11[16])%p;

/* (+8) */
	series(2*l2,2*l3-1,a2,0,h1,2,p);
	series(3*l2+1,3*l3,a2,0,h2,2,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[98] = (t3+h11[8])%p;
	b2[107] = (t4+h11[17])%p;

for(i=0;i<9;i++)
	{
	b2[108+i] = b2[98-i];
	b2[117+i] = b2[107-i];
	}
}


void equation83(int l2, int l3, integer a2[], integer h11[], integer b2[], integer p)
{
integer t3,t4;
integer h1[4] = {0};
integer h2[4] = {0};

/* (-8) and (+8) */
	series(l2/2,(l3/2)-1,a2,0,h1,4,p);
	series(3*(l2/2)+1,3*(l3/2),a2,0,h2,4,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[126] = (t3+h11[0])%p;
	b2[135] = (t4+h11[9])%p;
	b2[134] = b2[126];
	b2[143] = b2[135];

/* (-6) and (+6) */
	series(l2/4,(l3/4)-1,a2,0,h1,4,p);
	series(5*(l2/4)+1,5*(l3/4),a2,0,h2,4,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[127] = (t3+h11[1])%p;
	b2[136] = (t4+h11[10])%p;
	b2[133] = b2[127];
	b2[142] = b2[136];

/* (-4) and (+4) */
	h1[0] = 0;
	h1[1] = 0;
	series(l2+1,l3,a2,0,h2,4,p);
	t3 = (p-h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p-h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[128] = (t3+h11[2])%p;
	b2[137] = (t4+h11[11])%p;
	b2[132] = b2[128];
	b2[141] = b2[137];

/* (-2) and (+2) */
	series((l2/4)+1,(l3/4),a2,0,h1,4,p);
	series(3*(l2/4)+1,3*(l3/4),a2,0,h2,4,p);
	t3 = (p+h1[0])%p;
	t3 = (h2[0]+t3)%p;
	t4 = (p+h1[1])%p;
	t4 = (h2[1]+t4)%p;
	b2[129] = (t3+h11[3])%p;
	b2[138] = (t4+h11[12])%p;
	b2[131] = b2[129];
	b2[140] = b2[138];

/* (0) */
	series((l2/2)+1,(l3/2),a2,0,h1,4,p);
	t3 = (2*h1[0])%p;
	t4 = (2*h1[1])%p;
	b2[130] = (t3+h11[4])%p;
	b2[139] = (t4+h11[13])%p;
}

void set142(int m2, int l2, int l3, integer a2[], integer hs1[], integer cs[], integer sn[],
            integer h11[], integer cs1[], integer sn1[], integer cs2[], integer sn2[],
            STRING ptr2, integer b2[], integer p)
{
int i,j;
int t;
integer t1,t2;
integer cs3[10] = {0};
integer sn3[10] = {0};
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

	setcs(l2,a2,cs3,sn3,p);

	setcs(l3,a2,cs,sn,p);
	setcs1(l3,a2,cs1,sn1,p);
	setcs2(l3,a2,cs2,sn2,p);

	setzero(200,ptr2);

	for(i=0;i<144;i++)
		{
		b2[i] = 0;
		}

	setzero2a(m2,0,26,ptr2);
	equation52d(m2,l3,a2,ptr2,b2,p);
	equation42(ptr2,p);

/* 1 */
	equation71(m2,cs3,sn3,90,ptr2,b2,p);
	equal34(144,201,ptr2,hs1);
	for(i=0;i<18;i++)
		{
		h11[i] = multcnvl(143,90+i,201,ptr2,p);
		}
	equation82(l2,l3,a2,h11,b2,p);

/* 2 */
	equation74(m2,l2,a2,cs,sn,126,ptr2,b2,p);
	equal34(144,201,ptr2,hs1);
	for(i=0;i<18;i++)
		{
		h11[i] = multcnvl(143,126+i,201,ptr2,p);
		}
	equation83(l2,l3,a2,h11,b2,p);

	equation71(m2,cs,sn,90,ptr2,b2,p);
	equation72(m2,108,cs1,sn1,cs2,sn2,ptr2,b2,p);
	equation74(m2,l3,a2,cs,sn,126,ptr2,b2,p);

	exp7(l3,a2,a3,p);
/*
	equation81(l3,a2,b2,p);
	equation81a(l3,a2,b2,p);
*/

	exp7(l3,a2,a3,p);
/*
	equation81(l3,a2,b2,p);
	equation81a(l3,a2,b2,p);
*/
	t = (l3+1)%p;
	t1 = (a3[0]*a3[0])%p;
	for(j=0;j<27;j++)
		{
		b2[j] = 0;
		}
	if((t1==1)&&(a3[1]==0))
		{
		b2[0] = t;
		b2[9] = t;
		for(j=0;j<4;j++)
			{
			b2[2*j+1] = t;
			b2[2*j+10] = t;
			}
		}
	t1 = (a3[1]*a3[1])%p;
	if((a3[0]==0)&&(t1==1))
		{
		b2[0] = l3+1;
		b2[1] = 1;
		b2[3] = l3+1;
		b2[5] = 1;
		b2[7] = l3+1;
		b2[9] = l3+1;
		for(j=0;j<9;j++)
			{
			b2[j+9] = b2[j];
			}
		}
    t1 = (a3[0]*a3[0])%p;
    t2 = (a3[1]*a3[1])%p;
    t2 = (p-t2)%p;
    t2 = (t1+t2)%p;
    if (t2==0)
        {
        b2[0] = l3+1;
        b2[7] = l3+1;
        b2[12] = l3+1;
        b2[1] = 1;
        b2[3] = 1;
        b2[5] = 1;
        b2[9] = 1;
        b2[10] = 1;
        b2[14] = 1;
        b2[16] = 1;
        }

	if((a3[0]!=0)&&(a3[1]!=0)&&(t2!=0))
		{
		equation81(l3,a2,b2,p);
		equation81a(l3,a2,b2,p);
		}

    exp7(6,a3,a4,p);

    if((a3[0]!=1)&&(a4[0]==1)&&(a4[1]==0))
        {
        b2[5] = b2[0];
        b2[10] = b2[12];
        b2[16] = b2[12];
        b2[20] = (p-b2[22])%p;
        b2[26] = b2[20];
        }

/** (1/12) **/
    exp7(2,a4,a5,p);
    if((a5[0]==1)&&(a5[1]==0)&&(a5[1]!=1))
        {
        b2[16] = b2[12];
        b2[26] = (p-b2[22])%p;
        }

/** (1/5) or (1/10) **/
    exp7(10,a3,a4,p);
    if((a4[0]==1)&&(a4[1]==0)&&(a3[0]!=1))
       {
        b2[14] = b2[12];
        b2[24] = (p-b2[22])%p;
       }

}

void equal34(int d, int e1, STRING ptr2, integer hs1[])
{
unsigned int i;

/** in most case d should equal 144 or 27 **/
/** 144 if hs1 = hs1 or 27 if hs1 = ws1 **/

	for(i=0;i<d;i++)
		{
		*(ptr2[e1]+i) = hs1[i];
		}
}

void equal43(int d, int e1, STRING ptr2, integer hs1[])
{
unsigned int i;

/** in most case d should equal 144 or 27 **/
/** 144 if hs1 = hs1 or 27 if hs1 = ws1 **/

	for(i=0;i<d;i++)
		{
		hs1[i] = *(ptr2[e1]+i);
		}
}

void init2(int l2, int a2[], int d, STRING ptr2, integer hs3[],
           integer *str1, integer *str1a, integer p)
{
int i,j;
int t;
integer a3[2] = {0};
integer a4[2] = {0};

a3[0] = a2[0];
a3[1] = a2[1];
for(i=0;i<d;i++)
	{

	exp4a(l2,0,201,a3,ptr2,p);
	t = 144*i;
	equal43(144,201,ptr2,hs3);
	for(j=0;j<144;j++)
		{
		*(str1+t+j) = hs3[j];
		}

	exp4a(2*l2,1,201,a3,ptr2,p);
	t = 27*i;
	equal43(27,201,ptr2,hs3);
	for(j=0;j<27;j++)
		{
		*(str1a+t+j) = hs3[j];
		}
	cmult(a3,a3,a4,p);
	a3[0] = a4[0];
	a3[1] = a4[1];
	}
}

void displaytuple (int d, integer *str1, integer *str1a)
{
int i;
int t;

for(i=0;i<d;i++)
	{
	printf("\n \n str1[%d] = ",i);
	t = 144*i;
	ndisplay((str1+t));

	printf("\n \n str1a[%d] = \n",i);
	t = 27*i;
	display27((str1a+t));
	}
}

void displaytuple2 (int d1, int d2, integer *str1, integer *str1a)
{
int i;
int t;

for(i=d1;i<(d2+1);i++)
	{
	printf("\n \n str1[%d] = ",i);
	t = 144*i;
	ndisplay((str1+t));

	printf("\n \n str1a[%d] = \n",i);
	t = 27*i;
	display27((str1a+t));
	}
}

void detws2(int m2, int l2, integer a2[], integer hs3[], integer ws3[], integer cs[], integer sn[],
            integer h20[], integer h21[], STRING ptr2, integer b2[], integer p)
{
unsigned int i;
integer t1,t2,t3,t4;
integer a3[2];
integer a4[2];
int t5,t6;

	setcs(l2,a2,cs,sn,p);

	det5b(2,2,0,0,m2,170,200,198,199,ptr2,b2,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8a(m2,t1,t2,170,150,198,199,ptr2,b2,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8b(m2,t1,t2,150,170,198,199,ptr2,b2,p);

	for(i=0;i<144;i++)
		{
		set7(218,i,hs3[i],ptr2);
		}

	t1 = multcnvl(143,171,218,ptr2,p);
	h20[0] = t1;
	t1 = multcnvl(143,172,218,ptr2,p);
	h20[1] = t1;
	t1 = multcnvl(143,174,218,ptr2,p);
	h20[2] = t1;

	t1 = multcnvl(143,175,218,ptr2,p);
	h20[3] = t1;
	t1 = multcnvl(143,176,218,ptr2,p);
	h20[4] = t1;
	t1 = multcnvl(143,178,218,ptr2,p);
	h20[5] = t1;

	t1 = multcnvl(143,183,218,ptr2,p);
	h20[6] = t1;
	t1 = multcnvl(143,184,218,ptr2,p);
	h20[7] = t1;
	t1 = multcnvl(143,186,218,ptr2,p);
	h20[8] = t1;


	det5b(6,2,0,0,m2,170,200,198,199,ptr2,b2,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8a(m2,t1,t2,170,200,198,199,ptr2,b2,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8b(m2,t1,t2,200,170,198,199,ptr2,b2,p);


	det5b(-2,2,0,0,m2,150,200,198,199,ptr2,b2,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8a(m2,t1,t2,150,200,198,199,ptr2,b2,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8b(m2,t1,t2,200,150,198,199,ptr2,b2,p);

	t3 = (p+1)/2;
	t1 = multcnvl(143,171,218,ptr2,p);
	t2 = multcnvl(143,151,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[9] = t4;

	t1 = multcnvl(143,172,218,ptr2,p);
	t2 = multcnvl(143,152,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[10] = t4;

	t1 = multcnvl(143,174,218,ptr2,p);
	t2 = multcnvl(143,154,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[11] = t4;

	t1 = multcnvl(143,179,218,ptr2,p);
	t2 = multcnvl(143,159,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[12] = t4;

	t1 = multcnvl(143,180,218,ptr2,p);
	t2 = multcnvl(143,160,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[13] = t4;

	t1 = multcnvl(143,182,218,ptr2,p);
	t2 = multcnvl(143,162,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[14] = t4;

	t1 = multcnvl(143,183,218,ptr2,p);
	t2 = multcnvl(143,163,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[15] = t4;

	t1 = multcnvl(143,184,218,ptr2,p);
	t2 = multcnvl(143,164,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[16] = t4;

	t1 = multcnvl(143,186,218,ptr2,p);
	t2 = multcnvl(143,166,218,ptr2,p);
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[17] = t4;

/* 1 */
	t1 = multcnvl(143,173,218,ptr2,p);
	t2 = multcnvl(143,153,218,ptr2,p);
	t2 = (p-t2)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[18] = t4;

	t1 = multcnvl(143,174,218,ptr2,p);
	t2 = multcnvl(143,154,218,ptr2,p);
	t2 = (p-t2)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[19] = t4;

	t1 = multcnvl(143,172,218,ptr2,p);
	t2 = multcnvl(143,152,218,ptr2,p);
	t1 = (p-t1)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[20] = t4;

/* 4 */
	t1 = multcnvl(143,181,218,ptr2,p);
	t2 = multcnvl(143,161,218,ptr2,p);
	t2 = (p-t2)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[21] = t4;

	t1 = multcnvl(143,182,218,ptr2,p);
	t2 = multcnvl(143,162,218,ptr2,p);
	t2 = (p-t2)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[22] = t4;

	t1 = multcnvl(143,180,218,ptr2,p);
	t2 = multcnvl(143,160,218,ptr2,p);
	t1 = (p-t1)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[23] = t4;

/* 7 */
	t1 = multcnvl(143,185,218,ptr2,p);
	t2 = multcnvl(143,165,218,ptr2,p);
	t2 = (p-t2)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[24] = t4;

	t1 = multcnvl(143,186,218,ptr2,p);
	t2 = multcnvl(143,166,218,ptr2,p);
	t2 = (p-t2)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[25] = t4;

	t1 = multcnvl(143,184,218,ptr2,p);
	t2 = multcnvl(143,164,218,ptr2,p);
	t1 = (p-t1)%p;
	t4 = (t1+t2)%p;
	t4 = (t3*t4)%p;
	h20[26] = t4;

	exp7(l2,a2,a3,p);
	exp7(l2,a3,a4,p);
	t1 = a4[0];
	t2 = a4[1];
	h21[31] = t1%p;
	h21[32] = (h21[31]*t1)%p;
	h21[33] = (h21[32]*t1)%p;
	h21[34] = (h21[33]*t1)%p;

	h21[35] = t2%p;
	h21[36] = (h21[35]*t2)%p;
	h21[37] = (h21[36]*t2)%p;
	h21[38] = (h21[37]*t2)%p;

	h20[31] = h21[34];
	h20[32] = (h21[33]*h21[35])%p;
	h20[33] = (h21[32]*h21[36])%p;
	h20[34] = (h21[31]*h21[37])%p;
	h20[35] = h21[38];

	h20[31] = (p-h20[31])%p;
	h20[32] = (p-h20[32])%p;
	h20[33] = (p-h20[33])%p;
	h20[34] = (p-h20[34])%p;
	h20[35] = (p-h20[35])%p;

	h21[0] = (2*h20[0])%p;
	h21[1] = (h20[1]+h20[3])%p;
	h21[2] = (h20[2]+h20[6])%p;
	h21[3] = (h20[3]+h20[1])%p;
	h21[4] = (2*h20[4])%p;
	h21[5] = (h20[5]+h20[7])%p;
	h21[6] = (h20[6]+h20[2])%p;
	h21[7] = (h20[7]+h20[5])%p;
	h21[8] = (2*h20[8])%p;

	h20[0] = (h21[0]+h20[31])%p;
	h20[1] = (h21[1]+h20[32])%p;
	h20[2] = (h21[2]+h20[33])%p;
	h20[3] = (h21[3]+h20[32])%p;
	h20[4] = (h21[4]+h20[33])%p;
	h20[5] = (h21[5]+h20[34])%p;
	h20[6] = (h21[6]+h20[33])%p;
	h20[7] = (h21[7]+h20[34])%p;
	h20[8] = (h21[8]+h20[35])%p;

	exp7(l2,a2,a3,p);
	exp7(l2,a3,a4,p);
	exp7(4,a4,a3,p);

	for(i=0;i<9;i++)
		{
		t1 = a3[0];
		t2 = (p-a3[1])%p;
		t3 = (t1*h20[i+9])%p;
		t4 = (t2*h20[i+18])%p;
		t3 = (t3+t4)%p;
		h21[i+0] = t3;

		t1 = a3[1];
		t2 = a3[0];
		t3 = (t1*h20[i+9])%p;
		t4 = (t2*h20[i+18])%p;
		t3 = (t3+t4)%p;
		h21[i+9] = t3;

		t1 = a3[0];
		t2 = a3[1];
		t3 = (t1*h20[i+9])%p;
		t4 = (t2*h20[i+18])%p;
		t3 = (t3+t4)%p;
		h21[i+18] = t3;

		t1 = a3[1];
		t2 = (p-a3[0])%p;
		t3 = (t1*h20[i+9])%p;
		t4 = (t2*h20[i+18])%p;
		t3 = (t3+t4)%p;
		h21[i+27] = t3;
		}

	for(i=0;i<5;i++)
		{
		h20[i+9] = h20[i+31];
		h20[i+18] = (a3[0]*h20[i+31])%p;
		h20[i+27] = (a3[1]*h20[i+31])%p;
		}
	for(i=5;i<9;i++)
		{
		h20[i+9] = 0;
		h20[i+18] = 0;
		h20[i+27] = 0;
		}

for (i=0;i<2;i++)
	{
	t5 = 9*i+0;
	t6 = 9*i+18;
	t1 = (h21[t5+0]+h21[t6+0])%p;
	ws3[9+t5] = (t1+h20[t6+0])%p;

	t1 = (h21[t5+1]+h21[t6+3])%p;
	ws3[10+t5] = (t1+h20[t6+1])%p;

	t1 = (h21[t5+2]+h21[t6+6])%p;
	ws3[11+t5] = (t1+h20[t6+2])%p;

	t1 = (h21[t5+3]+h21[t6+1])%p;
	ws3[12+t5] = (t1+h20[t6+1])%p;

	t1 = (h21[t5+4]+h21[t6+4])%p;
	ws3[13+t5] = (t1+h20[t6+2])%p;

	t1 = (h21[t5+5]+h21[t6+7])%p;
	ws3[14+t5] = (t1+h20[t6+3])%p;

	t1 = (h21[t5+6]+h21[t6+2])%p;
	ws3[15+t5] = (t1+h20[t6+2])%p;

	t1 = (h21[t5+7]+h21[t6+5])%p;
	ws3[16+t5] = (t1+h20[t6+3])%p;

	t1 = (h21[t5+8]+h21[t6+8])%p;
	ws3[17+t5] = (t1+h20[t6+4])%p;
	}

	t2 = (p+1)/2;
	for(i=0;i<9;i++)
		{
		t1 = (h20[i]+ws3[i+9])%p;
		h21[3*i] = (t1*t2)%p;

		h21[3*i+1] = (ws3[i+18]*t2)%p;

		t1 = (p-ws3[i+9])%p;
		t1 = (h20[i]+t1)%p;
		h21[3*i+2] = (t1*t2)%p;
		}

	for(i=0;i<27;i++)
		{
		ws3[i] = h21[i];
		}
}

void tuple1(int d, integer *str1, integer *str2, integer *str2a, int m2, int l2, int l3,
            integer a2[], integer hs1[], integer cs[], integer sn[], integer h11[],
            integer cs1[], integer sn1[], integer cs2[], integer sn2[],
            STRING ptr2, integer b2[], integer p)
{
int i;
int t1,t2;
integer t;
integer a3[2] = {0};
integer a4[2] = {0};
integer h12[40] = {0};

for(i=0;i<144*d;i++)
	{
	*(str2+i) = 1;
	}

a3[0] = a2[0];
a3[1] = a2[1];
for(i=0;i<d;i++)
	{
	t1 = 144*i;
	t2 = 27*i;
	hs1 = &str1[t1];

	set142(m2,l2,l3,a3,hs1,cs,sn,h11,cs1,sn1,cs2,sn2,ptr2,b2,p);

	solve2m(144,ptr2,b2,p);

	t = det(144,ptr2);
	det_sum = det_sum + 1;
	if (t<144)
		{
		det_l144 = det_l144 + 1;
		printf("\n \n error in tuple1 det(%d) < 144",i);
		}

	l2solve(144,&str2[t1],b2,ptr2,p);

	detws2(m2,l3,a3,&str2[t1],&str2a[t2],cs,sn,h11,h12,ptr2,b2,p);

	cmult(a3,a3,a4,p);
	a3[0] = a4[0];
	a3[1] = a4[1];
	}
}

void set141(int m2, int l2, integer a2[], integer ws1[], integer hs1[], integer ws2[],
            integer hs2[], integer cs[], integer sn[], integer cs1[], integer sn1[],
            integer cs2[], integer sn2[], integer h11[], integer h12[], integer e1[],
            integer flag0, STRING ptr2, integer b2[], integer p)
{
int i;
integer t1,t2,t3;
integer a20[2];
integer a21[2];
integer a22[2];
integer h1[4] = {0};
integer h2[6] = {0,0,0,0,0,0};

	setcs(l2,a2,cs,sn,p);
	setcs1(l2,a2,cs1,sn1,p);
	setcs2(l2,a2,cs2,sn2,p);

	a20[0] = 1;
	a20[1]=  0;

	a21[0] = 1;
	a21[1]=  0;

	exp7(0,a2,a21,p);

	set138(m2,l2,a2,a20,a21,a22,ws1,hs1,ws2,hs2,cs,sn,h11,h12,
			 cs1,sn1,cs2,sn2,ptr2,b2,p);


	setzero2a(m2,117,120,ptr2);
	setzero2a(m2,131,132,ptr2);

	det5b(2,2,0,0,m2,170,200,198,199,ptr2,b2,p);

	t1 = cs[2];
	t2 = sn[2];
	mult8a(m2,t1,t2,170,200,198,199,ptr2,b2,p);
	t1 = cs[2];
	t2 = sn[2];
	mult8b(m2,t1,t2,200,170,198,199,ptr2,b2,p);

	mult50(m2,1,1,171,183,161,199,ptr2,b2,p);
	mult50(m2,1,1,174,186,162,199,ptr2,b2,p);
	mult50(m2,1,p-1,161,162,163,199,ptr2,b2,p);
	mult50(m2,2,2,172,184,164,199,ptr2,b2,p);

	set2d(117,163,ptr2);
	set2d(118,164,ptr2);


	det5b(3,3,0,0,m2,170,200,198,199,ptr2,b2,p);
	t1 = cs[3];
	t2 = sn[3];
	mult8a(m2,t1,t2,170,200,198,199,ptr2,b2,p);
	t1 = cs[3];
	t2 = sn[3];
	mult8b(m2,t1,t2,200,170,198,199,ptr2,b2,p);

	mult50(m2,1,1,171,183,161,199,ptr2,b2,p);
	mult50(m2,1,1,174,186,162,199,ptr2,b2,p);
	mult50(m2,1,p-1,161,162,163,199,ptr2,b2,p);
	mult50(m2,2,2,172,184,164,199,ptr2,b2,p);

	set2d(119,163,ptr2);
	set2d(120,164,ptr2);


	det5b(4,4,0,0,m2,170,200,198,199,ptr2,b2,p);
	t1 = cs[4];
	t2 = sn[4];
	mult8a(m2,t1,t2,170,200,198,199,ptr2,b2,p);
	t1 = cs[4];
	t2 = sn[4];
	mult8b(m2,t1,t2,200,170,198,199,ptr2,b2,p);

	mult50(m2,1,1,171,183,161,199,ptr2,b2,p);
	mult50(m2,1,1,174,186,162,199,ptr2,b2,p);
	mult50(m2,1,p-1,161,162,163,199,ptr2,b2,p);
	mult50(m2,2,2,172,184,164,199,ptr2,b2,p);

	set2d(131,163,ptr2);
	set2d(132,164,ptr2);


	t3 = flag0;
	for(i=0;i<6;i++)
		{
		h2[i] = 0;
		}

	if (t3!=0)
		{
		series(l2,2*l2,a2,0,h1,2,p);
		h2[0] = h1[0];
		h2[1] = h1[1];
		series(3*(l2/2),5*(l2/2),a2,0,h1,2,p);
		h2[2] = h1[0];
		h2[3] = h1[1];
		series(2*l2,3*l2,a2,0,h1,2,p);
		h2[4] = h1[0];
		h2[5] = h1[1];
		}

	b2[117] = (t3*h2[0]+e1[0])%p;
	b2[118] = (t3*h2[1]+e1[1])%p;
	b2[119] = (t3*h2[2]+e1[2])%p;
	b2[120] = (t3*h2[3]+e1[3])%p;
	b2[131] = (t3*h2[4]+e1[4])%p;
	b2[132] = (t3*h2[5]+e1[5])%p;

	if (flag_2==1)
		{
		printf("\n \n \n \n  l2 = %d",l2);
		printf("\n  in set141 (117,118) = (%d , %d)",b2[117],b2[118]);
		printf("\n  in set141 (119,120) = (%d , %d)",b2[119],b2[120]);
		printf("\n  in set141 (131,132) = (%d , %d)",b2[131],b2[132]);
		}
}


void tuple2(int d, integer *str1, integer *str1a, integer *str2, integer *str2a, integer flag0,
            int y, int c6, integer c, int m2, int l2, integer a2[], integer ws1[], integer hs1[],
            integer ws2[], integer hs2[], integer cs[], integer sn[],integer h11[], integer cs1[],
            integer sn1[], integer cs2[], integer sn2[], STRING ptr2, integer b2[], integer p)
{
int i,j;
int t1,t2;
integer t;
integer a3[2] = {0};
integer a4[2] = {0};
integer h12[40] = {0};
integer e1[6] = {0,0,0,0,0,0};

setcs(2*l2,a2,cs,sn,p);
setcs1(2*l2,a2,cs1,sn1,p);
setcs2(2*l2,a2,cs2,sn2,p);


a3[0] = a2[0];
a3[1] = a2[1];
for(i=0;i<d;i++)
	{
	t1 = 144*i;
	t2 = 27*i;
	hs1 = &str1[t1];
	ws1 = &str1a[t2];
	hs2 = &str1[t1+144];
	ws2 = &str1a[t2+27];


	for(j=0;j<6;j++)
		{
		e1[j] = 0;
		}

	if (i==y)
		{
		e1[c6] = c;
		}

	set141(m2,2*l2,a3,ws1,hs1,ws2,hs2,cs,sn,cs1,sn1,cs2,sn2,h11,h12,
			 e1,flag0,ptr2,b2,p);

	solve2m(144,ptr2,b2,p);
	t = det(144,ptr2);
	
	det_sum = det_sum + 1;
	if (t<144)
		{
		det_l144 = det_l144 + 1;
		printf("\n \n error in tuple2 det(%d) < 144",i);
		}

	l2solve(144,&str2[t1],b2,ptr2,p);

	detws2(m2,2*l2,a3,&str2[t1],&str2a[t2],cs,sn,h11,h12,ptr2,b2,p);

	cmult(a3,a3,a4,p);
	a3[0] = a4[0];
	a3[1] = a4[1];
	}
}


void zerotuple(int e1, int e2, integer *str1, integer *str1a)
{
int i,j;
int t;

for(i=e1;i<(e2+1);i++)
	{
	for(j=0;j<144;j++)
		{
		t = 144*i+j;
		*(str1+t) = 0;
		}
	for(j=0;j<27;j++)
		{
		t = 27*i+j;
		*(str1a+t) = 0;
		}
	}
}


void equaltuple2(int e1, integer *str1, integer *str1a, integer *str2, integer *str2a)
{
int i,j;
int t;

for(i=0;i<(e1+1);i++)
	{
	for(j=0;j<144;j++)
		{
		t = 144*i+j;
		*(str2+t) = *(str1+t);
		}
	for(j=0;j<27;j++)
		{
		t = 27*i+j;
		*(str2a+t) = *(str1a+t);
		}
	}
}
