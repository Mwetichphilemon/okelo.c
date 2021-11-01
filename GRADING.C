#include<stdio.h>
int main()
{
	int math,comp,chem,bio,phyc;
	printf("math,comp,chem,bio,phyc");
	scanf("%d%d%d%d%d",&math,&comp,&chem,&bio,&phyc);
	int avg;
	avg=(math+comp+chem+bio+phyc)/5;
	printf("/avg=%d",avg);

	if("avg>=90&&avg<=100")
	{
		printf("grade A");
	}
	else if("avg>=80&&avg<90")
	{
		printf("grade B");
	}
	else if("avg>=70&&avg<80")
	{
		printf("grade C");
	}
	else if("avg>=60&&avg<70")
	{
		printf("grade D");
	}
	else if("avg>=50&&avg<60")
	{
		printf("grade E");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
	}
