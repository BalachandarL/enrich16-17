#include<stdio.h>
main()
{
  int s[100],i,n,p,num=0;
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("enter the array elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i]);
  }  
  printf("enter the number to be searched");
  scanf("%d",&p);
  for(i=0;i<n;i++)
  {
     if(a[i]==p)
     {
        num++;
     }
  }
  printf("the number occurs %d times",num);
}
