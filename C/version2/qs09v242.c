
#include <stdio.h>
#include <stdlib.h>
#include "qmath228v7.h"
#include "qmath229v2.h"
#include "calc2v18.h"

typedef int integer;
typedef integer *STRING[220];

int exp4d (integer e, integer a2[], int kmax, integer h11[], integer h12[],
           integer *str1, integer *str1a, integer *str2, integer *str2a,
           int m2, integer flag0, int x, int y, int c6, integer s,
           integer ws1[], integer hs1[], integer ws2[], integer hs2[],
           integer hs3[], STRING ptr2, integer b2[], integer p);

int exp4d2 (integer e, integer a2[], int kmax, integer h11[], integer h12[],
            integer *str1, integer *str1a, integer *str2, integer *str2a,
            int m2, integer flag0, int x, int y, int c6, integer s,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

int exp4d3 (integer c, integer e, integer a2[], int kmax, int flag4, integer h11[], integer h12[],
            integer *str1, integer *str1a, integer *str2, integer *str2a,
            int m2, integer flag0, int x, int y, int c6, integer s,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

void calc3 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

void calc3k (integer c3, integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
             integer h11[], integer h12[], integer *str1, integer *str1a,
             integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
             integer ws1[], integer hs1[], integer ws2[], integer hs2[],
             integer hs3[], STRING ptr2, integer b2[], integer p);

void calc4 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

void calc3d (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
             integer h11[], integer h12[], integer *str1, integer *str1a,
             integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
             integer ws1[], integer hs1[], integer ws2[], integer hs2[],
             integer hs3[], STRING ptr2, integer b2[], integer p);

void calc3k2 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
             integer h11[], integer h12[], integer *str1, integer *str1a,
             integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
             integer ws1[], integer hs1[], integer ws2[], integer hs2[],
             integer hs3[], STRING ptr2, integer b2[], integer p);

void calc4d (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

void display16d(unsigned int r, STRING ptr2, integer b1[]);
void multcnvl2(int l2, int e1, integer k4[], integer k3[], STRING ptr2, integer p);
void calc12d(integer e, integer a2[], integer k1[], integer k2[], integer p);
void calc12(integer e, integer a2[], int flag4, integer k1[], integer k2[], integer p);

void displayh2(int d, integer h16[]);

integer find4(integer g, integer q, integer p);
void displayh11(integer h11[]);

void init3(integer flag4, integer a2[], integer c1, integer d[], integer b1[], STRING ptr2, integer p);
void init4(integer flag4, integer a2[], integer c1, integer d[], integer b1[], STRING ptr2, integer p);

integer calc42(integer e4, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[], integer q, integer p);
integer calc42d(integer e, integer e1, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[], integer q, integer p);
integer calc42k(integer e, integer e1, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[], integer q, integer p);

void fn60k(int c1, int c2, int t1, int t2, integer a2[], integer a3[], long int d1, integer p);

void calc19d(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc19k(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);

void equation4(integer e4, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[],
               integer k42[], integer q, integer p);
void equation4d(integer e4, integer a2[], integer s1, integer s2, integer k40[], integer k41[],
                integer a3[], integer q, integer p);

void calc7(int m2, int c1, int d1, STRING ptr2, integer h12[], integer *str1, integer p);
void calc5(integer h20[], integer h21[], integer h22[], integer p);

void calc19k4(int m2, integer c1, int flag4, STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer hs3[], integer p);
void calc19k5(int m2, integer e, integer c1, int flag4,  integer a2[], STRING ptr2 , integer *str1,
              integer hs1[], integer hs2[], integer hs3[], integer p);

void calc60(int m2, integer c1, integer c2, integer e, integer e2, integer a2[], int flag4, STRING ptr2 , integer *str1,
            integer hs1[], integer hs2[], integer hs3[], integer hs4[], integer p);
void calc73(int m2, integer e, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc74(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);


int main(void)
{
	int i,j,k;
	int m2;
	unsigned long int c;
	int l2,l3;
	STRING ptr2;

	integer b2[220] = {0};
	int t1;

	integer p;

	integer a2[2] = {0};
	integer a3[2] = {0};
	integer a4[2] = {0};
	integer a5[2] = {0};
	integer a6[2] = {0};

	integer cs[10] = {0};
	integer sn[10] = {0};
	integer cs1[10] = {0};
	integer sn1[10] = {0};
	integer cs2[10] = {0};
	integer sn2[10] = {0};

	integer hs1[144] = {0};
	integer hs2[144] = {0};
	integer hs3[144] = {0};
    	integer hs4[144] = {0};

	integer ws1[27] = {0};
	integer ws2[27] = {0};

	integer h11[40] = {0};
	integer h12[40] = {0};
	integer h20[40] = {0};

	integer h21[40] = {0};
	integer h22[40] = {0};
	integer h23[40] = {0};
    	integer h24[40] = {0};
    	integer h25[40] = {0};
    	integer h26[40] = {0};
    	integer h27[40] = {0};
    	integer h28[40] = {0};

	integer *str1;
	integer *str1a;
	integer *str2;
	integer *str2a;

	integer flag0,flag3;
	int flag4;
	int x,y,c6,kmax;

	integer s,e,e1,e2,e3,e4;
	integer s1,s2,s3,s4;
	integer s6,s7,s8,s9;
	integer i2;
	integer g;
	integer q,q1;
	integer s5;
	integer c1;
	integer c2;

	integer k40[6] = {0};
	integer k41[12] = {0};
	integer k42[12] = {0};
	
   	m2 = m;
	
    	p = 9857;

	for(i=0;i<m2;i++)
		{
		c = m2;
		ptr2[i] = (integer *) calloc(c, sizeof(integer));
		if (ptr2[i] == NULL)
			{
			printf("\n \n out of memory for ptr2[%d]",i);
			}
		}

/* 1 */
	if ((str1 = (integer *) calloc(1584,sizeof(integer))) == NULL)
        {
         printf("Not enough memory for str1\n");
		 /*
		 exit(1);
		 */
        }
/* 2 */
	 if ((str2 = (integer *) calloc(1584,sizeof(integer))) == NULL)
        {
		 printf("Not enough memory for str2\n");
        }
/* 3 */
	if ((str1a = (integer *) calloc(297,sizeof(integer))) == NULL)
        {
		 printf("Not enough memory for str1a\n");
        }
/* 4 */
	if ((str2a = (integer *) calloc(297,sizeof(integer))) == NULL)
        {
		 printf("Not enough memory for str2a\n");
        }

	setzero2(40,h11);


    g = findnqr(p);
    printf("\n g = f(%d) = %d",p,g);


/** Determine g **/
    g = find3(p);

    printf("\n from find3 g = %d",g);

    g = exp1(1,g,p);
    g = (1*g)%p;

/** Determine i2 and a2 **/

	i2 = find4(g,p-1,p);
	printf("\n \n from find4 i2 = %d",i2);
	i2 = (p+i2)%p;

   	calc2(g,i2,a2,p);
    	printf("\n \n from calc2 a2 = ");
	displayh(2,a2);

    printf("\n \n test of calc42k");
    a5[0] = a2[0];
    a5[1] = a2[1];
    a6[0] = a2[0];
    a6[1] = a2[1];
    if ((p%3)==1)
        {
        exp7((p-1)/3,a2,a3,p);
        cmult(a2,a3,a5,p);
        a3[1] = (p-a3[1])%p;
        cmult(a2,a3,a6,p);
        }
    e4 = calc42k((p-1)/14-4,0,a2,a5,a6,k40,k41,p-1,p);
    printf("\n \n calc42k e4 = %d",e4);

    printf("\n \n k40 = ");
    displayh(6,k40);
    printf("\n \n k41 = ");
    displayh(12,k41);

    printf("\n \n test of fn60k");
    fn60k(5,29,7,34,a2,a3,4,p);
    series(5,29,a2,0,h11,4,p);
    series(7,34,a2,0,h12,4,p);
    printf(" \n h11 = ");
    displayh(4,h11);
    printf(" \n h12 = ");
    displayh(4,h12);
    printf(" \n a3 = ");
    displayh(2,a3);

    printf("\n \n Enter 1 to continue ");
    scanf("%d",&s1);


    for(k=0;k<50;k++)
    	{
	i2 = find4(g,p-1,p);
	printf("\n \n from find4 i2 = %d",i2);

    	calc2(g,i2,a2,p);
	printf("\n \n from calc2 a2 = ");
	displayh(2,a2);

  	printf("\n \n Enter a value for s1 ");
	scanf("%d",&s1);
	if (s1<1)
        {
        k = 50;
        s1 = 1;
        }

	exp7(s1,a2,a3,p);
	a2[0] = a3[0];
	a2[1] = a3[1];
	s5 = s1;

   if ((s5%4)==3)
        {
        printf("=========================================");
        i2 = (p-i2)%p;
        a2[1] = (p-a2[1])%p;
        }

	l2 = 4;
	l3 = l2+4;
	setzero(200,ptr2);

/** if flag0 = 1 then set141 is normal (i.e. correct) **/
/** if flag0 = 0 then set141 is set to zero plus offset of e1 **/

    printf("\n \n before exp4d");

/** e mod 4 must equal 0 **/
    flag0 = 1;

    e = (p-1)/16;
    e = 1*e;

    e2 = e%4;
    e = 1*e-e2;

    e = e - 4;

    printf("\n \n e = %d",e);

	e1 = e;
	kmax = 10*2;
	x = 2-1;
	y = 1;
	c6 = 5*0+1;
	s = 0;

	y = 0;
	x = 3;
	c6 = 5;
	s = 0;

	flag_2 = 1;
	c1 = 1;
	t1 = exp4d2(e,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,flag0,x,y,c6,s,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	flag_2 = 0;
	printf("\n \n  l2 = %d",e);
	printf("\n  t1 = %d",t1);
	printf("\n  exp4d2 k = %d",k);
	printf("\n  s5 = %d",s5);
	printf("\n \n");
	displaytuple(1,str1,str1a);

	printf("\n \n \n \n from exp4d h11 = \n \n",i);
	displayh11(h11);
	printf("\n \n after exp4d");

    	e1 = e + 4;
	exp4a(1*e1,0,201,a2,ptr2,p);
	printf("\n \n &&&&&& the answer (exp4a) is ");
	ndisplay(ptr2[201]);

	exp4a(2*e1,1,202,a2,ptr2,p);
	printf("\n \n &&&&& the answer (exp4a) is \n");
	display27(ptr2[202]);

    	printf("\n \n i2 = %d  a2 = (%d,%d)",i2,a2[0],a2[1]);
	series(1,p-1,a2,0,h11,2,p);
	printf("\n \n (2) series = ");
	displayh(4,h11);

	series(1,p-1,a2,0,h11,4,p);
	printf("\n \n (4) series = ");
	displayh(4,h11);

    	c1 = 1;
/** calc3 **/
	flag0 = 1*1;
/** flag3 = 1 implies c = 5 **/
	flag3 = 0;
	for(j=0;j<1;j++)
		{
/**
        c2 = 0;
        c3 = 1;
**/
        /** calc4 is 4-tuple **/
        /** calc4d is 2-tuple **/
		if(j==0)
			{
			calc3d(e,e1,flag0,flag3,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
                               t1,8,9,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);

            		calc19k(m2,e+4,2,0,a2,h11,h12,ptr2,str1,hs1,hs2,p);
            		k42[0] = hs1[60];
            		k42[1] = hs1[90];

            		calc19k(m2,e+4,4,0,a2,h11,h12,ptr2,str1,hs1,hs2,p);
            		k42[2] = hs1[60];
            		k42[3] = hs1[90];

            		calc19k(m2,e+4,8,0,a2,h11,h12,ptr2,str1,hs1,hs2,p);
            		k42[4] = hs1[60];
            		k42[5] = hs1[90];
			}
		if(j==1)
			{
            		calc4d(e+(p-1),e1+(p-1),flag0,flag3,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
                   	       t1,8,9,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);

            		calc19k(m2,e+4,2,0,a2,h11,h12,ptr2,str1,hs1,hs2,p);
            		k42[6] = hs1[60];
            		k42[7] = hs1[90];

            		calc19k(m2,e+4,4,0,a2,h11,h12,ptr2,str1,hs1,hs2,p);
            		k42[8] = hs1[60];
            		k42[9] = hs1[90];

            		calc19k(m2,e+4,8,0,a2,h11,h12,ptr2,str1,hs1,hs2,p);
            		k42[10] = hs1[60];
            		k42[11] = hs1[90];
			}
        	if(j==2)
			{
            		exp7((p-1)/3,a2,a4,p);
            		cmult(a4,a4,a3,p);
            		cmult(a2,a3,a6,p);
			calc3k(c1,e,e1,flag0,flag3,a6,kmax,h11,h12,str1,str1a,str2,str2a,m2,
                  	       t1,8,9,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);

            		calc6(m2,8,1,ptr2,h20,str1,p);
            		k42[8] = h20[0];
            		calc6(m2,9,1,ptr2,h20,str1,p);
            		k42[9] = h20[0];
            		calc6(m2,8,2,ptr2,h20,str1,p);
            		k42[10] = h20[0];
            		calc6(m2,9,2,ptr2,h20,str1,p);
            		k42[11] = h20[0];
			}

/**
		printf("\n \n  l2 = %d",e);
		printf("\n calc3 = ",i);
		printf("\n \n");
		displaytuple2(8,9,str1,str1a);

**/

        if ((flag3==flag3)&&(j==j))
            {
            printf("\n \n ======= calc6 from (0 to 8) ========");
            for(i=0;i<9;i++)
                {
                printf("\n \n i = %d \n",i);
                calc6(m2,8,i,ptr2,h20,str1,p);
                printf("\n");
                display12(h20);
                calc6(m2,9,i,ptr2,h20,str1,p);
                printf("\n");
                display12(h20);
                }
            printf("\n \n ====================================");
            }

		}


        flag4 = 1;
        calc10k(m2,e+4,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc10(m2,e+4,3,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc10(m2,e+4,5,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc10(m2,e+4,7,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc71(m2,e+4,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc72(m2,e+4,3,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc72(m2,e+4,5,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc74(m2,e+4,5,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");


/**
        calc14(m2,e+4,6,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc14k(m2,e+4,8,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc14k(m2,e+4,10,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");
**/

/**
        calc16(m2,e+4,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc16k(m2,e+4,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc17(m2,e+4,3,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc11(m2,e+4,6,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc15(m2,e+4,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");
**/

/**
        calc11q(m2,e+4,e2,6,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc14q(m2,e+4,e2,6,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc14k(m2,e+4,10,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc14q2(m2,e+4,e2,10,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc15q(m2,e+4,e2,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc18(m2,e+4,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");

        calc18k(m2,e+4,1,a2,h11,h12,ptr2,str1,hs2,hs3,p);
        printf("\n \n \n \n");
**/

/**
        calc19k4(m2,2,1,ptr2,str1,hs1,hs2,hs3,p);

        calc19(m2,1,e+4,4,e+4+e2,a2,h11,h12,ptr2,str1,hs1,hs4,p);
        printf("\n \n \n \n");
**/


/**
        flag4 = 1;
        c2 = 3;
        calc60(m2,20,c2,e,e2,a2,flag4,ptr2,str1,hs1,hs2,hs3,hs4,p);
**/

/**
        printf("\n \n \n \n");
        printf("\n \n ^^^^^^^^^^^ e = %ld",e);
        calc10d(m2,e+4,1,1,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc10d(m2,e+4,3,1,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        printf("\n \n");
        calc14d(m2,e+4,1,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        printf("\n \n");
        calc17d(m2,e+4,1,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc18d(m2,e+4,1,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
**/

/**
        flag4 = 1;
        calc19k(m2,e+4,0,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc19k(m2,e+4,2,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc5(&hs1[60],h21,h25,p);

        calc19k(m2,e+4,4,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc5(&hs1[60],h22,h25,p);

        calc19k(m2,e+4,6,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc5(&hs1[60],h23,h25,p);

        calc19k(m2,e+4,8,flag4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc5(&hs1[60],h24,h25,p);

        printf("\n \n h21");
        display12(h21);
        printf("\n \n h22");
        display12(h22);
        printf("\n \n h23");
        display12(h23);
        printf("\n \n h24");
        display12(h24);

        mult12(1,p-1,h21,h22,h25,p);
        mult12(1,1,h24,h25,h26,p);
        printf("\n \n h26");
        display12(h26);
**/

/**
        calc19k5(m2,e,2,1,a2,ptr2,str1,hs1,hs2,hs3,p);
**/

/**
        mult12(0,4,h20,h21,h25,p);
        mult12(0,4,h20,h22,h26,p);
        mult12(0,4,h20,h23,h27,p);
        mult12(0,4,h20,h24,h28,p);
        printf("\n \n h25");
        display12(h25);
        printf("\n \n h26");
        display12(h26);
        printf("\n \n h27");
        display12(h27);
        printf("\n \n h28");
        display12(h28);
**/


/**
        c1 = 5;
        printf("\n \n \n \n calc7(%d) \n",c1);
        calc7(m2,8,c1,ptr2,h11,str1,p);
        printf("\n");
        display12(h11);
        calc7(m2,9,c1,ptr2,h12,str1,p);
        printf("\n");
        display12(h12);
        for(i=1;i<13;i++)
            {
            s1 = h11[0];
            s1 = (p-s1)%p;
            h20[i] = (h11[i]+s1)%p;
            s1 = h12[0];
            s1 = (p-s1)%p;
            h21[i] = (h12[i]+s1)%p;
            }
        h20[0] = h11[0];
        h21[0] = h12[0];
        printf("\n \n h20");
        display12(h20);
        printf("\n \n h21");
        display12(h21);

        calc5d(h11,h22,h23,p);
        printf("\n \n h22");
        display12(h22);
        printf("\n \n h23");
        display12(h23);
**/

/**
    s1 = (k42[0]+k42[2])%p;
    s2 = (k42[4]+k42[6])%p;
    s1 = (s1+s2)%p;
    s1 = (2*s1)%p;

    s2 = (k42[1]+k42[3])%p;
    s3 = (k42[5]+k42[7])%p;
    s2 = (s2+s3)%p;
    s2 = (2*s2)%p;

    printf("\n \n s1 = %d  s2 = %d",s1,s2);
**/

    printf("\n \n \n \n k40 = ");
    displayh(6,k40);
    printf("\n \n k41 = ");
    displayh(12,k41);
    printf("\n \n k42 = ");
    displayh(6,k42);

/**
    q = p-1;
    equation4(e4,a2,a5,a6,k40,k41,k42,q,p);
**/

/**
    q = p-1;
    equation4d(e4,a2,s1,s2,k40,k41,a3,q,p);
**/

	printf("\n \n e = %d",e);
	printf("\n \n g = %d     i2 = %d     p = %d",g,i2,p);
	printf("\n \n a2 = ");
	displayh(2,a2);

	printf("\n \n a5 = ");
	displayh(2,a5);
	printf("    a6 = ");
	displayh(2,a6);

	exp7((p-1)/3,a2,a3,p);
	printf("\n\n a3 = ");
	displayh(2,a3);

	printf("\n\n s5 = %d",s5);

/**
    series(100,20,a2,0,h11,2,p);
    printf("\n \n test series = ");
    displayh(4,h11);
**/

    series(1,(p-1)/2,a2,0,h20,2,p);
    printf("\n \n (2) series = ");
    displayh(4,h20);

    series(1,(p-1)/4,a2,0,h20,4,p);
    printf("\n \n (4) series = ");
    displayh(4,h20);

    printf("\n \n det_sum = %d",det_sum);
    printf("\n det_l144 = %d",det_l144);
    }

	return(0);
}

int exp4d (integer e, integer a2[], int kmax, integer h11[], integer h12[],
           integer *str1, integer *str1a, integer *str2, integer *str2a,
           int m2, integer flag0, int x, int y, int c6, integer s,
           integer ws1[], integer hs1[], integer ws2[], integer hs2[],
           integer hs3[], STRING ptr2, integer b2[], integer p)
{
int i,j;
int t;
int e2;
integer t1,s1;
int k;
int l2,l3;
integer cs[10] = {0};
integer sn[10] = {0};

integer cs1[10] = {0};
integer sn1[10] = {0};

integer cs2[10] = {0};
integer sn2[10] = {0};

integer a[16] = {0,0,1,0,0};


/* Make sure that h11[] is array of size >= kmax */

setzero2(40,h11);

if((e%4)!=0)
	{
	printf("\n \n error in exp4d e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h11[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h11[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in exp4d error in e value");
		t1 = 1;
		}
	}

	i = i-1;
	t = (i+(i%2))/2;

	e2 = i;

for(j=0;j<t;j++)
	{
	t1 = h11[i-j];
	h11[i-j] = h11[j];
	h11[j] = t1;
	}

	for(j=0;j<(e2+1);j++)
		{
		a[j] = h11[j]-2;
		}


	k = 5;
	l2 = 4;
	init2(l2,a2,k,ptr2,hs3,str1,str1a,p);
/*
	displaytuple(k,str1,str1a);
*/

	for(i=0;i<(e2+1);i++)
		{
		s1 = 0;
		if (i==x)
			{
			s1 = s;
			}

		zerotuple(2,2,str1,str1a);

/* 4-i */
		tuple2(2,str1,str1a,str2,str2a,flag0,y,c6,s1,m2,l2,a2,ws1,hs1,ws2,hs2,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
		l2 = 2*l2;

		if (a[i]==0)
			{
			equaltuple2(1,str2,str2a,str1,str1a);
			}

		if (a[i]==1)
			{
			l3 = l2 + 4;
			tuple1(2,str2,str1,str1a,m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
			l2 = l3;
			}
		}
return(e2);
}

int exp4d2 (integer e, integer a2[], int kmax, integer h11[], integer h12[],
            integer *str1, integer *str1a, integer *str2, integer *str2a,
            int m2, integer flag0, int x, int y, int c6, integer s,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p)
{
int i,j;
int t;
int e2;
integer t1,s1;
int k;
int l2,l3;
integer cs[10] = {0};
integer sn[10] = {0};

integer cs1[10] = {0};
integer sn1[10] = {0};

integer cs2[10] = {0};
integer sn2[10] = {0};

integer a[16] = {0,0,1,0,0};

integer l4 = 4;

/* Make sure that h11[] is array of size >= kmax */

setzero2(40,h11);

if((e%4)!=0)
	{
	printf("\n \n error in exp4d e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h11[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h11[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in exp4d error in e value");
		t1 = 1;
		}
	}

	i = i-1;
	t = (i+(i%2))/2;

	e2 = i;

for(j=0;j<t;j++)
	{
	t1 = h11[i-j];
	h11[i-j] = h11[j];
	h11[j] = t1;
	}

	for(j=0;j<(e2+1);j++)
		{
		a[j] = h11[j]-2;
		}

	k = 5;
	l2 = 4;
	init2(l2,a2,k,ptr2,hs3,str1,str1a,p);
/*
	displaytuple(k,str1,str1a);
*/
	
	for(i=0;i<(e2+1);i++)
		{
		s1 = 0;
		if (i==x)
			{
			s1 = s;
			}
		zerotuple(2,2,str1,str1a);

/* 4-i */
		tuple2(2,str1,str1a,str2,str2a,flag0,y,c6,s1,m2,l2,a2,ws1,hs1,ws2,hs2,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
		l2 = 2*l2;

		if (a[i]==0)
			{
			equaltuple2(1,str2,str2a,str1,str1a);
			}

		if (a[i]==1)
			{
			l3 = l2 + 4;
			tuple1(2,str2,str1,str1a,m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
			l2 = l3;
			}

        }

if (l4>0)
    {
    equaltuple2(1,str1,str1a,str2,str2a);
    l3 = l2 + l4;
    tuple1(2,str2,str1,str1a,m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
    l2 = l3;
    }
return(e2);
}

int exp4d3 (integer c, integer e, integer a2[], int kmax, int flag4, integer h11[], integer h12[],
            integer *str1, integer *str1a, integer *str2, integer *str2a,
            int m2, integer flag0, int x, int y, int c6, integer s,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p)
{
int i,j;
int i1,j1;
int i2;
int t;
int e2;
integer c1;
integer t1,t2,s1,s2,s3;
int k;
int l2,l3;
integer q;
integer cs[10] = {0};
integer sn[10] = {0};
integer cs1[10] = {0};
integer sn1[10] = {0};
integer cs2[10] = {0};
integer sn2[10] = {0};
integer a3[2];
integer a4[2];
integer a[16] = {0,0,1,0,0};
integer d[6] = {0};
integer b1[15] = {0};
integer l4 = 4;

/* Make sure that h11[] is array of size >= kmax */

setzero2(40,h11);

if((e%4)!=0)
	{
	printf("\n \n error in exp4d e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h11[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h11[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in exp4d error in e value");
		t1 = 1;
		}
	}

	i = i-1;
	t = (i+(i%2))/2;

	e2 = i;

for(j=0;j<t;j++)
	{
	t1 = h11[i-j];
	h11[i-j] = h11[j];
	h11[j] = t1;
	}

	for(j=0;j<(e2+1);j++)
		{
		a[j] = h11[j]-2;
		}



/*
	displaytuple(k,str1,str1a);
*/


    c1 = 2;
    c1 = c;

/**
    k = 5;
    l2 = 1*(p-1)/(3*c1);
    l2 = 4;
    init2(l2,a2,k,ptr2,hs3,str2,str2a,p);
**/

    d[0] = 0;
    d[1] = 0;
    d[2] = 0;
    d[3] = 0;
    d[4] = 0;
    d[5] = 0;
    init3(0,a2,c1,d,b1,ptr2,p);



    for(i=0;i<16;i++)
        {
        for(j=0;j<9;j++)
            {
            *(str2+0*144+9*i+j) = 0;
            *(str2+1*144+9*i+j) = 0;
            }
        }


    *(str2+1*144+9*0+0) = b1[0];
    *(str2+1*144+9*0+1) = 0;
    *(str2+1*144+9*0+2) = b1[1];



    *(str2+1*144+9*15+0) = b1[2];
    *(str2+1*144+9*15+1) = 0;
    *(str2+1*144+9*15+2) = b1[3];



    *(str2+1*144+9*3+0) = b1[4];
    *(str2+1*144+9*3+1) = b1[5];
    *(str2+1*144+9*3+2) = b1[6];

    *(str2+1*144+9*12+0) = b1[4];
    *(str2+1*144+9*12+1) = (p-b1[5])%p;
    *(str2+1*144+9*12+2) = b1[6];




    *(str2+1*144+9*5+0) = b1[7];
    *(str2+1*144+9*5+1) = 0;
    *(str2+1*144+9*5+2) = b1[8];

    *(str2+1*144+9*6+0) = b1[7];
    *(str2+1*144+9*6+1) = 0;
    *(str2+1*144+9*6+2) = b1[8];

    *(str2+1*144+9*9+0) = b1[7];
    *(str2+1*144+9*9+1) = 0;
    *(str2+1*144+9*9+2) = b1[8];

    *(str2+1*144+9*10+0) = b1[7];
    *(str2+1*144+9*10+1) = 0;
    *(str2+1*144+9*10+2) = b1[8];




    *(str2+1*144+9*1+0) = b1[9];
    *(str2+1*144+9*1+1) = b1[10];
    *(str2+1*144+9*1+2) = b1[11];

    *(str2+1*144+9*2+0) = b1[9];
    *(str2+1*144+9*2+1) = b1[10];
    *(str2+1*144+9*2+2) = b1[11];

    *(str2+1*144+9*4+0) = b1[9];
    *(str2+1*144+9*4+1) = (p-b1[10])%p;
    *(str2+1*144+9*4+2) = b1[11];

    *(str2+1*144+9*8+0) = b1[9];
    *(str2+1*144+9*8+1) = (p-b1[10])%p;
    *(str2+1*144+9*8+2) = b1[11];


    *(str2+1*144+9*7+0) = b1[12];
    *(str2+1*144+9*7+1) = b1[13];
    *(str2+1*144+9*7+2) = b1[14];

    *(str2+1*144+9*11+0) = b1[12];
    *(str2+1*144+9*11+1) = b1[13];
    *(str2+1*144+9*11+2) = b1[14];

    *(str2+1*144+9*13+0) = b1[12];
    *(str2+1*144+9*13+1) = (p-b1[13])%p;
    *(str2+1*144+9*13+2) = b1[14];

    *(str2+1*144+9*14+0) = b1[12];
    *(str2+1*144+9*14+1) = (p-b1[13])%p;
    *(str2+1*144+9*14+2) = b1[14];


    for(i=0;i<16;i++)
        {
        t1 = *(str2+1*144+9*i+1);
        t2 = *(str2+1*144+9*i+2);
        for(j=1;j<4;j++)
            {
            t1 = (3*t1)%p;
            t2 = (3*t2)%p;
            *(str2+1*144+9*i+2*j+1) = t1;
            *(str2+1*144+9*i+2*j+2) = t2;
            }
        }

    if (flag4==1)
        {
        printf("\n \n in exp4d3(1) &&&&&&&&&&&&&&&&&&&&&&&&");
        printf("\n \n");
        displaytuple(2,str2,str2a);
        }

    if (flag4==1)
        {
        for(i=0;i<16;i++)
            {
            s1 = *(str2+0*144+9*i);
            printf("  %d",s1);
            }
        }


    l2 = 1*(p-1)/(3*c1);

/** important change **/
/**
    exp7(16*(p-1)/16,a2,a3,p);
    cmult(a3,a2,a4,p);
    a4[1] = (p+a4[1])%p;
    a4[0] = (a2[0]+a2[1])%p;
    a4[1] = (a2[0]+(p-a2[1]))%p;
**/

    l3 = l2+4;
    tuple1(2,str2,str1,str1a,m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
    l2 = l3;

/**
    for(i=0;i<16;i++)
        {
        for(j=0;j<4;j++)
            {
            t1 = *(str1+0*144+9*i+j);
            t2 = *(str1+0*144+9*i+8-j);
            *(str1+0*144+9*i+8-j) = t1;
            *(str1+0*144+9*i+8-j) = t2;

            t1 = *(str1+1*144+9*i+j);
            t2 = *(str1+1*144+9*i+8-j);
            *(str1+1*144+9*i+8-j) = t1;
            *(str1+1*144+9*i+8-j) = t2;
            }
        }
**/

    if (flag4==1)
        {
        printf("\n \n in exp4d3(2)");
        printf("\n \n");
        displaytuple(1,str1,str1a);
        }

	for(i=0;i<(e2+1);i++)
		{
		s1 = 0;
		if (i==x)
			{
			s1 = s;
			}
		zerotuple(2,2,str1,str1a);

/* 4-i */
		tuple2(2,str1,str1a,str2,str2a,flag0,y,c6,s1,
               m2,l2,a2,ws1,hs1,ws2,hs2,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
		l2 = 2*l2;

		if (a[i]==0)
			{
			equaltuple2(1,str2,str2a,str1,str1a);
			}

		if (a[i]==1)
			{
			l3 = l2 + 4;
			tuple1(2,str2,str1,str1a,m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
			l2 = l3;
			}
        }

if (l4>0)
    {
    equaltuple2(1,str1,str1a,str2,str2a);
    l3 = l2 + l4;
    tuple1(2,str2,str1,str1a,m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
    l2 = l3;
    }
return(e2);
}

void calc3 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p)

{
int i,j;
int c;
int x,y,c6;
integer s,s1,s2;
int f1[13] = {0,0,0,1,1,1,1,2,2,2,2,2,2};
int f2[13] = {0,0,1,0,1,4,5,0,1,2,3,4,5};
int f3[13] = {1,0,0,1,1,0,0,1,1,0,0,1,1};
int t;
int t2,t3,t4;

if (t1<2)
	{
	printf("\n \n error in calc3 t1 < 2");
	t1 = 2;
	}

y = 1;

s = 1;
t2 = 144*c1;
t3 = 144*c2;
t4 = 0;
c = 13;
if (flag3==1)
	{
	c = 2;
	}


for(i=0;i<c;i++)
	{
	if (i==0)
		{
		s1 = 0;
		}
	if (i>0)
		{
		s1 = s;
		}
	x = (t1-3)+f1[i];

	if (x<0)
		{
		x = t1;
		}
	c6 = f2[i];
	t = exp4d2(e,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
               flag0,x,y,c6,s1,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	printf("\n in calc3 i = %d",i);
	for(j=0;j<9;j++)
		{
		s1 = (*(str1+0*9+j)+*(str1+15*9+j))%p;
		s2 = (*(str1+3*9+j)+*(str1+12*9+j))%p;
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;

		s2 = *(str1+5*9+j);
		s2 = (4*s2)%p;
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
		*(str1+t2+9*i+j) = s1;

		s1 = (*(str1+1*9+j)+*(str1+4*9+j))%p;
		s2 = (*(str1+7*9+j)+*(str1+14*9+j))%p;
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
		s1 = (2*s1)%p;
		*(str1+t3+9*i+j) = s1;

		}


	if (f3[i]==1)
		{
		for(j=0;j<3;j++)
			{
			s1 = (*(str1a+0*3+j)+*(str1a+8*3+j))%p;
			s2 = (*(str1a+2*3+j)+*(str1a+6*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;

			s2 = *(str1a+4*3+j);
			s2 = (4*s2)%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			*(str1a+27*c1+9*j+t4) = s1;

			s1 = (*(str1a+1*3+j)+*(str1a+3*3+j))%p;
			s2 = (*(str1a+5*3+j)+*(str1a+7*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			s1 = (2*s1)%p;
			*(str1a+27*c2+9*j+t4) = s1;
			}
		t4 = t4 + 1;
		}
	}
}

void calc3k (integer c3, integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
             integer h11[], integer h12[], integer *str1, integer *str1a,
             integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
             integer ws1[], integer hs1[], integer ws2[], integer hs2[],
             integer hs3[], STRING ptr2, integer b2[], integer p)

{
int i,j;
int c;
int x,y,c6;
integer s,s1,s2;
int f1[13] = {0,0,0,1,1,1,1,2,2,2,2,2,2};
int f2[13] = {0,0,1,0,1,4,5,0,1,2,3,4,5};
int f3[13] = {1,0,0,1,1,0,0,1,1,0,0,1,1};
int t;
int t2,t3,t4;
int flag4;

if (t1<2)
	{
	printf("\n \n error in calc3 t1 < 2");
	t1 = 2;
	}

y = 1;

s = 1;
t2 = 144*c1;
t3 = 144*c2;
t4 = 0;
c = 13;
if (flag3==1)
	{
	c = 3;
	}


for(i=0;i<c;i++)
	{
	if (i==0)
		{
		s1 = 0;
		}
	if (i>0)
		{
		s1 = s;
		}
	x = (t1-3)+f1[i];

	if (x<0)
		{
		x = t1;
		}
	c6 = f2[i];
	flag4 = 0;
	t = exp4d3(c3,e,a2,kmax,flag4,h11,h12,str1,str1a,str2,str2a,m2,
               flag0,x,y,c6,s1,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	printf("\n in calc3 i = %d",i);
	for(j=0;j<9;j++)
		{
		s1 = (*(str1+0*9+j)+*(str1+15*9+j))%p;
		s2 = (*(str1+3*9+j)+*(str1+12*9+j))%p;
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;

		s2 = *(str1+5*9+j);
		s2 = (4*s2)%p;
		s2 = (p-s2)%p;
    /** change **/
		s1 = (1*s1+1*s2)%p;

/**
        s1 = (*(str1+0*9+j)+*(str1+15*9+j))%p;
**/
		*(str1+t2+9*i+j) = s1;



		s1 = (*(str1+1*9+j)+*(str1+4*9+j))%p;
		s2 = (*(str1+7*9+j)+*(str1+14*9+j))%p;
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
		s1 = (2*s1)%p;

/**
		s1 = *(str1+4*9+j);
		s2 = *(str1+7*9+j);
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
**/
		*(str1+t3+9*i+j) = s1;

		}


	if (f3[i]==1)
		{
		for(j=0;j<3;j++)
			{
			s1 = (*(str1a+0*3+j)+*(str1a+8*3+j))%p;
			s2 = (*(str1a+2*3+j)+*(str1a+6*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;

			s2 = *(str1a+4*3+j);
			s2 = (4*s2)%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			*(str1a+27*c1+9*j+t4) = s1;

			s1 = (*(str1a+1*3+j)+*(str1a+3*3+j))%p;
			s2 = (*(str1a+5*3+j)+*(str1a+7*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			s1 = (2*s1)%p;
			*(str1a+27*c2+9*j+t4) = s1;
			}
		t4 = t4 + 1;
		}
	}
}

void calc4 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p)

/** derived from calc3 **/

{
int i,j;
int c;
int x,y,c6;
integer s,s1,s2;
int f1[13] = {0,0,0,1,1,1,1,2,2,2,2,2,2};
int f2[13] = {0,0,1,0,1,4,5,0,1,2,3,4,5};
int f3[13] = {1,0,0,1,1,0,0,1,1,0,0,1,1};
int t;
int t2,t3,t4;

if (t1<2)
	{
	printf("\n \n error in calc4 t1 < 2");
	t1 = 2;
	}

y = 1;

s = 1;
t2 = 144*c1;
t3 = 144*c2;
t4 = 0;
c = 13;
if (flag3==1)
	{
	c = 2;
	}

printf("\n \n in calc4");
for(i=0;i<c;i++)
	{
	if (i==0)
		{
		s1 = 0;
		}
	if (i>0)
		{
		s1 = s;
		}
	x = (t1-3)+f1[i];

	if (x<0)
		{
		x = t1;
		}
	c6 = f2[i];
	t = exp4d2(e,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
               flag0,x,y,c6,s1,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	printf("\n i = %d",i);
	for(j=0;j<9;j++)
		{
		s1 = (*(str1+0*9+j)+*(str1+15*9+j))%p;
		s2 = (*(str1+3*9+j)+*(str1+12*9+j))%p;
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;

		s2 = *(str1+5*9+j);
		s2 = (4*s2)%p;
		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;

		/** test 42 **/

        s1 = (*(str1+2*9+j))%p;
        s2 = (*(str1+7*9+j))%p;

		*(str1+t2+9*i+j) = (s1+(p-1)*s2)%p;


        /** test 42d **/
/**
        s1 = (*(str1+3*9+j))%p;
        s2 = (*(str1+13*9+j))%p;

		s1 = (s1+0*s2)%p;
		*(str1+t2+9*i+j) = s1;
**/


        /** test 43 **/

		s1 = (*(str1+3*9+j))%p;
		s2 = (*(str1+5*9+j))%p;
		s1 = (s1+s2)%p;
		*(str1+t3+9*i+j) = s1;


        /** test 43d **/
/**
        s1 = (*(str1+0*9+j))%p;
        s2 = (*(str1+12*9+j))%p;

		s2 = (p-s2)%p;
		s1 = (s1+0*s2)%p;
		*(str1+t3+9*i+j) = s1;
**/

		}


	if (f3[i]==1)
		{
		for(j=0;j<3;j++)
			{
			s1 = (*(str1a+0*3+j)+*(str1a+8*3+j))%p;
			s2 = (*(str1a+2*3+j)+*(str1a+6*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;

			s2 = *(str1a+4*3+j);
			s2 = (4*s2)%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			*(str1a+27*c1+9*j+t4) = s1;

			s1 = (*(str1a+1*3+j)+*(str1a+3*3+j))%p;
			s2 = (*(str1a+5*3+j)+*(str1a+7*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			s1 = (2*s1)%p;
			*(str1a+27*c2+9*j+t4) = s1;
			}
		t4 = t4 + 1;
		}
	}
}

void calc3d (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
             integer h11[], integer h12[], integer *str1, integer *str1a,
             integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
             integer ws1[], integer hs1[], integer ws2[], integer hs2[],
             integer hs3[], STRING ptr2, integer b2[], integer p)

{
int i,j;
int c;
int x,y,c6;
integer s,s1,s2;
int f1[13] = {0,0,0,1,1,1,1,2,2,2,2,2,2};
int f2[13] = {0,0,1,0,1,4,5,0,1,2,3,4,5};
int f3[13] = {1,0,0,1,1,0,0,1,1,0,0,1,1};
int t;
int t2,t3,t4;

if (t1<2)
	{
	printf("\n \n error in calc3d t1 < 2");
	t1 = 2;
	}

y = 1;

y = 0;

s = 1;
t2 = 144*c1;
t3 = 144*c2;
t4 = 0;
c = 13;
if (flag3==1)
	{
	c = 2;
	}


for(i=0;i<c;i++)
	{
	if (i==0)
		{
		s1 = 0;
		}
	if (i>0)
		{
		s1 = s;
		}
	x = (t1-3)+f1[i];

	if(y==0)
        {
        x = x + 1;
        }

	if (x<0)
		{
		x = t1;
		}
	c6 = f2[i];
	t = exp4d2(e,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
               flag0,x,y,c6,s1,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	printf("\n in calc3d i = %d",i);
	for(j=0;j<9;j++)
		{
		s1 = (*(str1+0*9+j)+*(str1+12*9+j))%p;
		s2 = (*(str1+3*9+j)+*(str1+15*9+j))%p;

/*
		s1 = (*(str1+0*9+j)+*(str1+3*9+j))%p;
		s2 = (*(str1+12*9+j)+*(str1+15*9+j))%p;
*/



		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
		*(str1+t2+9*i+j) = s1;

		s1 = *(str1+1*9+j);
		s2 = *(str1+13*9+j);

/*
    	s1 = *(str1+4*9+j);
		s2 = *(str1+7*9+j);
*/

		s1 = (s1+s2)%p;
		s1 = (2*s1)%p;
		*(str1+t3+9*i+j) = s1;

		}


	if (f3[i]==1)
		{
		for(j=0;j<3;j++)
			{
			s1 = (*(str1a+0*3+j)+*(str1a+6*3+j))%p;
			s2 = (*(str1a+2*3+j)+*(str1a+8*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			*(str1a+27*c1+9*j+t4) = s1;


			s1 = (*(str1a+1*3+j)+*(str1a+7*3+j))%p;
			s1 = (2*s1)%p;
			*(str1a+27*c2+9*j+t4) = s1;

			}
		t4 = t4 + 1;
		}
	}
}

void calc3k2 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
             integer h11[], integer h12[], integer *str1, integer *str1a,
             integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
             integer ws1[], integer hs1[], integer ws2[], integer hs2[],
             integer hs3[], STRING ptr2, integer b2[], integer p)

{
int i,j;
int c;
int x,y,c6;
integer s,s1,s2;
int f1[13] = {0,0,0,1,1,1,1,2,2,2,2,2,2};
int f2[13] = {0,0,1,0,1,4,5,0,1,2,3,4,5};
int f3[13] = {1,0,0,1,1,0,0,1,1,0,0,1,1};
int t;
int t2,t3,t4;
int flag4;
integer c3;

if (t1<2)
	{
	printf("\n \n error in calc3 t1 < 2");
	t1 = 2;
	}

y = 1;

y = 0;

s = 1;
t2 = 144*c1;
t3 = 144*c2;
t4 = 0;
c = 13;
if (flag3==1)
	{
	c = 2;
	}


for(i=0;i<c;i++)
	{
	if (i==0)
		{
		s1 = 0;
		}
	if (i>0)
		{
		s1 = s;
		}
	x = (t1-3)+f1[i];

	if(y==0)
        {
        x = x + 1;
        }

	if (x<0)
		{
		x = t1;
		}

	c6 = f2[i];
	flag4 = 0;
	c3 = 2;
	t = exp4d3(c3,e,a2,kmax,flag4,h11,h12,str1,str1a,str2,str2a,m2,
               flag0,x,y,c6,s1,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	printf("\n in calc3 i = %d",i);
	for(j=0;j<9;j++)
		{
		s1 = (*(str1+0*9+j)+*(str1+12*9+j))%p;
		s2 = (*(str1+3*9+j)+*(str1+15*9+j))%p;

/*
		s1 = (*(str1+0*9+j)+*(str1+3*9+j))%p;
		s2 = (*(str1+12*9+j)+*(str1+15*9+j))%p;
*/


		s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
		*(str1+t2+9*i+j) = s1;

		s1 = *(str1+1*9+j);
		s2 = *(str1+13*9+j);

/*
    	s1 = *(str1+4*9+j);
		s2 = *(str1+7*9+j);
*/

		s1 = (s1+s2)%p;
		s1 = (2*s1)%p;
		*(str1+t3+9*i+j) = s1;

		}


	if (f3[i]==1)
		{
		for(j=0;j<3;j++)
			{
			s1 = (*(str1a+0*3+j)+*(str1a+6*3+j))%p;
			s2 = (*(str1a+2*3+j)+*(str1a+8*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			*(str1a+27*c1+9*j+t4) = s1;


			s1 = (*(str1a+1*3+j)+*(str1a+7*3+j))%p;
			s1 = (2*s1)%p;
			*(str1a+27*c2+9*j+t4) = s1;

			}
		t4 = t4 + 1;
		}
	}
}



void calc4d (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p)

/** derived from calc3d **/

{
int i,j;
int c;
int x,y,c6;
integer s,s1,s2,s3,s4;
int f1[13] = {0,0,0,1,1,1,1,2,2,2,2,2,2};
int f2[13] = {0,0,1,0,1,4,5,0,1,2,3,4,5};
int f3[13] = {1,0,0,1,1,0,0,1,1,0,0,1,1};
int t;
int t2,t3,t4;

if (t1<2)
	{
	printf("\n \n error in calc4d t1 < 2");
	t1 = 2;
	}

y = 1;

y = 0;

s = 1;
t2 = 144*c1;
t3 = 144*c2;
t4 = 0;
c = 13;
if (flag3==1)
	{
	c = 1;
	}


printf("\n \n in calc4d ");
for(i=0;i<c;i++)
	{
	if (i==0)
		{
		s1 = 0;
		}
	if (i>0)
		{
		s1 = s;
		}
	x = (t1-3)+f1[i];

	if(y==0)
        {
        x = x + 1;
        }

	if (x<0)
		{
		x = t1;
		}
	c6 = f2[i];
	t = exp4d2(e,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
               flag0,x,y,c6,s1,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	printf("\n i = %d",i);
	for(j=0;j<9;j++)
		{

/** test 42 **/

		s1 = (*(str1+2*9+j))%p;
        s2 = (*(str1+7*9+j))%p;

		s2 = (p-s2)%p;
		s1 = (s1+1*s2)%p;
		*(str1+t2+9*i+j) = s1;


/** test 42d **/
/**
        s1 = (*(str1+3*9+j))%p;
        s2 = (*(str1+12*9+j))%p;

        s3 = (*(str1+0*9+j))%p;
        s4 = (*(str1+15*9+j))%p;

        s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
		*(str1+t2+9*i+j) = s1;
**/



/** test 43 **/

        s1 = (*(str1+3*9+j))%p;
		s2 = (*(str1+5*9+j))%p;

        s2 = (p+s2)%p;
		s1 = (s1+s2)%p;
		*(str1+t3+9*i+j) = s1;

/** test 43d **/
/**
        s1 = (*(str1+0*9+j))%p;
        s2 = (*(str1+15*9+j))%p;

        s3 = (*(str1+4*9+j))%p;
        s4 = (*(str1+14*9+j))%p;

        s2 = (p-s2)%p;
		s1 = (s1+s2)%p;
		*(str1+t3+9*i+j) = s1;
**/

		}


	if (f3[i]==1)
		{
		for(j=0;j<3;j++)
			{
			s1 = (*(str1a+0*3+j)+*(str1a+6*3+j))%p;
			s2 = (*(str1a+2*3+j)+*(str1a+8*3+j))%p;
			s2 = (p-s2)%p;
			s1 = (s1+s2)%p;
			*(str1a+27*c1+9*j+t4) = s1;


			s1 = (*(str1a+1*3+j)+*(str1a+7*3+j))%p;
			s1 = (2*s1)%p;
			*(str1a+27*c2+9*j+t4) = s1;

			}
		t4 = t4 + 1;
		}
	}
}

void display16d(unsigned int r, STRING ptr2, integer b1[])

{
int i,j,k;
integer t1;

for(k=0;k<16;k++)
    {
    printf(" %d ",k);
    for(i=0;i<2;i++)
        {
        printf("( ");
        for(j=0;j<8;j++)
            {
            t1 = *(ptr2[r+k]+8*i+j);
            printf(" %d ",t1);
            }
        printf(" ) ");
        }
    printf("  %d \n",b1[k]);
    }
}

void multcnvl2(int l2, int e1, integer k4[], integer k3[], STRING ptr2, integer p)
{
int i,j;
integer t1,t2,t3,t4;

printf("\n \n in multcnvl2 k4 = \n ");
displayh(l2,k4);

for (i=0;i<(l2+1);i++)
    {
    t4 = 0;
    for (j=0;j<(l2+1);j++)
        {
        t1 = *(ptr2[e1+i]+j);
        t2 = k4[j];
        t3 = (t1*t2)%p;
        t4 = (t4+t3)%p;
        }
    k3[i] = t4;
    }
}

void calc12d(integer e, integer a2[], integer k1[], integer k2[], integer p)
{
int i,j;
int e2,t;
int kmax = 40;
integer t1,t2;
integer h11[4] = {0};
integer h12[40] = {0};
integer h14[40] = {0};

/** Make sure that h12[] is array of size >= kmax **/

setzero2(40,h12);

if((e%4)!=0)
	{
	printf("\n \n error in calc12d e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h12[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h12[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in calc12d error in e value");
		t1 = 1;
		}
	}


	i = i-1;
	t = (i+(i%2))/2;

	e2 = i;

    printf("\n \n in calc12d p = %d",p);
    printf("\n in calc12d e = %d e2 = %d",e,e2);

for(j=0;j<t;j++)
	{
	t1 = h12[i-j];
	h12[i-j] = h12[j];
	h12[j] = t1;
	}


printf("\n \n in calc12d h12 = ");
displayh11(h12);

t1 = 4;
for (j=0;j<kmax;j++)
    {
    h14[j] = 0;
    }

for (j=0;j<(e2+1);j++)
    {
    h14[j] = t1;
    if (h12[j]==2)
        {
        t1 = 2*t1;
        }
    if (h12[j]==3)
        {
        t1 = 2*t1+4;
        }
    }

printf("\n \n in calc12d h14 = ");
for (j=0;j<(e2+1);j++)
    {
    printf("\n \n h14[%d] = %d",j,h14[j]);
    }

if (e2<3)
    {
    printf("\n \n error in calc12d e should be greater than or equal to 68");
    }

    k1[0] = 1;
    k1[1] = 2*h14[e2-3];
    k1[2] = h14[e2-2];
    k1[3] = 2*k1[2];
    k1[4] = 2*k1[2];
    k1[5] = 3*k1[2];
    t1 = h14[e2-1];
    k1[6] = t1;
    k1[7] = 2*t1;
    k1[8] = 3*(t1/2);
    k1[9] = 5*(t1/2);
    k1[10] = 2*t1;
    k1[11] = 3*t1;

printf("\n \n");
for(j=0;j<6;j++)
    {
    printf("\n  j = %d  ( %d , %d )",j,k1[2*j],k1[2*j+1]);
    }

/** calculate k2 **/

series(1,3,a2,0,h11,4,p);
k2[0] = h11[0];
k2[1] = h11[1];
for(j=0;j<(e2-3);j++)
    {
    t1 = 2*h14[j];
    t2 = h14[j+1];
    printf("\n \n ========== k2 j = %d  t1 = %d  t2 = %d",j,t1,t2);

    if(t1==t2)
        {
        series(t1,t2,a2,0,h12,4,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k2[0] = (k2[0]+h12[0])%p;
        k2[1] = (k2[1]+h12[1])%p;
        }
    if(t1<t2)
        {
        series(t1+1,t2-1,a2,0,h12,4,p);
        k2[0] = (k2[0]+h12[0])%p;
        k2[1] = (k2[1]+h12[1])%p;
        }
    }

/** test of calculating k2 **/

printf("\n \n");
h12[0] = 0;
h12[1] = 0;
for(j=0;j<(e2-2);j++)
    {
    printf("\n \n ################ %d  %d",h14[j],2*h14[j]);
    series(h14[j],2*h14[j],a2,0,h11,4,p);
    h12[0] = (h12[0]+h11[0])%p;
    h12[1] = (h12[1]+h11[1])%p;
    }
printf("\n \n in calc12d test of calculating k2");
printf("\n \n h12 = ");
displayh(2,h12);
printf("\n \n k2 = ");
displayh(2,k2);
series(k1[0],k1[1],a2,0,h11,4,p);
printf("\n \n h11 = ");
displayh(2,h11);
}

void calc12(integer e, integer a2[], int flag4, integer k1[], integer k2[], integer p)
{
int i,j;
int e2,t;
int kmax = 40;
integer t1,t2;
integer h11[4] = {0};
integer h12[40] = {0};
integer h14[40] = {0};

/** Make sure that h12[] is array of size >= kmax **/

setzero2(40,h12);
if((e%4)!=0)
	{
	printf("\n \n error in calc12 e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h12[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h12[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in calc12 error in e value");
		t1 = 1;
		}
	}

	i = i-1;
	t = (i+(i%2))/2;
	e2 = i;

    if (flag4==1)
        {
        printf("\n \n in calc12 p = %d",p);
        printf("\n in calc12 e = %d e2 = %d",e,e2);
        }

for(j=0;j<t;j++)
	{
	t1 = h12[i-j];
	h12[i-j] = h12[j];
	h12[j] = t1;
	}

if (flag4==1)
    {
    printf("\n \n in calc12 h12 = ");
    displayh11(h12);
    }

t1 = 4;
for (j=0;j<kmax;j++)
    {
    h14[j] = 0;
    }

for (j=0;j<(e2+1);j++)
    {
    h14[j] = t1;
    if (h12[j]==2)
        {
        t1 = 2*t1;
        }
    if (h12[j]==3)
        {
        t1 = 2*t1+4;
        }
    }

if (flag4==1)
    {
    printf("\n \n in calc12 h14 = ");
    for (j=0;j<(e2+1);j++)
        {
        printf("\n \n h14[%d] = %d",j,h14[j]);
        }
    }

if (e2<3)
    {
    printf("\n \n error in calc12 e should be greater than or equal to 68");
    }

    k1[0] = 1;
    k1[1] = 4*h14[e2-2];

/** replaced **/
/**
    t1 = h14[e2];
**/
    t1 = 2*h14[e2-1];

    k1[2] = t1;
    k1[3] = 2*t1;
    k1[4] = 2*t1;
    k1[5] = 3*t1;
    t2 = e-(e%8);
    k1[6] = t2;
    k1[7] = 2*t2;
    k1[8] = 3*(t2/2);
    k1[9] = 5*(t2/2);
    k1[10] = 2*t2;
    k1[11] = 3*t2;

if (flag4==1)
{
printf("\n \n");
for(j=0;j<6;j++)
    {
    printf("\n  j = %d  ( %d , %d )",j,k1[2*j],k1[2*j+1]);
    series(k1[2*j],k1[2*j+1],a2,0,h11,2,p);
    displayh(4,h11);
    }
}

/** calculate k2 **/

series(1,7,a2,0,h11,2,p);
k2[0] = h11[0];
k2[1] = h11[1];
for(j=0;j<(e2-2);j++)
    {
    t1 = 4*h14[j];
    t2 = 2*h14[j+1];
    if (flag4==1)
        {
        printf("\n \n ========== k2 j = %d  t1 = %d  t2 = %d",j,t1,t2);
        }

    if(t1==t2)
        {
        series(t1,t2,a2,0,h12,2,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k2[0] = (k2[0]+h12[0])%p;
        k2[1] = (k2[1]+h12[1])%p;
        }
    if(t1<t2)
        {
        series(t1+1,t2-1,a2,0,h12,2,p);
        k2[0] = (k2[0]+h12[0])%p;
        k2[1] = (k2[1]+h12[1])%p;
        }
    }

/** test of calculating k2 **/

if (flag4==1)
    {
    printf("\n \n");
    h12[0] = 0;
    h12[1] = 0;
    for(j=0;j<e2-1;j++)
        {
        printf("\n \n ################ %d  %d",1*h14[j],2*h14[j]);
        series(2*h14[j],4*h14[j],a2,0,h11,2,p);
        h12[0] = (h12[0]+h11[0])%p;
        h12[1] = (h12[1]+h11[1])%p;
        }
    printf("\n \n in calc12 test of calculating k2");
    printf("\n \n h12 = ");
    displayh(2,h12);
    printf("\n \n k2 = ");
    displayh(2,k2);
    series(k1[0],k1[1],a2,0,h11,2,p);
    printf("\n \n s(1,%d) = ",k1[1]);
    displayh(2,h11);
    }
}

void displayh2(int d, integer h16[])
{
int i;
int e;

    e = (d-(d%2))/2;
	printf(" (");
	for(i=0;i<e;i++)
		{
		printf(" %d ",h16[i]);
		}
	printf(")");

	printf("\n (");
	for(i=e;i<d;i++)
		{
		printf(" %d ",h16[i]);
		}
	printf(")");

}

integer find4(integer g, integer q, integer p)
{
int i,n;
integer q1,t1,t2,s,t;

q1 = q;
i = 0;
if ((q1%4)==0)
    {
    while ((q1%2)==0)
        {
        i = i+1;
        q1 = q1/2;
        }
    }
n = i+1;
t1 = exp1(q1,g,p);
t2 = (t1*t1)%p;
s = sqrt1(p-1,p);
if ((t1!=1)&&(t2!=1))
    {
    i = 0;
    while ((t2!=(p-1))&&(i<n))
        {
        t1 = (t1*t1)%p;
        t2 = (t2*t2)%p;
        i = i+1;
        }
    s = t1;
    }
t = (s*s)%p;
if (t!=(p-1))
    {
    s = 0;
    }

return(s);
}

void displayh11(integer h11[])
{
unsigned int i,j;

for(i=0;i<4;i++)
	{
	printf("(%d)",i);
	for(j=0;j<4;j++)
		{
        printf("%d",h11[4*i+j]);
		}
  printf("   ");
  }
}

void init3(integer flag4, integer a2[], integer c1, integer d[], integer b1[], STRING ptr2, integer p)
{
unsigned int t;
integer i,j;
integer s1;
integer t1,e1;
integer d1,d2,d3,d4,d5,d6;
integer h1[4] = {0};
integer m[225] =   {1,85,1,85,2,0,170,        0,0,        0,0,0,0,0,0,
                    1,-43,1,-43,2,0,-86,      0,0,        0,0,0,0,0,0,

                    1,85,1,85,-2,0,-170,      4,340,      0,0,0,0,0,0,
                    1,-43,1,-43,-2,0,86,      4,-172,     0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        0,-128,0,0,-128,0,

                    0,0,0,0,0,1,0,            0,0,        0,0,1,0,0,1,
                    0,1,0,-1,0,0,0,           0,0,        0,2,0,0,-2,0,

                    3,-1,-3,1,0,0,0,          0,0,        0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        6,0,-2,6,0,-2,

                    3,-1,3,-1,-6,0,2,         -12,4,      0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        12,0,-4,-12,0,4,

                    1,85,-1,-85,0,0,0,        0,0,        0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        2,0,170,2,0,170,

                    1,85,1,85,-2,0,-170,      -4,-340,    0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        4,0,340,-4,0,-340};

    integer b2[15] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(15,b1);
    setzero2(15,b2);

    for(i=0;i<15;i++)
        {
        for(j=0;j<15;j++)
            {
            t1 = m[15*i+j];
            if(t1<0)
                {
                t1 = -t1;
                t1 = t1%p;
                t1 = (p-t1)%p;
                }
            t1 = t1%p;
            set7(t+i,j,t1,ptr2);
            }
        }

    if(flag4==0)
        {
        d1 = 0;
        d2 = 0;
        d3 = 0;
        d4 = 0;
        d5 = 0;
        d6 = 0;
        }

    if(flag4==1)
        {
        series(1,p-1,a2,0,h1,4,p);
        d1 = h1[0];
        series(1,p-1,a2,0,h1,8,p);
        d2 = h1[0];
        e1 = (p-1)/(3*c1);
        series(1,e1,a2,0,h1,4,p);
        d3 = h1[0];
        d4 = h1[1];
        e1 = (p-1)/(6*c1);
        series(1,e1,a2,0,h1,8,p);
        d5 = h1[0];
        d6 = h1[1];
        printf("\n\n d = (%d, %d, %d, %d, %d, %d)",d1,d2,d3,d4,d5,d6);
        }

    d1 = (d1+d[0])%p;
    d2 = (d2+d[1])%p;
    d3 = (d3+d[2])%p;
    d4 = (d4+d[3])%p;
    d5 = (d5+d[4])%p;
    d6 = (d6+d[5])%p;

    b2[0] = (p-1)/3+1;
    b2[1] = 1;
    b2[2] = 1;
    t1 = (p+1)/2;
    b2[3] = ((b2[0]+1)*t1)%p;
    b2[4] = inverse2(p-24,p);
    b2[5] = 0;
    b2[6] = 0;
    b2[7] = (d1+3)%p;
    b2[8] = d1;
    b2[9] = (d2+3)%p;
    b2[10] = d2;
    b2[11] = (d3+1)%p;
    b2[12] = d4;
    b2[13] = (2*d5+1)%p;
    b2[14] = (2*d6)%p;

    if(c1==2)
        {
        b2[0] = (b2[0]+1)*t1%p;
        b2[3] = (b2[3]+1)*t1%p;
        b2[4] = b2[4]*t1%p;
        b2[8] = b2[8]*t1%p;
        b2[7] = (b2[8]+3)%p;
        b2[10] = b2[10]*t1%p;
        b2[9] = (b2[10]+3)%p;
        }

    if(c1==4)
        {
        t1 = inverse2(12,p);
        b2[0] = 11*t1%p;
        t1 = inverse2(2,p);
        b2[3] = (b2[0]+1)*t1%p;
        t1 = inverse2(96,p);
        b2[4] =  p-t1;
        t1 = inverse2(4,p);
        b2[7] = (t1*d1+3)%p;
        b2[8] = (t1*d1)%p;
        }

    	solve2m(15,&ptr2[t],b2,p);
	s1 = det(15,&ptr2[t]);
	setzero2(15,b1);
	l2solve(15,b1,b2,&ptr2[t],p);

}

void init4(integer flag4, integer a2[], integer c1, integer d[], integer b1[], STRING ptr2, integer p)
{
unsigned int t;
integer i,j;
integer s1;
integer t1,e1;
integer d1,d2,d3,d4,d5,d6;
integer h1[4] = {0};
integer m[225] =   {1,-85,1,-85,2,0,-170,     0,0,        0,0,0,0,0,0,
                    1,+43,1,+43,2,0,+86,      0,0,        0,0,0,0,0,0,

                    1,-85,1,-85,-2,0,+170,    4,-340,     0,0,0,0,0,0,
                    1,+43,1,+43,-2,0,-86,     4,+172,     0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        0,+128,0,0,+128,0,

                    0,0,0,0,0,1,0,            0,0,        0,0,1,0,0,1,
                    0,1,0,-1,0,0,0,           0,0,        0,2,0,0,-2,0,

                    3,-1,-3,1,0,0,0,          0,0,        0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        6,0,-2,6,0,-2,

                    3,-1,3,-1,-6,0,2,         +12,+4,     0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        12,0,-4,-12,0,4,

                    1,-85,-1,+85,0,0,0,       0,0,        0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        2,0,-170,2,0,-170,

                    1,-85,1,-85,+2,0,+170,    -4,+340,    0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        4,0,-340,-4,0,+340};

/**
integer m[225] =   {1,85,1,85,2,0,170,        0,0,        0,0,0,0,0,0,
                    1,-43,1,-43,2,0,-86,      0,0,        0,0,0,0,0,0,

                    1,85,1,85,-2,0,-170,      4,340,      0,0,0,0,0,0,
                    1,-43,1,-43,-2,0,86,      4,-172,     0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        0,-128,0,0,-128,0,

                    0,0,0,0,0,1,0,            0,0,        0,0,1,0,0,1,
                    0,1,0,-1,0,0,0,           0,0,        0,2,0,0,-2,0,

                    3,-1,-3,1,0,0,0,          0,0,        0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        6,0,-2,6,0,-2,

                    3,-1,3,-1,-6,0,2,         -12,4,      0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        12,0,-4,-12,0,4,

                    1,85,-1,-85,0,0,0,        0,0,        0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        2,0,170,2,0,170,

                    1,85,1,85,-2,0,-170,      -4,-340,    0,0,0,0,0,0,
                    0,0,0,0,0,0,0,            0,0,        4,0,340,-4,0,-340};
**/

    integer b2[15] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(15,b1);
    setzero2(15,b2);

    for(i=0;i<15;i++)
        {
        for(j=0;j<15;j++)
            {
            t1 = m[15*i+j];
            if(t1<0)
                {
                t1 = -t1;
                t1 = t1%p;
                t1 = (p-t1)%p;
                }
            t1 = t1%p;
            set7(t+i,j,t1,ptr2);
            }
        }

    d1 = 0;
    d2 = 0;
    d3 = 0;
    d4 = 0;
    d5 = 0;
    d6 = 0;
    if(flag4==1)
        {
        series(1,p-1,a2,0,h1,4/1,p);
        d1 = h1[0];
        series(1,p-1,a2,0,h1,8/1,p);
        d2 = h1[0];
        e1 = (p-1)/(3*c1);
        series(1,e1,a2,0,h1,4/1,p);
        d3 = h1[0];
        d4 = h1[1];
        e1 = (p-1)/(6*c1);
        series(1,e1,a2,0,h1,8/1,p);
        d5 = h1[0];
        d6 = h1[1];
        printf("\n\n d = (%d, %d, %d, %d, %d, %d)",d1,d2,d3,d4,d5,d6);
        }

    d1 = (d1+d[0])%p;
    d2 = (d2+d[1])%p;
    d3 = (d3+d[2])%p;
    d4 = (d4+d[3])%p;
    d5 = (d5+d[4])%p;
    d6 = (d6+d[5])%p;

    b2[0] = (p-1)/3+1;
    b2[1] = 1;
    b2[2] = 1;
    t1 = (p+1)/2;
    b2[3] = ((b2[0]+1)*t1)%p;
    b2[4] = inverse2(p-24,p);
    b2[5] = 0;
    b2[6] = 0;
    b2[7] = (d1+3)%p;
    b2[8] = d1;
    b2[9] = (d2+3)%p;
    b2[10] = d2;
    b2[11] = (d3+1)%p;
    b2[12] = d4;
    b2[13] = (2*d5+1)%p;
    b2[14] = (2*d6)%p;

    if(c1==2)
        {
        b2[0] = (b2[0]+1)*t1%p;
        b2[3] = (b2[3]+1)*t1%p;
        b2[4] = b2[4]*t1%p;
        b2[8] = b2[8]*t1%p;
        b2[7] = (b2[8]+3)%p;
        b2[10] = b2[10]*t1%p;
        b2[9] = (b2[10]+3)%p;
        }

    if(c1==4)
        {
        t1 = inverse2(12,p);
        b2[0] = 11*t1%p;
        t1 = inverse2(2,p);
        b2[3] = (b2[0]+1)*t1%p;
        t1 = inverse2(96,p);
        b2[4] =  p-t1;
        t1 = inverse2(4,p);
        b2[7] = (t1*d1+3)%p;
        b2[8] = (t1*d1)%p;
        }

    solve2m(15,&ptr2[t],b2,p);
    s1 = det(15,&ptr2[t]);

    setzero2(15,b1);
    l2solve(15,b1,b2,&ptr2[t],p);

    printf("\n \n \n \n in init4 det = %d",s1);
    printf("\n \n in init4 b1 = ");
    displayh(15,b1);
}

integer calc42(integer e, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[], integer q, integer p)
{
int i,j;
int e2,e3,e4,t;
int kmax = 40;
integer t1,t2;
integer q1;
integer h11[4] = {0};
integer h12[40] = {0};
integer h14[40] = {0};
integer h15[6] = {0};

/** Make sure that h12[] is array of size >= kmax **/

setzero2(40,h12);

if((e%4)!=0)
	{
	printf("\n \n error in calc42 e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h12[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h12[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in calc42 error in e value");
		t1 = 1;
		}
	}


	i = i-1;
	t = (i+(i%2))/2;

	e2 = i;

    printf("\n \n in calc42 p = %d",p);
    printf("\n in calc42 e = %d e2 = %d",e,e2);

for(j=0;j<t;j++)
	{
	t1 = h12[i-j];
	h12[i-j] = h12[j];
	h12[j] = t1;
	}

printf("\n \n in calc42 h12 = ");
displayh11(h12);

t1 = 4;
t1 = (p-1)/3;
t1 = 2*(t1+4);
for (j=0;j<kmax;j++)
    {
    h14[j] = 0;
    }

for (j=0;j<(e2+1);j++)
    {
    h14[j] = t1;
    if (h12[j]==2)
        {
        t1 = 2*t1;
        }
    if (h12[j]==3)
        {
        t1 = 2*t1+8;
        }
    }

printf("\n \n in calc42 h14 = ");
for (j=0;j<(e2+1);j++)
    {
    printf("\n \n h14[%d] = %d",j,h14[j]);
    }

e4 = h14[e2+1]+4;
t1 = (p-1)/3;
if (e4%t1!=0)
    {
    e4 = e4+4;
    }

if (e2<3)
    {
    printf("\n \n error in calc42 e should be greater than or equal to 68");
    }

    e3 = e2+1;
    k41[0] = h14[0];
    k41[1] = 2*h14[e3-4];
    k41[2] = h14[e3-3];
    k41[3] = 2*k41[1];
    k41[4] = 2*k41[1];
    k41[5] = 3*k41[1];
    t1 = h14[e3-2];
    k41[6] = t1;
    k41[7] = 2*t1;
    k41[8] = 3*(t1/2);
    k41[9] = 5*(t1/2);
    k41[10] = 2*t1;
    k41[11] = 3*t1;

printf("\n \n");
for(j=0;j<6;j++)
    {
    printf("\n  j = %d  ( %d , %d )",j,k41[2*j],k41[2*j+1]);
    }

/** calculate k40 **/
k40[0] = 0;
k40[1] = 0;
k40[2] = 0;
k40[3] = 0;
k40[4] = 0;
k40[5] = 0;
for(j=0;j<(e2-3);j++)
    {
    t1 = 2*h14[j];
    t2 = h14[j+1];
    printf("\n \n ========== k2 j = %d  t1 = %d  t2 = %d",j,t1,t2);

    if(t1==t2)
        {
        series(t1,t2,a2,0,h12,4,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[0] = (k40[0]+h12[0])%p;
        k40[1] = (k40[1]+h12[1])%p;
        printf("\n \n --------------------------- h12 = ");
        displayh(4,h12);

        series(t1,t2,a5,0,h12,4,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[2] = (k40[2]+h12[0])%p;
        k40[3] = (k40[3]+h12[1])%p;

        series(t1,t2,a6,0,h12,4,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[4] = (k40[4]+h12[0])%p;
        k40[5] = (k40[5]+h12[1])%p;
        }
    if(t1<t2)
        {
        series(t1+1,t2-1,a2,0,h12,4,p);
        k40[0] = (k40[0]+h12[0])%p;
        k40[1] = (k40[1]+h12[1])%p;
        printf("\n \n --------------------------- h12 = ");
        displayh(4,h12);

        series(t1+1,t2-1,a5,0,h12,4,p);
        k40[2] = (k40[2]+h12[0])%p;
        k40[3] = (k40[3]+h12[1])%p;

        series(t1+1,t2-1,a6,0,h12,4,p);
        k40[4] = (k40[4]+h12[0])%p;
        k40[5] = (k40[5]+h12[1])%p;
        }
    }

/** test of calculating k40 **/

printf("\n \n");
h12[0] = 0;
h12[1] = 0;
h12[2] = 0;
h12[3] = 0;
h12[4] = 0;
h12[5] = 0;
for(j=0;j<(e2-2);j++)
    {
    printf("\n \n ## %d  %d",h14[j],2*h14[j]);
    series(h14[j],2*h14[j],a2,0,h11,4,p);
    printf("  ");
    displayh(4,h11);
    h12[0] = (h12[0]+h11[0])%p;
    h12[1] = (h12[1]+h11[1])%p;

    series(h14[j],2*h14[j],a5,0,h11,4,p);
    printf("  ");
    displayh(4,h11);
    h12[2] = (h12[2]+h11[0])%p;
    h12[3] = (h12[3]+h11[1])%p;

    series(h14[j],2*h14[j],a6,0,h11,4,p);
    printf("  ");
    displayh(4,h11);
    h12[4] = (h12[4]+h11[0])%p;
    h12[5] = (h12[5]+h11[1])%p;
    }

printf("\n \n in calc42 test of calculating k40");
printf("\n \n h12 = ");
displayh(6,h12);
printf("\n \n k40 = ");
displayh(6,k40);
series(k41[0],k41[1],a2,0,h11,4,p);
h15[0] = h11[0];
h15[1] = h11[1];
series(k41[0],k41[1],a5,0,h11,4,p);
h15[2] = h11[0];
h15[3] = h11[1];
series(k41[0],k41[1],a6,0,h11,4,p);
h15[4] = h11[0];
h15[5] = h11[1];
printf("\n \n h15 = ");
displayh(6,h15);

t1 = h14[e2]+4;
q1 = q/12;
if ((t1%q1)!=0)
    {
    t1 = t1+4;
    }
return(t1);
}

integer calc42d(integer e, integer e1, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[], integer q, integer p)
{
int i,j;
int e2,e3,e4,t;
int kmax = 40;
integer t1,t2;
integer q1;
integer h11[4] = {0};
integer h12[40] = {0};
integer h14[40] = {0};
integer h15[6] = {0};

/** Make sure that h12[] is array of size >= kmax **/

setzero2(40,h12);

if((e%4)!=0)
	{
	printf("\n \n error in calc42d e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h12[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h12[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in calc42d error in e value");
		t1 = 1;
		}
	}

    printf("\n \n in calc42d ^^^^^^^^^^^ e = %d     h12 = ",e);
    displayh11(h12);
	
    i = i-1;
    t = (i+(i%2))/2;
    e2 = i;

    printf("\n \n in calc42d p = %d",p);
    printf("\n in calc42d e = %d e2 = %d",e,e2);

for(j=0;j<t;j++)
	{
	t1 = h12[i-j];
	h12[i-j] = h12[j];
	h12[j] = t1;
	}

printf("\n \n in calc42d h12 = ");
displayh11(h12);

t1 = 4;

/**
t1 = (p-1)/12;
**/

t1 = e1;
t1 = 2*(t1+4);
for (j=0;j<kmax;j++)
    {
    h14[j] = 0;
    }

for (j=0;j<(e2+1);j++)
    {
    h14[j] = t1;
    if (h12[j]==2)
        {
        t1 = 2*t1;
        }
    if (h12[j]==3)
        {
        t1 = 2*t1+8;
        }
    }

printf("\n \n in calc42d h14 = ");
for (j=0;j<(e2+1);j++)
    {
    printf("\n \n h14[%d] = %d",j,h14[j]);
    }

e4 = h14[e2+1]+4;
t1 = (p-1)/3;
if (e4%t1!=0)
    {
    e4 = e4+4;
    }

/**
	for(j=0;j<(e2+1);j++)
		{
		a[j] = h11[j]-2;
		}
**/

if (e2<3)
    {
    printf("\n \n error in calc42d e should be greater than or equal to 68");
    }

    e3 = e2+1;
    k41[0] = h14[0];
    k41[1] = 2*h14[e3-4];
    k41[2] = h14[e3-3];
    k41[3] = 2*k41[2];
    k41[4] = 2*k41[2];
    k41[5] = 3*k41[2];
    t1 = h14[e3-2];
    k41[6] = t1;
    k41[7] = 2*t1;
    k41[8] = 3*(t1/2);
    k41[9] = 5*(t1/2);
    k41[10] = 2*t1;
    k41[11] = 3*t1;

printf("\n \n");
for(j=0;j<6;j++)
    {
    printf("\n  j = %d  ( %d , %d )",j,k41[2*j],k41[2*j+1]);
    }


/** calculate k40 **/
k40[0] = 0;
k40[1] = 0;
k40[2] = 0;
k40[3] = 0;
k40[4] = 0;
k40[5] = 0;
for(j=0;j<(e2-3);j++)
    {
    t1 = 2*h14[j];
    t2 = h14[j+1];
    printf("\n \n ========== k2 j = %d  t1 = %d  t2 = %d",j,t1,t2);

    if(t1==t2)
        {
        series(t1,t2,a2,0,h12,4,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[0] = (k40[0]+h12[0])%p;
        k40[1] = (k40[1]+h12[1])%p;
        printf("\n \n --------------------------- h12 = ");
        displayh(4,h12);

        series(t1,t2,a5,0,h12,4,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[2] = (k40[2]+h12[0])%p;
        k40[3] = (k40[3]+h12[1])%p;

        series(t1,t2,a6,0,h12,4,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[4] = (k40[4]+h12[0])%p;
        k40[5] = (k40[5]+h12[1])%p;
        }
    if(t1<t2)
        {
        series(t1+1,t2-1,a2,0,h12,4,p);
        k40[0] = (k40[0]+h12[0])%p;
        k40[1] = (k40[1]+h12[1])%p;
        printf("\n \n --------------------------- h12 = ");
        displayh(4,h12);

        series(t1+1,t2-1,a5,0,h12,4,p);
        k40[2] = (k40[2]+h12[0])%p;
        k40[3] = (k40[3]+h12[1])%p;

        series(t1+1,t2-1,a6,0,h12,4,p);
        k40[4] = (k40[4]+h12[0])%p;
        k40[5] = (k40[5]+h12[1])%p;
        }
    }

/** test of calculating k40 **/

printf("\n \n");
h12[0] = 0;
h12[1] = 0;
h12[2] = 0;
h12[3] = 0;
h12[4] = 0;
h12[5] = 0;
for(j=0;j<(e2-2);j++)
    {
    printf("\n \n ## %d  %d",h14[j],2*h14[j]);
    series(h14[j],2*h14[j],a2,0,h11,4,p);
    printf("  ");
    displayh(4,h11);
    h12[0] = (h12[0]+h11[0])%p;
    h12[1] = (h12[1]+h11[1])%p;

    series(h14[j],2*h14[j],a5,0,h11,4,p);
    printf("  ");
    displayh(4,h11);
    h12[2] = (h12[2]+h11[0])%p;
    h12[3] = (h12[3]+h11[1])%p;

    series(h14[j],2*h14[j],a6,0,h11,4,p);
    printf("  ");
    displayh(4,h11);
    h12[4] = (h12[4]+h11[0])%p;
    h12[5] = (h12[5]+h11[1])%p;
    }

printf("\n \n in calc42 test of calculating k40");
printf("\n \n h12 = ");
displayh(6,h12);
printf("\n \n k40 = ");
displayh(6,k40);
series(k41[0],k41[1],a2,0,h11,4,p);
h15[0] = h11[0];
h15[1] = h11[1];
series(k41[0],k41[1],a5,0,h11,4,p);
h15[2] = h11[0];
h15[3] = h11[1];
series(k41[0],k41[1],a6,0,h11,4,p);
h15[4] = h11[0];
h15[5] = h11[1];
printf("\n \n h15 = ");
displayh(6,h15);

t1 = h14[e2]+4;
q1 = q/12;
if ((t1%q1)!=0)
    {
    t1 = t1+4;
    }
return(t1);
}

integer calc42k(integer e, integer e1, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[], integer q, integer p)
{
int i,j;
int e2,e3,e4,t;
int kmax = 40;
integer t1,t2;
integer q1;
integer h11[4] = {0};
integer h12[40] = {0};
integer h14[40] = {0};
integer h15[6] = {0};

/** Make sure that h12[] is array of size >= kmax **/

setzero2(40,h12);

if((e%4)!=0)
	{
	printf("\n \n error in calc42k e mod 4 must equal 0");
	}

t1 = e/4;
i = 0;
while(t1!=1)
	{
	if((t1%2)==1)
		{
		t1 = (t1-1)/2;
		h12[i] = 1+2;
		}
	else if((t1%2)==0)
		{
		t1 = t1/2;
		h12[i] = 0+2;
		}
	i = i + 1;
	if(i>kmax)
		{
		printf("\n \n in calc42k error in e value");
		t1 = 1;
		}
	}

    printf("\n \n in calc42k ^^^^^^^^^^^ e = %d     \n \n h12 = ",e);
    displayh11(h12);

	i = i-1;
	t = (i+(i%2))/2;

	e2 = i;

    printf("\n \n in calc42k p = %d",p);
    printf("\n \n in calc42k e = %d e2 = %d",e,e2);

for(j=0;j<t;j++)
	{
	t1 = h12[i-j];
	h12[i-j] = h12[j];
	h12[j] = t1;
	}
	
printf("\n \n in calc42k h12 = ");
displayh11(h12);

t1 = 4;

t1 = e1;
t1 = 2*(t1+4);
for (j=0;j<kmax;j++)
    {
    h14[j] = 0;
    }

for (j=0;j<(e2+1);j++)
    {
    h14[j] = t1;
    if (h12[j]==2)
        {
        t1 = 2*t1;
        }
    if (h12[j]==3)
        {
        t1 = 2*t1+8;
        }
    }

printf("\n \n in calc42k h14 = ");
for (j=0;j<(e2+1);j++)
    {
    printf("\n \n h14[%d] = %d",j,h14[j]);
    }

e4 = h14[e2+1]+4;
t1 = (p-1)/3;
if (e4%t1!=0)
    {
    e4 = e4+4;
    }


/**
	for(j=0;j<(e2+1);j++)
		{
		a[j] = h11[j]-2;
		}
**/

if (e2<3)
    {
    printf("\n \n error in calc42k e should be greater than or equal to 68");
    }

    e3 = e2+1;
    k41[0] = h14[0];
    k41[1] = 2*h14[e3-3];
    k41[2] = h14[e3-2];
    k41[3] = 2*k41[2];
    k41[4] = 2*k41[2];
    k41[5] = 3*k41[2];
    t1 = h14[e3-1];
    k41[6] = t1;
    k41[7] = 2*t1;
    k41[8] = 3*(t1/2);
    k41[9] = 5*(t1/2);
    k41[10] = 2*t1;
    k41[11] = 3*t1;

printf("\n \n");
for(j=0;j<6;j++)
    {
    printf("\n  j = %d  ( %d , %d )",j,k41[2*j],k41[2*j+1]);
    }

/** calculate k40 **/
k40[0] = 0;
k40[1] = 0;
k40[2] = 0;
k40[3] = 0;
k40[4] = 0;
k40[5] = 0;
for(j=0;j<(e2-2);j++)
    {
    t1 = 2*h14[j];
    t2 = h14[j+1];
    printf("\n \n ========== k2 j = %d  t1 = %d  t2 = %d",j,t1,t2);

    if(t1==t2)
        {
        series(t1,t2,a2,0,h12,2,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[0] = (k40[0]+h12[0])%p;
        k40[1] = (k40[1]+h12[1])%p;
        printf("\n \n --------------------------- h12 = ");
        displayh(4,h12);

        series(t1,t2,a5,0,h12,2,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[2] = (k40[2]+h12[0])%p;
        k40[3] = (k40[3]+h12[1])%p;

        series(t1,t2,a6,0,h12,2,p);
        h12[0] = (p-h12[0])%p;
        h12[1] = (p-h12[1])%p;
        k40[4] = (k40[4]+h12[0])%p;
        k40[5] = (k40[5]+h12[1])%p;
        }
    if(t1<t2)
        {
        series(t1+1,t2-1,a2,0,h12,2,p);
        k40[0] = (k40[0]+h12[0])%p;
        k40[1] = (k40[1]+h12[1])%p;
        printf("\n \n --------------------------- h12 = ");
        displayh(4,h12);

        series(t1+1,t2-1,a5,0,h12,2,p);
        k40[2] = (k40[2]+h12[0])%p;
        k40[3] = (k40[3]+h12[1])%p;

        series(t1+1,t2-1,a6,0,h12,2,p);
        k40[4] = (k40[4]+h12[0])%p;
        k40[5] = (k40[5]+h12[1])%p;

        }

    }

/** test of calculating k40 **/

printf("\n \n");
h12[0] = 0;
h12[1] = 0;
h12[2] = 0;
h12[3] = 0;
h12[4] = 0;
h12[5] = 0;
for(j=0;j<(e2-1);j++)
    {
    printf("\n \n ## %d  %d",h14[j],2*h14[j]);
    series(h14[j],2*h14[j],a2,0,h11,2,p);
    printf("  ");
    displayh(4,h11);
    h12[0] = (h12[0]+h11[0])%p;
    h12[1] = (h12[1]+h11[1])%p;

    series(h14[j],2*h14[j],a5,0,h11,2,p);
    printf("  ");
    displayh(4,h11);
    h12[2] = (h12[2]+h11[0])%p;
    h12[3] = (h12[3]+h11[1])%p;

    series(h14[j],2*h14[j],a6,0,h11,2,p);
    printf("  ");
    displayh(4,h11);
    h12[4] = (h12[4]+h11[0])%p;
    h12[5] = (h12[5]+h11[1])%p;
    }

printf("\n \n in calc42k test of calculating k40");
printf("\n \n h12 = ");
displayh(6,h12);
printf("\n \n k40 = ");
displayh(6,k40);
series(k41[0],k41[1],a2,0,h11,2,p);
h15[0] = h11[0];
h15[1] = h11[1];
series(k41[0],k41[1],a5,0,h11,2,p);
h15[2] = h11[0];
h15[3] = h11[1];
series(k41[0],k41[1],a6,0,h11,2,p);
h15[4] = h11[0];
h15[5] = h11[1];
printf("\n \n h15 = ");
displayh(6,h15);


t1 = h14[e2]+4;
q1 = q/12;
if ((t1%q1)!=0)
    {
    t1 = t1+4;
    }
return(t1);

}


void fn60k(int c1, int c2, int t1, int t2, integer a2[], integer a3[], long int d1, integer p)
{
integer a4[2] = {0,0};
integer h11[4] = {0};
integer h12[4] = {0};

a3[0] = 0;
a3[1] = 0;
if (c1<t1)
    {
    series20(c1,t1-1,a2,h11,d1,p);
    a3[0] = (p-h11[0])%p;
    a3[1] = (p-h11[1])%p;
    }

if (c1>t1)
    {
    series20(t1,c1-1,a2,h11,d1,p);
    a3[0] = h11[0];
    a3[1] = h11[1];
    }

if (c2<t2)
    {
    series20(c2+1,t2,a2,h11,d1,p);
    a4[0] = h11[0];
    a4[1] = h11[1];
    }

if (c2>t2)
    {
    series20(t2+1,c2,a2,h11,d1,p);
    a4[0] = (p-h11[0])%p;
    a4[1] = (p-h11[1])%p;
    }

a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
}



void calc19d(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer c,s;
integer a3[2] = {0};
integer a4[2] = {0};

	exp7(e,a2,a3,p);
	exp7(e,a3,a4,p);
	exp7(c1/2,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc19d(%d) a3 = ",c1);
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

    c = a3[0];
    s = a3[1];
	calc6(m2,8,c1-1,ptr2,h11,str1,p);
	calc6(m2,8,c1,ptr2,h12,str1,p);
	mult12(c,s,h11,h12,hs1,p);
	mult12((p-s)%p,c,h11,h12,&hs1[60],p);

	calc6(m2,9,c1-1,ptr2,h11,str1,p);
	calc6(m2,9,c1,ptr2,h12,str1,p);
	mult12(c,s,h11,h12,&hs1[30],p);
    mult12((p-s)%p,c,h11,h12,&hs1[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc19d");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }
        }

}


void calc19k(int m2, integer e, int c1, int flag4, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer c,s;
integer t,t1,t2;
integer a3[2] = {0};
integer a4[2] = {0};



	exp7(e,a2,a3,p);
	exp7(e,a3,a4,p);
	exp7(c1/2,a4,a3,p);

    if (flag4==1)
        {
        printf("\n \n in calc19k(%d) a3 = ",c1);
        printf("  (%d",a3[0]);
        printf(" , %d)",a3[1]);
        }

	if (c1==0)
        {
        calc6(m2,8,0,ptr2,hs1,str1,p);
        calc6(m2,9,0,ptr2,&hs1[30],str1,p);

        for(i=0;i<15;i++)
            {
            hs1[i+60] = 0;
            hs1[i+90] = 0;
            }

        exp7(e,a2,a3,p);
        exp7(e/2,a3,a4,p);
        c = (p+a4[0])%p;
        s = (p+a4[1])%p;
        if (flag4==1)
            {
            printf("\n \n in calc19k c,s = %d %d",c,s);
            }

        mult12(c,s,hs1,&hs1[30],h11,p);
        mult12((p-s)%p,c,hs1,&hs1[30],h12,p);
        mult12(1,0,h11,h12,hs1,p);
        mult12(0,1,h11,h12,&hs1[30],p);

        mult12(c,s,&hs1[60],&hs1[90],h11,p);
        mult12((p-s)%p,c,&hs1[60],&hs1[90],h12,p);
        mult12(1,0,h11,h12,&hs1[60],p);
        mult12(0,1,h11,h12,&hs1[90],p);
        }

    if ((c1==2)||(c1==4)||(c1==6)||(c1==8))
        {

        c = a3[0];
        s = a3[1];
        t = 1;
        calc6(m2,8,c1-1,ptr2,h11,str1,p);
        calc6(m2,8,c1,ptr2,h12,str1,p);
        mult12((t*c)%p,(t*s)%p,h11,h12,hs1,p);
        mult12(s,(p-c)%p,h11,h12,&hs1[60],p);

        t = 1;
        calc6(m2,9,c1-1,ptr2,h11,str1,p);
        calc6(m2,9,c1,ptr2,h12,str1,p);
        mult12(c,s,h11,h12,&hs1[30],p);
        mult12(s,(p-c)%p,h11,h12,&hs1[90],p);

        exp7(e,a2,a3,p);
        exp7(e/2,a3,a4,p);
        c = (p+a4[0])%p;
        s = (p+a4[1])%p;
        if (flag4==1)
            {
            printf("\n \n in calc19k c,s = %d %d",c,s);
            }

        mult12(c,s,hs1,&hs1[30],h11,p);
        mult12((p-s)%p,c,hs1,&hs1[30],h12,p);
        mult12(1,0,h11,h12,hs1,p);
        mult12(0,1,h11,h12,&hs1[30],p);

        mult12(c,s,&hs1[60],&hs1[90],h11,p);
        mult12((p-s)%p,c,&hs1[60],&hs1[90],h12,p);
        mult12(1,0,h11,h12,&hs1[60],p);
        mult12(0,1,h11,h12,&hs1[90],p);
        }


    if (flag4==1)
        {
        printf("\n \n in calc19k");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }
        }
}

void equation4(integer e4, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[],
               integer k42[], integer q, integer p)
{
int i;
int flag4;
integer e;
integer t1,t2,t3,t4;
integer s1,s2,s3,s4;
integer c1,c2,c3,c4,c5,c6;
integer q1;
integer a3[2] = {0};
integer a4[2] = {0};
integer h1[4] = {0};
integer s[6] = {0,0,0,0,0,0};

q1 = q/4;
printf("\n \n beginning of equation4");
printf("\n \n in equation4 q = %d  q1 = %d",q,q1);


t1 = (p+k40[0])%p;
s[0] = (k42[0]+t1)%p;
t1 = (p+k40[2])%p;
s[1] = (k42[2]+t1)%p;
t1 = (p+k40[4])%p;
s[2] = (k42[4]+t1)%p;

t1 = (p+k40[1])%p;
s[3] = (k42[1]+t1)%p;
t1 = (p+k40[3])%p;
s[4] = (k42[3]+t1)%p;
t1 = (p+k40[5])%p;
s[5] = (k42[5]+t1)%p;

printf("\n \n in equation 4 s = ");
displayh(6,s);

t1 = q/12;
t2 = e4%t1;
t3 = t1-t2;
if (t2<t3)
    {
    e = e4-t2;
    }
if (t2>t3)
    {
    e = e4+t3;
    }

e = e4/4;
printf("\n \n in equation 4 t1 = %d  e4 = %d  e = %d",t1,e4,e);

c1 = 2*(q/3);
c2 = e;
c3 = 2*e;
c4 = 3*e;
c5 = 2*e;
c6 = 4*e;

fn60k(k41[0],k41[1],c1,c2,a2,a3,4,p);
fn60k(k41[4],k41[5],c3,c4,a2,a4,4,p);
a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
fn60k(k41[6],k41[7],c5,c6,a2,a4,4,p);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
s[0] = (s[0]+a3[0])%p;
s[3] = (s[3]+a3[1])%p;

fn60k(k41[0],k41[1],c1,c2,a5,a3,4,p);
fn60k(k41[4],k41[5],c3,c4,a5,a4,4,p);
a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
fn60k(k41[6],k41[7],c5,c6,a5,a4,4,p);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
s[1] = (s[1]+a3[0])%p;
s[4] = (s[4]+a3[1])%p;

fn60k(k41[0],k41[1],c1,c2,a6,a3,4,p);
fn60k(k41[4],k41[5],c3,c4,a6,a4,4,p);
a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
fn60k(k41[6],k41[7],c5,c6,a6,a4,4,p);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
a3[0] = (a3[0]+a4[0])%p;
a3[1] = (a3[1]+a4[1])%p;
s[2] = (s[2]+a3[0])%p;
s[5] = (s[5]+a3[1])%p;

printf("\n \n in equation4 s = ");
displayh(6,s);

if ((q1%4)==3)
    {
    printf("\n \n in equation4 q1 = %d",q1);

/**
    t1 = a4[0];
    t2 = a4[1];
    set7(t,0,t1,ptr2);
    set7(t,4,t1,ptr2);
    set7(t,1,t2,ptr2);
    set7(t,5,t2,ptr2);
    set7(t,9,p-1,ptr2);
    set7(t,11,1,ptr2);
**/

    }
}

void equation4d(integer e4, integer a2[], integer s1, integer s2, integer k40[], integer k41[],
                integer a3[], integer q, integer p)
{
int i;
int flag4;
integer e;
integer t1,t2,t3,t4;
integer c1,c2;
integer q1;
integer a4[2] = {0};
integer a5[2] = {0};
integer h1[4] = {0};
integer s[2] = {0,0};

q1 = q/2;
printf("\n \n beginning of equation4d");
printf("\n \n in equation4d q = %d  q1 = %d",q,q1);

printf("\n \n in equation4d k40 = ");
displayh(6,k40);


t1 = (p-k40[0])%p;
t1 = (4*t1)%p;
s[0] = (s1+t1)%p;
t1 = (p-k40[1])%p;
t1 = (4*t1)%p;
s[1] = (s2+t1)%p;

printf("\n \n in equation4d (1) s = ");
displayh(2,s);

t1 = q/18;
e = e4/4;
printf("\n \n in equation4d t1 = %d  e4 = %d",t1,e4);

/** 1 **/
c1 = 1;
c2 = t1;
fn60k(k41[0],k41[1],c1,c2,a2,a4,2,p);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
a4[0] = (4*a4[0])%p;
a4[1] = (4*a4[1])%p;
s[0] = (s[0]+a4[0])%p;
s[1] = (s[1]+a4[1])%p;
printf("\n \n in equation4d (2) s = ");
displayh(2,s);


/** 2 **/
c1 = t1+1;
c2 = 2*t1;
fn60k(k41[2],k41[3],c1,c2,a2,a4,2,p);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
a4[0] = (4*a4[0])%p;
a4[1] = (4*a4[1])%p;
s[0] = (s[0]+a4[0])%p;
s[1] = (s[1]+a4[1])%p;
printf("\n \n in equation4d (3) s = ");
displayh(2,s);


/** 3 **/
c1 = 2*t1+1;
c2 = 3*t1;
fn60k(k41[4],k41[5],c1,c2,a2,a4,2,p);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
a4[0] = (2*a4[0])%p;
a4[1] = (2*a4[1])%p;
s[0] = (s[0]+a4[0])%p;
s[1] = (s[1]+a4[1])%p;
printf("\n \n in equation4d (4) s = ");
displayh(2,s);


/** 4 **/
c1 = 2*t1+1;
c2 = 4*t1;
fn60k(k41[6],k41[7],c1,c2,a2,a4,2,p);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
a4[0] = (1*a4[0])%p;
a4[1] = (1*a4[1])%p;
s[0] = (s[0]+a4[0])%p;
s[1] = (s[1]+a4[1])%p;
printf("\n \n in equation4d (5) s = ");
displayh(2,s);

}

void calc7(int m2, int c1, int d1, STRING ptr2, integer h12[], integer *str1, integer p)
{
int i,j;
integer s1,s2,s3;
int t1,t2;
integer m81[81] = {0,0,0,0,64,0,64,0,0,
                   16,0,-16,0,-16,0,16,0,0,

                   p-2,0,2,0,10,0,6,0,0,

                   0,0,0,24,0,16,0,-8,0,

                   0,0,0,0,256,0,p-256,0,0,
                   0,0,0,0,256,0,256,0,0,

                   0,0,256,0,0,0,0,0,0,
                   0,0,80,0,-160,0,16,0,0,
                   0,0,0,80,0,-160,0,16,0
                   };

setzero2(40,h12);
setzero2a(m2,150,161,ptr2);

	t1 = 144*c1;
	for(i=0;i<16;i++)
		{
		s3 = 0;
		for(j=0;j<9;j++)
			{
			t2 = t1+9*i;
			/**
			s1 = m80[9*d1+j];
			**/
			s1 = m81[9*d1+j];
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

void calc5(integer h20[], integer h21[], integer h22[], integer p)
{
int i;
integer s1,s2,s3;


        s1 = h20[0];
        h21[0] = s1;
        s1 = p-s1;
        for(i=1;i<13;i++)
            {
            h21[i] = (h20[i]+s1)%p;
            }

        h22[0] = h21[0];
        s1 = h21[1];
        s2 = h21[11];
        h22[1] = (s1+s2)%p;
        s1 = h21[2];
        s2 = h21[12];
        h22[2] = (s1+s2)%p;

        s1 = h21[3];
        s2 = h21[9];
        s3 = h21[11];
        s1 = (s1+s2)%p;
        h22[3] = (s1+s3)%p;
        s1 = h21[4];
        s2 = h21[10];
        s3 = h21[12];
        s1 = (s1+s2)%p;
        h22[4] = (s1+s3)%p;

        s1 = h21[5];
        s2 = (2*h21[7])%p;
        s3 = h21[9];
        s1 = (s1+s2)%p;
        h22[5] = (s1+s3)%p;
        s1 = h21[6];
        s2 = (2*h21[8])%p;
        s3 = h21[10];
        s1 = (s1+s2)%p;
        h22[6] = (s1+s3)%p;

        for(i=7;i<13;i++)
            {
            h22[i] = 0;
            }
}

void calc5d(integer h20[], integer h21[], integer h22[], integer p)
{
int i;
integer s1,s2,s3;


        s1 = h20[0];
        h21[0] = s1;
        s1 = p-s1;
        for(i=1;i<13;i++)
            {
            h21[i] = (h20[i]+s1)%p;
            }

        h22[0] = h21[0];
        h22[1] = h21[1];
        h22[2] = h21[2];

        h22[3] = h21[3];
        h22[4] = h21[4];

        h22[5] = (h21[5]+h21[7])%p;
        h22[6] = (h21[6]+h21[8])%p;

        s1 = (h21[7]+h21[9])%p;
        h22[7] = (h21[11]+s1)%p;
        s1 = (h21[8]+h21[10])%p;
        h22[8] = (h21[12]+s1)%p;

        h22[9] = (h21[9]+h21[11])%p;
        h22[10] = (h21[10]+h21[12])%p;

        h22[11] = 0;
        h22[12] = 0;
}

void calc19k4(int m2, integer c1, int flag4, STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer hs3[], integer p)
{
int i,j;
integer t,t1,t2;

    calc6(m2,8,1,ptr2,hs1,str1,p);
    calc6(m2,8,3,ptr2,&hs1[30],str1,p);
    calc6(m2,8,7,ptr2,&hs1[60],str1,p);
    mult12(1,1,hs1,&hs1[30],&hs1[90],p);
    mult12(1,1,&hs1[60],&hs1[90],hs2,p);

    calc6(m2,9,1,ptr2,hs1,str1,p);
    calc6(m2,9,3,ptr2,&hs1[30],str1,p);
    calc6(m2,9,7,ptr2,&hs1[60],str1,p);
    mult12(1,1,hs1,&hs1[30],&hs1[90],p);
    mult12(1,1,&hs1[60],&hs1[90],&hs2[30],p);

    calc6(m2,8,2,ptr2,hs1,str1,p);
    calc6(m2,8,4,ptr2,&hs1[30],str1,p);
    calc6(m2,8,8,ptr2,&hs1[60],str1,p);
    mult12(1,p-1,hs1,&hs1[30],&hs1[90],p);
    mult12(1,1,&hs1[60],&hs1[90],&hs2[60],p);

    calc6(m2,9,2,ptr2,hs1,str1,p);
    calc6(m2,9,4,ptr2,&hs1[30],str1,p);
    calc6(m2,9,8,ptr2,&hs1[60],str1,p);
    mult12(1,p-1,hs1,&hs1[30],&hs1[90],p);
    mult12(1,1,&hs1[60],&hs1[90],&hs2[90],p);

    if (flag4==1)
        {
        printf("\n \n in calc19k4");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs2(%d) = ",i);
            printf("\n");
            display12(&hs2[30*i]);
            }
        }

    for(i=0;i<4;i++)
        {
        t = hs2[30*i];
        hs3[30*i] = t;
        t = (p-t)%p;
        for(j=0;j<12;j++)
            {
            t1 = hs2[30*i+j+1];
            t2 = (t1+t)%p;
            hs3[30*i+j+1] = t2;
            }
        }

    if (flag4==1)
        {
        printf("\n \n \n \n in calc19k4");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs3(%d) = ",i);
            printf("\n");
            display12(&hs3[30*i]);
            }
        }

    if (c1==2)
        {
        for(i=0;i<4;i++)
            {
            t = 30*i;
            hs1[t] = hs3[t];
            hs1[t+1] = hs3[t+1];
            hs1[t+2] = hs3[t+2];
            hs1[t+3] = hs3[t+3];
            hs1[t+4] = hs3[t+4];
            hs1[t+5] = (hs3[t+5]+hs3[t+7])%p;
            hs1[t+6] = (hs3[t+6]+hs3[t+8])%p;

            t1 = (hs3[t+7]+hs3[t+9])%p;
            t1 = (t1+hs3[t+11])%p;
            hs1[t+7] = t1;
            t1 = (hs3[t+8]+hs3[t+10])%p;
            t1 = (t1+hs3[t+12])%p;
            hs1[t+8] = t1;
            hs1[t+9] = (hs3[9]+hs3[t+11])%p;
            hs1[t+10] = (hs3[10]+hs3[t+12])%p;
            hs1[t+11] = 0;
            hs1[t+12] = 0;
            }
        }

  if (c1==4)
        {
        for(i=0;i<4;i++)
            {
            t = 30*i;
            hs1[t] = hs3[t];

            t1 = (hs3[t+9]+hs3[t+11])%p;
            t1 = (2*t1)%p;
            t1 = (hs3[t+1]+t1)%p;
            hs1[t+1] = t1;
            t1 = (hs3[t+10]+hs3[t+12])%p;
            t1 = (2*t1)%p;
            t1 = (hs3[t+2]+t1)%p;
            hs1[t+2] = t1;

            t1 = (hs3[t+1]+hs3[t+7])%p;
            t2 = (hs3[t+9]+hs3[t+11])%p;
            hs1[t+3] = (t1+t2)%p;
            t1 = (hs3[t+2]+hs3[t+8])%p;
            t2 = (hs3[t+10]+hs3[t+12])%p;
            hs1[t+4] = (t1+t2)%p;

            t1 = (hs3[t+3]+hs3[t+7])%p;
            t2 = (hs3[t+9]+hs3[t+11])%p;
            hs1[t+5] = (t1+t2)%p;
            t1 = (hs3[t+4]+hs3[t+8])%p;
            t2 = (hs3[t+10]+hs3[t+12])%p;
            hs1[t+6] = (t1+t2)%p;

            t1 = (hs3[t+3]+hs3[t+5])%p;
            t2 = hs3[t+7];
            hs1[t+7] = (t1+t2)%p;
            t1 = (hs3[t+4]+hs3[t+6])%p;
            t2 = hs3[t+8];
            hs1[t+8] = (t1+t2)%p;

            t1 = (hs3[t+5]+hs3[t+7])%p;
            hs1[t+9] = t1;
            t1 = (hs3[t+6]+hs3[t+8])%p;
            hs1[t+10] = t1;

            hs1[t+11] = 0;
            hs1[t+12] = 0;
            }
        }

    if (flag4==1)
        {
        printf("\n \n \n \n in calc19k4");
        for(i=0;i<4;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }
        }
}

void calc19k5(int m2, integer e, integer c1, int flag4,  integer a2[], STRING ptr2 , integer *str1,
              integer hs1[], integer hs2[], integer hs3[], integer p)
{
int i,j;
integer s,t,t1,t2;
integer h20[40] = {0};
integer h21[40] = {0};

    calc19k(m2,e+4,2,0,a2,h20,h21,ptr2,str1,hs1,hs2,p);
    mult12(1,0,&hs1[60],&hs1[60],hs3,p);

    calc19k(m2,e+4,4,0,a2,h20,h21,ptr2,str1,hs1,hs2,p);
    mult12(1,0,&hs1[60],&hs1[60],&hs3[30],p);

    calc19k(m2,e+4,8,0,a2,h20,h21,ptr2,str1,hs1,hs2,p);
    mult12(1,0,&hs1[60],&hs1[60],&hs3[60],p);

    mult12(1,p-1,hs3,&hs3[30],&hs3[90],p);
    mult12(1,1,&hs3[60],&hs3[90],hs2,p);


    calc19k(m2,e+4,2,0,a2,h20,h21,ptr2,str1,hs1,hs2,p);
    mult12(1,0,&hs1[90],&hs1[90],hs3,p);

    calc19k(m2,e+4,4,0,a2,h20,h21,ptr2,str1,hs1,hs2,p);
    mult12(1,0,&hs1[90],&hs1[90],&hs3[30],p);

    calc19k(m2,e+4,8,0,a2,h20,h21,ptr2,str1,hs1,hs2,p);
    mult12(1,0,&hs1[90],&hs1[90],&hs3[60],p);

    mult12(1,p-1,hs3,&hs3[30],&hs3[90],p);
    mult12(1,1,&hs3[60],&hs3[90],&hs2[30],p);

    if (flag4==1)
        {
        printf("\n \n in calc19k5");
        for(i=0;i<2;i++)
            {
            printf("\n \n hs2(%d) = ",i);
            printf("\n");
            display12(&hs2[30*i]);
            }
        }

    for(i=0;i<2;i++)
        {
        t = hs2[30*i];
        hs3[30*i] = t;
        t = (p-t)%p;
        for(j=0;j<12;j++)
            {
            t1 = hs2[30*i+j+1];
            t2 = (t1+t)%p;
            hs3[30*i+j+1] = t2;
            }
        }

    if (flag4==1)
        {
        printf("\n \n \n \n in calc19k5");
        for(i=0;i<2;i++)
            {
            printf("\n \n hs3(%d) = ",i);
            printf("\n");
            display12(&hs3[30*i]);
            }
        }

/** e = (p-1)/18 **/

    if (c1==2)
        {
        for(i=0;i<2;i++)
            {
            t = 30*i;
            hs1[t] = hs3[t];
            t1 = (p-hs3[t+5])%p;
            hs1[t+1] = (hs3[t+3]+t1)%p;
            t1 = (p-hs3[t+6])%p;
            hs1[t+2] = (hs3[t+4]+t1)%p;

            hs1[t+3] = hs3[t+7];
            hs1[t+4] = hs3[t+8];

            hs1[t+5] = (hs3[t+9]+hs3[t+11])%p;
            hs1[t+6] = (hs3[t+10]+hs3[t+12])%p;

            hs1[t+7] = hs3[t+5];
            hs1[t+8] = hs3[t+6];

            s = (p+1)/2;
            t1 = (hs3[t+1]+hs3[t+5])%p;
            t2 = (p-hs3[t+3])%p;
            t1 = (t1+t2)%p;
            hs1[t+9] = (s*t1)%p;
            t1 = (hs3[t+2]+hs3[t+6])%p;
            t2 = (p-hs3[t+4])%p;
            t1 = (t1+t2)%p;
            hs1[t+10] = (s*t1)%p;

            hs1[t+11] = 0;
            hs1[t+12] = 0;
            }
        }

    if (flag4==1)
        {
        printf("\n \n \n \n in calc19k5");
        for(i=0;i<2;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }
        }
}

void calc60(int m2, integer c1, integer c2, integer e, integer e2, integer a2[], int flag4, STRING ptr2 , integer *str1,
            integer hs1[], integer hs2[], integer hs3[], integer hs4[], integer p)
{
int i,j;
integer t,t1,t2;
integer c3;
integer h20[40] = {0};
integer h21[40] = {0};


    c2 = c2;
    c3 = 1*(p-20)%p;
    printf("\n \n in calc60 ");
    printf("\n \n e = %d   e2 = %d   c2 = %d   c3 = %d",e,e2,c2,c3);

    if (c2==1)
        {
        calc19(m2,1,e+4,0,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc19(m2,1,e+4,2,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs3,p);
        printf("\n \n \n \n");
        mult12((16+c3)%p,p-8,hs2,hs3,hs4,p);
        mult12((16+c3)%p,p-8,&hs2[30],&hs3[30],&hs4[30],p);

        calc19(m2,1,e+4,4,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc19(m2,1,e+4,6,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs3,p);
        printf("\n \n \n \n");
        mult12(p-16,8,hs2,hs3,&hs4[60],p);
        mult12(p-16,8,&hs2[30],&hs3[30],&hs4[90],p);

        mult12(1,1,hs4,&hs4[60],hs1,p);
        mult12(1,1,&hs4[30],&hs4[90],&hs1[30],p);
        }


    if (c2==2)
        {
        calc19(m2,1,e+4,0,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc19(m2,1,e+4,2,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs3,p);
        printf("\n \n \n \n");
        mult12(p-4,(8+c3)%p,hs2,hs3,hs4,p);
        mult12(p-4,(8+c3)%p,&hs2[30],&hs3[30],&hs4[30],p);

        calc19(m2,1,e+4,6,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc19(m2,1,e+4,8,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs3,p);
        printf("\n \n \n \n");
        mult12(p-8,4,hs2,hs3,&hs4[60],p);
        mult12(p-8,4,&hs2[30],&hs3[30],&hs4[90],p);

        mult12(1,1,hs4,&hs4[60],hs1,p);
        mult12(1,1,&hs4[30],&hs4[90],&hs1[30],p);
        }

    if (c2==3)
        {
        calc19(m2,1,e+4,0,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc19(m2,1,e+4,2,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs3,p);
        printf("\n \n \n \n");
        mult12(p-12,p-40,hs2,hs3,hs4,p);
        mult12(p-12,p-40,&hs2[30],&hs3[30],&hs4[30],p);

        calc19(m2,1,e+4,4,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
        calc19(m2,1,e+4,6,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs3,p);
        printf("\n \n \n \n");
        mult12(16,p-40,hs2,hs3,&hs4[60],p);
        mult12(16,p-40,&hs2[30],&hs3[30],&hs4[90],p);

        mult12(1,1,hs4,&hs4[60],hs2,p);
        mult12(1,1,&hs4[30],&hs4[90],&hs2[30],p);

        calc19(m2,1,e+4,8,e+4+e2,a2,h20,h21,ptr2,str1,hs1,hs3,p);
        mult12(1,16,hs2,hs3,hs1,p);
        mult12(1,16,&hs2[30],&hs3[30],&hs1[30],p);
        }

    if (flag4==1)
        {
        printf("\n \n in calc60");
        for(i=0;i<2;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }
        }

    for(i=0;i<2;i++)
        {
        t = hs1[30*i];
        hs3[30*i] = t;
        t = (p-t)%p;
        for(j=0;j<12;j++)
            {
            t1 = hs1[30*i+j+1];
            t2 = (t1+t)%p;
            hs3[30*i+j+1] = t2;
            }
        }

    if (flag4==1)
        {
        printf("\n \n \n \n in calc60");
        for(i=0;i<2;i++)
            {
            printf("\n \n hs3(%d) = ",i);
            printf("\n");
            display12(&hs3[30*i]);
            }
        }

    /** e = (p-1)/20 **/

    if (c1==20)
        {
        for(i=0;i<4;i++)
            {
            t = 30*i;
            hs1[t] = hs3[t];
            hs1[t+1] = hs3[t+1];
            hs1[t+2] = hs3[t+2];
            hs1[t+3] = hs3[t+3];
            hs1[t+4] = hs3[t+4];
            hs1[t+5] = (hs3[t+5]+hs3[t+7])%p;
            hs1[t+6] = (hs3[t+6]+hs3[t+8])%p;

            t1 = (hs3[t+7]+hs3[t+9])%p;
            hs1[t+7] = t1;
            t1 = (hs3[t+8]+hs3[t+10])%p;
            hs1[t+8] = t1;
            t1 = (2*hs3[t+11])%p;
            hs1[t+9] = (hs3[t+9]+t1)%p;
            t1 = (2*hs3[t+12])%p;
            hs1[t+10] = (hs3[t+10]+t1)%p;
            hs1[t+11] = 0;
            hs1[t+12] = 0;
            }
        }

    if (flag4==1)
        {
        printf("\n \n \n \n in calc60");
        for(i=0;i<2;i++)
            {
            printf("\n \n hs1(%d) = ",i);
            printf("\n");
            display12(&hs1[30*i]);
            }
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

	exp7(c1*c1,a3,a5,p);

    	printf("\n \n in calc73 a5 = ");
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


