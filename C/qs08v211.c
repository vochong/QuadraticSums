#include <stdio.h>
#include <stdlib.h>
#include "qmath228v4.h"
#include "qmath229v2.h"
#include "calc2v4.h"


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

void calc3 (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
            integer h11[], integer h12[], integer *str1, integer *str1a,
            integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
            integer ws1[], integer hs1[], integer ws2[], integer hs2[],
            integer hs3[], STRING ptr2, integer b2[], integer p);

void calc20d(integer a2[], integer h15[], long int d1, integer q, integer p);
void calc21d(integer a2[], integer h15[], long int d1, integer q, integer p);
void calc23d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p);

void calc24d(integer a2[], integer h15[], long int d1, integer q, integer p);
void calc28d(integer a2[], integer h15[], long int d1, integer q, integer p);

void calc29d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p);

void calc3d (integer e, integer e1, integer flag0, integer flag3, integer a2[], int kmax,
             integer h11[], integer h12[], integer *str1, integer *str1a,
             integer *str2, integer *str2a, int m2, int t1, int c1, int c2,
             integer ws1[], integer hs1[], integer ws2[], integer hs2[],
             integer hs3[], STRING ptr2, integer b2[], integer p);

void series4d(int l2, integer a2[], int d, integer h11[], long int d1, integer p);

void display8d(unsigned int r, STRING ptr2, integer b1[]);

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
void equation4(int m2, integer a2[], integer s3, STRING ptr2, integer b1[], integer e,
               integer hs1[], unsigned int t, integer q, integer p);

void f32(integer a2[], integer k4[], long int d1, integer q, integer p);
void displayh2(int d, integer h16[]);
void solve16(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer hs1[], integer hs2[], integer k3[], integer q, integer p);

