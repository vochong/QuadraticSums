
#include <stdio.h>
#include <stdlib.h>
#include "qmath228v7.h"
#include "qmath229v2.h"
#include "calc2v6.h"


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

int exp4d3 (integer e, integer a2[], int kmax, int flag4, integer h11[], integer h12[],
            integer *str1, integer *str1a, integer *str2, integer *str2a,
            int m2, integer flag0, int x, int y, int c6, integer s,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

void calc3 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

void calc3k (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
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

void display8d(int flag4, unsigned int r, STRING ptr2, integer b1[]);
void display12d(unsigned int r, STRING ptr2, integer b1[]);
void display16d(unsigned int r, STRING ptr2, integer b1[]);
void multcnvl2(int l2, int e1, integer k4[], integer k3[], STRING ptr2, integer p);
void calc12d(integer e, integer a2[], integer k1[], integer k2[], integer p);
void calc12(integer e, integer a2[], int flag4, integer k1[], integer k2[], integer p);

void equation21(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
                integer q, integer p);
void equation22(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
                integer q, integer p);
void equation23(int m2, integer a2[], STRING ptr2, integer b1[], unsigned int t, integer q, integer p);
void equation24(int m2, integer g, STRING ptr2, integer b1[], unsigned int t, integer q, integer p);
void equation25(int m2, integer g, STRING ptr2, integer b1[], unsigned int t, integer q, integer p);
void equation1(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
               integer q, integer p);
void equation3(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
               integer k3[], integer q, integer p);

void f32(integer a2[], integer k4[], long int d1, integer q, integer p);
void displayh2(int d, integer h16[]);
void solve16(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer hs1[], integer hs2[], integer k3[], integer q, integer p);
integer find4(integer g, integer q, integer p);
void f81(int flag4, integer a2[], integer k8[], long int d1, integer q, integer p);
void solve8(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
            integer k3[], integer q, integer p);

void k24(int flag4, integer a2[], integer k12[], integer k1[], integer k2[], long int d1, integer q, integer p);
void solve12(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer k3[], integer q, integer p);

void f3(integer a2[], integer k6[], long int d1, integer q, integer p);

void solve12d(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
              integer k3[], integer q, integer p);

void k60(int flag4, integer a2[], integer k10[], long int d1, integer q, integer p);
void solve8d(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer k3[], integer q, integer p);
void k61(int flag4, integer a2[], integer k20[], long int d1, integer q, integer p);
void displayh11(integer h11[]);

void init3(integer flag4, integer a2[], integer c1, integer d[], integer b1[], STRING ptr2, integer p);
void init4(integer flag4, integer a2[], integer c1, integer d[], integer b1[], STRING ptr2, integer p);


int main(void)
{
	int i,j,k;
	int m2;
	unsigned long int c;
	int l2,l3;
	STRING ptr2;

	integer b2[220] = {0};
	int t1,t2,t3;

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

	integer h14[32] = {0};
	integer h15[24] = {0};

	integer *str1;
	integer *str1a;
	integer *str2;
	integer *str2a;

	integer flag0,flag3;
	int flag4;
	int x,y,c6,kmax;

	integer s,e,e1;
	integer e2;
	integer s1,s2,s3,s4;
	integer i2,i3;
	integer g;
	integer q;

	integer s5;

	integer k1[24] = {0};
	integer k2[24] = {0};
	integer k3[32] = {0};
	integer k4[32] = {0};
	integer k5[10] = {0};
	integer k6[16] = {0};
	integer k8[16] = {0};
	integer k10[16] = {0};
	integer k12[12] = {0};
	integer k16[16] = {0};
	integer k20[20] = {0};
	integer k30[30] = {0};
	integer k40[6] = {0};
	integer k41[12] = {0};
	integer k42[12] = {0};




    m2 = m;

    p = 3169;




    printf("\n \n char = %d",sizeof(char));
    printf("\n short = %d",sizeof(short));
    printf("\n int = %d",sizeof(int));
    printf("\n long = %d",sizeof(long));
    printf("\n long long = %d",sizeof(long long));
    printf("\n \n");



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
	i2 = sqrt1(p-1,p);
	s1 = exp1((p-1)/2,g,p);
	if (s1==(p-1))
        {
        i2 = exp1((p-1)/4,g,p);
        }
	i2 = (p+i2)%p;
	printf("\n \n from sqrt1 i2 = %d",i2);

	i2 = find4(g,p-1,p);
	printf("\n \n from find4 i2 = %d",i2);

    	calc2(g,i2,a2,p);
    	printf("\n \n from calc2 a2 = ");
	displayh(2,a2);

	printf("\n \n test of fn60");
	fn60(5,29,7,34,a2,a3,p);
	series(5,29,a2,0,h11,2,p);
	series(7,34,a2,0,h12,2,p);
	printf(" \n h11 = ");
	displayh(4,h11);
	printf(" \n h12 = ");
	displayh(4,h12);
	printf(" \n a3 = ");
	displayh(2,a3);

    	printf("\n \n Enter 1 to continue ");
	scanf("%d",&s1);

    printf("\n \n =========================== test of calc12");
    flag4 = 1;
    calc12(96,a2,flag4,k1,k2,p);

    printf("\n \n test of series20");
    series20(-5,20,a2,h11,2,p);
    printf("\n h11 =");
    displayh(4,h11);



    printf("\n \n Enter 1 to continue ");
    scanf("%d",&s1);


    printf("\n \n test of fn61");
    s1 = 89;
    s2 = find3(s1);
/*
	i3 = sqrt1(s1-1,s1);
	i3 = exp1((s1-1)/4,s2,s1);
*/
	i3 = find4(s2,s1-1,s1);
    calc2(s2,i3,a3,s1);
    printf("  s2 = %d",s2);

    series(0,20,a3,12,h11,2,s1);
    fn61(20,12,29,16,a3,h11,h15,s1);

    printf("\n \n test of fn61d");
    setzero2(4,h15);
    printf("\n \n h15 = ");
    displayh(4,h15);
    series(0,20,a3,12,h11,2,s1);
    printf("\n \n h11 = ");
    displayh(4,h11);
    series(0,29,a3,16,h12,2,s1);
    printf("\n \n h12 = ");
    displayh(4,h12);
    fn61d(20,12,29,16,a3,h11,h15,s1);
    printf("\n \n h15 = ");
    displayh(4,h15);


    printf("\n \n test of f32");

    i2 = sqrt1(p-1,p);
    s2 = exp1((p-1)/2,g,p);
    if (s2==(p-1))
        {
        i2 = exp1((p-1)/4,g,p);
        }
     i2 = (p+i2)%p;
     printf("\n \n g = %d i2 = %d",g,i2);

    i2 = find4(g,p-1,p);
    printf("\n \n i2 = %d",i2);
    printf("\n \n");

    calc2(g,i2,a2,p);
    printf(" a2 = ");
    displayh(2,a2);

    q = (p-1)/2;
    f32(a2,k4,2,q,p);
    printf("  k4  = \n");
    displayh2(16,k4);

    printf("\n \n test f81");
    f81(1,a2,k8,2,q,p);

    printf("\n \n test k24");
    k24(1,a2,k12,k1,k2,2,q,p);

    printf("\n \n test of f3");
    f3(a2,k6,2,(p-1)/2,p);

    printf("\n \n test of calc22d");
    calc22d(a2,1,k30,k16,2,(p-1)/2,p);
    printf("\n \n from calc22d k16 = \n");
    displayh(16,k16);

    printf("\n \n test k60");
    k60(1,a2,k10,2,q,p);

    printf("\n \n test k61");
    k61(1,a2,k20,2,q,p);

    calc25d(a2,1,k5,2,(p-1)/2,p);

    printf("\n \n test of calc42 ");
    exp7((p-1)/3,a2,a3,p);
    cmult(a2,a3,a5,p);
    a3[1] = (p-a3[1])%p;
    cmult(a2,a3,a6,p);
    calc42((p-1)/3-4,a2,a5,a6,k40,k41,p);


    printf("\n \n Enter 1 to continue ");
    scanf("%d",&s1);

    for(k=0;k<50;k++)
     	{
/**
	i2 = sqrt1(p-1,p);
	s2 = exp1((p-1)/2,g,p);
	if (s2==(p-1))
        {
        i2 = exp1((p-1)/4,g,p);
        }
	i2 = (p+i2)%p;
	printf("\n \n from sqrt1 i2 = %d",i2);
**/

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


/*
	printf("\n \n Enter 1 to continue &&&&& ");
	scanf("%d",&t1);
*/

	printf("\n \n before exp4d");

/** e mod 4 must equal 0 **/
	flag0 = 1;

    e = (p-1)/8;
    e = 1*e;

    e2 = e%4;
    e = 1*e-e2;

    e = e - 4;

    printf("\n \n &&&&&&&&&&&&&&&&&&&&&&&&&&&& ######### e = %d",e);

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
	t1 = exp4d3(e,a2,kmax,1,h11,h12,str1,str1a,str2,str2a,m2,
                flag0,x,y,c6,s,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
	flag_2 = 0;
	printf("\n \n  l2 = %d",e);
	printf("\n t1 = %d",t1);
	printf("\n exp4d = ",i);
	printf("\n s5 = %d",s5);
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
	printf("\n \n (2) series h11 = ");
	displayh(4,h11);

	series(1,p-1,a2,0,h11,4,p);
	printf("\n \n (4) series h11 = ");
	displayh(4,h11);

/** calc3 **/
	flag0 = 1*1;
/** flag3 = 1 implies c = 5 **/
	flag3 = 0;
	for(j=0;j<1;j++)
		{
		if(j==0)
			{
			calc3d(e,e1,flag0,flag3,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
                   	       t1,8,9,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);

            		calc6(m2,8,1,ptr2,h11,str1,p);
            		k42[0] = h11[0];
            		calc6(m2,9,1,ptr2,h11,str1,p);
            		k42[1] = h11[0];
            		calc6(m2,8,3,ptr2,h11,str1,p);
            		k42[2] = h11[0];
            		calc6(m2,9,3,ptr2,h11,str1,p);
            		k42[3] = h11[0];
			}
		if(j==1)
			{
            		exp7((p-1)/3,a2,a3,p);
            		cmult(a2,a3,a5,p);
			calc3k(e,e1,flag0,flag3,a5,kmax,h11,h12,str1,str1a,str2,str2a,m2,
                  	       t1,8,9,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);

            		calc6(m2,8,1,ptr2,h11,str1,p);
            		k42[4] = h11[0];
            		calc6(m2,9,1,ptr2,h11,str1,p);
            		k42[5] = h11[0];
            		calc6(m2,8,3,ptr2,h11,str1,p);
            		k42[6] = h11[0];
            		calc6(m2,9,3,ptr2,h11,str1,p);
            		k42[7] = h11[0];
			}
		printf("\n \n  l2 = %d",e);
		printf("\n calc3 = ",i);
		printf("\n \n");
		displaytuple2(8,9,str1,str1a);

        e1 = e+4;
        t1 = 2;
        series(1,e1/3,a2,0,h14,t1,p);
        printf("\n \n the 2nd answer (1/3) series =  ");
        displayh(4,h14);

        series(1,e1/2,a2,0,h14,t1,p);
        printf("\n \n the 2nd answer (1/2) series =  ");
        displayh(4,h14);


/**
        series(e1/2,e1,a2,0,h14,t1,p);
        printf("\n \n the 2nd answer 2nd(1/2) series =  ");
        displayh(4,h14);

        series(1,e1,a2,0,h14,t1,p);
        printf("\n \n the 2nd answer series =  ");
        displayh(4,h14);
**/


        if (flag3==0)
            {
            printf("\n \n ======= calc6 from (0 to 8) ========");
            for(i=0;i<9;i++)
                {
                printf("\n \n i = %d \n",i);
                calc6(m2,8,i,ptr2,h11,str1,p);
                printf("\n");
                display12(h11);
                calc6(m2,9,i,ptr2,h11,str1,p);
                printf("\n");
                display12(h11);
                }
            printf("\n \n ====================================");
            }

		}

    printf("\n\n k42 = ");
    displayh(12,k42);

    e = e+4;
    series(0,e,a2,0,h11,2,p);
    printf("\n \n series = ");
    displayh(4,h11);

/*
    series1(0,e,3,a2,0,h11,2,p);
    printf("\n \n series1 = ");
    displayh(4,h11);
    a5[0] = (3*h11[0])%p;
    a5[1] = (3*h11[1])%p;
    printf("\n \n a5 = ");
    displayh(2,a5);

    exp7((p-1)/3,a2,a3,p);
    printf("\n \n exp7 a3 = ");
    displayh(2,a3);

    series(0,e,a2,(p-1)/2,h11,2,p);
    printf("\n \n series = ");
    displayh(4,h11);

    exp7(e/2,a2,a3,p);
    exp7(e/2,a3,a4,p);
    exp7(2,a4,a3,p);
    printf("\n \n exp7 a3 = ");
    displayh(2,a3);

    series(0,e/2,a2,2*e,h11,4,p);
    printf("\n \n series = ");
    displayh(4,h11);
*/


/**
    printf("\n \n \n \n");
    calc11(m2,e,4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc15(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/


/**
    calc14(m2,e,6,a2,h11,h12,ptr2,str1,hs2,hs3,p);
    printf("\n \n \n \n");

    calc14k(m2,e,8,a2,h11,h12,ptr2,str1,hs2,hs3,p);
    printf("\n \n \n \n");

    calc14k(m2,e,10,a2,h11,h12,ptr2,str1,hs2,hs3,p);
    printf("\n \n \n \n");
**/


/**
    calc11q(m2,e,e2,4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc11q(m2,e,e2,6,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/


/**
    calc11q(m2,e,e2,6,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc15q(m2,e,e2,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/



    calc10k(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc10(m2,e,3,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc10(m2,e,5,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc10(m2,e,7,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

/**
    calc17(m2,e,1,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc17(m2,e,3,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/

/**
    calc16(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc16k(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/


/**
    calc18(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc18k(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/


/** (2) **/
/**
    calc19(m2,1,e,2,e+e2+2*0,a2,h11,h12,ptr2,str1,hs1,hs4,p);
    printf("\n \n \n \n");
    k3[0] = hs4[30*0];
    k3[1] = hs4[30*1];
    k3[2] = hs4[30*2];
    k3[3] = hs4[30*3];
**/


/**
    exp7((e+e2)/2,a2,a3,p);
    exp7((e+e2),a3,a4,p);
    printf("     exp7 = ");
    displayh(2,a4);
    s1 = a4[0];
    s2 = a4[1];
    mult12(s2,s1,&hs4[30*2],&hs4[30*3],h11,p);
    printf("\n \n h11 = ");
    printf("\n");
    display12(h11);
    mult12(p-s1,s2,&hs4[30*2],&hs4[30*3],h12,p);
    printf("\n \n h12 = ");
    printf("\n");
    display12(h12);
    printf("\n \n \n \n");
**/


/**
     calc19(m2,1,e,6,e+e2,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
    k3[2] = hs2[30*2];
    k3[3] = hs2[30*3];
**/

/**
    calc19(m2,1,e,4,e+e2,a2,h11,h12,ptr2,str1,hs1,hs4,p);
    printf("\n \n \n \n");

    calc19(m2,1,e,8,e+e2,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/




/**
    e = 2*260*69;

    e = 260*78;

    e = 2*260*93;
**/

    printf("\n \n k3 = ");
    displayh(6,k3);
    e = e-4;


/**
        printf("\n \n \n \n");
        calc10d(m2,e+4,1,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        series(0,(e+4),a2,(e+4),h14,4,p);
        printf("\n \n series = ");
        displayh(4,h14);
        printf("\n \n \n \n");


        calc10d(m2,e+4,3,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        series(0,(e+4),a2,3*(e+4),h14,4,p);
        printf("\n \n series = ");
        displayh(4,h14);
        printf("\n \n \n \n");
**/


/**
        printf("\n \n");
        calc14d(m2,e+4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        printf("\n \n");
        calc17d(m2,e+4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        calc18d(m2,e+4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");
**/


/**
        series1(0,e+4,3,a2,(p-1)/2,h12,4,p);
        printf("\n \n series1(3) = ");
        displayh(4,h12);

        t1 = (e+4)/8;
        t2 = 9*t1;
        series(t1,t2,a2,0,h14,4,p);
        printf("\n \n \n \n from series h14 = ");
        displayh(4,h14);
        printf("\n \n");

        series4d(e1,a2,2*e,h11,2,p);
        printf("\n \n series4d(2) = ");
        displayh(4,h11);
**/


/**
    i = 2;
    printf("\n \n i = %d \n",i);
    calc6(m2,8,i,ptr2,h11,str1,p);
    printf("\n");
    display12(h11);
    i = 6;
    calc6(m2,8,i,ptr2,h12,str1,p);
    printf("\n");
    display12(h12);
	mult12(1,1,h11,h12,hs1,p);
**/



    series(1,p-1,a2,0,h14,4,p);
    printf("\n \n \n \n s5 = %d  series =  ",s5);
    displayh(4,h14);

    printf("\n \n g = %d   i2 = %d   p = %d",g,i2,p);
    printf("\n a2 = ");
    displayh(2,a2);
    printf("\n e = %d",e);

    exp7(e,a2,a3,p);
    exp7(e,a3,a4,p);
    exp7(4,a4,a3,p);
    printf("\n \n exp7 a3 = ");
    displayh(2,a3);


/** 1 **/
/** p = 24q+1 **/
/**
    printf("\n \n \n \n solve12 = ");
    printf("\n \n");
    q = (p-1)/2;
    solve12(m2,a2,ptr2,h14,str1,e,k3,q,p);

    printf("\n \n");
    display12d(150,ptr2,h14);


    multcnvl2(12,150,k12,k3,ptr2,p);
    printf(" \n \n \n \n multcnvl2 = ");
    displayh(12,k3);
    printf("\n \n");
    displayh2(12,k3);

    solve2m(12,&ptr2[150],h14,p);
    s1 = det(12,&ptr2[150]);

    setzero2(12,h11);
    l2solve(12,h11,h14,&ptr2[150],p);

    printf("\n \n \n \n det = %d",s1);
    printf("\n \n");
    display12d(150,ptr2,h14);
**/


/** 2 **/
/** p = 27q+1 **/
/**
    printf("\n \n \n \n solve8 = ");
    printf("\n \n");
    q = (p-1)/2;
    solve8(m2,a2,ptr2,h14,str1,e,k3,q,p);

    printf("\n \n");
    display8d(1,150,ptr2,h14);


    multcnvl2(16,150,k8,k3,ptr2,p);
    printf(" \n \n \n \n multcnvl2 = ");
    displayh(16,k3);
    printf("\n \n");
    displayh2(16,k3);


    solve2m(8,&ptr2[150],h14,p);
    s1 = det(8,&ptr2[150]);

    setzero2(8,h11);
    l2solve(8,h11,h14,&ptr2[150],p);

    printf("\n \n \n \n det = %d",s1);
    printf("\n \n");
    display8d(0,150,ptr2,h14);
**/


/** 3 **/
/** p = 32q+1 **/

    printf("\n \n \n \n solve16 = ");
    printf("\n \n");
    q = (p-1)/2;
    solve16(m2,a2,ptr2,h14,str1,e,hs4,hs2,k3,q,p);


/**
    for(i=0;i<8;i++)
        {
        s1 = k4[i];
        s2 = k4[i+8];
        k4[i] = s2;
        k4[i+8] = s1;
        }
**/


    multcnvl2(31,150,k4,k3,ptr2,p);
    printf(" \n \n \n \n multcnvl2 = ");
    displayh(16,k3);
    printf("\n \n \n n multcnvl2 = \n");
    displayh2(32,k3);


    solve2m(16,&ptr2[150],h14,p);
    s1 = det(16,&ptr2[150]);

    setzero2(16,h11);
    l2solve(16,h11,h14,&ptr2[150],p);

    printf("\n \n \n \n det = %d",s1);
    printf("\n \n");
    display16d(150,ptr2,h14);


/** 4 **/
/** p = 48q+1 **/
/**
    printf("\n \n \n \n solve12d = ");
    printf("\n \n");
    q = (p-1)/2;
    solve12d(m2,a2,ptr2,h14,str1,e,k3,q,p);

    printf("\n \n");
    display12d(150,ptr2,h14);


    multcnvl2(12,150,k12,k3,ptr2,p);
    printf(" \n \n \n \n multcnvl2 = ");
    displayh(12,k3);
    printf("\n \n");
    displayh2(12,k3);

    solve2m(12,&ptr2[150],h14,p);
    s1 = det(12,&ptr2[150]);

    setzero2(12,h11);
    l2solve(12,h11,h14,&ptr2[150],p);

    printf("\n \n \n \n det = %d",s1);
    printf("\n \n");
    display12d(150,ptr2,h14);
**/


/** 5 **/
/** p = 600q+1 **/
/**
    printf("\n \n \n \n solve8d = ");
    printf("\n \n");
    q = (p-1)/2;
    solve8d(m2,a2,ptr2,h14,str1,e,k3,q,p);

    printf("\n \n");
    display8d(1,150,ptr2,h14);


    multcnvl2(16,150,k10,k3,ptr2,p);
    printf(" \n \n \n \n multcnvl2 = ");
    displayh(16,k3);
    printf("\n \n");
    displayh2(16,k3);


    solve2m(8,&ptr2[150],h14,p);
    s1 = det(8,&ptr2[150]);

    setzero2(8,h11);
    l2solve(8,h11,h14,&ptr2[150],p);

    printf("\n \n \n \n det = %d",s1);
    printf("\n \n");
    display8d(0,150,ptr2,h14);
**/


    printf("\n \n p = %d",p);
    printf("      i2 = %d",i2);
    printf("      g = %d",g);
    printf("      a2 = ");
    displayh(2,a2);
    printf("\n \n a5 = ");
    displayh(2,a5);

    series(100,20,a2,0,h11,2,p);
    printf("\n \n test series = ");
    displayh(4,h11);

    series(1,(p-1)/2,a2,0,h11,2,p);
    printf("\n \n (2) series = ");
    displayh(4,h11);

    series(1,(p-1)/4,a2,0,h11,4,p);
    printf("\n \n (4) series = ");
    displayh(4,h11);


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
			tuple1(2,str2,str1,str1a,
					 m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
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



int exp4d3 (integer e, integer a2[], int kmax, int flag4, integer h11[], integer h12[],
            integer *str1, integer *str1a, integer *str2, integer *str2a,
            int m2, integer flag0, int x, int y, int c6, integer s,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p)
{
int i,j;
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


/**
	k = 5;
	l2 = 4*p;
	l2 = 1*l2;

	l2 = 4654;

	init2(l2,a2,k,ptr2,hs3,str1,str1a,p);
	l2 = l2;
**/

/*
	displaytuple(k,str1,str1a);
*/


    c1 = 1;

    k = 5;
    l2 = 1*(p-1)/(3*c1);
    init2(l2,a2,k,ptr2,hs3,str2,str2a,p);


    d[0] = 0;
    d[1] = 0;
    d[2] = 0;
    d[3] = 0;
    d[4] = 0;
    d[5] = 0;
    init4(1,a2,c1,d,b1,ptr2,p);


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
    l3 = l2+4;
    tuple1(2,str2,str1,str1a,m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
    l2 = l3;


    if (flag4==1)
        {
        printf("\n \n in exp4d3(2) &&&&&&&&&&&&&&&&&&&&&&&&");
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

void calc3k (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
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
	flag4 = 0;
	t = exp4d3(e,a2,kmax,flag4,h11,h12,str1,str1a,str2,str2a,m2,
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
	t = exp4d2(e,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
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
	t = exp4d3(e,a2,kmax,flag4,h11,h12,str1,str1a,str2,str2a,m2,
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


void display8d(int flag4, unsigned int r, STRING ptr2, integer b1[])

{
int i,j,k;
integer t1,t2;


t2 = 0;
if (flag4==1)
    {
    t2 = 8;
    }
for(k=0;k<t2+8;k++)
    {
    printf(" %d ",k);
    for(i=0;i<2;i++)
        {
        printf("( ");
        for(j=0;j<4;j++)
            {
            t1 = *(ptr2[r+k]+4*i+j);
            printf(" %d ",t1);
            }
        printf(" ) ");
        }
    printf("  %d \n",b1[k]);
    }
}

void display12d(unsigned int r, STRING ptr2, integer b1[])

{
int i,j,k;
integer t1;

for(k=0;k<12;k++)
    {
    printf(" %d ",k);
    for(i=0;i<2;i++)
        {
        printf("( ");
        for(j=0;j<6;j++)
            {
            t1 = *(ptr2[r+k]+6*i+j);
            printf(" %d ",t1);
            }
        printf(" ) ");
        }
    printf("  %d \n",b1[k]);
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

/**
	for(j=0;j<(e2+1);j++)
		{
		a[j] = h11[j]-2;
		}
**/

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

void equation21(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
               integer q, integer p)

{
integer t1,t2;
integer q1;


q1 = q/16;

printf("\n \n in equation1 q1 = %d",q1);

if ((q1%4)==1)
    {
    t1 = a4[0];
    t2 = a4[1];
    set7(t,2,t1,ptr2);
    set7(t,6,t1,ptr2);
    set7(t,3,t2,ptr2);
    set7(t,7,t2,ptr2);
    set7(t,12,1,ptr2);
    set7(t,14,p-1,ptr2);

    set7(t,0,t1,ptr2);
    set7(t,4,t1,ptr2);
    set7(t,1,t2,ptr2);
    set7(t,5,t2,ptr2);
    set7(t,9,p-1,ptr2);
    set7(t,11,1,ptr2);
    b1[6] = 0;


    t2 = (p-a4[1])%p;
    set7(t+1,2,t2,ptr2);
    set7(t+1,6,t2,ptr2);
    set7(t+1,3,t1,ptr2);
    set7(t+1,7,t1,ptr2);
    set7(t+1,13,1,ptr2);
    set7(t+1,15,p-1,ptr2);

    t1 = (p+a4[0])%p;
    t2 = (p-a4[1])%p;
    set7(t+1,0,t2,ptr2);
    set7(t+1,4,t2,ptr2);
    set7(t+1,1,t1,ptr2);
    set7(t+1,5,t1,ptr2);
    set7(t+1,8,1,ptr2);
    set7(t+1,10,p-1,ptr2);
    b1[7] = 0;
    }

}


void equation22(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
                integer q, integer p)

{
integer s;
integer t1,t2;
integer q1;
integer a5[2] = {0};


q1 = q/16;
printf("\n \n in equation2 q1 = %d",q1);

cmult(a4,a4,a5,p);
s = a5[0];
s = (p+s)%p;
printf("\n in equation2  a4 = (%d , %d) a5 = (%d , %d)  s = %d",a4[0],a4[1],a5[0],a5[1],s);

if ((q1%4)==3)
    {
    printf("\n \n in equation2 q1 = %d",q1);

    if ((q1%8)==7)
        {
        s = (p-s)%p;
        }
    t1 = a4[0];
    t2 = a4[1];
    set7(t,0,2,ptr2);
    set7(t,2,p-2,ptr2);
    set7(t,4,p-2,ptr2);
    set7(t,6,2,ptr2);

    t1 = (a4[0]+a4[1])%p;
    t1 = (s*t1)%p;
    printf("\n \n in equation2 t1 = %d",t1);
    t1 = (2*t1)%p;

    set7(t,8,t1,ptr2);
    set7(t,10,t1,ptr2);
    set7(t,13,t1,ptr2);
    set7(t,15,t1,ptr2);
    t1 = 1;
    if ((q1%8)==3)
        {
        t1 = p-1;
        }
    b1[6] = (t1*a4[0])%p;
    }


if ((q1%4)==1)
    {
    printf("\n \n in equation2 q1 = %d",q1);

    if ((q1%8)==1)
        {
        s = (p-s)%p;
        }
    t1 = a4[0];
    t2 = a4[1];
    set7(t,0,2,ptr2);
    set7(t,2,p-2,ptr2);
    set7(t,4,p-2,ptr2);
    set7(t,6,2,ptr2);

    t1 = (a4[0]+a4[1])%p;
    t1 = (s*t1)%p;
    printf("\n \n in equation2 t1 = %d",t1);
    t1 = (2*t1)%p;

    set7(t,9,t1,ptr2);
    set7(t,11,t1,ptr2);
    set7(t,12,t1,ptr2);
    set7(t,14,t1,ptr2);
    b1[6] = 0;
    }

}


void equation23(int m2, integer a2[], STRING ptr2, integer b1[], unsigned int t, integer q, integer p)

{
int i;
integer s;
integer t1,t2,t3,t4;
integer c1,s1,c2,s2;
integer q1;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};

q1 = q/16;
printf("\n \n beginning of equation23");
printf("\n \n in equation23 q1 = %d",q1);

exp7(2*q1,a2,a3,p);
exp7(q1,a3,a4,p);

cmult(a4,a4,a5,p);
s = a5[0];
s = (p+s)%p;
printf("\n in equation23  a4 = (%d , %d) a5 = (%d , %d)  s = %d",a4[0],a4[1],a5[0],a5[1],s);

a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;
t1 = (p-a4[1])%p;
t2 = a4[0];
t3 = (p-1)/2;
c1 = (t3*t1)%p;
s1 = (t3*t2)%p;
printf("\n \n in equation23 for e1 (c1,s1) = (%d , %d)",c1,s1);
c2 = (p-s1)%p;
s2 = c1;
printf("\n \n in equation23 for e2 (c2,s2) = (%d , %d)",c2,s2);
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;


/** equations **/
exp7(12*q1,a2,a5,p);
s = (2*a5[1])%p;
printf("\n \n in equation3 for equations s = %d",s);
set7(t+2,0,s,ptr2);
set7(t+2,1,0,ptr2);
set7(t+2,2,s,ptr2);
set7(t+2,3,0,ptr2);
set7(t+2,4,p-s,ptr2);
set7(t+2,5,0,ptr2);
set7(t+2,6,p-s,ptr2);
set7(t+2,7,0,ptr2);

set7(t+2,8,p-1,ptr2);
set7(t+2,9,0,ptr2);
set7(t+2,10,1,ptr2);
set7(t+2,11,0,ptr2);
set7(t+2,12,0,ptr2);
set7(t+2,13,p-1,ptr2);
set7(t+2,14,0,ptr2);
set7(t+2,15,1,ptr2);


set7(t+3,0,0,ptr2);
set7(t+3,1,s,ptr2);
set7(t+3,2,0,ptr2);
set7(t+3,3,s,ptr2);
set7(t+3,4,0,ptr2);
set7(t+3,5,p-s,ptr2);
set7(t+3,6,0,ptr2);
set7(t+3,7,p-s,ptr2);

set7(t+3,8,0,ptr2);
set7(t+3,9,p-1,ptr2);
set7(t+3,10,0,ptr2);
set7(t+3,11,1,ptr2);
set7(t+3,12,1,ptr2);
set7(t+3,13,0,ptr2);
set7(t+3,14,p-1,ptr2);
set7(t+3,15,0,ptr2);


if ((q1%4)==1)
    {
    set7(t+4,0,2,ptr2);
    set7(t+4,1,0,ptr2);
    set7(t+4,2,2,ptr2);
    set7(t+4,3,0,ptr2);
    set7(t+4,4,2,ptr2);
    set7(t+4,5,0,ptr2);
    set7(t+4,6,2,ptr2);
    set7(t+4,7,0,ptr2);

    set7(t+4,8,p-2,ptr2);
    set7(t+4,9,2,ptr2);
    set7(t+4,10,p-2,ptr2);  printf("\n \n in ^^^^^^^^^^ in solve16 t1 = %d  t2 = %d",t1,t2);
    t1 = a4[1];
    t2 = (p-a4[0])%p;
    printf("\n \n in ^^^^^^^^^^ in solve16 t1 = %d  t2 = %d",t1,t2);
    set7(t+4,11,2,ptr2);
    set7(t+4,12,p-2,ptr2);
    set7(t+4,13,p-2,ptr2);
    set7(t+4,14,p-2,ptr2);
    set7(t+4,15,p-2,ptr2);

    set7(t+5,0,0,ptr2);
    set7(t+5,1,2,ptr2);
    set7(t+5,2,0,ptr2);
    set7(t+5,3,2,ptr2);
    set7(t+5,4,0,ptr2);
    set7(t+5,5,2,ptr2);
    set7(t+5,6,0,ptr2);
    set7(t+5,7,2,ptr2);

    set7(t+5,8,p-2,ptr2);
    set7(t+5,9,p-2,ptr2);
    set7(t+5,10,p-2,ptr2);
    set7(t+5,11,p-2,ptr2);
    set7(t+5,12,2,ptr2);
    set7(t+5,13,p-2,ptr2);
    set7(t+5,14,2,ptr2);
    set7(t+5,15,p-2,ptr2);
    }


if ((q1%4)==3)
    {
    set7(t+4,0,2,ptr2);
    set7(t+4,1,0,ptr2);
    set7(t+4,2,2,ptr2);
    set7(t+4,3,0,ptr2);
    set7(t+4,4,2,ptr2);
    set7(t+4,5,0,ptr2);
    set7(t+4,6,2,ptr2);
    set7(t+4,7,0,ptr2);

    set7(t+4,8,p-2,ptr2);
    set7(t+4,9,p-2,ptr2);
    set7(t+4,10,p-2,ptr2);
    set7(t+4,11,p-2,ptr2);
    set7(t+4,12,p-2,ptr2);
    set7(t+4,13,2,ptr2);
    set7(t+4,14,p-2,ptr2);
    set7(t+4,15,2,ptr2);

    set7(t+5,0,0,ptr2);
    set7(t+5,1,2,ptr2);
    set7(t+5,2,0,ptr2);
    set7(t+5,3,2,ptr2);
    set7(t+5,4,0,ptr2);
    set7(t+5,5,2,ptr2);
    set7(t+5,6,0,ptr2);
    set7(t+5,7,2,ptr2);

    set7(t+5,8,2,ptr2);
    set7(t+5,9,p-2,ptr2);
    set7(t+5,10,2,ptr2);
    set7(t+5,11,p-2,ptr2);
    set7(t+5,12,p-2,ptr2);
    set7(t+5,13,p-2,ptr2);
    set7(t+5,14,p-2,ptr2);
    set7(t+5,15,p-2,ptr2);
    }

    for(i=0;i<16;i++)
        {
        t1 = *(ptr2[t+4]+i);
        t2 = *(ptr2[t+5]+i);
        t3 = (c1*t1)%p;
        t4 = (s1*t2)%p;
        t3 = (t3+t4)%p;
        t4 = *(ptr2[t+2]+i);
        t4 = (p-t4)%p;
        t3 = (t3+t4)%p;
        set7(t,i,t3,ptr2);
        b1[7] = 0;

        t3 = (c2*t1)%p;
        t4 = (s2*t2)%p;
        t3 = (t3+t4)%p;
        t4 = *(ptr2[t+3]+i);
        t4 = (p-t4)%p;
        t3 = (t3+t4)%p;
        set7(t+1,i,t3,ptr2);
        b1[8] = 0;
        }

    for(i=0;i<16;i++)
        {
        set7(t+2,i,0,ptr2);
        set7(t+3,i,0,ptr2);
        set7(t+4,i,0,ptr2);
        set7(t+5,i,0,ptr2);
        }

}



void equation24(int m2, integer g, STRING ptr2, integer b1[], unsigned int t, integer q, integer p)

{
int i;
integer i2;
integer t1,t2;
integer g1;
integer q1;
integer a2[2] = {0};

q1 = q/16;
printf("\n \n beginning of equation24");
printf("\n \n in equation24 q1 = %d",q1);

t1 = exp1(q/4,g,p);
g1 = (g*t1)%p;

i2 = exp1(q/2,g1,p);
printf("\n \n in equation 24 from sqrt1 i2 = %d",i2);

calc2(g1,i2,a2,p);
printf("\n \n in equation24 from calc2 a2 = ");
displayh(2,a2);

equation23(m2,a2,ptr2,b1,t,q,p);

for(i=0;i<4;i++)
    {
    t1 = *(ptr2[t]+2*i);
    t2 = *(ptr2[t]+2*i+1);
    t1 = (p-t1)%p;
    t2 = (p+t2)%p;
    set7(t,2*i,t2,ptr2);
    set7(t,2*i+1,t1,ptr2);

    t1 = *(ptr2[t+1]+2*i);
    t2 = *(ptr2[t+1]+2*i+1);
    t1 = (p-t1)%p;
    t2 = (p+t2)%p;
    set7(t+1,2*i,t2,ptr2);
    set7(t+1,2*i+1,t1,ptr2);
    }
}

void equation25(int m2, integer g, STRING ptr2, integer b1[], unsigned int t, integer q, integer p)

{
int i;
integer i2;
integer t1,t2,t3,t4;
integer s1,s2;
integer g1;
integer q1;
integer a2[2] = {0};

q1 = q/16;
printf("\n \n beginning of equation25");
printf("\n \n in equation25 q1 = %d",q1);

t1 = exp1(q/8,g,p);
g1 = (g*t1)%p;

t1 = (t1*t1)%p;
t2 = exp1(p-2,t1,p);
t1 = (t1+t2)%p;
t2 = (p+1)/2;
s1 = (t1*t2)%p;
s2 = (p-s1)%p;
printf("\n \n in equation25 s1 = %d  s2 = %d",s1,s2);


i2 = exp1(q/2,g1,p);
printf("\n \n in equation25 from sqrt1 i2 = %d",i2);

calc2(g1,i2,a2,p);
printf("\n \n in equation25 from calc2 a2 = ");
displayh(2,a2);

equation23(m2,a2,ptr2,b1,t,q,p);

for(i=0;i<4;i++)
    {
    t1 = *(ptr2[t]+2*i);
    t2 = *(ptr2[t]+2*i+1);
    t3 = (s1*t1)%p;
    t4 = (s2*t2)%p;
    t3 = (t3+t4)%p;
    set7(t,2*i,t3,ptr2);
    t3 = (s2*t1)%p;
    t4 = (s2*t2)%p;
    t4 = (t3+t4)%p;
    set7(t,2*i+1,t4,ptr2);

    t1 = *(ptr2[t+1]+2*i);
    t2 = *(ptr2[t+1]+2*i+1);
    t3 = (s1*t1)%p;
    t4 = (s2*t2)%p;
    t3 = (t3+t4)%p;
    set7(t+1,2*i,t3,ptr2);
    t3 = (s2*t1)%p;
    t4 = (s2*t2)%p;
    t4 = (t3+t4)%p;
    set7(t+1,2*i+1,t4,ptr2);

    }

t1 = *(ptr2[t]+8);
t2 = *(ptr2[t]+10);
t3 = *(ptr2[t]+13);
t4 = *(ptr2[t]+15);
t1 = (p-t1)%p;
t2 = (p-t2)%p;
t3 = (p-t3)%p;
t4 = (p-t4)%p;
set7(t,8,t1,ptr2);
set7(t,10,t2,ptr2);
set7(t,13,t3,ptr2);
set7(t,15,t4,ptr2);

t1 = *(ptr2[t+1]+8);
t2 = *(ptr2[t+1]+10);
t3 = *(ptr2[t+1]+13);
t4 = *(ptr2[t+1]+15);
t1 = (p-t1)%p;
t2 = (p-t2)%p;
t3 = (p-t3)%p;
t4 = (p-t4)%p;
set7(t+1,8,t1,ptr2);
set7(t+1,10,t2,ptr2);
set7(t+1,13,t3,ptr2);
set7(t+1,15,t4,ptr2);



}



void equation1(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
               integer q, integer p)

{
integer t1,t2,t3;
integer q1;
integer s;
integer a5[2] = {0};


q1 = q/16;

cmult(a4,a4,a5,p);
exp7(4*q1,a2,a5,p);
printf("\n \n in equation1 q1 = %d   a5 = (%d , %d)",q1,a5[0],a5[1]);
s = a5[0];

if ((q1%4)==3)
    {
    t1 = ((p-s)+1)%p;
    t2 = (s+(p-1))%p;
    set7(t,0,t1,ptr2);
    set7(t,1,s,ptr2);
    set7(t,2,t2,ptr2);
    set7(t,3,p-s,ptr2);
    set7(t,4,t2,ptr2);
    set7(t,5,p-s,ptr2);
    set7(t,6,t1,ptr2);
    set7(t,7,s,ptr2);
    b1[9] = 0;
    }

}


void equation3(int m2, integer a2[], integer a4[], STRING ptr2, integer b1[], unsigned int t,
               integer k3[], integer q, integer p)

{
int i;
int flag4;
integer e;
integer s;
integer t1,t2,t3,t4;
integer c1,s1,c2,s2;
integer q1;
integer a5[2] = {0};
integer k1[12] = {0};
integer k2[2] = {0};
integer h1[4] = {0};


q1 = q/16;
printf("\n \n beginning of equation3");
printf("\n \n in equation3 q1 = %d",q1);

cmult(a4,a4,a5,p);
s = a5[0];
s = (p+s)%p;
printf("\n in equation3  a4 = (%d , %d) a5 = (%d , %d)  s = %d",a4[0],a4[1],a5[0],a5[1],s);

if ((q1%4)==3*2)
    {
    printf("\n \n in equation2 q1 = %d",q1);

    t1 = a4[0];
    t2 = a4[1];
    set7(t,0,t1,ptr2);
    set7(t,4,t1,ptr2);
    set7(t,1,t2,ptr2);
    set7(t,5,t2,ptr2);
    set7(t,9,p-1,ptr2);
    set7(t,11,1,ptr2);

    t1 = a4[0];
    t2 = (p-a4[1])%p;
    set7(t+1,0,t2,ptr2);
    set7(t+1,4,t2,ptr2);
    set7(t+1,1,t1,ptr2);
    set7(t+1,5,t1,ptr2);
    set7(t+1,8,1,ptr2);
    set7(t+1,10,p-1,ptr2);

/**
    if ((q1%8)==7)
        {
        s = (p-s)%p;
        }
    t1 = a4[0];
    t2 = a4[1];
    set7(t,0,2,ptr2);
    set7(t,2,p-2,ptr2);
    set7(t,4,p-2,ptr2);
    set7(t,6,2,ptr2);

    t1 = (a4[0]+a4[1])%p;
    t1 = (s*t1)%p;
    printf("\n \n in equation2 t1 = %d",t1);
    t1 = (2*t1)%p;

    set7(t,8,t1,ptr2);
    set7(t,10,t1,ptr2);
    set7(t,13,t1,ptr2);
    set7(t,15,t1,ptr2);
    t1 = 1;
    if ((q1%8)==3)
        {
        t1 = p-1;
        }
    b1[6] = (t1*a4[0])%p;
**/

    }

printf("\n \n in equation3 k3 = ");
displayh(4,k3);

printf("in equation3 calc12 = ");
e = 2*q1-6;
flag4 = 1;
calc12(e,a2,flag4,k1,k2,p);


/** 1 **/
a4[0] = (p-a4[0])%p;
a4[1] = (p-a4[1])%p;

t1 = (p-a4[1])%p;
t2 = a4[0];
t3 = (p-1)/2;
c1 = (t3*t1)%p;
s1 = (t3*t2)%p;
printf("\n \n in equation3 for e1 (c1,s1) = (%d , %d)",c1,s1);
series(k1[3],k1[3],a2,0,h1,2,p);
printf("\n \n in equation3 for e1 q1 = %d h1 = ",q1);
displayh(4,h1);
t3 = (c1*h1[0])%p;
t4 = (s1*h1[1])%p;
t3 = (t3+t4)%p;
k3[2] = (k3[2]+t3)%p;

c2 = (p-s1)%p;
s2 = c1;
printf("\n \n in equation3 for e2 (c2,s2) = (%d , %d)",c2,s2);
t3 = (c2*h1[0])%p;
t4 = (s2*h1[1])%p;
t3 = (t3+t4)%p;
k3[3] = (k3[3]+t3)%p;

printf("\n \n in equation3 (1) k3 = ");
displayh(4,k3);
series(k1[2],k1[5],a2,0,h1,2,p);
printf("\n (%d , %d) = ",k1[2],k1[5]);
displayh(4,h1);
series(k1[8],k1[9],a2,0,h1,2,p);
printf("\n (%d , %d) = ",k1[8],k1[9]);
displayh(4,h1);


/** 2a **/
fn60(k1[2],k1[5],q1,3*q1,a2,a5,p);
printf("\n \n in equation4 a5 = ");
displayh(2,a5);
a5[0] = (p-a5[0])%p;
a5[1] = (p-a5[1])%p;
t3 = (c1*a5[0])%p;
t4 = (s1*a5[1])%p;
t3 = (t3+t4)%p;
k3[2] = (k3[2]+t3)%p;

t3 = (c2*a5[0])%p;
t4 = (s2*a5[1])%p;
t3 = (t3+t4)%p;
k3[3] = (k3[3]+t3)%p;


/** 2b **/
fn60(k1[8],k1[9],3*q1,5*q1,a2,a5,p);
printf("\n \n in equation4 a5 = ");
displayh(2,a5);
a5[0] = (p+a5[0])%p;
a5[1] = (p+a5[1])%p;
t3 = (c1*a5[0])%p;
t4 = (s1*a5[1])%p;
t3 = (t3+t4)%p;
k3[2] = (k3[2]+t3)%p;

t3 = (c2*a5[0])%p;
t4 = (s2*a5[1])%p;
t3 = (t3+t4)%p;
k3[3] = (k3[3]+t3)%p;

printf("\n \n in equation3 (2) k3 = ");
displayh(4,k3);
series(q1,3*q1,a2,0,h1,2,p);
printf("\n (%d , %d) = ",q1,3*q1);
displayh(4,h1);
series(3*q1,5*q1,a2,0,h1,2,p);
printf("\n (%d , %d) = ",3*q1,5*q1);
displayh(4,h1);


/** equations **/
exp7(12*q1,a2,a5,p);
s = (2*a5[1])%p;
printf("\n \n in equation3 for equations s = %d",s);
set7(t+2,0,s,ptr2);
set7(t+2,1,0,ptr2);
set7(t+2,2,s,ptr2);
set7(t+2,3,0,ptr2);
set7(t+2,4,p-s,ptr2);
set7(t+2,5,0,ptr2);
set7(t+2,6,p-s,ptr2);
set7(t+2,7,0,ptr2);

set7(t+2,8,p-1,ptr2);
set7(t+2,9,0,ptr2);
set7(t+2,10,1,ptr2);
set7(t+2,11,0,ptr2);
set7(t+2,12,0,ptr2);
set7(t+2,13,p-1,ptr2);
set7(t+2,14,0,ptr2);
set7(t+2,15,1,ptr2);


set7(t+3,0,0,ptr2);
set7(t+3,1,s,ptr2);
set7(t+3,2,0,ptr2);
set7(t+3,3,s,ptr2);
set7(t+3,4,0,ptr2);
set7(t+3,5,p-s,ptr2);
set7(t+3,6,0,ptr2);
set7(t+3,7,p-s,ptr2);

set7(t+3,8,0,ptr2);
set7(t+3,9,p-1,ptr2);
set7(t+3,10,0,ptr2);
set7(t+3,11,1,ptr2);
set7(t+3,12,1,ptr2);
set7(t+3,13,0,ptr2);
set7(t+3,14,p-1,ptr2);
set7(t+3,15,0,ptr2);


if ((q1%4)==1)
    {
    set7(t+4,0,2,ptr2);
    set7(t+4,1,0,ptr2);
    set7(t+4,2,2,ptr2);
    set7(t+4,3,0,ptr2);
    set7(t+4,4,2,ptr2);
    set7(t+4,5,0,ptr2);
    set7(t+4,6,2,ptr2);
    set7(t+4,7,0,ptr2);

    set7(t+4,8,p-2,ptr2);
    set7(t+4,9,2,ptr2);
    set7(t+4,10,p-2,ptr2);
    set7(t+4,11,2,ptr2);
    set7(t+4,12,p-2,ptr2);
    set7(t+4,13,p-2,ptr2);
    set7(t+4,14,p-2,ptr2);
    set7(t+4,15,p-2,ptr2);

    set7(t+5,0,0,ptr2);
    set7(t+5,1,2,ptr2);
    set7(t+5,2,0,ptr2);
    set7(t+5,3,2,ptr2);
    set7(t+5,4,0,ptr2);
    set7(t+5,5,2,ptr2);
    set7(t+5,6,0,ptr2);
    set7(t+5,7,2,ptr2);

    set7(t+5,8,p-2,ptr2);
    set7(t+5,9,p-2,ptr2);
    set7(t+5,10,p-2,ptr2);
    set7(t+5,11,p-2,ptr2);
    set7(t+5,12,2,ptr2);
    set7(t+5,13,p-2,ptr2);
    set7(t+5,14,2,ptr2);
    set7(t+5,15,p-2,ptr2);
    }


if ((q1%4)==3)
    {
    set7(t+4,0,2,ptr2);
    set7(t+4,1,0,ptr2);
    set7(t+4,2,2,ptr2);
    set7(t+4,3,0,ptr2);
    set7(t+4,4,2,ptr2);
    set7(t+4,5,0,ptr2);
    set7(t+4,6,2,ptr2);
    set7(t+4,7,0,ptr2);

    set7(t+4,8,p-2,ptr2);
    set7(t+4,9,p-2,ptr2);
    set7(t+4,10,p-2,ptr2);
    set7(t+4,11,p-2,ptr2);
    set7(t+4,12,p-2,ptr2);
    set7(t+4,13,2,ptr2);
    set7(t+4,14,p-2,ptr2);
    set7(t+4,15,2,ptr2);

    set7(t+5,0,0,ptr2);
    set7(t+5,1,2,ptr2);
    set7(t+5,2,0,ptr2);
    set7(t+5,3,2,ptr2);
    set7(t+5,4,0,ptr2);
    set7(t+5,5,2,ptr2);
    set7(t+5,6,0,ptr2);
    set7(t+5,7,2,ptr2);

    set7(t+5,8,2,ptr2);
    set7(t+5,9,p-2,ptr2);
    set7(t+5,10,2,ptr2);
    set7(t+5,11,p-2,ptr2);
    set7(t+5,12,p-2,ptr2);
    set7(t+5,13,p-2,ptr2);
    set7(t+5,14,p-2,ptr2);
    set7(t+5,15,p-2,ptr2);
    }

    for(i=0;i<16;i++)
        {
        t1 = *(ptr2[t+4]+i);
        t2 = *(ptr2[t+5]+i);
        t3 = (c1*t1)%p;
        t4 = (s1*t2)%p;
        t3 = (t3+t4)%p;
        t4 = *(ptr2[t+2]+i);
        t4 = (p-t4)%p;
        t3 = (t3+t4)%p;
        set7(t,i,t3,ptr2);
        b1[7] = 0;

        t3 = (c2*t1)%p;
        t4 = (s2*t2)%p;
        t3 = (t3+t4)%p;
        t4 = *(ptr2[t+3]+i);
        t4 = (p-t4)%p;
        t3 = (t3+t4)%p;
        set7(t+1,i,t3,ptr2);
        b1[8] = 0;

        }

    for(i=0;i<16;i++)
        {
        set7(t+2,i,0,ptr2);
        set7(t+3,i,0,ptr2);
        set7(t+4,i,0,ptr2);
        set7(t+5,i,0,ptr2);
        }

    a4[0] = (p-a4[0])%p;
    a4[1] = (p-a4[1])%p;

}


void f32(integer a2[], integer k4[], long int d1, integer q, integer p)
{
int i;
int a[8] = {1,3,5,7,2,6,4,0};
integer h1[4] = {0,0,0,0};
integer e;

e = q/16;
for(i=0;i<8;i++)
    {
    series1(a[i],e,8,a2,0,h1,d1,p);
    k4[2*i] = h1[0];
    k4[2*i+1] = h1[1];
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


void solve16(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer hs1[], integer hs2[], integer k3[], integer q, integer p)
{
unsigned int t;
int i,j;
integer t1,t2,t3,t4,t5,t6;
integer s3;
integer q1;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer a5[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(34,t,t+31,ptr2);
    setzero2(32,b1);

    e1 = q/16;
    exp7(2*e1,a2,a3,p);
    exp7(e1,a3,a4,p);
    printf(" in solve16 a4 = ");
    displayh(2,a4);


/**
    equation4(m2,a2,s3,ptr2,b1,e,hs1,t,q,p);
**/

    printf("\n \n in solve16 p = %d  q = %d",p,q);

    q1 = q/16;
    t1 = (a4[0]+a4[1])%p;
    t2 = (p-a4[1])%p;
    t2 = (a4[0]+t2)%p;
    if((q1%4)==1)
        {
        set7(t,8,1,ptr2);
        set7(t,10,1,ptr2);
        set7(t,13,p-1,ptr2);
        set7(t,15,p-1,ptr2);
        b1[0] = 0;

        t3 = (2*t2)%p;
        t4 = (p-t3)%p;
        set7(t+1,0,t3,ptr2);
        set7(t+1,2,t4,ptr2);
        set7(t+1,4,t4,ptr2);
        set7(t+1,6,t3,ptr2);
        t4 = (2*t1)%p;
        t3 = (p-t4)%p;
        set7(t+1,1,t3,ptr2);
        set7(t+1,3,t4,ptr2);
        set7(t+1,5,t4,ptr2);
        set7(t+1,7,t3,ptr2);
        t3 = (t1*a4[1])%p;
        t4 = (t2*a4[0])%p;
        printf("\n \n in solve16 t3 = %d  t4 = %d",t3,t4);
        t4 = (p-t4)%p;
        t4 = (t3+t4)%p;
        t3 = 1;
        if ((q1%8)==5)
            {
            t3 = p-1;
            }
        b1[1] = 0;
        }

    if((q1%4)==3)
        {
        set7(t,9,p-1,ptr2);
        set7(t,11,p-1,ptr2);
        set7(t,12,1,ptr2);
        set7(t,14,1,ptr2);
        b1[0] = (p+1)/2;

        t3 = (2*t2)%p;
        t4 = (p-t3)%p;
        set7(t+1,0,t3,ptr2);
        set7(t+1,2,t4,ptr2);
        set7(t+1,4,t4,ptr2);
        set7(t+1,6,t3,ptr2);
        t4 = (2*t1)%p;
        t3 = (p-t4)%p;
        set7(t+1,1,t3,ptr2);
        set7(t+1,3,t4,ptr2);
        set7(t+1,5,t4,ptr2);
        set7(t+1,7,t3,ptr2);
        t3 = (t1*a4[1])%p;
        t4 = (t2*a4[0])%p;
        printf("\n \n in solve16 t3 = %d  t4 = %d",t3,t4);
        t4 = (p-t4)%p;
        t4 = (t3+t4)%p;
        t3 = 1;
        if ((q1%8)==7)
            {
            t3 = p-1;
            }
        b1[1] = (t3*t4)%p;
        }



    if ((q1%4)==3)
    {
    t1 = a4[0];
    t2 = a4[1];
    set7(t+2,2,t1,ptr2);
    set7(t+2,6,t1,ptr2);
    set7(t+2,3,t2,ptr2);
    set7(t+2,7,t2,ptr2);
    set7(t+2,12,1,ptr2);
    set7(t+2,14,p-1,ptr2);
    b1[2] = 0;


    t2 = (p-a4[1])%p;
    set7(t+3,2,t2,ptr2);
    set7(t+3,6,t2,ptr2);
    set7(t+3,3,t1,ptr2);
    set7(t+3,7,t1,ptr2);
    set7(t+3,13,1,ptr2);
    set7(t+3,15,p-1,ptr2);
    b1[3] = 0;


    t1 = (p-a4[0])%p;
    t2 = (p+a4[1])%p;
    set7(t+4,0,t2,ptr2);
    set7(t+4,4,t2,ptr2);
    set7(t+4,1,t1,ptr2);
    set7(t+4,5,t1,ptr2);
    set7(t+4,8,p-1,ptr2);
    set7(t+4,10,1,ptr2);
    b1[4] = 0;


    t1 = a4[0];
    t2 = a4[1];
    set7(t+5,0,t1,ptr2);
    set7(t+5,4,t1,ptr2);
    set7(t+5,1,t2,ptr2);
    set7(t+5,5,t2,ptr2);
    set7(t+5,9,p-1,ptr2);
    set7(t+5,11,1,ptr2);
    b1[5] = 0;
    }


    if ((q1%4)==1)
    {
    t1 = a4[0];
    t2 = a4[1];
    set7(t+2,0,t1,ptr2);
    set7(t+2,4,t1,ptr2);
    set7(t+2,1,t2,ptr2);
    set7(t+2,5,t2,ptr2);
    set7(t+2,12,(p+1)%p,ptr2);
    set7(t+2,14,(p-1)%p,ptr2);
    b1[2] = 0;


    t2 = (p-a4[1])%p;
    set7(t+3,0,t2,ptr2);
    set7(t+3,4,t2,ptr2);
    set7(t+3,1,t1,ptr2);
    set7(t+3,5,t1,ptr2);
    set7(t+3,13,(p+1)%p,ptr2);
    set7(t+3,15,(p-1)%p,ptr2);
    b1[3] = 0;


    t1 = (p-a4[0])%p;
    t2 = (p+a4[1])%p;
    set7(t+4,2,t2,ptr2);
    set7(t+4,6,t2,ptr2);
    set7(t+4,3,t1,ptr2);
    set7(t+4,7,t1,ptr2);
    set7(t+4,8,p-1,ptr2);
    set7(t+4,10,1,ptr2);
    b1[4] = 0;


    t1 = a4[0];
    t2 = a4[1];
    set7(t+5,2,t1,ptr2);
    set7(t+5,6,t1,ptr2);
    set7(t+5,3,t2,ptr2);
    set7(t+5,7,t2,ptr2);
    set7(t+5,9,p-1,ptr2);
    set7(t+5,11,1,ptr2);
    b1[5] = 0;
    }

/** the 7th equation **/
    equation22(m2,a2,a4,ptr2,b1,t+6,q,p);


/** test **/
/**
    equation21(m2,a2,a4,ptr2,b1,t+7,q,p);
**/



    equation3(m2,a2,a4,ptr2,b1,t+14+16,k3,q,p);

    equation23(m2,a2,ptr2,b1,t+7,q,p);

/**
    equation24(m2,7,ptr2,b1,t+9,q,p);
    equation25(m2,7,ptr2,b1,t+9,q,p);
**/


/** test 1 **/
/** s4 at q
    t1 = 2249;
    t2 = 2520;
    t1 = 2520;
    t2 = p-2249;
    set7(t+9,0,t1,ptr2);
    set7(t+9,4,t1,ptr2);
    set7(t+9,1,t2,ptr2);
    set7(t+9,5,t2,ptr2);

    t3 = (t1+t2)%p;
    t4 = (p-t2)%p;
    t4 = (t1+t4)%p;
    t1 = (p+1)/2;
    t3 = (t1*t3)%p;
    t4 = (t1*t4)%p;
    set7(t+9,8,t4,ptr2);
    set7(t+9,10,t4,ptr2);
    set7(t+9,13,p-t4,ptr2); set7(t+16,0,t3,ptr2);
    set7(t+16,2,t3,ptr2);
    set7(t+16,4,t4,ptr2);
    set7(t+16,6,t4,ptr2);
    set7(t+16,8,t6,ptr2);
    set7(t+16,10,t5,ptr2);
    set7(t+16,13,t6,ptr2);
    set7(t+16,15,t5,ptr2);
    set7(t+9,15,p-t4,ptr2);
    set7(t+9,9,t3,ptr2);
    set7(t+9,11,t3,ptr2);
    set7(t+9,12,t3,ptr2);
    set7(t+9,14,t3,ptr2);

    t3 = 2616;
    t3 = (p-t3)%p;
    t4 = 1;
    t3 = (t3*t4)%p;
    t4 = p-t3;

    t1 = *(ptr2[t+9]+0);
    set7(t+9,0,(t3+t1)%p,ptr2);

    t1 = *(ptr2[t+9]+2);
    set7(t+9,2,(t3+t1)%p,ptr2);

    t1 = *(ptr2[t+9]+4);
    set7(t+9,4,(t4+t1)%p,ptr2);

    t1 = *(ptr2[t+9]+6);
    set7(t+9,6,(t4+t1)%p,ptr2);

    t1 = *(ptr2[t+9]+8);
    set7(t+9,8,(t1+(p-1))%p,ptr2);

    t1 = *(ptr2[t+9]+10);
    set7(t+9,10,(t1+1)%p,ptr2);


    t1 = 2249;
    t2 = 2520;
    set7(t+10,0,t1,ptr2);
    set7(t+10,4,t1,ptr2);
    set7(t+10,1,t2,ptr2);
    set7(t+10,5,t2,ptr2);

    t3 = (t1+t2)%p;
    t4 = (p-t2)%p;
    t4 = (t1+t4)%p;
    t1 = (p+1)/2;
    t3 = (t1*t3)%p;
    t4 = (t1*t4)%p;
    set7(t+10,8,t4,ptr2);
    set7(t+10,10,t4,ptr2);
    set7(t+10,13,p-t4,ptr2);
    set7(t+10,15,p-t4,ptr2);
    set7(t+10,9,t3,ptr2);
    set7(t+10,11,t3,ptr2);
    set7(t+10,12,t3,ptr2);
    set7(t+10,14,t3,ptr2);

    t3 = 2616;
    t3 = (p-t3)%p;
    t4 = 1;
    t3 = (t3*t4)%p;
    t4 = p-t3;

    t1 = *(ptr2[t+10]+1);
    set7(t+10,1,(t3+t1)%p,ptr2);

    t1 = *(ptr2[t+10]+3);
    set7(t+10,3,(t3+t1)%p,ptr2);

    t1 = *(ptr2[t+10]+5);
    set7(t+10,5,(t4+t1)%p,ptr2);

    t1 = *(ptr2[t+10]+7);
    set7(t+10,7,(t4+t1)%p,ptr2);

    t1 = *(ptr2[t+10]+9);
    set7(t+10,9,(t1+(p-1))%p,ptr2);

    t1 = *(ptr2[t+10]+11);
    set7(t+10,11,(t1+(p+1))%p,ptr2);
**/


/** test 2 **/
/** (1)  **/
/**
    t1 = 2520;
    t2 = p-2249;
    set7(t+9,0,t1,ptr2);
    set7(t+9,2,t1,ptr2);
    set7(t+9,4,t1,ptr2);
    set7(t+9,6,t1,ptr2);

    set7(t+9,1,t2,ptr2);
    set7(t+9,3,t2,ptr2);
    set7(t+9,5,t2,ptr2);
    set7(t+9,7,t2,ptr2);

    t3 = 1;
    t4 = p-t3;
    set7(t+9,8,t4,ptr2);
    set7(t+9,10,t3,ptr2);
    set7(t+9,13,t4,ptr2);
    set7(t+9,15,t3,ptr2);



    t1 = 2249;
    t2 = 2520;
    set7(t+10,0,t1,ptr2);
    set7(t+10,2,t1,ptr2);
    set7(t+10,4,t1,ptr2);
    set7(t+10,6,t1,ptr2);

    set7(t+10,1,t2,ptr2);
    set7(t+10,3,t2,ptr2);
    set7(t+10,5,t2,ptr2);
    set7(t+10,7,t2,ptr2);

    t3 = 1;
    t4 = p-t3;
    set7(t+10,9,t4,ptr2);
    set7(t+10,11,t3,ptr2);
    set7(t+10,12,t3,ptr2);
    set7(t+10,14,t4,ptr2);
**/



/**  (2)  **/
/**
    t1 = 2520;
    t2 = p-2249;
    set7(t+11,8,t1,ptr2);
    set7(t+11,10,t1,ptr2);
    set7(t+11,12,t1,ptr2);
    set7(t+11,14,t1,ptr2);

    set7(t+11,9,t2,ptr2);
    set7(t+11,11,t2,ptr2);
    set7(t+11,13,t2,ptr2);
    set7(t+11,15,t2,ptr2);

    t3 = (2*2616)%p;
    t4 = p-t3;
    set7(t+11,0,t4,ptr2);
    set7(t+11,2,t4,ptr2);
    set7(t+11,4,t3,ptr2);
    set7(t+11,6,t3,ptr2);



    t1 = 2249;
    t2 = 2520;
    set7(t+12,8,t1,ptr2);
    set7(t+12,10,t1,ptr2);
    set7(t+12,12,t1,ptr2);
    set7(t+12,14,t1,ptr2);

    set7(t+12,9,t2,ptr2);
    set7(t+12,11,t2,ptr2);
    set7(t+12,13,t2,ptr2);
    set7(t+12,15,t2,ptr2);

    t3 = (2*2616)%p;
    t4 = p-t3;
    set7(t+12,1,t4,ptr2);
    set7(t+12,3,t4,ptr2);
    set7(t+12,5,t3,ptr2);
    set7(t+12,7,t3,ptr2);
**/



    e1 = q/8;
    exp7(2*e1,a2,a3,p);
    printf("\n \n &&&&&&&&&&&&&&&&& in solve16 a3 = ");
    displayh(2,a3);
    a4[0] = (a3[0]*a4[0])%p;
    a4[1] = (a3[1]*a4[1])%p;
    printf("\n \n in solve16 a4 = ");
    displayh(2,a4);

    t3 = (2*a3[0])%p;
    t4 = p-t3;
    t5 = 1;
    t6 = p-t5;
    set7(t+16,0,t3,ptr2);
    set7(t+16,2,t3,ptr2);
    set7(t+16,4,t4,ptr2);
    set7(t+16,6,t4,ptr2);
    set7(t+16,8,t6,ptr2);
    set7(t+16,10,t5,ptr2);
    set7(t+16,13,t6,ptr2);
    set7(t+16,15,t5,ptr2);

    set7(t+17,1,t3,ptr2);
    set7(t+17,3,t3,ptr2);
    set7(t+17,5,t4,ptr2);
    set7(t+17,7,t4,ptr2);
    set7(t+17,9,t6,ptr2);
    set7(t+17,11,t5,ptr2);
    set7(t+17,12,t5,ptr2);
    set7(t+17,14,t6,ptr2);



    t3 = (2*a3[0])%p;
    t4 = p-t3;
    t5 = 1;
    t6 = p-t5;
    set7(t+21,0,t3,ptr2);
    set7(t+21,2,t3,ptr2);
    set7(t+21,4,t4,ptr2);
    set7(t+21,6,t4,ptr2);
    set7(t+21,8,t6,ptr2);
    set7(t+21,10,t5,ptr2);
    set7(t+21,13,t6,ptr2);
    set7(t+21,15,t5,ptr2);

    set7(t+23,1,t3,ptr2);
    set7(t+23,3,t3,ptr2);
    set7(t+23,5,t4,ptr2);
    set7(t+23,7,t4,ptr2);
    set7(t+23,9,t6,ptr2);
    set7(t+23,11,t5,ptr2);
    set7(t+23,12,t5,ptr2);
    set7(t+23,14,t6,ptr2);



    e1 = q/16;
    exp7(2*e1,a2,a5,p);
    exp7(e1,a5,a3,p);
    printf(" in solve16 a3 = ");
    displayh(2,a3);


    t1 = p-a3[1];
    t2 = a3[0];
    printf("\n \n in ^^^^^^^^^^ in solve16 t1 = %d  t2 = %d",t1,t2);
    set7(t+22,0,t1,ptr2);
    set7(t+22,2,t1,ptr2);
    set7(t+22,4,t1,ptr2);
    set7(t+22,6,t1,ptr2);
    set7(t+22,1,t2,ptr2);
    set7(t+22,3,t2,ptr2);
    set7(t+22,5,t2,ptr2);
    set7(t+22,7,t2,ptr2);

    t3 = (t1+t2)%p;
    t3 = p-t3;
    t4 = p-t2;
    t4 = (t1+t4)%p;
    set7(t+22,8,p-t4,ptr2);
    set7(t+22,10,p-t4,ptr2);
    set7(t+22,12,t3,ptr2);
    set7(t+22,14,t3,ptr2);
    set7(t+22,9,t3,ptr2);
    set7(t+22,11,t3,ptr2);
    set7(t+22,13,t4,ptr2);
    set7(t+22,15,t4,ptr2);

    t1 = (p-a3[0])%p;
    t2 = (p-a3[1])%p;
    printf("\n \n in ^^^^^^^^^^ in solve16 t1 = %d  t2 = %d",t1,t2);
    set7(t+24,0,t1,ptr2);
    set7(t+24,2,t1,ptr2);
    set7(t+24,4,t1,ptr2);
    set7(t+24,6,t1,ptr2);
    set7(t+24,1,t2,ptr2);
    set7(t+24,3,t2,ptr2);
    set7(t+24,5,t2,ptr2);
    set7(t+24,7,t2,ptr2);

    t3 = (t1+t2)%p;
    t3 = p-t3;
    t4 = p-t2;
    t4 = (t1+t4)%p;
    set7(t+24,8,p-t4,ptr2);
    set7(t+24,10,p-t4,ptr2);
    set7(t+24,12,t3,ptr2);
    set7(t+24,14,t3,ptr2);
    set7(t+24,9,t3,ptr2);
    set7(t+24,11,t3,ptr2);
    set7(t+24,13,t4,ptr2);
    set7(t+24,15,t4,ptr2);


/**
    for(i=0;i<16;i++)
        {
        t1 = *(ptr2[t+21-5]+i);
        t2 = *(ptr2[t+21]+i);
        t2 = (p-t2)%p;
        t1 = (t1+t2)%p;
        set7(t+11,i,t1,ptr2);

        t1 = *(ptr2[t+23-6]+i);
        t2 = *(ptr2[t+23]+i);
        t2 = (p-t2)%p;
        t1 = (t1+t2)%p;
        set7(t+12,i,t1,ptr2);
        }
**/


/**
    set7(t+11,0,1,ptr2);
    set7(t+11,2,1,ptr2);
    set7(t+11,4,p-1,ptr2);
    set7(t+11,6,p-1,ptr2);
**/

/**
    set7(t+12,1,1,ptr2);
    set7(t+12,3,1,ptr2);
    set7(t+12,5,p-1,ptr2);
    set7(t+12,7,p-1,ptr2);


    t1 = 2249;
    t2 = 2250;
    t3 = (p-t2)%p;
    t3 = (t1+t3)%p;
    t4 = (t1+t2)%p;
    set7(t+13,8,t3,ptr2);
    set7(t+13,10,t3,ptr2);
    set7(t+13,13,p-t3,ptr2);
    set7(t+13,15,p-t3,ptr2);

    set7(t+13,9,t4,ptr2);
    set7(t+13,11,t4,ptr2);
    set7(t+13,12,t4,ptr2);
    set7(t+13,14,t4,ptr2);
**/


/**
    set7(t+11,0,p-1,ptr2);
    set7(t+11,2,p-1,ptr2);
    set7(t+11,4,p-1,ptr2);
    set7(t+11,6,p-1,ptr2);

    set7(t+11,8,1,ptr2);
    set7(t+11,10,1,ptr2);
    set7(t+11,12,1,ptr2);
    set7(t+11,14,1,ptr2);

    set7(t+12,12,p-1,ptr2);
    set7(t+12,14,1,ptr2);
**/


/**
    for(i=0;i<32;i++)
        {
        for(j=0;j<8;j++)
            {
            t1 = *(ptr2[t+i]+j);
            t2 = *(ptr2[t+i]+j+8);
            set7(t+i,j+8,t1,ptr2);
            set7(t+i,j,t2,ptr2);
            }
        }
**/





    printf("\n \n");
    display16d(t,ptr2,b1);
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


void f81(int flag4, integer a2[], integer k8[], long int d1, integer q, integer p)

{
int i;
integer t1;
integer a3[2] = {0};
integer k2[18] = {0};
integer s1[10] = {0};
integer h1[4] = {0};
integer h15[12] = {0};

if (q==0)
    {
    q = (p-1)/d1;
    }

if ((q%27)!=0)
    {
    printf("\n \n error in f81 q mod 27 should equal 0");
    }

for (i=0;i<16;i++)
    {
    k8[i] = 0;
    }

calc29d(a2,flag4,k2,d1,q,p);
for (i=0;i<5;i++)
    {
    series(k2[2*i],k2[2*i+1],a2,0,h1,2,p);
    s1[2*i] = h1[0];
    s1[2*i+1] = h1[1];
    }

if (flag4==1)
    {
    printf("\n \n k2 = ");
    displayh(18,k2);
    printf("\n \n s1 = ");
    displayh(10,s1);
    }

t1 = (s1[0]+s1[4])%p;
k8[0] = (s1[6]+t1)%p;
t1 = (s1[1]+s1[5])%p;
k8[1] = (s1[7]+t1)%p;
t1 = (2*s1[2])%p;
k8[2] = (s1[8]+t1)%p;
t1 = (2*s1[3])%p;
k8[3] = (s1[9]+t1)%p;

/*
printf("\n \n in f81 a3 = ");
displayh(2,a3);
series(1,65,a3,0,h1,2,p);
printf("\n \n in f81 test h1 = ");
displayh(4,h1);
*/

exp7(9,a2,a3,p);
calc20d(a3,flag4,h15,d1,q/9,p);

series(1,h15[1],a3,2*(q/27),h1,2,p);
if (flag4==1)
    {
    printf("\n \n h1( 1 , %d) = ",h15[1]);
    displayh(4,h1);
    printf("   t = %d",2*(q/27));
    }
k8[4] = h1[0];
k8[5] = h1[1];
k8[6] = h1[2];
k8[7] = h1[3];


if (flag4==1)
    {
    printf("\n \n k8 = ");
    displayh(8,k8);
    }

}

void solve8(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
            integer k3[], integer q, integer p)
{
unsigned int t;
unsigned int i;
integer t1,t2,t3,t4,t5,t6,t7,t8;
integer s1,s2,s3,s4,s5,s6,s7,s8;
integer q1;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(16,b1);

    e1 = q/3;
    exp7(2*e1,a2,a4,p);
    printf(" in solve8 a4 = ");
    displayh(2,a4);


    printf("\n \n in solve8 p = %d  q = %d",p,q);

    q1 = q;
    t1 = (a4[0]+a4[1])%p;
    t2 = (p-a4[1])%p;
    t2 = (a4[0]+t2)%p;
    if((q1%27)==0)
        {
        set7(t,0,p-2,ptr2);
        set7(t,1,2,ptr2);
        set7(t,2,p-1,ptr2);
        set7(t,3,1,ptr2);
        b1[0] = 1;

        t2 = (a4[0]+a4[1])%p;
        t1 = (3*t1)%p;
        t3 = (p-a4[0])%p;
        t3 = (t3+a4[1])%p;
        t4 = (p-t3)%p;
        t3 = (3*t3)%p;
        t3 = (p-t3)%p;
        t4 = (p-t4)%p;

        t1 = a4[0];
        t2 = (p-t1)%p;
        t3 = a4[1];
        t4 = (p-t3)%p;
        set7(t+12,4,t1,ptr2);
        set7(t+12,5,t3,ptr2);
        set7(t+12,6,t4,ptr2);
        set7(t+12,7,t1,ptr2);

        set7(t+13,4,t4,ptr2);
        set7(t+13,5,t1,ptr2);
        set7(t+13,6,t2,ptr2);
        set7(t+13,7,t4,ptr2);

        set7(t+14,4,t1,ptr2);
        set7(t+14,5,t3,ptr2);
        set7(t+14,6,t3,ptr2);
        set7(t+14,7,t2,ptr2);

        set7(t+15,4,t4,ptr2);
        set7(t+15,5,t1,ptr2);
        set7(t+15,6,t1,ptr2);
        set7(t+15,7,t3,ptr2);

        s1 = (3*t1)%p;
        s2 = (3*t3)%p;
        s3 = (2*t4+t3)%p;
        s4 = (2*t1+t2)%p;
        t5 = (6*s1)%p;
        t6 = (6*s2)%p;
        t7 = (6*s3)%p;
        t8 = (6*s4)%p;
        set7(t+1,1,p-2,ptr2);
        set7(t+1,3,p-1,ptr2);
        set7(t+1,4,t5,ptr2);
        set7(t+1,5,t6,ptr2);
        set7(t+1,6,t7,ptr2);
        set7(t+1,7,t8,ptr2);
        b1[1] = 0;

        s5 = (3*t4)%p;
        s6 = (3*t1)%p;
        s7 = (2*t2+t1)%p;
        s8 = (2*t4+t3)%p;
/**
        set7(t+2,4,s1,ptr2);
        set7(t+2,5,s2,ptr2);
        set7(t+2,6,s3,ptr2);
        set7(t+2,7,s4,ptr2);

        set7(t+3,4,s5,ptr2);
        set7(t+3,5,s6,ptr2);
        set7(t+3,6,s7,ptr2);
        set7(t+3,7,s8,ptr2);
**/
        t5 = (p-s1)%p;
        t6 = (p-s2)%p;
        t7 = (p-s3)%p;
        t8 = (p-s4)%p;
        t5 = (s5+t5)%p;
        t6 = (s6+t6)%p;
        t7 = (s7+t7)%p;
        t8 = (s8+t8)%p;
        set7(t+2,4,t5,ptr2);
        set7(t+2,5,t6,ptr2);
        set7(t+2,6,t7,ptr2);
        set7(t+2,7,t8,ptr2);
        b1[2] = (2*a4[1])%p;


/** c(c6) and s(c6) **/
        s1 = (4*t1)%p;
        s2 = (4*t3)%p;
        s3 = (3*t4+t3)%p;
        s4 = (3*t1+t2)%p;
        set7(t+3,0,(p-1)/3,ptr2);
        set7(t+3,2,(p-1)/3,ptr2);
        set7(t+3,4,s1,ptr2);
        set7(t+3,5,s2,ptr2);
        set7(t+3,6,s3,ptr2);
        set7(t+3,7,s4,ptr2);
        b1[3] = (p-1)/6;

        s1 = (4*t4)%p;
        s2 = (4*t1)%p;
        s3 = (3*t2+t1)%p;
        s4 = (3*t4+t3)%p;
        set7(t+4,1,(p-1)/3,ptr2);
        set7(t+4,3,(p-1)/3,ptr2);
        set7(t+4,4,s1,ptr2);
        set7(t+4,5,s2,ptr2);
        set7(t+4,6,s3,ptr2);
        set7(t+4,7,s4,ptr2);
        b1[4] = (p-1)/3;
        b1[4] = (7*b1[4])%p;
        b1[4] = (a4[1]*b1[4])%p;
        b1[4] = (p-b1[4])%p;



/** c(s2-s4+s8) and s(s2-s4+s8) **/
/**
        t1 = a4[0];
        t2 = (p-a4[1])%p;
        set7(t+5,0,t1,ptr2);
        set7(t+5,2,p-t1,ptr2);
        set7(t+5,1,t2,ptr2);
        set7(t+5,3,p-t2,ptr2);
        set7(t+5,7,(p+6)%p,ptr2);

        t1 = a4[0];
        t2 = (p-a4[1])%p;
        set7(t+6,0,t2,ptr2);
        set7(t+6,2,p-t2,ptr2);
        set7(t+6,1,p-t1,ptr2);
        set7(t+6,3,t1,ptr2);
        set7(t+6,6,(p+6)%p,ptr2);
**/

/** 1 **/
        s1 = (a4[0]+a4[1])%p;
        s4 = 1;
        s2 = (3*t1)%p;
        s2 = (s1*s2)%p;
        set7(t+10,4,(s4*s2)%p,ptr2);
        s2 = (3*t3)%p;
        s2 = (s1*s2)%p;
        set7(t+10,5,(s4*(s2+(p-2)))%p,ptr2);
        s2 = (2*t4+t3)%p;
        s2 = (s1*s2)%p;
        set7(t+10,6,(s4*s2)%p,ptr2);
        s2 = (2*t1+t2)%p;
        s2 = (s1*s2)%p;
        set7(t+10,7,(s4*s2)%p,ptr2);

/** 2 **/
        s1 = (p-a4[1])%p;
        s1 = (a4[0]+s1)%p;
        s4 = 1;
        s2 = (3*t1)%p;
        s2 = (s1*s2)%p;
        set7(t+11,4,(s4*(s2+(p-2)))%p,ptr2);
        s2 = (3*t3)%p;
        s2 = (s1*s2)%p;
        set7(t+11,5,(s4*(s2+(p-0)))%p,ptr2);
        s2 = (2*t4+t3)%p;
        s2 = (s1*s2)%p;
        set7(t+11,6,(s4*s2)%p,ptr2);
        s2 = (2*t1+t2)%p;
        s2 = (s1*s2)%p;
        set7(t+11,7,(s4*s2)%p,ptr2);


/** 3 **/
        s1 = (a4[0]+a4[1])%p;
        s4 = p-3;
        s2 = (3*t1)%p;
        s2 = (s1*s2)%p;
        set7(t+6,4,(s4*s2)%p,ptr2);
        s2 = (3*t3)%p;
        s2 = (s1*s2)%p;
        set7(t+6,5,(s4*(s2+(p-2+3)))%p,ptr2);
        s2 = (2*t4+t3)%p;
        s2 = (s1*s2)%p;
        set7(t+6,6,(s4*s2)%p,ptr2);
        s2 = (2*t1+t2)%p;
        s2 = (s1*s2)%p;
        set7(t+6,7,(s4*s2)%p,ptr2);

        s1 = a4[0];
        s2 = (p-a4[1])%p;
        s1 = a4[1];
        s2 = a4[0];
        s3 = (p+1)/2;
        s1 = (s1*s3)%p;
        s2 = (s2*s3)%p;
        set7(t+6,0,(3*s1)%p,ptr2);
        set7(t+6,2,s1,ptr2);
        set7(t+6,1,(3*s2)%p,ptr2);
        set7(t+6,3,s2,ptr2);

/**
        set7(t+6,5,(p-9)%p,ptr2);
**/


/** 4 **/
        s1 = (p-a4[1])%p;
        s1 = (a4[0]+s1)%p;
        s4 = p-3;
        s2 = (3*t1)%p;
        s2 = (s1*s2)%p;
        set7(t+7,4,(s4*(s2+(p-2+3)))%p,ptr2);
        s2 = (3*t3)%p;
        s2 = (s1*s2)%p;
        set7(t+7,5,(s4*(s2+(p-0)))%p,ptr2);
        s2 = (2*t4+t3)%p;
        s2 = (s1*s2)%p;
        set7(t+7,6,(s4*s2)%p,ptr2);
        s2 = (2*t1+t2)%p;
        s2 = (s1*s2)%p;
        set7(t+7,7,(s4*s2)%p,ptr2);

        s1 = a4[0];
        s2 = (p-a4[1])%p;
        s3 = (p+1)/2;
        s1 = (s1*s3)%p;
        s2 = (s2*s3)%p;
        set7(t+7,0,(3*s1)%p,ptr2);
        set7(t+7,2,s1,ptr2);
        set7(t+7,1,(3*s2)%p,ptr2);
        set7(t+7,3,s2,ptr2);

/**
        set7(t+7,4,(p-9)%p,ptr2);
**/


/** 4 **/
        s1 = (p-a4[1])%p;
        s1 = (a4[0]+s1)%p;
        s4 = p-3;
        s2 = (3*t1)%p;
        s2 = (s1*s2)%p;
        set7(t+5,4,(s4*(s2+(p-2+1)))%p,ptr2);
        s2 = (3*t3)%p;
        s2 = (s1*s2)%p;
        set7(t+5,5,(s4*(s2+(p-0)))%p,ptr2);
        s2 = (2*t4+t3)%p;
        s2 = (s1*s2)%p;
        set7(t+5,6,(s4*s2)%p,ptr2);
        s2 = (2*t1+t2)%p;
        s2 = (s1*s2)%p;
        set7(t+5,7,(s4*s2)%p,ptr2);

        s1 = a4[0];
        s2 = (p-a4[1])%p;
        s3 = (p+1)/2;
        s1 = (s1*s3)%p;
        s2 = (s2*s3)%p;
        set7(t+5,0,(1*s1)%p,ptr2);
        set7(t+5,2,s1,ptr2);
        set7(t+5,1,(1*s2)%p,ptr2);
        set7(t+5,3,s2,ptr2);

/**
        for(i=0;i<8,i++)
            {
            set7(t+5,i,0,ptr2);
            set7(t+6,i,0,ptr2);
            set7(t+7,i,0,ptr2);
            }
**/





/** test (+1/4) c(c1+c5+c7) **/

        printf("\n \n for test(+1/4) in solve8 a4 = ");
        a4[1] = (p-a4[1])%p;
        displayh(2,a4);
        t1 = a4[0];
        t2 = a4[1];

        t1 = 0;
        t2 = 0;

        set7(t+6,0,(1*t1)%p,ptr2);
        set7(t+6,2,(1*t1)%p,ptr2);
        set7(t+6,1,(1*t2)%p,ptr2);
        set7(t+6,3,(1*t2)%p,ptr2);




        t1 = *(ptr2[t+12]+4);
        t2 = *(ptr2[t+12]+5);
        t3 = *(ptr2[t+12]+6);
        t4 = *(ptr2[t+12]+7);

        t5 = *(ptr2[t+14]+4);
        t6 = *(ptr2[t+14]+5);
        t7 = *(ptr2[t+14]+6);
        t8 = *(ptr2[t+14]+7);

        s1 = 3;
        t1 = (s1*t1+t5)%p;
        t2 = (s1*t2+t6)%p;
        t3 = (s1*t3+t7)%p;
        t4 = (s1*t4+t8)%p;
        set7(t+5,4,t1,ptr2);
        set7(t+5,5,t2,ptr2);
        set7(t+5,6,t3,ptr2);
        set7(t+5,7,t4,ptr2);



        t1 = *(ptr2[t+13]+4);
        t2 = *(ptr2[t+13]+5);
        t3 = *(ptr2[t+13]+6);
        t4 = *(ptr2[t+13]+7);

        t5 = *(ptr2[t+15]+4);
        t6 = *(ptr2[t+15]+5);
        t7 = *(ptr2[t+15]+6);
        t8 = *(ptr2[t+15]+7);

        s1 = 3;
        t1 = (s1*t1+t5)%p;
        t2 = (s1*t2+t6)%p;
        t3 = (s1*t3+t7)%p;
        t4 = (s1*t4+t8)%p;
        set7(t+6,4,t1,ptr2);
        set7(t+6,5,t2,ptr2);
        set7(t+6,6,t3,ptr2);
        set7(t+6,7,t4,ptr2);



        t1 = *(ptr2[t+12]+4);
        t2 = *(ptr2[t+12]+5);
        t3 = *(ptr2[t+12]+6);
        t4 = *(ptr2[t+12]+7);

        t5 = p-6;
        t1 = (t5*t1)%p;
        t2 = (t5*t2)%p;
        t3 = (t5*t3)%p;
        t4 = (t5*t4)%p;
        t1 = (t5+(p-6))%p;
        set7(t+7,4,t1,ptr2);
        set7(t+7,5,t2,ptr2);
        set7(t+7,6,t3,ptr2);
        set7(t+7,7,t4,ptr2);



/** test 42 **/
/**
        printf("\n \n 42 in solve8 a4 = ");
        displayh(2,a4);

        t1 = *(ptr2[t+10]+4);
        t2 = *(ptr2[t+10]+5);
        t3 = *(ptr2[t+10]+6);
        t4 = *(ptr2[t+10]+7);
        t1 = (6*t1)%p;
        t2 = (6*t2)%p;
        t3 = (6*t3)%p;
        t4 = (6*t4)%p;

        t5 = a4[1];
        t5 = (p+t5)%p;
        t6 = a4[0];
        t6 = (p-t6)%p;

        set7(t+5,0,t5*1,ptr2);
        set7(t+5,1,t6*1,ptr2);
        set7(t+5,2,t5*1,ptr2);
        set7(t+5,3,t6*1,ptr2);
        set7(t+5,4,(t1+0)%p,ptr2);
        set7(t+5,5,(t2+6)%p,ptr2);
        set7(t+5,6,t3,ptr2);
        set7(t+5,7,t4,ptr2);

        t1 = (2*a4[1])%p;
        t1 = p-t1;
        set7(t+6,0,1*0,ptr2);
        set7(t+6,1,t1*0,ptr2);
        set7(t+6,2,1*0,ptr2);
        set7(t+6,3,t1*0,ptr2);
        set7(t+6,4,0,ptr2);
        set7(t+6,5,0,ptr2);
        set7(t+6,6,0,ptr2);
        set7(t+6,7,0,ptr2);


        set7(t+7,0,t5*0,ptr2);
        set7(t+7,1,t6*0,ptr2);
        set7(t+7,2,t5*0,ptr2);
        set7(t+7,3,t6*0,ptr2);
        set7(t+7,4,0,ptr2);
        set7(t+7,5,0,ptr2);
        set7(t+7,6,0,ptr2);
        set7(t+7,7,0,ptr2);
**/




/** test 43 **/
/**
        printf("\n \n 43 in solve8 a4 = ");
        displayh(2,a4);

        t1 = *(ptr2[t+13]+4);
        t2 = *(ptr2[t+13]+5);
        t3 = *(ptr2[t+13]+6);
        t4 = *(ptr2[t+13]+7);

        t5 = *(ptr2[t+15]+4);
        t6 = *(ptr2[t+15]+5);
        t7 = *(ptr2[t+15]+6);
        t8 = *(ptr2[t+15]+7);

        t1 = (t1+t5)%p;
        t2 = (t2+t6)%p;
        t3 = (t3+t7)%p;
        t4 = (t4+t8)%p;


        set7(t+5,0,0,ptr2);
        set7(t+5,1,0,ptr2);
        set7(t+5,2,0,ptr2);
        set7(t+5,3,0,ptr2);
        set7(t+5,4,t1*1,ptr2);
        set7(t+5,5,t2*1,ptr2);
        set7(t+5,6,t3*1,ptr2);
        set7(t+5,7,t4*1,ptr2);


        t5 = a4[1];
        t5 = (p+t5)%p;
        t6 = a4[0];
        t6 = (p-t6)%p;
        set7(t+6,0,(3*t5)%p,ptr2);
        set7(t+6,1,(3*t6)%p,ptr2);
        set7(t+6,2,t5,ptr2);
        set7(t+6,3,t6,ptr2);
        set7(t+6,4,0,ptr2);
        set7(t+6,5,0,ptr2);
        set7(t+6,6,0,ptr2);
        set7(t+6,7,0,ptr2);



        s1 = *(ptr2[t+10]+4);
        s2 = *(ptr2[t+10]+5);
        s3 = *(ptr2[t+10]+6);
        s4 = *(ptr2[t+10]+7);

        set7(t+7,0,0,ptr2);
        set7(t+7,1,0,ptr2);
        set7(t+7,2,0,ptr2);
        set7(t+7,3,0,ptr2);
        set7(t+7,4,s1,ptr2);
        set7(t+7,5,(s2+1)%p,ptr2);
        set7(t+7,6,s3,ptr2);
        set7(t+7,7,s4,ptr2);
**/



/** test 44 **/

        printf("\n \n 44 in solve8 a4 = ");
        displayh(2,a4);

        t1 = *(ptr2[t+12]+4);
        t2 = *(ptr2[t+12]+5);
        t3 = *(ptr2[t+12]+6);
        t4 = *(ptr2[t+12]+7);

        t5 = *(ptr2[t+14]+4);
        t6 = *(ptr2[t+14]+5);
        t7 = *(ptr2[t+14]+6);
        t8 = *(ptr2[t+14]+7);

        s1 = *(ptr2[t+11]+4);
        s2 = *(ptr2[t+11]+5);
        s3 = *(ptr2[t+11]+6);
        s4 = *(ptr2[t+11]+7);

        t1 = (t1+t5)%p;
        t2 = (t2+t6)%p;
        t3 = (t3+t7)%p;
        t4 = (t4+t8)%p;

        t1 = (t1+s1)%p;
        t2 = (t2+s2)%p;
        t3 = (t3+s3)%p;
        t4 = (t4+s4)%p;

        set7(t+5,0,0,ptr2);
        set7(t+5,1,0,ptr2);
        set7(t+5,2,0,ptr2);
        set7(t+5,3,0,ptr2);
        set7(t+5,4,(t1+1)%p,ptr2);
        set7(t+5,5,(t2+0)%p,ptr2);
        set7(t+5,6,t3,ptr2);
        set7(t+5,7,t4,ptr2);


        t5 = a4[0];
        t5 = (p-t5)%p;
        t6 = a4[1];
        t6 = (p-t6)%p;
        t7 = a4[0];
        t8 = (1*a4[1])%p;
        t8 = (p+t8)%p;

/**
        set7(t+6,0,0,ptr2);
        set7(t+6,1,t6,ptr2);
        set7(t+6,2,t5,ptr2);
        set7(t+6,3,0,ptr2);
        set7(t+6,4,0,ptr2);
        set7(t+6,5,0,ptr2);
        set7(t+6,6,0,ptr2);
        set7(t+6,7,0,ptr2);

        set7(t+7,0,(p-t6)%p,ptr2);
        set7(t+7,1,0,ptr2);
        set7(t+7,2,0,ptr2);
        set7(t+7,3,t5,ptr2);
        set7(t+7,4,0,ptr2);
        set7(t+7,5,0,ptr2);
        set7(t+7,6,0,ptr2);
        set7(t+7,7,0,ptr2);
**/

        set7(t+6,0,(t8*(p-t6))%p,ptr2);
        set7(t+6,1,(t7*t6)%p,ptr2);
        set7(t+6,2,(t7*t5)%p,ptr2);
        set7(t+6,3,(t8*t5)%p,ptr2);
        set7(t+6,4,0,ptr2);
        set7(t+6,5,0,ptr2);
        set7(t+6,6,0,ptr2);
        set7(t+6,7,0,ptr2);


        set7(t+7,0,0,ptr2);
        set7(t+7,1,0,ptr2);
        set7(t+7,2,0,ptr2);
        set7(t+7,3,0,ptr2);
        set7(t+7,4,0,ptr2);
        set7(t+7,5,0,ptr2);
        set7(t+7,6,0,ptr2);
        set7(t+7,7,0,ptr2);



        for(i=0;i<8;i++)
            {
            s1 = *(ptr2[t+5]+i);
            s2 = *(ptr2[t+6]+i);
            s1 = (3*s1)%p;
            s2 = (p-s2)%p;
            s1 = (s1+s2)%p;
            set7(t+7,i,s1,ptr2);
            }

        for(i=0;i<8;i++)
            {
            set7(t+5,i,0,ptr2);
            set7(t+6,i,0,ptr2);
            }



/** test 46 **/

        printf("\n \n 44 in solve8 a4 = ");
        displayh(2,a4);

        t1 = *(ptr2[t+12]+4);
        t2 = *(ptr2[t+12]+5);
        t3 = *(ptr2[t+12]+6);
        t4 = *(ptr2[t+12]+7);

        t5 = *(ptr2[t+14]+4);
        t6 = *(ptr2[t+14]+5);
        t7 = *(ptr2[t+14]+6);
        t8 = *(ptr2[t+14]+7);

        s1 = *(ptr2[t+11]+4);
        s2 = *(ptr2[t+11]+5);
        s3 = *(ptr2[t+11]+6);
        s4 = *(ptr2[t+11]+7);
        s1 = (p-s1)%p;
        s2 = (p-s2)%p;
        s3 = (p-s3)%p;
        s4 = (p-s4)%p;

        t1 = (t1+t5)%p;
        t2 = (t2+t6)%p;
        t3 = (t3+t7)%p;
        t4 = (t4+t8)%p;

        t1 = (t1+s1)%p;
        t2 = (t2+s2)%p;
        t3 = (t3+s3)%p;
        t4 = (t4+s4)%p;

        set7(t+5,0,0,ptr2);
        set7(t+5,1,0,ptr2);
        set7(t+5,2,0,ptr2);
        set7(t+5,3,0,ptr2);
        set7(t+5,4,(t1+(p-1))%p,ptr2);
        set7(t+5,5,(t2+0)%p,ptr2);
        set7(t+5,6,t3,ptr2);
        set7(t+5,7,t4,ptr2);




        t5 = a4[0];
        t5 = (p-t5)%p;
        t6 = a4[1];
        t6 = (p+t6)%p;
        t7 = a4[0];
        t8 = (1*a4[1])%p;
        t8 = (p+t8)%p;

        set7(t+6,0,1,ptr2);
        set7(t+6,1,t6,ptr2);
        set7(t+6,2,t5,ptr2);
        set7(t+6,3,0,ptr2);
        set7(t+6,4,0,ptr2);
        set7(t+6,5,0,ptr2);
        set7(t+6,6,0,ptr2);
        set7(t+6,7,0,ptr2);

        set7(t+7,0,(p-t6)%p,ptr2);
        set7(t+7,1,1,ptr2);
        set7(t+7,2,0,ptr2);
        set7(t+7,3,t5,ptr2);
        set7(t+7,4,0,ptr2);
        set7(t+7,5,0,ptr2);
        set7(t+7,6,0,ptr2);
        set7(t+7,7,0,ptr2);



/**
        set7(t+6,0,(t8*(p-t6))%p,ptr2);
        set7(t+6,1,(t7*t6)%p,ptr2);
        set7(t+6,2,(t7*t5)%p,ptr2);
        set7(t+6,3,(t8*t5)%p,ptr2);
        set7(t+6,4,0,ptr2);
        set7(t+6,5,0,ptr2);
        set7(t+6,6,0,ptr2);
        set7(t+6,7,0,ptr2);


        set7(t+7,0,0,ptr2);
        set7(t+7,1,0,ptr2);
        set7(t+7,2,0,ptr2);
        set7(t+7,3,0,ptr2);
        set7(t+7,4,0,ptr2);
        set7(t+7,5,0,ptr2);
        set7(t+7,6,0,ptr2);
        set7(t+7,7,0,ptr2);



        for(i=0;i<8;i++)
            {
            s1 = *(ptr2[t+5]+i);
            s2 = *(ptr2[t+6]+i);
            s1 = (3*s1)%p;
            s2 = (p-s2)%p;
            s1 = (s1+s2)%p;
            set7(t+7,i,s1,ptr2);
            }

        for(i=0;i<8;i++)
            {
            set7(t+5,i,0,ptr2);
            set7(t+6,i,0,ptr2);
            }
**/








        }

}


void k24(int flag4, integer a2[], integer k12[], integer k1[], integer k2[], long int d1, integer q, integer p)

{
int i;
integer t1;
integer a3[2] = {0};
integer s1[10] = {0};
integer h1[4] = {0};
integer h2[4] = {0};


if (q==0)
    {
    q = (p-1)/d1;
    }

if ((q%12)!=0)
    {
    printf("\n \n error in k24 q mod 12 should equal 0");
    }

for (i=0;i<12;i++)
    {
    k12[i] = 0;
    }

calc21d(a2,k1,d1,q,p);
exp7(9,a2,a3,p);
calc21d(a3,k2,d1,q/3,p);
for (i=0;i<3;i++)
    {
    series(k1[2*i],k1[2*i+1],a2,0,h1,2,p);
    series(k2[2*i],k2[2*i+1],a3,0,h2,2,p);
    k12[2*i] = h1[0];
    k12[2*i+1] = h1[1];
    k12[2*i+6] = h2[0];
    k12[2*i+7] = h2[1];
    }


if (flag4==1)
    {
    printf("\n \n k1 = ");
    displayh(24,k1);
    printf("\n \n k2 = ");
    displayh(24,k2);
    printf("\n \n k12 = ");
    displayh(12,k12);
    }

}


void solve12(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer k3[], integer q, integer p)
{
unsigned int t;
integer t1,t2,t3,t4;
integer c1,s1,c2,s2;
integer s3;
integer q1;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(16,b1);

    printf(" in solve12 a2 = ");
    displayh(2,a2);
    e1 = q/12;
    exp7(e1,a2,a4,p);
    exp7(e1,a4,a3,p);
    exp7(2,a3,a4,p);
    exp7(4,a4,a3,p);
    printf("\n \n in solve12 a3 = ");
    displayh(2,a3);
    printf("\n \n in solve12 a4 = ");
    displayh(2,a4);
    s3 = (2*a3[1])%p;
    printf("   s3 = %d",s3);
    c1 = a4[0];
    s1 = a4[1];
    c2 = a3[0];
    s2 = a3[1];


    printf("\n \n in solve12 p = %d  q = %d",p,q);

    q1 = q/12;
    if((q%3==0)&&(q1%4==3))
        {
        set7(t,0,p-1,ptr2);
        set7(t,1,1,ptr2);
        set7(t,2,p-1,ptr2);
        set7(t,3,1,ptr2);
        set7(t,4,p-1,ptr2);
        set7(t,5,1,ptr2);
        b1[0] = 0;

        set7(t+1,6,1,ptr2);
        set7(t+1,7,1,ptr2);
        set7(t+1,8,1,ptr2);
        set7(t+1,9,1,ptr2);
        set7(t+1,10,1,ptr2);
        set7(t+1,11,1,ptr2);
        b1[1] = p-1;

        t1 = (p+s3)%p;
        t1 = (2*t1)%p;
        set7(t+2,1,2,ptr2);
        set7(t+2,3,2,ptr2);
        set7(t+2,5,2,ptr2);
        set7(t+2,7,t1,ptr2);
        set7(t+2,9,t1,ptr2);
        set7(t+2,11,t1,ptr2);
        t1 = (s3+1)%p;
        t1 = (p-t1)%p;
        b1[2] = t1;

        set7(t+3,0,c1,ptr2);
        set7(t+3,1,s1,ptr2);
        set7(t+3,2,c1,ptr2);
        set7(t+3,3,s1,ptr2);
        set7(t+3,4,0,ptr2);
        set7(t+3,5,1,ptr2);
        set7(t+3,11,p-3,ptr2);
        b1[3] = (p+1)-c1;

        set7(t+4,0,p-s1,ptr2);
        set7(t+4,1,c1,ptr2);
        set7(t+4,2,p-s1,ptr2);
        set7(t+4,3,c1,ptr2);
        set7(t+4,4,p-1,ptr2);
        set7(t+4,5,0,ptr2);
        set7(t+4,10,3,ptr2);
        b1[4] = s1+1;

        }

    if((q%3==0)&&(q1%4==1))
        {
        set7(t,0,p-1,ptr2);
        set7(t,1,1,ptr2);
        set7(t,2,p-1,ptr2);
        set7(t,3,1,ptr2);
        set7(t,4,p-1,ptr2);
        set7(t,5,1,ptr2);
        b1[0] = 1;

        set7(t+1,6,1,ptr2);
        set7(t+1,7,1,ptr2);
        set7(t+1,8,1,ptr2);
        set7(t+1,9,1,ptr2);
        set7(t+1,10,1,ptr2);
        set7(t+1,11,1,ptr2);
        b1[1] = 0;

        t1 = (p+s3)%p;
        t1 = (2*t1)%p;
        set7(t+2,1,2,ptr2);
        set7(t+2,3,2,ptr2);
        set7(t+2,5,2,ptr2);
        set7(t+2,7,t1,ptr2);
        set7(t+2,9,t1,ptr2);
        set7(t+2,11,t1,ptr2);
        t1 = (s3+1)%p;
        b1[2] = t1;

        set7(t+3,0,c1,ptr2);
        set7(t+3,1,s1,ptr2);
        set7(t+3,2,c1,ptr2);
        set7(t+3,3,s1,ptr2);
        set7(t+3,4,0,ptr2);
        set7(t+3,5,p-1,ptr2);
        set7(t+3,11,3,ptr2);
        b1[3] = (p+1)-c1;

        set7(t+4,0,p-s1,ptr2);
        set7(t+4,1,c1,ptr2);
        set7(t+4,2,p-s1,ptr2);
        set7(t+4,3,c1,ptr2);
        set7(t+4,4,1,ptr2);
        set7(t+4,5,0,ptr2);
        set7(t+4,10,p-3,ptr2);
        b1[4] = s1-1;

        }

    set7(t+5,0,1,ptr2);
    set7(t+5,1,0,ptr2);
    set7(t+5,2,c2,ptr2);
    set7(t+5,3,s2,ptr2);
    set7(t+5,4,c2,ptr2);
    set7(t+5,5,s2,ptr2);
    set7(t+5,6,p-3,ptr2);
    b1[5] =  s2+1;

    set7(t+6,0,0,ptr2);
    set7(t+6,1,1,ptr2);
    set7(t+6,2,p-s2,ptr2);
    set7(t+6,3,c2,ptr2);
    set7(t+6,4,p-s2,ptr2);
    set7(t+6,5,c2,ptr2);
    set7(t+6,7,p-3,ptr2);
    b1[6] = c2+1;

    if ((q1%4)==3)
        {
        b1[5] = (p+1)-s2;
        b1[6] = c2;
        }


/** test 2 **/
/**
    set7(t+8,0,2,ptr2);
    set7(t+8,1,0,ptr2);
    set7(t+8,2,2,ptr2);
    set7(t+8,3,0,ptr2);
    set7(t+8,4,(p-1),ptr2);
    set7(t+8,5,(p-s3)%p,ptr2);

    t1 = (p+3)%p;
    set7(t+8,10,t1,ptr2);
    set7(t+8,11,(t1*s3)%p,ptr2);
**/




    set7(t+8,0,1,ptr2);
    set7(t+8,6,p-3,ptr2);

    set7(t+9,2,1,ptr2);
    set7(t+9,3,p-s3,ptr2);
    set7(t+9,4,1,ptr2);
    set7(t+9,5,p-s3,ptr2);


/**
    t1 = 1;
    set7(t+10,6,t1,ptr2);
**/







/**
    c1 = 516;
    s1 = 708;
    set7(t+7,0,0,ptr2);
    set7(t+7,1,516,ptr2);
    set7(t+7,2,0,ptr2);
    set7(t+7,3,516,ptr2);
    set7(t+7,4,0,ptr2);
    set7(t+7,5,1,ptr2);
    c1 = 708;
    s1 = 518;
    t1 = (p+1)/2;
    c2 = (t1*c1)%p;
    s2 = (t1*s1)%p;
    set7(t+7,6,c2,ptr2);
    set7(t+7,7,s2,ptr2);
    set7(t+7,8,c2,ptr2);
    set7(t+7,9,s2,ptr2);
    set7(t+7,10,(p-c1)%p,ptr2);
    set7(t+7,11,(p-s1)%p,ptr2);
**/




/**
    set7(t+7,0,1,ptr2);
    set7(t+7,4,p-1,ptr2);

    set7(t+8,1,1,ptr2);
    set7(t+8,5,p-1,ptr2);

    set7(t+9,6,1,ptr2);
    set7(t+9,10,p-1,ptr2);

    set7(t+10,11,1,ptr2);
    set7(t+10,15,p-1,ptr2);
**/


/**
    t1 = 517;

    t2 = 708;

    t3 = (516*518)%p;
    t4 = (325*708)%p;
    t3 = (t3+t4)%p;

    t4 = 325;

    set7(t+7,0,0,ptr2);
    set7(t+7,1,0,ptr2);solve12
    set7(t+7,2,t1,ptr2);
    set7(t+7,3,t2,ptr2);
    set7(t+7,4,p-t1,ptr2);
    set7(t+7,5,p-t2,ptr2);

    set7(t+7,6,0,ptr2);
    set7(t+7,7,0,ptr2);
    set7(t+7,8,t3,ptr2);
    set7(t+7,9,t4,ptr2);
    set7(t+7,10,p-t3,ptr2);
    set7(t+7,11,p-t4,ptr2);


    t1 = 325;

    t2 = 517;

    t3 = 708;

    t4 = 515;

    set7(t+8,0,0,ptr2);
    set7(t+8,1,0,ptr2);
    set7(t+8,2,t1,ptr2);
    set7(t+8,3,t2,ptr2);
    set7(t+8,4,p-t1,ptr2);
    set7(t+8,5,p-t2,ptr2);

    set7(t+8,6,0,ptr2);
    set7(t+8,7,0,ptr2);
    set7(t+8,8,t3,ptr2);
    set7(t+8,9,t4,ptr2);
    set7(t+8,10,p-t3,ptr2);
    set7(t+8,11,p-t4,ptr2);
**/

}



void f3(integer a2[], integer k6[], long int d1, integer q, integer p)

{
integer q1;
integer e;
integer t1,t2;
integer a3[2] = {0};
integer h1[4] = {0};

series(1,q,a2,0,h1,d1,p);
k6[0] = h1[0];
k6[1] = h1[1];

q1 = q/8;
series(1,q1,a2,8,h1,4*d1,p);
printf("\n \n in f3 h1 = ");
displayh(4,h1);
e = (2*q-16)/8;
printf("\n \n in f3 e = %d",e);
exp7(e,a2,a3,p);
printf("\n \n in f3 a3 = ");
displayh(2,a3);

t1 = exp1(p-2,h1[0],p);
t2 = exp1(p-2,h1[1],p);
t1 = (t1*a3[0])%p;
t2 = (t2*a3[1])%p;
printf("\n \n in f3 t1 = %d  t2 = %d",t1,t2);
k6[2] = t1;
printf("\n \n in f3 k6 = ");
displayh(3,k6);

}


void solve12d(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
              integer k3[], integer q, integer p)
{
unsigned int t;
integer t1,t2,t3,t4;
integer c1,s1,c2,s2;
integer s3;
integer q1;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(16,b1);

    printf(" in solve12 a2 = ");
    displayh(2,a2);
    e1 = q/24;
    exp7(q/3,a2,a3,p);
    s3 = (2*a3[1])%p;
    exp7(e1,a2,a4,p);
    exp7(e1,a4,a3,p);
    exp7(8,a3,a4,p);
    printf("\n \n in solve12 a4 = ");
    displayh(2,a4);


    if (e1%3==2)
        {
        s3 = p-s3;
        }


    printf("   s3 = %d",s3);
    c1 = a4[0];
    s1 = a4[1];
    c2 = p-s1;
    s2 = c1;


    printf("\n \n in solve12 p = %d  q = %d",p,q);

    q1 = q/48;
     if((q%3==0)&&(q%16==8))
        {
        set7(t,0,1,ptr2);
        set7(t,1,p-1,ptr2);
        set7(t,2,1,ptr2);
        set7(t,3,p-1,ptr2);
        set7(t,4,1,ptr2);
        set7(t,5,p-1,ptr2);
        b1[0] = 0;

        set7(t+1,6,1,ptr2);
        set7(t+1,7,1,ptr2);
        set7(t+1,8,1,ptr2);
        set7(t+1,9,1,ptr2);
        set7(t+1,10,1,ptr2);
        set7(t+1,11,1,ptr2);
        b1[1] = 0;

        set7(t+2,0,1,ptr2);
        set7(t+2,2,1,ptr2);
        set7(t+2,4,1,ptr2);
        set7(t+2,6,s3,ptr2);
        set7(t+2,8,s3,ptr2);
        set7(t+2,10,s3,ptr2);
        b1[2] = 0;

        set7(t+3,0,c1,ptr2);
        set7(t+3,1,s1,ptr2);
        set7(t+3,2,c1,ptr2);
        set7(t+3,3,s1,ptr2);
        set7(t+3,4,p-1,ptr2);
        set7(t+3,5,0,ptr2);
        set7(t+3,10,3,ptr2);
        b1[3] = a4[0]+1;

        set7(t+4,0,c2,ptr2);
        set7(t+4,1,s2,ptr2);
        set7(t+4,2,c2,ptr2);
        set7(t+4,3,s2,ptr2);
        set7(t+4,4,0,ptr2);
        set7(t+4,5,p-1,ptr2);
        set7(t+4,11,3,ptr2);
        b1[4] = a4[1];

        exp7(4,a4,a3,p);
        c1 = a3[0];
        s1 = a3[1];
        c2 = p-s1;
        s2 = c1;

        set7(t+5,0,1,ptr2);
        set7(t+5,1,0,ptr2);
        set7(t+5,2,c1,ptr2);
        set7(t+5,3,s1,ptr2);
        set7(t+5,4,c1,ptr2);
        set7(t+5,5,s1,ptr2);
        set7(t+5,6,p-3,ptr2);
        b1[5] = a4[0]+1;

        set7(t+6,0,0,ptr2);
        set7(t+6,1,1,ptr2);
        set7(t+6,2,c2,ptr2);
        set7(t+6,3,s2,ptr2);
        set7(t+6,4,c2,ptr2);
        set7(t+6,5,s2,ptr2);
        set7(t+6,7,p-3,ptr2);
        b1[6] = a4[1];

        }

/** &&&&&&&&&&&&&&&&
    t1 = 1308;
    set7(t+7,0,p-t1,ptr2);
    set7(t+7,1,1,ptr2);
    set7(t+7,2,0,ptr2);
    set7(t+7,3,0,ptr2);
    set7(t+7,4,t1,ptr2);
    set7(t+7,5,p-1,ptr2);

    set7(t+8,6,t1,ptr2);
    set7(t+8,7,3,ptr2);
    set7(t+8,8,0,ptr2);
    set7(t+8,9,0,ptr2);
    set7(t+8,10,p-t1,ptr2);
    set7(t+8,11,p-3,ptr2);
**/

    set7(t+7,0,1,ptr2);
    set7(t+7,1,0,ptr2);
    set7(t+7,2,0,ptr2);
    set7(t+7,3,0,ptr2);
    set7(t+7,4,p-1,ptr2);
    set7(t+7,5,0,ptr2);

    set7(t+8,0,0,ptr2);
    set7(t+8,1,1,ptr2);
    set7(t+8,2,0,ptr2);
    set7(t+8,3,0,ptr2);
    set7(t+8,4,0,ptr2);
    set7(t+8,5,p-1,ptr2);


    set7(t+9,0,0,ptr2);
    set7(t+9,1,0,ptr2);
    set7(t+9,2,1,ptr2);
    set7(t+9,3,0,ptr2);
    set7(t+9,4,p-1,ptr2);
    set7(t+9,5,0,ptr2);

    set7(t+10,0,0,ptr2);
    set7(t+10,1,0,ptr2);
    set7(t+10,2,0,ptr2);
    set7(t+10,3,1,ptr2);
    set7(t+10,4,0,ptr2);
    set7(t+10,5,p-1,ptr2);

/**
    set7(t+11,0,0,ptr2);
    set7(t+11,1,1,ptr2);
    set7(t+11,2,0,ptr2);
    set7(t+11,3,1,ptr2);
    set7(t+11,4,0,ptr2);
    set7(t+11,5,1,ptr2);
**/


    b1[2] = (b1[2]+0)%p;


/**
    set7(t+5,0,1,ptr2);
    set7(t+5,1,0,ptr2);
    set7(t+5,2,c2,ptr2);
    set7(t+5,3,s2,ptr2);
    set7(t+5,4,c2,ptr2);
    set7(t+5,5,s2,ptr2);
    set7(t+5,6,p-3,ptr2);
    b1[5] =  s2+1;

    set7(t+6,0,0,ptr2);
    set7(t+6,1,1,ptr2);
    set7(t+6,2,p-s2,ptr2);
    set7(t+6,3,c2,ptr2);
    set7(t+6,4,p-s2,ptr2);
    set7(t+6,5,c2,ptr2);
    set7(t+6,7,p-3,ptr2);
    b1[6] = c2+1;

    if ((q1%4)==3)
        {
        b1[5] = (p+1)-s2;
        b1[6] = c2;
        }
**/

}


void k60(int flag4, integer a2[], integer k10[], long int d1, integer q, integer p)

{
int i;
integer t1,c;
integer a[5] = {0,2,3,5,6};
integer a3[2] = {0};
integer k1[30] = {0};
integer k2[12] = {0};
integer k16[16] = {0};
integer s1[10] = {0};
integer h1[4] = {0};
integer h2[4] = {0};


if (q==0)
    {
    q = (p-1)/d1;
    }

if ((q%300)!=0)
    {
    printf("\n \n error in q = %d k60 q mod 300 should equal 0",q);
    }

for (i=0;i<8;i++)
    {
    k10[i] = 0;
    }
printf("\n \n 11111111111");
displayh(5,a);
calc22d(a2,1,k1,k16,d1,q,p);
printf("\n \n 222222222222");
displayh(5,a);
displayh(16,k1);
displayh(16,k16);


for (i=0;i<5;i++)
    {
    c = a[i];
    printf("\n \n i = %d  c = %d",i,c);
    series(k1[2*c],k1[2*c+1],a2,0,h1,d1,p);
    k10[0] = (k10[0]+h1[0])%p;
    k10[1] = (k10[1]+h1[1])%p;
    }

series(k1[2],k1[3],a2,0,h1,d1,p);
k10[2] = (k10[2]+h1[0])%p;
k10[3] = (k10[3]+h1[1])%p;
series(k1[8],k1[9],a2,0,h1,d1,p);
k10[2] = (k10[2]+h1[0])%p;
k10[3] = (k10[3]+h1[1])%p;
k10[2] = (2*k10[2])%p;
k10[3] = (2*k10[3])%p;
series(k1[14],k1[15],a2,0,h1,d1,p);
k10[2] = (k10[2]+h1[0])%p;
k10[3] = (k10[3]+h1[1])%p;

exp7(25,a2,a3,p);
calc20d(a3,1,k2,d1,q/25,p);
t1 = 2*q/75;
series(1,k2[1],a3,t1,h1,d1,p);
k10[4] = h1[0];
k10[5] = h1[1];
k10[6] = h1[2];
k10[7] = h1[3];

printf("\n \n in k60 flag4 = %d",flag4);
if (flag4==1)
    {
    printf("\n \n k1 = ");
    displayh(16,k1);
    printf("\n \n k2 = ");
    displayh(4,k2);
    printf("\n \n k10 = ");
    displayh(8,k10);
    }

}


void solve8d(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer k3[], integer q, integer p)
{
unsigned int t;
integer t1,t2,t3,t4,t5,t6,t7,t8;
integer s1,s2,s3,s4,s5,s6,s7,s8;
integer q1;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(16,b1);

    e1 = q/3;
    exp7(e1,a2,a3,p);
    exp7(e1,a3,a4,p);
    printf(" in solve8 a4 = ");
    displayh(2,a4);


    printf("\n \n in solve8 p = %d  q = %d",p,q);

    q1 = q;
    if((q1%300)==0)
        {
        set7(t,0,p-2,ptr2);
        set7(t,1,2,ptr2);
        set7(t,2,p-1,ptr2);
        set7(t,3,1,ptr2);
        b1[0] = 1;

        t1 = a4[0];
        t2 = (p-t1)%p;
        t3 = a4[1];
        t4 = (p-t3)%p;
        set7(t+12,4,t1,ptr2);
        set7(t+12,5,t3,ptr2);
        set7(t+12,6,t4,ptr2);
        set7(t+12,7,t1,ptr2);

        set7(t+13,4,t4,ptr2);
        set7(t+13,5,t1,ptr2);
        set7(t+13,6,t2,ptr2);
        set7(t+13,7,t4,ptr2);

        set7(t+14,4,t1,ptr2);
        set7(t+14,5,t3,ptr2);
        set7(t+14,6,t3,ptr2);
        set7(t+14,7,t2,ptr2);

        set7(t+15,4,t4,ptr2);
        set7(t+15,5,t1,ptr2);
        set7(t+15,6,t1,ptr2);
        set7(t+15,7,t3,ptr2);

        t5 = (30*t1)%p;
        t6 = (30*t3)%p;
        t7 = (10*t4)%p;
        t8 = (10*t1)%p;
        set7(t+1,1,p-2,ptr2);
        set7(t+1,3,p-1,ptr2);
        set7(t+1,4,t5,ptr2);
        set7(t+1,5,t6,ptr2);
        set7(t+1,6,t7,ptr2);
        set7(t+1,7,t8,ptr2);
        b1[1] = 0;

        s1 = (3*t1)%p;
        s2 = (3*t3)%p;
        s3 = (1*t4)%p;
        s4 = (1*t1)%p;
        s1 = p-s1;
        s2 = p-s2;
        s3 = p-s3;
        s4 = p-s4;
        set7(t+2,4,(3*t4+s1)%p,ptr2);
        set7(t+2,5,(3*t1+s2)%p,ptr2);
        set7(t+2,6,(t2+s3)%p,ptr2);
        set7(t+2,7,(t4+s4)%p,ptr2);
        b1[2] = (2*a4[1])%p;


/** c6 + c12 **/
        t5 = (20*t1)%p;
        t6 = (20*t3)%p;
        t7 = (10*t4)%p;
        t8 = (10*t1)%p;
        set7(t+3,0,p-1,ptr2);
        set7(t+3,1,0,ptr2);
        set7(t+3,2,p-1,ptr2);
        set7(t+3,3,0,ptr2);
        set7(t+3,4,t5,ptr2);
        set7(t+3,5,t6,ptr2);
        set7(t+3,6,t7,ptr2);
        set7(t+3,7,t8,ptr2);
        b1[3] = p-1;


        t5 = (20*t4)%p;
        t6 = (20*t1)%p;
        t7 = (10*t2)%p;
        t8 = (10*t4)%p;
        set7(t+4,0,0,ptr2);
        set7(t+4,1,p-1,ptr2);
        set7(t+4,2,0,ptr2);
        set7(t+4,3,p-1,ptr2);
        set7(t+4,4,t5,ptr2);
        set7(t+4,5,t6,ptr2);
        set7(t+4,6,t7,ptr2);
        set7(t+4,7,t8,ptr2);
        b1[4] = (12*t3)%p;

/**
        for(i=0;i<8,i++)
            {
            set7(t+5,i,0,ptr2);
            set7(t+6,i,0,ptr2);
            set7(t+7,i,0,ptr2);
            }
**/

        }

}


void k61(int flag4, integer a2[], integer k20[], long int d1, integer q, integer p)

{
int i;
integer t1;
integer a3[2] = {0};
integer k1[30] = {0};
integer k2[12] = {0};
integer k16[16] = {0};
integer s1[10] = {0};
integer h1[4] = {0};
integer h2[4] = {0};


if (q==0)
    {
    q = (p-1)/d1;
    }

if ((q%300)!=0)
    {
    printf("\n \n error in q = %d k60 q mod 300 should equal 0",q);
    }

for (i=0;i<20;i++)
    {
    k20[i] = 0;
    }

calc22d(a2,1,k1,k16,d1,q,p);
displayh(16,k1);
displayh(16,k16);


for (i=0;i<8;i++)
    {
    series(k1[2*i],k1[2*i+1],a2,0,h1,d1,p);
    k20[2*i] = h1[0];
    k20[2*i+1] = h1[1];
    }


exp7(25,a2,a3,p);
calc20d(a3,1,k2,d1,q/25,p);
t1 = 2*q/75;
series(1,k2[1],a3,t1,h1,d1,p);
k20[16] = h1[0];
k20[17] = h1[1];
k20[18] = h1[2];
k20[19] = h1[3];

printf("\n \n in k61 flag4 = %d",flag4);
if (flag4==1)
    {
    printf("\n \n k1 = ");
    displayh(16,k1);
    printf("\n \n k2 = ");
    displayh(4,k2);
    printf("\n \n k20 = ");
    displayh(20,k20);
    }
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

    printf("\n \n \n \n in init3 det = %d",s1);
    printf("\n \n in init3 b1 = ");
    displayh(15,b1);
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



void calc42(integer e, integer a2[], integer a5[], integer a6[], integer k40[], integer k41[], integer p)
{
int i,j;
int e2,e3,t;
int kmax = 40;
integer t1,t2;
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
t1 = t1+4;
for (j=0;j<kmax;j++)
    {
    h14[j] = 0;
    }

for (j=0;j<(e2+2);j++)
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

printf("\n \n in calc42 h14 = ");
for (j=0;j<(e2+2);j++)
    {
    printf("\n \n h14[%d] = %d",j,h14[j]);
    }

/**
	for(j=0;j<(e2+1);j++)
		{
		a[j] = h11[j]-2;
		}
**/

if (e2<3)
    {
    printf("\n \n error in calc42 e should be greater than or equal to 68");
    }


    e3 = e2+1;
    k41[0] = h14[1];
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
for(j=1;j<(e2-1);j++)
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
for(j=1;j<(e2-1);j++)
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
printf("\n \n k2 = ");
displayh(6,k40);
series(k41[0],k41[2]-1,a2,0,h11,4,p);
h15[0] = h11[0];
h15[1] = h11[1];
series(k41[0],k41[2]-1,a5,0,h11,4,p);
h15[2] = h11[0];
h15[3] = h11[1];
series(k41[0],k41[2]-1,a6,0,h11,4,p);
h15[4] = h11[0];
h15[5] = h11[1];
printf("\n \n h15 = ");
displayh(6,h15);

}




