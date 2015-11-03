#include <stdio.h>
#include <stdlib.h>
#include "qmath228v4.h"


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

void calc6(int m2, int c1, int d1, STRING ptr2, integer h12[], integer *str1, integer p);
void displayh(int d, integer h16[]);
void display12(integer h16[]);
void mult12 (integer c, integer s, integer h11[], integer h12[], integer ws1[], integer p);

void mult2(integer a[], integer b[], integer s[], integer q[], integer p);
void exp2q (integer e, integer a1[], integer a2[], integer q[], integer p);
integer exp1 (integer e, integer g, integer n);
integer cl(integer c, integer b, integer p);
integer sqrt1(integer c, integer p);
void calc2(integer g, integer i2, integer a2[], integer p);
integer findnqr (integer p);
integer find2 (integer g, integer p);
integer find3 (integer p);

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

/**           4-tuple units are 1/8                       **/
/**           calc10d(1 or 3) = (+1)(1 or 3)              **/
/**           calc14d = (+2)(2)                           **/
/**           calc17d = (0)(2)                            **/
/**           calc18d = (0)(4)                            **/


void calc10d(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc14d(int m2, integer e, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc17d(int m2, integer e, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc18d(int m2, integer e, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);


/**           2-tuple units are 1/4                       **/
/**           calc10(3,5 or 7) = (+1)(3,5 or 7)           **/
/**           calc10k = (+1)(1)                           **/
/**           calc11(4 or 6) = (+2)(4 or 6)               **/
/**           calc14(4 or 6) = (-2)(4 or 6)               **/
/**           calc14k(8 or 10) = (-2)(8 or 10)            **/
/**           calc15 = (+2)(2)                            **/
/**           calc16 = (+3)(3)                            **/
/**           calc16k = (+3)(1)                           **/
/**           calc17(1 or 3) = (+5)(1 or 3)               **/
/**           calc18 = (+4)(4)                            **/
/**           calc18k = (+4)(2)                           **/

void calc10(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc10k(int m2, integer e, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc11(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc11q(int m2, integer e, integer e2, int c1, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc14(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);

void calc14k(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);

void calc14q(int m2, integer e, integer e2, int c1, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);

void calc15(int m2, integer e, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc15q(int m2, integer e, integer e2, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc16(int m2, integer e, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc16k(int m2, integer e, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc17(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc18(int m2, integer e, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);
void calc18k(int m2, integer e, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);

void calc19(int m2, int flag4, integer e, int c1, int e1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p);

void fn60(int c1, int c2, int t1, int t2, integer a2[], integer a3[], integer p);

void display12d(unsigned int r, STRING ptr2, integer b1[]);

void display16d(unsigned int r, STRING ptr2, integer b1[]);
void multcnvl2(int l2, int e1, integer k4[], integer k3[], STRING ptr2, integer p);

void calc12d(integer e, integer a2[], integer k1[], integer k2[], integer p);

void calc12(integer e, integer a2[], int flag4, integer k1[], integer k2[], integer p);

void series20(int c1, int c2, integer a2[], integer h11[], long int d1, integer p);
void fn60d(int c1, int c2, int t1, int t2, integer a2[], integer a3[], integer p);
void fn61(int c1, int d1, int t1, int d2, integer a2[], integer h11[], integer h15[], integer p);
void fn61d(int c1, int d1, int t1, int d2, integer a2[], integer h11[], integer h15[], integer p);

void equation4(int m2, integer a2[], integer s3, STRING ptr2, integer b1[], integer e,
               integer hs1[], unsigned int t, integer q, integer p);

void solve12(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer hs1[], integer hs2[], integer q, integer p);


void f32(integer a2[], integer k4[], long int d1, integer q, integer p);

void displayh2(int d, integer h16[]);

void solve16(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer hs1[], integer hs2[], integer q, integer p);



unsigned long det_sum = 0;
unsigned long det_l144 = 0;
int flag_2 = 0;


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

	integer p1[17] = {397,433,577,937,1009,
                     1153,1297,1657,1801,1873,
                     2017,2089,2161,2377,541,
                     613,2521};
	integer p2;

	integer k1[16] = {179,674,154,366,
                      380,528,1162,624};
	integer k2[20] = {0};
	integer k3[16] = {0};

	integer k4[16] = {1641,809,512,1493,1096,948,0,0,
                      545,1398,1709,24,1133,450,0,0};



	m2 = m;

    p = 3169;


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

    calc2(g,i2,a2,p);
    printf("\n \n from calc2 a2 = ");
	displayh(2,a2);





	printf("\n \n");
	q = (p-1)/4;
	calc20d(a2,h15,4,q,p);

    s = find2(5,313);
    printf("\n \n find2 = %d",s);

    s = find2(5,29);
    printf("\n \n find2 = %d",s);

    s = find2(2,53);
    printf("\n \n find2 = %d",s);

    s = find3(29);
    s1 = find3(113);
    s2 = find3(313);
    printf("\n \n find3 = %d %d %d",s,s1,s2);


    printf("\n \n test of calc20d ");
	calc20d(a2,h15,4,37,149);

    printf("\n \n test of calc21d(1) ");
    s1 = 149;
    i3 = sqrt1(s1-1,s1);
    printf("   i3 = %d",i3);
    s2 = exp1((s1-1)/4,11,s1);
    printf("   exp = %d   g = 11",s2);
    calc2(11,i3,a3,s1);
	calc21d(a3,h15,1,s1-1,s1);

    printf("\n \n a3 = ");
    displayh(2,a3);
    printf("  i2 = %d",i3);
	series(1,12,a3,0,h11,1,s1);
	printf("\n \n from series h11 = ");
	displayh(4,h11);

	printf("\n \n test of calc21d(2) ");
	s1 = 281;
	s1 = 421;
	i3 = sqrt1(s1-1,s1);
	i3 = (s1-i3)%s1;
    printf("   i3 = %d",i3);
    s2 = exp1((s1-1)/4,3,s1);
    printf("   exp = %d   g = 3",s2);
    calc2(4,i3,a3,s1);
	calc21d(a3,h15,1,(s1-1)/2,s1);

	printf("\n \n test of calc21d(3) ");
	s1 = 593;
	s1 = 937;
	s1 = 2113;
	s1 = 4177;
	s1 = 461;
	s1 = 3313;
	s1 = p;
	i3 = sqrt1(s1-1,s1);


	s2 = find3(s1);
	i3 = exp1((s1-1)/4,s2,s1);
	printf("   g = %d",s2);
    printf("   i3 = %d",i3);
    s3 = exp1((s1-1)/4,s2,s1);
    printf("   exp = %d",s3);
    calc2(s2,i3,a3,s1);

    s4 = 2;

	calc21d(a3,h15,s4,(s1-1)/s4,s1);


    printf("\n \n test of calc20d ");
    s1 = 2113;
    s1 = 1201;
    s1 = p;
    s2 = find3(s1);
	i3 = sqrt1(s1-1,s1);
	i3 = exp1((s1-1)/4,s2,s1);
    calc2(s2,i3,a3,s1);
    printf("  s2 = %d",s2);

    s4 = 2;

    calc20d(a3,h15,s4,(s1-1)/(s4),s1);
	printf("\n \n test of calc23d ");
	flag4 = 1;
	calc23d(a3,flag4,k2,2,(s1-1)/2,s1);

	printf("\n \n test of calc20 (s2^9)");
	s3 = exp1(9,s2,s1);
    i3 = sqrt1(s1-1,s1);
    i3 = exp1((s1-1)/4,s2,s1);
    calc2(s3,i3,a3,s1);
    printf("   s3 = %d",s3);
    calc20d(a3,h15,s4,(s1-1)/(3*s4),s1);


    printf("\n \n test of calc21d (s2^9)");
    printf("   g = %d",s2);
    printf("   i3 = %d",i3);
    printf("   a3 = ");
    displayh(2,a3);
    calc21d(a3,h15,s4,(s1-1)/(3*s4),s1);


    printf("\n \n final test i2 = %d",i2);


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
    calc12(0*84+68,a2,flag4,k1,k2,p);

    printf("\n \n test of series20");
    series20(-5,20,a2,h11,2,p);
    printf("\n h11 =");
    displayh(4,h11);


	printf("\n \n test of calc24d ");
	s1 = 101;
	i3 = sqrt1(s1-1,s1);
	s2 = find3(s1);
	printf("\n g = %d",s2);
    calc2(s2,i3,a3,s1);
	calc24d(a3,h15,4,(s1-1)/4,s1);


    printf("\n \n test of calc28d ");
	s1 = 281;
	i3 = sqrt1(s1-1,s1);
    calc2(3,i3,a3,s1);
	calc28d(a3,h15,2,(s1-1)/2,s1);


    printf("\n \n test of calc29d ");
	s1 = 281;
	i3 = sqrt1(s1-1,s1);
	i3 = s1-i3;
    calc2(3,i3,a3,s1);
	calc29d(a3,1,k2,2,(s1-1)/2,s1);


    printf("\n \n test of fn61");
    s1 = 89;
    s2 = find3(s1);
	i3 = sqrt1(s1-1,s1);
	i3 = exp1((s1-1)/4,s2,s1);
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









/*
	printf("\n \n");
	for(i=0;i<201;i++)
		{
		exp7(i,a2,a3,p);
		printf("\n i = %d",i);
		printf("     (%d",a3[0]);
		printf(" , %d)",a3[1]);
		}

 	printf("\n \n Enter 1 to continue ");
	scanf("%d",&s1);
*/

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

    e = (p-1)/32;
    e2 = 3;
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

	calc14(m2,e,6,a2,h11,h12,ptr2,str1,hs2,hs3,p);
    printf("\n \n \n \n");
**/


/**
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


/**
	calc19(m2,1,e,2,e+e2,a2,h11,h12,ptr2,str1,hs1,hs4,p);
    printf("\n \n \n \n");

	calc19(m2,1,e,6,e+e2,a2,h11,h12,ptr2,str1,hs1,hs2,p);
    printf("\n \n \n \n");
**/

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
    solve16(m2,a2,ptr2,h14,str1,e,hs4,hs2,q,p);


    multcnvl2(16,150,k4,k3,ptr2,p);
    printf(" \n \n \n \n multcnvl2 = ");
    displayh(16,k3);

/**
    solve2m(12,&ptr2[150],h14,p);
	s1 = det(12,&ptr2[150]);

	setzero2(12,h11);
	l2solve(12,h11,h14,&ptr2[150],p);

    printf("\n \n \n \n &&&&&&&&&&&&&&&&&&&&& det = %d",s1);
    printf("\n \n");
    display12d(150,ptr2,h14);
**/



	printf("\n \n i2 = %d",i2);
    printf("\n \n g = %d",g);
	printf("\n \n a2 = ");
	displayh(2,a2);




	printf("\n \n det_sum = %d",det_sum);
	printf("\n det_l144 = %d",det_l144);

    }

	return(0);

}


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
/*
	printf("\n \n in detws hs3 = \n");
	displayhs2(hs3);

	printf("\n \in detws (218) = \n");
	display2a2(218,ptr2);
*/
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
/*
	printf("\n \n in detws h20 = ");
	displayws(h20);
*/
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

/*
	printf("\n \n in detws h20 = ");
	displayws(h20);
*/

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
/*
	printf("\n \n in detws h21 = ");
	displayws2(h21);

	printf("\n \n  a3 = ");
	printf("(%d",a3[0]);
	printf(" , %d)",a3[1]);
*/
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
/*
	printf("\n \n in detws h20 = ");
	displayws2(h20);
*/
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
/*
	printf("\n \n in detws ws3 = ");
	displayws(ws3);
*/
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
/*
	printf("\n \n in detws h21 = ");
	displayws(h21);
*/
	for(i=0;i<27;i++)
		{
		ws3[i] = h21[i];
		}
/*
	printf("\n \n answer in detws ws3 = ");
	displayws(ws3);
*/
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
/*
	ws1 = &str1a[t2];
*/

	set142(m2,l2,l3,a3,hs1,cs,sn,h11,
			 cs1,sn1,cs2,sn2,ptr2,b2,p);

	solve2m(144,ptr2,b2,p);

	t = det(144,ptr2);
/*
	printf("\n \n det t1 = %d",t);
*/
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
/*
	printf("\n \n det t1 = %d",t);
*/
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
			tuple1(2,str2,str1,str1a,
                   m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
			l2 = l3;
			}

        }

if (l4>0)
    {
    equaltuple2(1,str1,str1a,str2,str2a);
    l3 = l2 + l4;
    tuple1(2,str2,str1,str1a,
           m2,l2,l3,a2,hs1,cs,sn,h12,cs1,sn1,cs2,sn2,ptr2,b2,p);
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

void mult2(integer a[], integer b[], integer s[], integer q[], integer p)

{
integer t1,t2,t3,t4,t5;

    t1 = (a[0]*b[1])%p;
    t2 = (a[1]*b[0])%p;
    t1 = (t1+t2)%p;
    t2 = (a[1]*b[1])%p;
    t3 = ((p-1)*q[0])%p;
    t4 = ((p-1)*q[1])%p;
    t5 = (a[0]*b[0])%p;
    t3 = (t5*t3)%p;
    t4 = (t5*t4)%p;
    s[0] = (t1+t3)%p;
    s[1] = (t2+t4)%p;

}

void exp2q (integer e, integer a1[], integer a2[], integer q[], integer p)
{
long int e1;
integer sq[2] = {0};
integer t[2] = {0};
integer t1[2] = {0};

/*
t[0] = a1[0];
t[1] = a1[1];
*/
t[0] = 0;
t[1] = 1;
equal2(a1,sq);
e1 = e;
while(e1 != 0)
	{
	if ((e1 % 2) == 1)
		{
		mult2(sq,t,t1,q,p);
		equal2(t1,t);
		e1 = (e1 - 1) / 2;
		}
	else
		{
		e1 = e1 / 2;
		}
	mult2(sq,sq,t1,q,p);
	equal2(t1,sq);
	}
equal2(t,a2);
}

integer exp1 (integer e, integer g, integer n)

{
integer e1,sq,t;

t = 1;
sq = g;
e1 = e;
while (e1 != 0)
	{
	if ((e1 % 2) == 1)
		{
		t = (sq * t) % n;
		e1 = (e1 - 1) / 2;
		}
	else
		{
		e1 = e1 / 2;
		}
	sq = (sq * sq) % n;
	}
return(t);

}

integer cl(integer c, integer b, integer p)
{
integer t1,t2;
integer g,h;
integer e,s;
integer a[2] = {1,0};
integer a1[2] = {0};
integer q[2] = {0};

t1 = (b*b)%p;
t2 = (4*c)%p;
t2 = (p-t2)%p;
g = (t1+t2)%p;
e = (p-1)/2;
h = exp1(e,g,p);
s = 1;
if ((h == 0) || (h == 1))
    {
    s = 0;
    }
e = e+1;
t1 = b%p;
t1 = (p-t1)%p;
t2 = c%p;
q[0] = t1;
q[1] = t2;


exp2q(e,a,a1,q,p);
t1 = s*a1[1];
return(t1);

}

integer sqrt1(integer c, integer p)
{
integer i;
integer m1,t,t1,y;

m1 = 50;
t = 0;
for(i=1;i<m1;i++)
    {
    y = cl(c,i,p);
    t1 = (y*y)%p;
    if(t1==c)
        {
        t = y;
        i = m1;
        }
    }

return(t);

}

void calc2(integer g, integer i2, integer a2[], integer p)
{
integer t,t1,t2;

t = inverse2(g,p);
t1 = (p+1)/2;
t2 = (g+t)%p;
a2[0] = (t1*t2)%p;
t2 = (t+(p-g))%p;
t2 = (t1*t2)%p;
a2[1] = (i2*t2)%p;

}

integer findnqr (integer p)

{
integer k;
integer t1,t2,t3;

t1 = (p-1)/2;
t3 = 1;
for(k=2;k<51;k++)
	{
	t2 = exp1(t1,k,p);
	if (t2==(p-1))
		{
		t3 = k;
		k = 101;
		}
	}

return(t3);

}

integer find2 (integer g, integer p)
{
int i;
integer t1,t2,t3,t4;
integer a[10] = {2,3,5,7,11,13,17,19,23,29};

t4 = 0;
for(i=0;i<10;i++)
    {
    t1 = p%a[i];
    if (t1==1)
        {
        t2 = (p-1)/a[i];
        t3 = exp1(t2,g,p);
        if (t3!=1)
            {
            t4 = t4+1;
            }
        }
    if (t1!=1)
        {
        t4 = t4+1;
        }
    }
t1 = 0;
if (t4==10)
    {
    t1 = 1;
    }

return(t1);

}

integer find3 (integer p)

{
integer k;
integer t1,t2;

t1 = 1;
for(k=2;k<51;k++)
	{
	t2 = find2(k,p);
	if (t2==1)
		{
		t1 = k;
		k = 101;
		}
	}

return(t1);

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

void calc10d(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
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
	printf("\n \n in calc10d a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);


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


	series(0,e,a2,2*e,h14,4,p);
	printf("\n \n in calc10d h14 = ");
	displayh(4,h14);

	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(c1,a4,a3,p);
	printf("\n \n in calc10d 1st a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);


	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,hs1,p);
	mult12(a3[1],a3[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,&hs1[30],p);
	mult12(a3[1],a3[0],h11,h12,&hs1[90],p);

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

void calc14d(int m2, integer e, integer a2[], integer h11[], integer h12[],
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
	printf("\n \n in calc14d a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);


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


	series(0,e,a2,2*e,h14,4,p);
	printf("\n \n in calc14d h14 = ");
	displayh(4,h14);

	exp7(e/4,a2,a3,p);
	exp7(e/1,a3,a4,p);
	exp7(2,a4,a3,p);
	printf("\n \n in calc14d 1st a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);


	s = (p+1)/2;
	mult12(s,s,hs2,&hs2[60],h11,p);
	mult12(s,(p-s)%p,&hs2[30],&hs2[90],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,hs1,p);
	mult12(a3[1],a3[0],h11,h12,&hs1[60],p);

	mult12(s,s,&hs2[30],&hs2[90],h11,p);
	mult12((p-s)%p,s,hs2,&hs2[60],h12,p);
	mult12(a3[0],(p-a3[1])%p,h11,h12,&hs1[30],p);
	mult12(a3[1],a3[0],h11,h12,&hs1[90],p);


	for(i=0;i<4;i++)
		{
		printf("\n \n in calc14d hs3(%d) = \n ",i);
		display12(&hs1[30*i]);
		}

	series(e/4,5*(e/4),a2,2*e,h14,4,p);
	printf("\n \n in calc14d h14 = ");
	displayh(4,h14);

}

void calc17d(int m2, integer e, integer a2[], integer h11[], integer h12[],
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

    for(i=0;i<4;i++)
		{
		printf("\n \n in calc17d hs1(%d) = \n ",i);
		display12(&hs1[30*i]);
		}

	series(0,e,a2,2*e,h14,4,p);
	printf("\n \n in calc17d h14 = ");
	displayh(4,h14);

}


void calc18d(int m2, integer e, integer a2[], integer h11[], integer h12[],
             STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};


	exp7(e,a2,a3,p);
	exp7(e,a3,a4,p);
	exp7(2,a4,a3,p);
	a3[1] = (p-a3[1])%p;

	printf("\n \n in calc18d a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	printf("\n \n in calc18d");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}

	series(0,e,a2,4*e,h11,4,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
}



void calc10(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};

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

	series(e/4,5*(e/4),a2,c1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
}



void calc10k(int m2, integer e, integer a2[], integer h11[], integer h12[],
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

	series(1*(e/4),5*(e/4),a2,1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);


	exp7(e,a2,a3,p);
	exp7(e,a3,a4,p);
	exp7(6,a4,a3,p);

	printf("\n \n in calc10k a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);
}



void calc11(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc11 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	printf("\n \n in calc11");
	for(i=0;i<4;i++)
		{
		printf("\n hs1(%d) = ",i);
		printf("\n");
		display12(&hs1[30*i]);
		printf("\n");
		}

	series(e/2,3*(e/2),a2,c1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);


	exp7(e/2,a2,a3,p);
	exp7(e,a3,a4,p);
	exp7(9,a4,a3,p);

	printf("\n \n in calc11 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);
}




void calc11q(int m2, integer e, integer e2, int c1, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc11q a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

	calc19(m2,flag4,e,c1+2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
/**
	calc6(m2,8,c1+1,ptr2,h11,str1,p);
	calc6(m2,9,c1+2,ptr2,h12,str1,p);
**/
	mult12(1,p-1,h11,h12,hs1,p);



	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
/**
	calc6(m2,8,c1+2,ptr2,h11,str1,p);
	calc6(m2,9,c1+1,ptr2,h12,str1,p);
**/
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);




	calc19(m2,flag4,e,c1-2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
/**
	calc6(m2,8,c1-3,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
**/
	mult12(1,1,h11,h12,hs1,p);




	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
/**
	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-3,ptr2,h12,str1,p);
**/
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
	printf("\n \n h11 = ");
	displayh(4,h11);

}


void calc14(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc14 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	printf("\n \n in calc14(%d)",c1);
	for(i=0;i<4;i++)
		{
		printf("\n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		printf("\n");
		}

	series(1,e/2,a2,c1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
}



void calc14k(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc14k a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);




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

/**
    printf("\n \n in calc14k");
	for(i=0;i<2;i++)
		{
		printf("\n hs2(%d) = ",i);
        printf("\n");
		display12(&hs2[30*i]);
		printf("\n");
		}
**/

    s = ((c1-2)*e)/4;

/**
	series(s,s+e,a2,0,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
**/

	exp7(2*(s+e),a2,a4,p);
	exp7(s+e,a4,a5,p);

	mult12(a5[0],(p+a5[1])%p,hs2,&hs2[30],hs1,p);
	mult12((p-a5[1])%p,(p+a5[0])%p,hs2,&hs2[30],&hs1[30],p);

/**
    printf("\n \n in calc14k");
	for(i=0;i<2;i++)
		{
		printf("\n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		printf("\n");
		}
**/

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

	printf("\n \n in calc14k(%d)",c1);
	for(i=0;i<4;i++)
		{
		printf("\n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		printf("\n");
		}

	series(1,e/2,a2,c1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);

}



void calc14q(int m2, integer e, integer e2, int c1, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc14q a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);



	calc19(m2,flag4,e,c1+2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
/**
	calc6(m2,8,c1+1,ptr2,h11,str1,p);
	calc6(m2,9,c1+2,ptr2,h12,str1,p);
**/
	mult12(1,1,h11,h12,hs1,p);


	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
/**
	calc6(m2,8,c1+2,ptr2,h11,str1,p);
	calc6(m2,9,c1+1,ptr2,h12,str1,p);
**/
	mult12(p-1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);


	calc19(m2,flag4,e,c1-2,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
/**
	calc6(m2,8,c1-3,ptr2,h11,str1,p);
	calc6(m2,9,c1-2,ptr2,h12,str1,p);
**/
	mult12(1,p-1,h11,h12,hs1,p);



	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
/**
	calc6(m2,8,c1-2,ptr2,h11,str1,p);
	calc6(m2,9,c1-3,ptr2,h12,str1,p);
**/
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

	printf("\n \n in calc14q(%d)",c1);
	for(i=0;i<4;i++)
		{
		printf("\n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		printf("\n");
		}

/**
	series(1,e/2,a2,c1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
**/

    e1 = e+e2;
    printf("\n \n s(%d , %d)(%d)",1,e1/2,c1*e1);
	series(1,e1/2,a2,c1*e1,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);

}





void calc15(int m2, integer e, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};


	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(4,a4,a3,p);

	printf("\n \n in calc15 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	printf("\n \n in calc15");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}

	series(2*(e/4),6*(e/4),a2,2*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);


	exp7(e,a2,a3,p);
	exp7(e,a3,a4,p);
	exp7(6,a4,a3,p);

	printf("\n \n in calc15 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);
}




void calc15q(int m2, integer e, integer e2, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc15q a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

    calc19(m2,flag4,e,4,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
/**
	calc6(m2,8,3,ptr2,h11,str1,p);
	calc6(m2,9,4,ptr2,h12,str1,p);
**/
	mult12(1,p-1,h11,h12,hs1,p);


	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
/**
	calc6(m2,8,4,ptr2,h11,str1,p);
	calc6(m2,9,3,ptr2,h12,str1,p);
**/
	mult12(1,1,h11,h12,&hs1[30],p);

	mult12(a3[0],(p-a3[1])%p,hs1,&hs1[30],hs2,p);
	mult12(a3[1],a3[0],hs1,&hs1[30],&hs2[30],p);



    calc19(m2,flag4,e,0,e+e2,a2,h11,h12,ptr2,str1,hs3,hs4,p);
	mult12(1,0,&hs4[0],&hs4[0],h11,p);
	mult12(1,0,&hs4[90],&hs4[90],h12,p);
/**
	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
**/
	mult12(1,0,h11,h12,hs1,p);



	mult12(1,0,&hs4[60],&hs4[60],h11,p);
	mult12(1,0,&hs4[30],&hs4[30],h12,p);
/**
	calc6(m2,8,0,ptr2,h11,str1,p);
	calc6(m2,9,0,ptr2,h12,str1,p);
**/
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

	printf("\n \n in calc15q");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}

	series(1*(e1/2),3*(e1/2),a2,2*e1,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);


}



void calc16(int m2, integer e, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};


	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(9,a4,a3,p);

	printf("\n \n in calc16 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	printf("\n \n in calc16");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}

	series(3*(e/4),7*(e/4),a2,3*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
}




void calc16k(int m2, integer e, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc16k a3 = ");
	printf("(%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n ");
		display12(&hs1[30*i]);
		}

	series(3*(e/4),7*(e/4),a2,1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
}



void calc17(int m2, integer e, int c1, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc17 a3 = ");
	printf("(%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	printf("\n \n in calc17(%d)",c1);
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n ");
		display12(&hs1[30*i]);
		}

	series(5*(e/4),9*(e/4),a2,c1*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
}


void calc18(int m2, integer e, integer a2[], integer h11[], integer h12[],
            STRING ptr2 , integer *str1, integer hs1[], integer hs2[], integer p)
{
int i;
integer s;
integer a3[2] = {0};
integer a4[2] = {0};


	exp7(e/4,a2,a3,p);
	exp7(e/2,a3,a4,p);
	exp7(16,a4,a3,p);

	printf("\n \n in calc18 a3 = ");
	printf("  (%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	printf("\n \n in calc18");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}

	series(4*(e/4),8*(e/4),a2,4*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
}


void calc18k(int m2, integer e, integer a2[], integer h11[], integer h12[],
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

	printf("\n \n in calc18k a3 = ");
	printf("(%d",a3[0]);
	printf(" , %d)",a3[1]);

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

	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n ");
		display12(&hs1[30*i]);
		}

	series(4*(e/4),8*(e/4),a2,2*e,h11,2,p);
	printf("\n \n h11 = ");
	displayh(4,h11);
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
        for(i==0;i<15;i++)
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

/**
	printf("\n \n in calc19");
	for(i=0;i<4;i++)
		{
		printf("\n \n hs1(%d) = ",i);
        printf("\n");
		display12(&hs1[30*i]);
		}
**/

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
        printf("\n \n h11 = ");
        displayh(4,h11);
        }

    if((c1==2)||(c1==4)||(c1==6)||(c1==8))
        {
        exp7((c1*e1)/4,a2,a3,p);
        exp7((c1*e1)/2,a3,a4,p);
        printf("     exp7 = ");
        displayh(2,a4);
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

void display12d(unsigned int r, STRING ptr2, integer b1[])

{
int i,j,k;
integer t1;

for(k=0;k<12;k++)
    {
    printf(" %d ",k);
    for(i=0;i<3;i++)
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

for(k=0;k<8;k++)
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
    t1 = h14[e2];
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

/**
    printf("\n \n in fn61 h15 = ");
    displayh(4,h15);


    series(0,t1,a2,d2,h14,2,p);
    printf("\n \n in fn61 h14 = ");
    displayh(4,h14);
**/

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

void solve12(int m2, integer a2[], STRING ptr2, integer b1[], integer *str1, integer e,
             integer hs1[], integer hs2[], integer q, integer p)
{
unsigned int t;
integer t1;
integer s3;
integer a3[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(12,t,t+11,ptr2);
    setzero2(12,b1);

    t1 = q/3;
    exp7((p-1)/3,a2,a3,p);
    s3 = (2*a3[1])%p;
    if((t1%3)==2)
        {
        s3 = p-s3;
        }

    equation4(m2,a2,s3,ptr2,b1,e,hs1,t,q,p);

    printf("\n \n in solve12 p = %d  q = %d  s3 = %d",p,q,s3);


    if((q%4)==2)
        {
        set7(t,2,1,ptr2);
        set7(t+1,3,1,ptr2);
        set7(t+2,6,1,ptr2);
        set7(t+3,7,1,ptr2);
        }

    if((q%4)==0)
        {
        set7(t,0,p-1,ptr2);
        set7(t,1,1,ptr2);
        set7(t,2,p-1,ptr2);
        set7(t,3,1,ptr2);
        set7(t,4,p-1,ptr2);
        set7(t,5,1,ptr2);
        b1[0] =  1;


        set7(t+1,6,1,ptr2);
        set7(t+1,7,1,ptr2);
        set7(t+1,8,1,ptr2);
        set7(t+1,9,1,ptr2);
        set7(t+1,10,1,ptr2);
        set7(t+1,11,1,ptr2);
        b1[0] =  1;


        t1 = (p-s3)%p;
        set7(t+2,0,1,ptr2);
        set7(t+2,2,1,ptr2);
        set7(t+2,4,1,ptr2);
        set7(t+2,6,t1,ptr2);
        set7(t+2,8,t1,ptr2);
        set7(t+2,10,t1,ptr2);
        b1[2] =  s3-1;
        t1 = (p+1)/2;
        b1[2] = (t1*b1[2])%p;
        }

    printf("\n \n");
    display12d(t,ptr2,b1);

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
             integer hs1[], integer hs2[], integer q, integer p)
{
unsigned int t;
integer t1;
integer s3;
integer q1;
integer a3[2] = {0};
integer h12[12] = {0};

    t = 150;
    setzero2a(16,t,t+15,ptr2);
    setzero2(16,b1);

/**
    t1 = q/3;
    exp7((p-1)/3,a2,a3,p);
    s3 = (2*a3[1])%p;
    if((t1%3)==2)
        {
        s3 = p-s3;
        }

    equation4(m2,a2,s3,ptr2,b1,e,hs1,t,q,p);
**/

    printf("\n \n in solve16 p = %d  q = %d",p,q);

    q1 = q/16;
    if((q1%4)==1)
        {
        set7(t,2,1,ptr2);
        set7(t+1,3,1,ptr2);
        set7(t+2,6,1,ptr2);
        set7(t+3,7,1,ptr2);
        }

    if((q1%4)==3)
        {
        set7(t,9,p-1,ptr2);
        set7(t,11,p-1,ptr2);
        set7(t,12,1,ptr2);
        set7(t,14,1,ptr2);
        b1[0] = (p+1)/2;

/**
        set7(t+1,6,1,ptr2);
        set7(t+1,7,1,ptr2);
        set7(t+1,8,1,ptr2);
        set7(t+1,9,1,ptr2);
        set7(t+1,10,1,ptr2);
        set7(t+1,11,1,ptr2);
        b1[0] =  1;


        t1 = (p-s3)%p;
        set7(t+2,0,1,ptr2);
        set7(t+2,2,1,ptr2);
        set7(t+2,4,1,ptr2);
        set7(t+2,6,t1,ptr2);
        set7(t+2,8,t1,ptr2);
        set7(t+2,10,t1,ptr2);
        b1[2] =  s3-1;
        t1 = (p+1)/2;
        b1[2] = (t1*b1[2])%p;
**/
        }

    printf("\n \n");
    display16d(t,ptr2,b1);

}








