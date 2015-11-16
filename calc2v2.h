
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


