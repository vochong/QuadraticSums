
void calc6(int m2, int c1, int d1, STRING ptr2, integer h12[], integer *str1, integer p);
void displayh(int d, integer h16[]);
void display12(integer h16[]);
void mult12 (integer c, integer s, integer h11[], integer h12[], integer ws1[], integer p);

/**         4-tuple units are 1/8                           **/
/**         calc10d(1 or 3) = (+1)(1 or 3)                  **/
/**         calc14d = (+2)(2)                               **/
/**         calc17d = (0)(2)                                **/
/**         calc18d = (0)(4)                                **/

void calc10d(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc14d(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc17d(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc18d(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);

/**         2-tuple units are 1/4                           **/
/**         calc10(3,5 or 7) = (+1)(3,5 or 7)               **/
/**         calc10k = (+1)(1)                               **/
/**         calc11(4 or 6) = (+2)(4 or 6)                   **/
/**         calc14(4 or 6) = (-2)(4 or 6)                   **/
/**         calc14k(8 or 10) = (-2)(8 or 10)                **/
/**         calc15 = (+2)(2)                                **/
/**         calc16 = (+3)(3)                                **/
/**         calc16k = (+3)(1)                               **/
/**         calc17(1 or 3) = (+5)(1 or 3)                   **/
/**         calc18 = (+4)(4)                                **/
/**         calc18k = (+4)(2)                               **/
/**         calc71 = (-1)(1)                                **/
/**         calc72(3,5 or 7) = (-1)(3,5 or 7)               **/
/**         calc73 = (-1)(9)                                **/
/**         calc74(1,3,5,7 or 9) = (-1)(1,3,5,7 or 9)       **/
/**         calc75(0 or 2) = (-2)(0 or 2)                   **/
/**         calc76(0,2,4,6,8 or 10) = (-2)(0,2,4,6,8 or 10) **/

/**   calc10d, calc14d, calc17d, calc18d,                   **/
/**   calc10, calc10k, calc11, calc14, calc14k, calc15,     **/
/**   calc16, calc16k, calc17, calc18, and calc18k          **/
/**   all have the variable flag4 added                     **/
/**   calc11q, calc14q, calc14q2, and calc15q               **/
/**   have flag41 added                                     **/

void calc10(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc10k(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc11(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc11q(int m2, integer e, integer e2, int c1, int flag41, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc14(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc14k(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc14q(int m2, integer e, integer e2, int c1, int flag41, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc14q2(int m2, integer e, integer e2, int c1, int flag41, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc15(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc15q(int m2, integer e, integer e2, int flag41, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc16(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc16k(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc17(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc18(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc18k(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc71(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc72(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc73(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc74(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc75(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer hs3[], integer hs4[], integer p);
void calc76(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer hs3[], integer hs4[], integer p);
void fn60(int c1, int c2, int t1, int t2, integer a2[], integer a3[], integer p);
void series20(int c1, int c2, integer a2[], integer h11[], long int d1, integer p);
void fn60d(int c1, int c2, int t1, int t2, integer a2[], integer a3[], integer p);
void fn61(int c1, int d1, int t1, int d2, integer a2[], integer h11[], integer h15[], integer p);
void fn61d(int c1, int d1, int t1, int d2, integer a2[], integer h11[], integer h15[], integer p);
void calc19(int m2, int flag4, integer e, int c1, int e1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);


/**             calc20d = k.list2(6)              **/
/**             calc21d = k.list2(12)             **/
/**             calc22d = k.list2(15)             **/
/**             calc23d = k.list2(3)              **/
/**             calc24d = k.list2(4)              **/
/**             calc25d = k.list2(5)              **/
/**             calc28d = k.list2(8)              **/
/**             calc29d = k.list2(9)              **/


void calc20d(integer a2[], int flag4, integer h15[], long int d1, integer q, integer p);
void calc21d(integer a2[], integer h15[], long int d1, integer q, integer p);
void calc22d(integer a2[], int flag4, integer k2[], integer k16[], long int d1, integer q, integer p);
void calc23d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p);
void calc24d(integer a2[], integer h15[], long int d1, integer q, integer p);
void calc25d(integer a2[], int flag4, integer k5[], long int d1, integer q, integer p);
void calc28d(integer a2[], integer h15[], long int d1, integer q, integer p);
void calc29d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p);



void calc6(int m2, int c1, int d1, STRING ptr2, integer h12[], integer *str1, integer p)
{
int i,j;
integer s1,s2,s3;
int t1,t2;

setzero2(40,h12);
setzero2a(m2,150,161,ptr2);

	t1 = 144*c1;
	for(i=0;i<16;i++)
		{
		s3 = 0;
		for(j=0;j<9;j++)
			{
			t2 = t1+9*i;
			s1 = m80[9*d1+j];
			if (s1<0)
				{
				s1 = -s1;
				s1 = s1%p;
				s1 = (p-s1)%p;
				}
			s1 = s1%p;
			s2 = *(str1+t2+j);
			s2 = (s1*s2)%p;
			s3 = (s3+s2)%p;
			}
			h12[i] = s3;
		}
}

void displayh(int d, integer h16[])
{
int i;

	printf(" (");
	for(i=0;i<d;i++)
		{
		printf(" %d ",h16[i]);
		}
	printf(")");
}

void display12(integer h16[])
{
int i;

	printf(" (%d)",h16[0]);
	printf(" (");
	for(i=0;i<6;i++)
		{
		printf(" %d ",h16[i+1]);
		}
	printf(") (");
	for(i=0;i<6;i++)
		{
		printf(" %d ",h16[i+7]);
		}
	printf(")");
}

void mult12 (integer c, integer s, integer h11[], integer h12[], integer ws1[], integer p)
{
int i;
integer t1,t2;

setzero2(27,ws1);

for(i=0;i<16;i++)
	{
	t1 = (c*h11[i])%p;
	t2 = (s*h12[i])%p;
	ws1[i] = (t1+t2)%p;
	}
}

void calc10d(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer h14[4] = {0};

	exp7(e,a2,a4,p);
	exp7(e,a4,a3,p);
	exp7(2,a3,a4,p);

	a5[0] = 1;
	a5[1] = 0;

	exp7(e/4,a2,a3,p);
	exp7(e/4,a3,a5,p);
	a5[1] = (p-a5[1])%p;

	cmult(a4,a5,a3,p);
	if (flag4==1)
        {
        printf("\n \n in calc10d a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,4+c1,ptr2,h11,str1,p);
	calc6(m2,9,5+c1,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,5+c1,ptr2,h11,str1,p);
	calc6(m2,9,4+c1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],a3[1],hs1,&hs1[30],hs2,p);
	mult12((p-a3[1])%p,a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,4-c1,ptr2,h11,str1,p);
	calc6(m2,9,5-c1,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,5-c1,ptr2,h11,str1,p);
	calc6(m2,9,4-c1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],a3[1],hs1,&hs1[30],&hs2[60],p);
	mult12((p-a3[1])%p,a3[0],hs1,&hs1[30],&hs2[90],p);

    if (flag4==1)
        {
        series(0,e,a2,2*e,h14,4,p);
        printf("\n \n in calc10d h14 = ");
        displayh(4,h14);
        }

	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(c1,a4,a3,p);
	if (flag4==1)
        {
        printf("\n \n in calc10d 1st a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,hs1,p);
	mult12(a3[1],a3[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,&hs1[30],p);
	mult12(a3[1],a3[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc10d(%d)",c1);

        for(i=0;i<4;i++)
            {
            printf("\n \n in calc10d hs3(%d) = \n ",i);
            display12(&hs1[30*i]);
            }

        series(e/8,9*(e/8),a2,c1*e,h14,4,p);
        printf("\n \n in calc10d h14 = ");
        displayh(4,h14);
        }
}

void calc14d(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer h14[4] = {0};

	exp7(e,a2,a4,p);
	exp7(e,a4,a3,p);
	exp7(2,a3,a4,p);

	a5[0] = 1;
	a5[1] = 0;

	exp7(e/2,a2,a3,p);
	exp7(e/2,a3,a5,p);
	a5[1] = (p-a5[1])%p;

	cmult(a4,a5,a3,p);
	if (flag4==1)
        {
        printf("\n \n in calc14d a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,7,ptr2,h11,str1,p);
	calc6(m2,9,8,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,8,ptr2,h11,str1,p);
	calc6(m2,9,7,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],a3[1],hs1,&hs1[30],hs2,p);
	mult12((p-a3[1])%p,a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,3,ptr2,h11,str1,p);
	calc6(m2,9,4,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,4,ptr2,h11,str1,p);
	calc6(m2,9,3,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],a3[1],hs1,&hs1[30],&hs2[60],p);
	mult12((p-a3[1])%p,a3[0],hs1,&hs1[30],&hs2[90],p);

    if (flag4==1)
        {
        series(0,e,a2,2*e,h14,4,p);
        printf("\n \n in calc14d h14 = ");
        displayh(4,h14);
        }

	exp7(e/4,a2,a3,p);
	exp7(e/1,a3,a4,p);
	exp7(2,a4,a3,p);
	if (flag4==1)
        {
        printf("\n \n in calc14d 1st a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,hs1,p);
	mult12(a3[1],a3[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,&hs1[30],p);
	mult12(a3[1],a3[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        for(i=0;i<4;i++)
            {
            printf("\n \n in calc14d hs3(%d) = \n ",i);
            display12(&hs1[30*i]);
            }

        series(e/4,5*(e/4),a2,2*e,h14,4,p);
        printf("\n \n in calc14d h14 = ");
        displayh(4,h14);
        }
}

void calc17d(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer h14[4] = {0};

	exp7(e,a2,a4,p);
	exp7(e,a4,a3,p);
	exp7(2,a3,a4,p);

	calc6(m2,8,5,ptr2,h11,str1,p);
	calc6(m2,9,6,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,6,ptr2,h11,str1,p);
	calc6(m2,9,5,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a4[0],a4[1],hs1,&hs1[30],hs2,p);
	mult12((p-a4[1])%p,a4[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,1,ptr2,h11,str1,p);
	calc6(m2,9,2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,2,ptr2,h11,str1,p);
	calc6(m2,9,1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a4[0],a4[1],hs1,&hs1[30],&hs2[60],p);
	mult12((p-a4[1])%p,a4[0],hs1,&hs1[30],&hs2[90],p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],hs1,p);
    	mult12(s,s,&hs2[30],&hs2[90],&hs1[30],p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],&hs1[60],p);
    	mult12((p-s)%p,s,hs2,&hs2[60],&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc17d");
        for(i=0;i<4;i++)
            {
            printf("\n \n in hs1(%d) = \n ",i);
            display12(&hs1[30*i]);
            }

        series(0,e,a2,2*e,h14,4,p);
        printf("\n \n in calc17d h14 = ");
        displayh(4,h14);
        }
}

void calc18d(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer h14[4] = {0};

	exp7(e,a2,a3,p);
	exp7(e,a3,a4,p);
	exp7(2,a4,a3,p);
	a3[1] = (p-a3[1])%p;

    if (flag4==1)
        {
        printf("\n \n in calc18d a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,7,ptr2,h11,str1,p);
	calc6(m2,9,8,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,8,ptr2,h11,str1,p);
	calc6(m2,9,7,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(1,0,h11,h12,hs1,p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(0,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	a4[0] = 1;
	a4[1] = 0;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc18d");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }

        series(0,e,a2,4*e,h14,4,p);
        printf("\n \n in calc8d h14 = ");
        displayh(4,h14);
        }
}

void calc10(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

	if((c1!=3)&&(c1!=5)&&(c1!=7))
		{
		printf("\n \n error in calc10 c1 = %d",c1);
		printf("\n \n c1 must equal 3,5 or 7 c1 being set to 3");
		c1 = 3;
		}

	exp7(e/4,a2,a4,p);
	exp7(e/2,a4,a3,p);

	printf("\n \n in calc10 a3 = ");
	printf("(%d",a3[0]);
	printf(" , %d)",a3[1]);

	exp7(c1*c1,a3,a5,p);

   	printf("\n \n in calc10 a5 = ");
	printf("(%d",a5[0]);
	printf(" , %d)",a5[1]);

	calc6(m2,8,c1,ptr2,h11,str1,p);
	calc6(m2,9,c1+1,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,c1+1,ptr2,h11,str1,p);
	calc6(m2,9,c1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,hs1,p);

	calc6(m2,8,c1-1,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*c1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

	printf("\n \n in calc10(%d)",c1);
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n ");
		display12(&hs1[30*i]);
		}

    if (flag4==1)
        {
        series(e/4,5*(e/4),a2,c1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc10k(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};

	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(1,a4,a3,p);

	printf("\n \n in calc10k a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

	calc6(m2,8,1,ptr2,h11,str1,p);
	calc6(m2,9,2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,2,ptr2,h11,str1,p);
	calc6(m2,9,1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);


	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(1,0,h11,h12,hs1,p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(0,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

	printf("\n \n in calc10k");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}

    if (flag4==1)
        {
        series(1*(e/4),5*(e/4),a2,1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc11(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};

	if((c1!=4)&&(c1!=6))
		{
		printf("\n \n error in calc11 c1 = %d",c1);
		printf("\n \n c1 must equal 4 or 6 c1 being set to 4");
		c1 = 4;
		}

	exp7(e/2,a2,a4,p);
	exp7(e,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc11 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,c1+1,ptr2,h11,str1,p);
	calc6(m2,9,c1+2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,c1+2,ptr2,h11,str1,p);
	calc6(m2,9,c1+1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);


	calc6(m2,8,c1-3,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,hs1,p);

	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-3,ptr2,h12,str1,p);
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(1*c1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc11");
        for(i=0;i<4;i++)
            {
            printf("\n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            printf("\n");
            }

        series(e/2,3*(e/2),a2,c1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);

        exp7(e/2,a2,a3,p);
        exp7(e,a3,a4,p);
        exp7(9,a4,a3,p);

        printf("\n \n in calc11 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }
}

void calc11q(int m2, integer e, integer e2, int c1, int flag41, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
int flag4;
integer s;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer hs3[144] = {0};
integer hs4[144] = {0};

    flag4 = 0;
	if((c1!=4)&&(c1!=6))
		{
		printf("\n \n error in calc11q c1 = %d",c1);
		printf("\n \n c1 must equal 4 or 6 c1 being set to 4");
		c1 = 4;
		}

    e1 = e+e2;
	exp7(e1/2,a2,a4,p);
	exp7(e1,a4,a3,p);

    if (flag41==1)
        {
        printf("\n \n in calc11q a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc19(m2,flag4,e,c1+2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,p-1,h11,h12,hs1,p);

	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc19(m2,flag4,e,c1-2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,1,h11,h12,hs1,p);

	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(1*c1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag41==1)
        {
        printf("\n \n in calc11q(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            printf("\n");
            }

        e1 = e+e2;
        printf("\n \n s(%d , %d)(%d)",e1/2,3*(e1/2),c1*e1);
        series(e1/2,3*(e1/2),a2,c1*e1,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc14(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};

	if((c1!=4)&&(c1!=6))
		{
		printf("\n \n error in calc14 c1 = %d",c1);
		printf("\n \n c1 must equal 4 or 6 c1 being set to 4");
		c1 = 4;
		}

	exp7(e/2,a2,a4,p);
	exp7(e,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc14 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,c1+1,ptr2,h11,str1,p);
	calc6(m2,9,c1+2,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,hs1,p);

	calc6(m2,8,c1+2,ptr2,h11,str1,p);
	calc6(m2,9,c1+1,ptr2,h12,str1,p);
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,c1-3,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-3,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(1*c1,a3,a4,p);
	a4[1] = (p-a4[1])%p;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12((p-s)%p,(p+s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p+s)%p,(p-s)%p,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc14(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            printf("\n");
            }

        series(1,e/2,a2,c1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc14k(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

	if((c1!=8)&&(c1!=10))
		{
		printf("\n \n error in calc14k c1 = %d",c1);
		printf("\n \n c1 must equal 8 or 10 c1 being set to 8");
		c1 = 8;
		}

	exp7(e/2,a2,a4,p);
	exp7(e,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc14k a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,c1-3,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-3,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	if (c1==8)
        {
        s = 9;
        }

	if (c1==10)
        {
        s = 16;
        }

	exp7(s,a3,a4,p);

	mult12(a4[0],(p-a4[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a4[1],a4[0],hs1,&hs1[30],&hs2[30],p);

    	s = ((c1-2)*e)/4;

    	exp7(2*(s+e),a2,a4,p);
	exp7(s+e,a4,a5,p);

	mult12(a5[0],(p+a5[1])%p,hs2,&hs2[30],hs1,p);
	mult12((p-a5[1])%p,(p+a5[0])%p,hs2,&hs2[30],&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,c1-3,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-3,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(1*c1,a3,a4,p);
	a4[1] = (p-a4[1])%p;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12((p-s)%p,(p+s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p+s)%p,(p-s)%p,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc14k(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            printf("\n");
            }

        series(1,e/2,a2,c1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc14q(int m2, integer e, integer e2, int c1, int flag41, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
int flag4;
integer s;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer hs3[144] = {0};
integer hs4[144] = {0};

    flag4 = 0;
	if((c1!=4)&&(c1!=6))
		{
		printf("\n \n error in calc14q c1 = %d",c1);
		printf("\n \n c1 must equal 4 or 6 c1 being set to 4");
		c1 = 4;
		}

    	e1 = e+e2;
	exp7(e1/2,a2,a4,p);
	exp7(e1,a4,a3,p);

    if (flag41==1)
        {
        printf("\n \n in calc14q a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }


	calc19(m2,flag4,e,c1+2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,1,h11,h12,hs1,p);


	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc19(m2,flag4,e,c1-2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,p-1,h11,h12,hs1,p);

	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(1*c1,a3,a4,p);
	a4[1] = (p-a4[1])%p;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12((p-s)%p,(p+s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p+s)%p,(p-s)%p,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag41==1)
        {
        printf("\n \n in calc14q(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            printf("\n");
            }

        e1 = e+e2;
        printf("\n \n s(%d , %d)(%d)",1,e1/2,c1*e1);
        series(1,e1/2,a2,c1*e1,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc14q2(int m2, integer e, integer e2, int c1, int flag41, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
int flag4;
integer s;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer hs3[144] = {0};
integer hs4[144] = {0};

    flag4 = 0;
	if((c1!=8)&&(c1!=10))
		{
		printf("\n \n error in calc14q2 c1 = %d",c1);
		printf("\n \n c1 must equal 8 or 10 c1 being set to 8");
		c1 = 8;
		}

    e1 = e+e2;
	exp7(e1/2,a2,a4,p);
	exp7(e1,a4,a3,p);

    if (flag41==1)
        {
        printf("\n \n in calc14q2 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc19(m2,flag4,e,c1-2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,p-1,h11,h12,hs1,p);

	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(1,1,h11,h12,&hs1[30],p);


	if (c1==8)
        {
        s = 9;
        }

	if (c1==10)
        {
        s = 16;
        }

	exp7(s,a3,a4,p);

	mult12(a4[0],(p-a4[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a4[1],a4[0],hs1,&hs1[30],&hs2[30],p);

    	e1 = e+e2;
    	s = ((c1-2)*e1)/4;

    	exp7(2*(s+e1),a2,a4,p);
	exp7(s+e1,a4,a5,p);

	mult12(a5[0],(p+a5[1])%p,hs2,&hs2[30],hs1,p);
	mult12((p-a5[1])%p,(p+a5[0])%p,hs2,&hs2[30],&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc19(m2,flag4,e,c1-2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,p-1,h11,h12,hs1,p);

	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(1*c1,a3,a4,p);
	a4[1] = (p-a4[1])%p;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12((p-s)%p,(p+s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p+s)%p,(p-s)%p,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag41==1)
        {
        printf("\n \n in calc14q2(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            printf("\n");
            }

        e1 = e+e2;
        printf("\n \n s(%d , %d)(%d)",1,e1/2,c1*e1);
        series(1,e1/2,a2,c1*e1,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc15(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};

	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(4,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc15 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,3,ptr2,h11,str1,p);
	calc6(m2,9,4,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,4,ptr2,h11,str1,p);
	calc6(m2,9,3,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(1,0,h11,h12,hs1,p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(0,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc15");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }

        series(2*(e/4),6*(e/4),a2,2*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);

        exp7(e,a2,a3,p);
        exp7(e,a3,a4,p);
        exp7(6,a4,a3,p);

        printf("\n \n in calc15 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }
}

void calc15q(int m2, integer e, integer e2, int flag41, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
int flag4;
integer s;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer hs3[144] = {0};
integer hs4[144] = {0};

    flag4 = 0;
    e1 = e+e2;
	exp7(e1/2,a2,a3,p);
	exp7(e1,a3,a4,p);
	exp7(1,a4,a3,p);

    if (flag41==1)
        {
        printf("\n \n in calc15q a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

    	calc19(m2,flag4,e,4,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,p-1,h11,h12,hs1,p);

	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

    	calc19(m2,flag4,e,0,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
	mult12(1,0,h11,h12,hs1,p);

	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
	mult12(0,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag41==1)
        {
        printf("\n \n in calc15q");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }

        series(1*(e1/2),3*(e1/2),a2,2*e1,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc16(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};

	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(9,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc16 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,5,ptr2,h11,str1,p);
	calc6(m2,9,6,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,6,ptr2,h11,str1,p);
	calc6(m2,9,5,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(1,0,h11,h12,hs1,p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(0,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc16");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }

        series(3*(e/4),7*(e/4),a2,3*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc16k(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};


	exp7(e/4,a2,a4,p);
	exp7(e/2,a4,a3,p);
	exp7(9,a3,a5,p);

    if (flag4==1)
        {
        printf("\n \n in calc16k a3 = ");
        printf("(%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,3,ptr2,h11,str1,p);
	calc6(m2,9,4,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,4,ptr2,h11,str1,p);
	calc6(m2,9,3,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a5[0],(p-a5[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a5[1],a5[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,1,ptr2,h11,str1,p);
	calc6(m2,9,2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,2,ptr2,h11,str1,p);
	calc6(m2,9,1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a5[0],(p-a5[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a5[1],a5[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*3*1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n ");
            display12(&hs1[30*i]);
            }

        series(3*(e/4),7*(e/4),a2,1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc17(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

	if((c1!=1)&&(c1!=3))
		{
		printf("\n \n error in calc17 c1 = %d",c1);
		printf("\n \n c1 must equal 1 or 3 c1 being set to 3");
		c1 = 3;
		}

	exp7(e/4,a2,a4,p);
	exp7(e/2,a4,a3,p);
	exp7(25,a3,a5,p);

    if (flag4==1)
        {
        printf("\n \n in calc17 a3 = ");
        printf("(%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,c1+4,ptr2,h11,str1,p);
	calc6(m2,9,c1+4+1,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,c1+4+1,ptr2,h11,str1,p);
	calc6(m2,9,c1+4,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a5[0],(p-a5[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a5[1],a5[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,4-c1,ptr2,h11,str1,p);
	calc6(m2,9,(4+1)-c1,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,(4+1)-c1,ptr2,h11,str1,p);
	calc6(m2,9,4-c1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a5[0],(p-a5[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a5[1],a5[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*5*c1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc17(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n ");
            display12(&hs1[30*i]);
            }

        series(5*(e/4),9*(e/4),a2,c1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc18(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};


	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(16,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc18 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,7,ptr2,h11,str1,p);
	calc6(m2,9,8,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,8,ptr2,h11,str1,p);
	calc6(m2,9,7,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(1,0,h11,h12,hs1,p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(0,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

/**  changed **/
	exp7(2*1,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc18");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }

        series(4*(e/4),8*(e/4),a2,4*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc18k(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

	exp7(e/4,a2,a4,p);
	exp7(e/2,a4,a3,p);
	exp7(16,a3,a5,p);

	if (flag4==1)
        {
        printf("\n \n in calc18k a3 = ");
        printf("(%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	calc6(m2,8,5,ptr2,h11,str1,p);
	calc6(m2,9,6,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,6,ptr2,h11,str1,p);
	calc6(m2,9,5,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a5[0],(p-a5[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a5[1],a5[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,1,ptr2,h11,str1,p);
	calc6(m2,9,2,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,2,ptr2,h11,str1,p);
	calc6(m2,9,1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a5[0],(p-a5[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a5[1],a5[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*4*2,a3,a4,p);

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n ");
            display12(&hs1[30*i]);
            }

        series(4*(e/4),8*(e/4),a2,2*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc71(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer h1[4] = {0};

	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(1,a4,a3,p);

	printf("\n \n in calc71 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(1,0,h11,h12,hs1,p);

	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
	mult12(0,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,1,ptr2,h11,str1,p);
	calc6(m2,9,2,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,hs1,p);

	calc6(m2,8,2,ptr2,h11,str1,p);
	calc6(m2,9,1,ptr2,h12,str1,p);
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*1,a3,a4,p);
	a4[1] = (p-a4[1])%p;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

	printf("\n \n in calc71");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}

    if (flag4==1)
        {
        series(0,3*(e/4),a2,1*e,h11,2,p);
        series(1,(e/4),a2,1*e,h12,2,p);
        h1[0] = (h11[0]+h12[0])%p;
        h1[1] = (h11[1]+h12[1])%p;
        s = (p-h12[2])%p;
        h1[2] = (h11[2]+s)%p;
        s = (p-h12[3])%p;
        h1[3] = (h11[3]+s)%p;
        printf("\n \n h1 = ");
        displayh(4,h1);
        }
}

void calc72(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer h1[4] = {0};

	if((c1!=3)&&(c1!=5)&&(c1!=7))
		{
		printf("\n \n error in calc72 c1 = %d",c1);
		printf("\n \n c1 must equal 3,5 or 7 c1 being set to 3");
		c1 = 3;
		}

	exp7(e/4,a2,a4,p);
	exp7(e/2,a4,a3,p);

	printf("\n \n in calc72 a3 = ");
	printf("(%d",a3[0]);
	printf(" , %d)",a3[1]);

	exp7(c1*c1,a3,a5,p);

    	printf("\n \n in calc72 a5 = ");
	printf("(%d",a5[0]);
	printf(" , %d)",a5[1]);

	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-1,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,c1-1,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,c1,ptr2,h11,str1,p);
	calc6(m2,9,c1+1,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,hs1,p);

	calc6(m2,8,c1+1,ptr2,h11,str1,p);
	calc6(m2,9,c1,ptr2,h12,str1,p);
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*c1,a3,a4,p);
	a4[1] = (p-a4[1])%p;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

	printf("\n \n in calc72(%d)",c1);
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n ");
		display12(&hs1[30*i]);
		}

    if (flag4==1)
        {
        series(0,3*(e/4),a2,c1*e,h11,2,p);
        series(1,(e/4),a2,c1*e,h12,2,p);
        h1[0] = (h11[0]+h12[0])%p;
        h1[1] = (h11[1]+h12[1])%p;
        s = (p-h12[2])%p;
        h1[2] = (h11[2]+s)%p;
        s = (p-h12[3])%p;
        h1[3] = (h11[3]+s)%p;
        printf("\n \n h1 = ");
        displayh(4,h1);
        }
}

void calc73(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer c1;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer h1[4] = {0};

    	c1 = 9;

    	exp7(e/4,a2,a4,p);
	exp7(e/2,a4,a3,p);

    	printf("\n \n in calc73 a3 = ");
	printf("(%d",a3[0]);
	printf(" , %d)",a3[1]);

	calc6(m2,8,7,ptr2,h11,str1,p);
	calc6(m2,9,8,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,hs1,p);

	calc6(m2,8,8,ptr2,h11,str1,p);
	calc6(m2,9,7,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

	calc6(m2,8,5,ptr2,h11,str1,p);
	calc6(m2,9,6,ptr2,h12,str1,p);
	mult12(1,p-1,h11,h12,&hs1[60],p);

	calc6(m2,8,6,ptr2,h11,str1,p);
	calc6(m2,9,5,ptr2,h12,str1,p);
	mult12(1,1,h11,h12,&hs1[90],p);

	exp7(4*e,a2,a4,p);
	exp7(2*e,a4,a5,p);

	mult12(a5[0],a5[1],&hs1[60],&hs1[90],hs1,p);
	mult12((p-a5[1])%p,a5[0],&hs1[60],&hs1[90],&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],&hs2[60],p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[90],p);

	exp7(2*c1,a3,a4,p);
	a4[1] = (p-a4[1])%p;

	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,hs1,p);
	mult12(a4[1],a4[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a4[0],(p-a4[1])%p,h11,h12,&hs1[30],p);
	mult12(a4[1],a4[0],h11,h12,&hs1[90],p);

	printf("\n \n in calc73(%d)",c1);
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n ");
		display12(&hs1[30*i]);
		}

    if (flag4==1)
        {
        series(0,3*(e/4),a2,c1*e,h11,2,p);
        series(1,(e/4),a2,c1*e,h12,2,p);
        h1[0] = (h11[0]+h12[0])%p;
        h1[1] = (h11[1]+h12[1])%p;
        s = (p-h12[2])%p;
        h1[2] = (h11[2]+s)%p;
        s = (p-h12[3])%p;
        h1[3] = (h11[3]+s)%p;
        printf("\n \n h1 = ");
        displayh(4,h1);
        }
}

void calc74(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{

	if((c1!=1)&&(c1!=3)&&(c1!=5)&&(c1!=7)&&(c1!=9))
		{
		printf("\n \n error in calc74 c1 = %d",c1);
		printf("\n \n c1 must equal 1,3,5,7 or 9 c1 being set to 3");
		c1 = 3;
		}

	printf("\n \n in calc74(%d)",c1);
    if(c1==1)
        {
        calc71(m2,e,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        }

    if((c1==3)||(c1==5)||(c1==7))
        {
        calc72(m2,e,c1,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        }

    if(c1==9)
        {
        calc73(m2,e,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        }
}

void calc75(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer hs3[], integer hs4[], integer p)
{
int i;
integer s;
integer t1,t2;
integer a3[2] = {0};
integer a4[2] = {0};
integer h14[40] = {0};

	if((c1!=0)&&(c1!=2))
		{
		printf("\n \n error in calc75 c1 = %d",c1);
		printf("\n \n c1 must equal 0 or 2 c1 being set to 0");
		c1 = 0;
		}

	exp7(e/2,a2,a4,p);
	exp7(e,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc75 a3 = ");
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

    if (c1==0)
        {
        calc6(m2,8,1,ptr2,h11,str1,p);
        calc6(m2,9,2,ptr2,h12,str1,p);
        mult12(1,1,h11,h12,hs1,p);

        calc6(m2,8,2,ptr2,h11,str1,p);
        calc6(m2,9,1,ptr2,h12,str1,p);
        mult12(p-1,1,h11,h12,&hs1[30],p);

        mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
        mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

        mult12(1,0,hs2,&hs2[30],hs1,p);
        mult12(0,1,hs2,&hs2[30],&hs1[30],p);
        }

    if (c1==2)
        {
        t1 = (p+1)/2;
        t2 = (p-1)/2;
        calc6(m2,8,3,ptr2,h11,str1,p);
        calc6(m2,8,4,ptr2,h12,str1,p);
        calc6(m2,8,0,ptr2,h14,str1,p);
        mult12(t1,t1,h11,h14,hs3,p);
        mult12(t2,t1,h11,h14,&hs3[30],p);
        mult12(t1,0,h12,h12,&hs3[60],p);

        calc6(m2,9,3,ptr2,h11,str1,p);
        calc6(m2,9,4,ptr2,h12,str1,p);
        calc6(m2,9,0,ptr2,h14,str1,p);
        mult12(t1,t1,h11,h14,hs4,p);
        mult12(t2,t1,h11,h14,&hs4[30],p);
        mult12(t1,0,h12,h12,&hs4[60],p);

        mult12(1,1,hs3,&hs4[60],hs1,p);
        mult12(p-1,1,&hs3[60],hs4,&hs1[30],p);
        mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
        mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);

        mult12(1,1,&hs3[60],&hs4[30],&hs1[60],p);
        mult12(p-1,1,&hs3[30],&hs4[60],&hs1[90],p);
        mult12(a3[0],(p-a3[1])%p,&hs1[60],&hs1[90],&hs2[60],p);
        mult12(a3[1],a3[0],&hs1[60],&hs1[90],&hs2[90],p);

        exp7(2,a3,a4,p);

        mult12(a4[0],(p+a4[1])%p,hs2,&hs2[60],hs1,p);
        mult12(a4[0],a4[1],&hs2[30],&hs2[90],&hs1[30],p);

        mult12((p-a4[1])%p,a4[0],hs2,&hs2[60],&hs1[60],p);
        mult12((p-a4[1])%p,a4[0],&hs2[30],&hs2[90],&hs1[90],p);

        }

    for (i=0;i<15;i++)
        {
        hs1[60+i] = 0;
        hs1[90+i] = 0;
        }

    if (flag4==1)
        {
        printf("\n \n in calc75(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            printf("\n");
            }

        series(1,e/2,a2,c1*e,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }
}

void calc76(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer hs3[], integer hs4[], integer p)
{

	if((c1!=0)&&(c1!=2)&&(c1!=4)&&(c1!=6)&&(c1!=8)&&(c1!=10))
		{
		printf("\n \n error in calc76 c1 = %d",c1);
		printf("\n \n c1 must equal 0,2,4,6,8 or 10 c1 being set to 10");
		c1 = 10;
		}

    printf("\n \n in calc76");

    if((c1==0)||(c1==2))
        {
        calc75(m2,e,c1,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,hs3,hs4,p);
        }

    if((c1==4)||(c1==6))
        {
        calc14(m2,e,c1,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        }

    if((c1==8)||(c1==10))
        {
        calc14k(m2,e,c1,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        }

    if (flag4==1)
        {
        printf("\n \n \n \n");
        }
}

void fn60(int c1, int c2, int t1, int t2, integer a2[], integer a3[], integer p)
{
integer a4[2] = {0,0};
integer h11[4] = {0};
integer h12[4] = {0};

a3[0] = 0;
a3[1] = 0;
if (c1<t1)
    {
    series(c1,t1-1,a2,0,h11,2,p);
    a3[0] = (p-h11[0])%p;
    a3[1] = (p-h11[1])%p;
    }

if (c1>t1)
    {
    series(t1,c1-1,a2,0,h11,2,p);
    a3[0] = h11[0];
    a3[1] = h11[1];
    }

if (c2<t2)
    {
    series(c2+1,t2,a2,0,h11,2,p);
    a4[0] = h11[0];
    a4[1] = h11[1];
    }

if (c2>t2)
    {
    series(t2+1,c2,a2,0,h11,2,p);
    a4[0] = (p-h11[0])%p;
    a4[1] = (p-h11[1])%p;
    }

a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
}

void series20(int c1, int c2, integer a2[], integer h11[], long int d1, integer p)
{
int i;
int t;
integer a3[2] = {0,0};
integer a4[2] = {0,0};

h11[0] = 0;
h11[1] = 0;
h11[2] = 0;
h11[3] = 0;
for(i=c1;i<(c2+1);i++)
	{
    t = i;
    if(t<0)
        {
        t = -t;
        }
	exp7(t,a2,a3,p);
	exp7(t,a3,a4,p);
	exp7(d1,a4,a3,p);

	h11[0] = (h11[0]+a3[0])%p;
	h11[1] = (h11[1]+a3[1])%p;
	}
}

void fn60d(int c1, int c2, int t1, int t2, integer a2[], integer a3[], integer p)
{
integer a4[2] = {0,0};
integer h11[4] = {0};
integer h12[4] = {0};

a3[0] = 0;
a3[1] = 0;
if (c1<t1)
    {
    series20(c1,t1-1,a2,h11,2,p);
    a3[0] = (p-h11[0])%p;
    a3[1] = (p-h11[1])%p;
    }

if (c1>t1)
    {
    series20(t1,c1-1,a2,h11,2,p);
    a3[0] = h11[0];
    a3[1] = h11[1];
    }

if (c2<t2)
    {
    series20(c2+1,t2,a2,h11,2,p);
    a4[0] = h11[0];
    a4[1] = h11[1];
    }

if (c2>t2)
    {
    series20(t2+1,c2,a2,h11,2,p);
    a4[0] = (p-h11[0])%p;
    a4[1] = (p-h11[1])%p;
    }

a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
}

void fn61(int c1, int d1, int t1, int d2, integer a2[], integer h11[], integer h15[], integer p)

{
int s1,s2;
integer c,s;
integer t;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer a6[2] = {0};
integer a7[2] = {0};
integer h12[4] = {0};
integer h14[4] = {0};
integer b1[4] = {0};

    s1 = d1%4;
    s2 = d2%4;
    if ((s1!=0) || (s2!=0))
        {
        printf("\n \n error in fn61 d1 and d2 should equal 0 mod 4");
        printf(" d1 and d2 being set to 0");
        d1 = 0;
        d2 = 0;
        }

    c = (h11[0] + (p-h11[3]))%p;
    s = (h11[1] + h11[2])%p;
    s1 = d1/4;
    exp7(s1,a2,a4,p);
    exp7(s1,a4,a3,p);
    exp7(2,a3,a4,p);
    a3[0] = c;
    a3[1] = s;
    cmult(a3,a4,a5,p);
    printf("\n \n in fn61 1st");
    printf("\n \n in fn61 a5 = ");
    displayh(2,a5);
    series20(s1,c1+s1,a2,h14,2,p);
    printf("\n in fn61 h14 = ");
    displayh(2,h14);

    s2 = d2/4;
    fn60(s1,c1+s1,s2,t1+s2,a2,a3,p);
    printf("\n in fn61 a3 = ");
    displayh(2,a3);
    series20(s2,t1+s2,a2,h12,2,p);
    printf("\n in fn61 h12 = ");
    displayh(2,h12);

    a6[0] = (a5[0]+a3[0])%p;
    a6[1] = (a5[1]+a3[1])%p;

    printf("\n \n in fn61 a6 = ");
    displayh(2,a6);

    c = (h11[0] + h11[3])%p;
    s = (h11[1] + (p-h11[2]))%p;
    s1 = d1/4;
    exp7(s1,a2,a4,p);
    exp7(s1,a4,a3,p);
    exp7(2,a3,a4,p);
    a3[0] = c;
    a3[1] = s;
    cmult(a3,a4,a5,p);
    printf("\n \n in fn61 2nd");
    printf("\n \n in fn61 a5 = ");
    displayh(2,a5);
    series20(-s1,c1-s1,a2,h14,2,p);
    printf("\n in fn61 h12 = ");
    displayh(4,h12);

    s2 = d2/4;
    fn60d(-s1,c1-s1,-s2,t1-s2,a2,a3,p);
    printf("\n in fn61 a3 = ");
    displayh(2,a3);
    series20(-s2,t1-s2,a2,h12,2,p);
    printf("\n in fn61 h12 = ");
    displayh(4,h12);

    a7[0] = (a5[0]+a3[0])%p;
    a7[1] = (a5[1]+a3[1])%p;

    b1[0] = a6[0];
    b1[1] = a6[1];
    b1[2] = a7[0];
    b1[3] = a7[1];
    printf("\n \n in fn61 v = ");
    displayh(4,b1);

    exp7(s2,a2,a4,p);
    exp7(s2,a4,a3,p);
    exp7(2,a3,a5,p);
    a5[1] = (p-a5[1])%p;
    cmult(a5,a6,a3,p);
    cmult(a5,a7,a4,p);
    h12[0] = a3[0];
    h12[1] = a3[1];
    h12[2] = a4[0];
    h12[3] = a4[1];
    printf("\n \n in fn61 h11 = ");
    displayh(4,h12);

    t = (p+1)/2;
    h15[0] = (h12[0]+h12[2])%p;
    h15[0] = (t*h15[0])%p;

    h15[1] = (h12[1]+h12[3])%p;
    h15[1] = (t*h15[1])%p;

    h15[2] = (h12[1]+(p-h12[3]))%p;
    h15[2] = (t*h15[2])%p;

    h15[3] = ((p-h12[0])+h12[2])%p;
    h15[3] = (t*h15[3])%p;

    printf("\n \n in fn61 h15 = ");
    displayh(4,h15);

    series(0,t1,a2,d2,h14,2,p);
    printf("\n \n in fn61 h14 = ");
    displayh(4,h14);
}

void fn61d(int c1, int d1, int t1, int d2, integer a2[], integer h11[], integer h15[], integer p)

{
int s1,s2;
integer c,s;
integer t;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer a6[2] = {0};
integer a7[2] = {0};
integer h12[4] = {0};
integer h14[4] = {0};
integer b1[4] = {0};

    s1 = d1%4;
    s2 = d2%4;
    if ((s1!=0) || (s2!=0))
        {
        printf("\n \n error in fn61 d1 and d2 should equal 0 mod 4");
        printf(" d1 and d2 being set to 0");
        d1 = 0;
        d2 = 0;
        }

    c = (h11[0] + (p-h11[3]))%p;
    s = (h11[1] + h11[2])%p;
    s1 = d1/4;
    exp7(s1,a2,a4,p);
    exp7(s1,a4,a3,p);
    exp7(2,a3,a4,p);
    a3[0] = c;
    a3[1] = s;
    cmult(a3,a4,a5,p);

    s2 = d2/4;
    fn60(s1,c1+s1,s2,t1+s2,a2,a3,p);

    a6[0] = (a5[0]+a3[0])%p;
    a6[1] = (a5[1]+a3[1])%p;

    c = (h11[0] + h11[3])%p;
    s = (h11[1] + (p-h11[2]))%p;
    s1 = d1/4;
    exp7(s1,a2,a4,p);
    exp7(s1,a4,a3,p);
    exp7(2,a3,a4,p);
    a3[0] = c;
    a3[1] = s;
    cmult(a3,a4,a5,p);

    s2 = d2/4;
    fn60d(-s1,c1-s1,-s2,t1-s2,a2,a3,p);

    a7[0] = (a5[0]+a3[0])%p;
    a7[1] = (a5[1]+a3[1])%p;

    b1[0] = a6[0];
    b1[1] = a6[1];
    b1[2] = a7[0];
    b1[3] = a7[1];

    exp7(s2,a2,a4,p);
    exp7(s2,a4,a3,p);
    exp7(2,a3,a5,p);
    a5[1] = (p-a5[1])%p;
    cmult(a5,a6,a3,p);
    cmult(a5,a7,a4,p);
    h12[0] = a3[0];
    h12[1] = a3[1];
    h12[2] = a4[0];
    h12[3] = a4[1];

    t = (p+1)/2;
    h15[0] = (h12[0]+h12[2])%p;
    h15[0] = (t*h15[0])%p;

    h15[1] = (h12[1]+h12[3])%p;
    h15[1] = (t*h15[1])%p;

    h15[2] = (h12[1]+(p-h12[3]))%p;
    h15[2] = (t*h15[2])%p;

    h15[3] = ((p-h12[0])+h12[2])%p;
    h15[3] = (t*h15[3])%p;

}

void calc19(int m2, int flag4, integer e, int c1, int e1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer a3[2] = {0};
integer a4[2] = {0};

    if (c1==0)
        {
        calc6(m2,8,0,ptr2,hs1,str1,p);
        calc6(m2,9,0,ptr2,&hs1[30],str1,p);
        for(i=0;i<15;i++)
            {
            hs1[60+i] = 0;
            hs1[90+i] = 0;
            }
        }

    if ((c1>0)&&(c1<9))
        {
        calc6(m2,8,c1-1,ptr2,hs1,str1,p);
        calc6(m2,9,c1-1,ptr2,&hs1[30],str1,p);

        calc6(m2,8,c1,ptr2,&hs1[60],str1,p);
        calc6(m2,9,c1,ptr2,&hs1[90],str1,p);
        }

    for(i=0;i<13;i++)
        {
        h11[0] = hs1[0+i];
        h11[1] = hs1[30+i];
        h11[2] = hs1[60+i];
        h11[3] = hs1[90+i];

        fn61d(e,c1*e,e1,c1*e1,a2,h11,h12,p);
        /**
        printf("\n \n in calc19 h12 = ");
        displayh(4,h12);
        **/

        hs2[0+i] = h12[0];
        hs2[30+i] = h12[1];
        hs2[60+i] = h12[2];
        hs2[90+i] = h12[3];
        }

    if (flag4==1)
        {
        printf("\n \n in calc19(%d)",c1);
        for(i=0;i<4;i++)
            {
            printf("\n \n hs2(%d) = ",i);
            printf("\n");
            display12(&hs2[30*i]);
            }
        }

    if (flag4==1)
        {
        printf("\n \n s(0,%d)(%d) \n",e1,c1*e1);
        series(0,e1,a2,c1*e1,h11,2,p);
        printf("\n \n h1 = ");
        displayh(4,h11);
        }

    if (flag4==1)
        {
        if((c1==2)||(c1==4)||(c1==6)||(c1==8))
            {
            exp7((c1*e1)/4,a2,a3,p);
            exp7((c1*e1)/2,a3,a4,p);
            printf("     exp7 = ");
            displayh(2,a4);
            }
        }
}

void calc20d(integer a2[], int flag4, integer h15[], long int d1, integer q, integer p)

{
int i;
integer t1,t2;
integer h14[4] = {0};
integer h1[4] = {0};

printf("\n \n in calc20d a2 = ");
displayh(2,a2);
printf("\n \n in calc20d d1 = %d",d1);

if((q%2)==0)
	{
	t1 = (q%6);
	t2 = (q-t1-1)/6;
	h15[0] = 1;
	h15[1] = t2;
	h15[2] = t2+1;
	h15[3] = (q/2)-(t2+1);
	h15[4] = h15[3]+1;
	h15[5] = (q/2)-1;
	for(i=0;i<6;i++)
		{
		h15[i+6] = h15[i]+(q/2);
		}
	}

if((q%2)==1)
    {
    t1 = (q%6);
    t2 = (q-t1-1)/6;
    h15[0] = 1;
    h15[1] = t2;
    h15[2] = t2+1;
    h15[3] = 2*t2;
    h15[4] = 2*t2+1;
    h15[5] = (q-1)/2;

    h15[6] = h15[5]+1;
    h15[7] = q-(2*t2+1);
    h15[8] = h15[7]+1;
    h15[9] = q-(t2+1);
    h15[10] = h15[9]+1;
    h15[11] = q-1;
    }

if (flag4==1)
    {
    printf("\n \n p = %d  q = %d",p,q);
    for(i=0;i<6;i++)
        {
        series(h15[2*i],h15[2*i+1],a2,0,h14,d1,p);
        series(h15[2*i],h15[2*i+1],a2,2*q/3,h1,d1,p);
        printf("\n i = %d  ",i);
        printf(" (%d , %d)  ",h15[2*i],h15[2*i+1]);
        displayh(2,h14);
        displayh(4,h1);
        }
    }
}

void calc21d(integer a2[], integer h15[], long int d1, integer q, integer p)

{
int i;
integer t1,t2;
integer h14[4] = {0};

if((q%4)!=0)
    {
    printf("\n \n error in calc21d q mod 4 should equal 0");
    }

if((q%4)==0)
	{
	t1 = (q%12);
	t2 = (q-t1)/12;
	h15[0] = 1;
	h15[1] = t2;
	h15[2] = t2+1;
	h15[3] = (q/4)-(t2+1);
	h15[4] = h15[3]+1;
	h15[5] = (q/4)-1;
	for(i=0;i<6;i++)
		{
		h15[i+6] = h15[i]+(q/4);
		}
    for(i=0;i<12;i++)
        {
        h15[i+12] = h15[i]+(q/2);
        }
	}

printf("\n \n p = %d  q = %d",p,q);
for(i=0;i<12;i++)
	{
    t1 = h15[2*i];
    t2 = h15[2*i+1];
	series(t1,t2,a2,0,h14,d1,p);
	printf("\n i = %d  ",i);
	printf(" (%d , %d)  ",h15[2*i],h15[2*i+1]);
	displayh(2,h14);
	series1(t1+(t1%2),t2,2,a2,0,h14,d1,p);
	printf("  e = ");
	displayh(2,h14);
	series1(t1+1-(t1%2),t2,2,a2,0,h14,d1,p);
	printf("  o = ");
	displayh(2,h14);
	}
}

void calc22d(integer a2[], int flag4, integer k2[], integer k16[], long int d1, integer q, integer p)
{
int i;
integer t1,t2;
integer h14[4] = {0};

t1 = (q%15);
t2 = (q-t1)/15;

k2[0] = 1;
k2[1] = t2;
k2[2] = k2[1]+1;
k2[3] = 2*t2;
k2[4] = k2[3]+1;
k2[5] = 3*t2;
k2[6] = k2[5]+1;
k2[7] = 4*t2;
k2[8] = k2[7]+1;
k2[9] = 5*t2;
k2[10] = k2[9]+1;
k2[11] = 6*t2;
k2[12] = k2[11]+1;
k2[13] = 7*t2;
k2[14] = k2[13]+1;
k2[15] = q-7*t2-1;
k2[16] = q-7*t2;
k2[17] = q-6*t2-1;
k2[18] = q-6*t2;
k2[19] = q-5*t2-1;
k2[20] = 5*t2;
k2[21] = q-(4*t2)-1;
k2[22] = q-(4*t2);
k2[23] = q-(3*t2)-1;
k2[24] = q-(3*t2);
k2[25] = q-(2*t2)-1;
k2[26] = q-(2*t2);
k2[27] = q-(t2+1);
k2[28] = q-t2;
k2[29] = q-1;

if (flag4==1)
    {
    printf("\n \n in calc22d p = %d  q = %d",p,q);
    for(i=0;i<15;i++)
        {
        series(k2[2*i],k2[2*i+1],a2,0,h14,d1,p);
        printf("\n i = %d  ",i);
        printf(" (%d , %d)  ",k2[2*i],k2[2*i+1]);
        displayh(2,h14);
        if (i<8)
            {
            k16[2*i] = h14[0];
            k16[2*i+1] = h14[1];
            }
        }
    }
}

void calc23d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p)
{
int i;
integer t1,t2;
integer h14[4] = {0};

t1 = (q%3);
t2 = (q-t1)/3;

k2[0] = 1;
k2[1] = t2;
k2[2] = t2+1;
k2[3] = q-t2-1;
k2[4] = q-t2;
k2[5] = q-1;

if (flag4==1)
    {
    printf("\n \n in calc23 p = %d  q = %d",p,q);
    for(i=0;i<3;i++)
        {
        series(k2[2*i],k2[2*i+1],a2,0,h14,d1,p);
        printf("\n i = %d  ",i);
        printf(" (%d , %d)  ",k2[2*i],k2[2*i+1]);
        displayh(2,h14);
        }
    }
}

void calc24d(integer a2[], integer h15[], long int d1, integer q, integer p)
{
int i;
integer t1,t2,t3;
integer h14[4] = {0};

if((q%2)==0)
	{
    printf("\n \n error in calc24d q mod 2 should equal 1");
	}

if((q%2)==1)
    {
    t3 = 0;
    t1 = (q%4);
    t2 = (q-t1)/4;
    if(t1==3)
        {
        t2 = t2+1;
        t3 = 1;
        }
    h15[0] = 1;
    h15[1] = t2;
    h15[2] = t2+1;
    h15[3] = 2*t2-t3;
    h15[4] = 2*t2+1-t3;
    h15[5] = q-(t2+1);
    h15[6] = q-t2;;
    h15[7] = q-1;
    }

printf("\n \n p = %d  q = %d",p,q);
for(i=0;i<4;i++)
	{
	series(h15[2*i],h15[2*i+1],a2,0,h14,d1,p);
	printf("\n i = %d  ",i);
	printf(" (%d , %d)  ",h15[2*i],h15[2*i+1]);
	displayh(2,h14);
	}
}

void calc25d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p)
{
int i;
integer t1,t2;
integer h14[4] = {0};

t1 = (q%5);
t2 = (q-t1)/5;

k2[0] = 1;
k2[1] = t2;
k2[2] = t2+1;
k2[3] = 2*t2;
k2[4] = k2[3]+1;
k2[5] = q-2*t2-1;
k2[6] = q-2*t2;
k2[7] = q-t2-1;
k2[8] = q-t2;
k2[9] = q-1;

if (flag4==1)
    {
    printf("\n \n in calc25d p = %d  q = %d",p,q);
    for(i=0;i<5;i++)
        {
        series(k2[2*i],k2[2*i+1],a2,0,h14,d1,p);
        printf("\n i = %d  ",i);
        printf(" (%d , %d)  ",k2[2*i],k2[2*i+1]);
        displayh(2,h14);
        }
    }
}

void calc28d(integer a2[], integer h15[], long int d1, integer q, integer p)
{
int i;
integer t1,t2;
integer h14[4] = {0};

if ((q%4)!=0)
    {
    printf("error in calc28 q mod 4 should equal 0");
    }

t1 = q/4;

t2 = (q%32);
t2 = 32-t2;

if((q%8)==4)
	{
	t2 = (t1-1)/2;
	h15[0] = 1;
	h15[1] = t2;
	h15[2] = t2+1;
	h15[3] = t1-1;
	h15[4] = h15[0]+t1;
	h15[5] = h15[1]+t1;
	h15[6] = h15[2]+t1;
	h15[7] = h15[3]+t1;
	}

if((q%8)==0)
	{
	t2 = (q/8)-1;
	h15[0] = 1;
	h15[1] = t2;
	h15[2] = t2+2;
	h15[3] = t1-1;
	h15[4] = h15[0]+t1;
	h15[5] = h15[1]+t1;
	h15[6] = h15[2]+t1;
	h15[7] = h15[3]+t1;
	}

for(i=0;i<8;i++)
    {
    h15[i+8] = h15[i]+(q/2);
    }

printf("\n \n p = %d  q = %d",p,q);
for(i=0;i<8;i++)
	{
	series(h15[2*i],h15[2*i+1],a2,0,h14,d1,p);
	printf("\n i = %d  ",i);
	printf(" (%d , %d)  ",h15[2*i],h15[2*i+1]);
	displayh(2,h14);
	}
}

void calc29d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p)
{
int i;
integer t1,t2;
integer h14[4] = {0};

t1 = (q%9);
t2 = (q-t1)/9;

k2[0] = 1;
k2[1] = t2;
k2[2] = t2+1;
k2[3] = 2*t2;
k2[4] = k2[3]+1;
k2[5] = 3*t2;
k2[6] = k2[5]+1;
k2[7] = 4*t2;
k2[8] = k2[7]+1;
k2[9] = q-(4*t2)-1;
k2[10] = q-(4*t2);
k2[11] = q-(3*t2)-1;
k2[12] = q-(3*t2);
k2[13] = q-(2*t2)-1;
k2[14] = q-(2*t2);
k2[15] = q-(t2+1);
k2[16] = q-t2;
k2[17] = q-1;

if (flag4==1)
    {
    printf("\n \n in calc29d p = %d  q = %d",p,q);
    for(i=0;i<9;i++)
        {
        series(k2[2*i],k2[2*i+1],a2,0,h14,d1,p);
        printf("\n i = %d  ",i);
        printf(" (%d , %d)  ",k2[2*i],k2[2*i+1]);
        displayh(2,h14);
        }
    }
}

