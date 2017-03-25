#include<stdio.h>
main()
{
	int a,d,n,t,i;
	printf("enter the first term,difference and no of term");
	scanf("%d%d%d",&a,&d,&n);
	for(i=0;i<n;i++)
	{
		t=a+((i)*d);
		printf("%d\t",t);
	}
}