integer find4(integer g, integer q, integer p);



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

	integer h14[24] = {0};
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

	integer k1[16] = {0};
	integer k2[20] = {0};
	integer k3[16] = {0};
	integer k4[16] = {0};




	m2 = m;

    	p = 7129;




    printf("\n \n char = %d",sizeof(char));
    printf("\n short = %d",sizeof(short));
    printf("\n int = %d",sizeof(int));
    printf("\n long = %d",sizeof(long));
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


    printf("\n \n =========================== test of calc12");
    flag4 = 1;
    calc12(96,a2,flag4,k1,k2,p);

    printf("\n \n test of series20");
    series20(-5,20,a2,h11,2,p);
    printf("\n h11 =");
    displayh(4,h11);




    printf("\n \n test of fn61");
    s1 = 89;
    s2 = find3(s1);
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



	printf("\n \n Enter 1 to continue ");
	scanf("%d",&s1);



	for(k=0;k<50;k++)
    	{
	i2 = sqrt1(p-1,p);
	s2 = exp1((p-1)/2,g,p);
	if (s2==(p-1))
        	{
        	i2 = exp1((p-1)/4,g,p);
        	}
	i2 = (p+i2)%p;
	printf("\n \n from sqrt1 i2 = %d",i2);
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



/** test **/
/**
    a3[0] = 434;
    a3[1] = 739;
    cmult(a2,a3,a4,p);
    a2[0] = a4[0];
    a2[1] = (p+a4[1])%p;
**/


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

	exp7(5,a2,a5,p);


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

    e = (p-1)/9;
    e2 = e%4;
    e = 1*e-e2;



    e = e - 4;

	e1 = e;
	kmax = 10;
	x = 2-1;
	y = 1;
	c6 = 5*0+1;
	s = 0;

	y = 0;
	x = 3;
	c6 = 5;
	s = 0;

	flag_2 = 1;
	t1 = exp4d2(e,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
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
	flag0 = 1;
/** flag3 = 1 implies c = 5 **/
	flag3 = 0;
	for(j=0;j<1;j++)
		{
		if(j==0)
			{
			calc3d(e,e1,flag0,flag3,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
                   t1,8,9,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
			}
		if(j==1)
			{
			calc3(e+28,e1,flag0,flag3,a2,kmax,h11,h12,str1,str1a,str2,str2a,m2,
                  t1,8,9,ws1,hs1,ws2,hs2,hs3,ptr2,b2,p);
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


        series(e1/2,e1,a2,0,h14,t1,p);
        printf("\n \n the 2nd answer 2nd(1/2) series =  ");
        displayh(4,h14);

        series(1,e1,a2,0,h14,t1,p);
        printf("\n \n the 2nd answer series =  ");
        displayh(4,h14);



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



    e = e+4;
    series(0,e,a2,0,h11,2,p);
    printf("\n \n series = ");
    displayh(4,h11);

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


/**
    printf("\n \n \n \n");
	calc11(m2,e,6,a2,h11,h12,ptr2,str1,hs1,hs2,p);
	printf("\n \n \n \n");

    calc15(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");


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

    calc14q(m2,e,e2,6,a2,h11,h12,ptr2,str1,hs1,hs2,p);
	printf("\n \n \n \n");
**/


/**
    calc11q(m2,e,e2,6,a2,h11,h12,ptr2,str1,hs1,hs2,p);
	printf("\n \n \n \n");

    calc15q(m2,e,e2,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/


/**
    calc10k(m2,e,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");

    calc10(m2,e,7,a2,h11,h12,ptr2,str1,hs1,hs2,p);
	printf("\n \n \n \n");


    calc10(m2,e,3,a2,h11,h12,ptr2,str1,hs1,hs2,p);
	printf("\n \n \n \n");

    calc10(m2,e,5,a2,h11,h12,ptr2,str1,hs1,hs2,p);
	printf("\n \n \n \n");
**/



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



    calc19(m2,1,e,2,e+e2,a2,h11,h12,ptr2,str1,hs1,hs4,p);
    printf("\n \n \n \n");
    k3[0] = hs4[30*2];
    k3[1] = hs4[30*3];

    calc19(m2,1,e,6,e+e2,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
    k3[2] = hs2[30*2];
    k3[3] = hs2[30*3];

    calc19(m2,1,e,4,e+e2,a2,h11,h12,ptr2,str1,hs1,hs4,p);
    printf("\n \n \n \n");

    calc19(m2,1,e,8,e+e2,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");



	q = (p-1)/2;
	t1 = (6*e)%q;

	series(e/2,3*(e/2),a2,t1,h11,2,p);
	printf("\n \n q = %d   p = %d",q,p);
	printf("\n \n 2nd h11 = ");
	displayh(4,h11);

	t2 = (4*e)%(p-1);
	series(e/2,3*(e/2),a2,t2,h11,2,p);
	printf("\n \n q = %d   p = %d",q,p);
	printf("\n \n 3rd h11 = ");
	displayh(4,h11);
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



        printf("\n \n");
        calc14d(m2,e+4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");



        printf("\n \n");
        calc17d(m2,e+4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");

        printf("\n \n 1st");
        series(0,e+4,a2,0,h11,4,p);
        printf("\n \n series = ");
        displayh(4,h11);
        series1(0,e+4,3,a2,0,h12,4,p);
        printf("\n \n series1 = ");
        displayh(4,h12);
        a5[0] = (3*h12[0])%p;
        a5[1] = (3*h12[1])%p;
        printf("\n \n a5 = ");
        displayh(2,a5);


        printf("\n \n 2nd");
        series(0,e+4,a2,0,h11,4,p);
        printf("\n \n series = ");
        displayh(4,h11);
        series1(1,e+4,2,a2,0,h12,4,p);
        printf("\n \n series1(2) = ");
        displayh(4,h12);

        series1(0,e+4,2,a2,0,h11,4,p);
        printf("\n \n series = ");
        displayh(4,h11);
        series1(1,e+4,2,a2,0,h12,4,p);
        printf("\n \n series1(2) = ");
        displayh(4,h12);

        series1(0,e+4,3,a2,(p-1)/2,h12,4,p);
        printf("\n \n series1(3) = ");
        displayh(4,h12);
        series(1,(p-1)/4,a2,0,h11,4,p);
        printf("\n \n test = ");
        displayh(4,h11);
        printf("\n \n");

        calc18d(m2,e+4,a2,h11,h12,ptr2,str1,hs1,hs2,p);
        printf("\n \n \n \n");


        t1 = (e+4)/8;
        t2 = 9*t1;
        series(t1,t2,a2,0,h14,4,p);
        printf("\n \n \n \n from series h14 = ");
        displayh(4,h14);
        printf("\n \n");

        series4d(e1,a2,2*e,h11,2,p);
        printf("\n \n series4d(2) = ");
        displayh(4,h11);
        series4d(e1,a2,4*e,h11,2,p);
        printf("\n \n series4d(4) = ");
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




    printf("\n \n \n \n solve12 = ");
    printf("\n \n");
    q = (p-1)/2;
    solve16(m2,a2,ptr2,h14,str1,e,hs4,hs2,k3,q,p);


    multcnvl2(16,150,k4,k3,ptr2,p);
    printf(" \n \n \n \n multcnvl2 = ");
    displayh(16,k3);


    solve2m(16,&ptr2[150],h14,p);
    s1 = det(16,&ptr2[150]);

    setzero2(16,h11);
    l2solve(16,h11,h14,&ptr2[150],p);

    printf("\n \n \n \n det = %d",s1);
    printf("\n \n");
    display16d(150,ptr2,h14);


    printf("\n \n i2 = %d",i2);
    printf("\n \n g = %d",g);
    printf("\n \n a2 = ");
    displayh(2,a2);


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


void calc20d(integer a2[], integer h15[], long int d1, integer q, integer p)

{
int i;
integer t1,t2;
integer h14[4] = {0};


if((q%2)==0)
	{
	t1 = (q%6);
	t2 = (q-t1)/6;
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
    t2 = (q-t1)/6;
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

printf("\n \n p = %d  q = %d",p,q);
for(i=0;i<6;i++)
	{
	series(h15[2*i],h15[2*i+1],a2,0,h14,d1,p);
	printf("\n i = %d  ",i);
	printf(" (%d , %d)  ",h15[2*i],h15[2*i+1]);
	displayh(2,h14);
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


void calc23d(integer a2[], int flag4, integer k2[], long int d1, integer q, integer p)
{
int i;
integer t1,t2,t3;
integer h14[4] = {0};

t1 = (q%3);
t2 = (q-t1)/3;
t3 = 0;
if ((q%3)==0)
    {
    t2 = t2 - 1;
    t3 = 2;
    }
if ((q%3)==2)
    {
    t3 = 1;
    }

k2[0] = 1;
k2[1] = t2;
k2[2] = t2+1;
k2[3] = 2*t2+t3;
k2[4] = k2[3]+1;
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



void display8d(unsigned int r, STRING ptr2, integer b1[])

{
int i,j,k;
integer t1;

for(k=0;k<8;k++)
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


void equation4(int m2, integer a2[], integer s3, STRING ptr2, integer b1[], integer e,
               integer hs1[], unsigned int t, integer q, integer p)
{
int flag4;
integer t1,t2,t3,t4;
integer h11[40] = {0};
integer h12[40] = {0};
integer h14[4] = {0};
integer c1[2] = {0};
integer a3[2] = {0};
integer a4[2] = {0};
integer k1[12] = {0};
integer k2[2] = {0};


printf("\n \n in equation4  e = %d   s3 = %d ",e,s3);
printf("   hs1 = (%d , %d)",hs1[0],hs1[30]);

c1[0] = (4*hs1[0])%p;
c1[1] = (4*hs1[30])%p;
printf("\n \n in equation4 c1 = ");
displayh(2,c1);

flag4 = 1;
calc12(e,a2,flag4,k1,k2,p);

t1 = (s3*k2[0])%p;
t1 = (t1+k2[1])%p;
t1 = (p-t1)%p;
c1[0] = (c1[0]+t1)%p;
t1 = p-1;
t1 = (t1*k2[0])%p;
t2 = (s3*k2[1])%p;
t1 = (t1+t2)%p;
t1 = (p-t1)%p;
c1[1] = (c1[1]+t1)%p;
printf("\n \n in equation4 c1 = ");
displayh(2,c1);

printf("\n \n (1) (%d , %d)",k1[0],k1[1]);
series(k1[0],k1[1],a2,0,h11,2,p);
displayh(4,h11);

printf("\n (2) (%d , %d)",k1[2],k1[3]);
series(k1[2],k1[3],a2,0,h12,2,p);
displayh(4,h12);

printf("\n (3) (%d , %d)",k1[6],k1[7]);
series(k1[6],k1[7],a2,0,h14,2,p);
displayh(4,h14);

t1 = (h11[0]+h12[0])%p;
h14[0] = (h14[0]+t1)%p;

t1 = (h11[1]+h12[1])%p;
h14[1] = (h14[1]+t1)%p;

printf("\n \n in equation4 h14 = ");
displayh(2,h14);

/** 1 **/
if (k1[1]==k1[2])
    {
    series(k1[1],k1[1],a2,0,h12,2,p);
    t1 = (p+h12[0])%p;
    t2 = (p+h12[1])%p;
    }

if (k1[1]<k1[2])
    {
    series(k1[1]+1,k1[2]-1,a2,0,h12,2,p);
    t1 = (p-h12[0])%p;
    t2 = (p-h12[1])%p;
    }


if (k1[3]==k1[6])
    {
    series(k1[3],k1[3],a2,0,h12,2,p);
    t3 = (p+h12[0])%p;
    t4 = (p+h12[1])%p;
    }

if (k1[3]<k1[6])
    {
    series(k1[3]+1,k1[6]-1,a2,0,h12,2,p);
    t3 = (p-h12[0])%p;
    t4 = (p-h12[1])%p;
    }

printf("\n \n t1 = %d  t2 = %d",t1,t2);
printf("\n t3 = %d  t4 = %d",t3,t4);
t1 = (t1+t3)%p;
t2 = (t2+t4)%p;
t3 = (s3*t1)%p;
t4 = (t3+t2)%p;
c1[0] = (c1[0]+t4)%p;
t3 = (p-t1)%p;
t4 = (s3*t2)%p;
t4 = (t3+t4)%p;
c1[1] = (c1[1]+t4)%p;
printf("\n \n in equation4 c1 = ");
displayh(2,c1);

series(1,k1[7],a2,0,h12,2,p);
printf("\n \n &&&&&&&&&&&& in equation4 h12 = ");
displayh(4,h12);

/** 2 **/
fn60(1,k1[7],1,(q/6)-1,a2,a3,p);
printf("\n \n in equation4 a3 = ");
displayh(2,a3);
a3[0] = (p-a3[0])%p;
a3[1] = (p-a3[1])%p;
t1 = (s3*a3[0])%p;
t1 = (t1+a3[1])%p;
c1[0] = (c1[0]+t1)%p;
t1 = (p-a3[0])%p;
t2 = (s3*a3[1])%p;
t1 = (t1+t2)%p;
c1[1] = (c1[1]+t1)%p;
printf("\n \n in equation4 c1 = ");
displayh(2,c1);
series(1,(q/6)-1,a2,0,h12,2,p);
printf("\n \n &&&&&&&&&&&& in equation4 h12 = ");
displayh(4,h12);


if((q%4)==0)
    {
    set7(t+3,0,s3,ptr2);
    set7(t+3,1,1,ptr2);
    set7(t+3,2,s3,ptr2);
    set7(t+3,3,1,ptr2);
    set7(t+3,4,0,ptr2);
    set7(t+3,5,p-2,ptr2);

    set7(t+3,6,0,ptr2);
    set7(t+3,7,0,ptr2);
    set7(t+3,8,0,ptr2);
    set7(t+3,9,0,ptr2);
    set7(t+3,10,0,ptr2);
    set7(t+3,11,6,ptr2);
    b1[3] = 7;

    set7(t+4,0,p-1,ptr2);
    set7(t+4,1,s3,ptr2);
    set7(t+4,2,p-1,ptr2);
    set7(t+4,3,s3,ptr2);
    set7(t+4,4,2,ptr2);
    set7(t+4,5,0,ptr2);

    set7(t+4,6,0,ptr2);
    set7(t+4,7,0,ptr2);
    set7(t+4,8,0,ptr2);
    set7(t+4,9,0,ptr2);
    set7(t+4,10,p-6,ptr2);
    set7(t+4,11,0,ptr2);
    b1[4] = 7;
    }
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
integer t1,t2,t3,t4;
integer s3;
integer q1;
integer e1;
integer a3[2] = {0};
integer a4[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(16,b1);

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


/**
    equation3(m2,a2,a4,ptr2,b1,t+7,k3,q,p);
**/
    equation23(m2,a2,ptr2,b1,t+7,q,p);

/**
    equation24(m2,7,ptr2,b1,t+9,q,p);
    equation25(m2,7,ptr2,b1,t+9,q,p);
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



