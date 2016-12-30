#include<stdio.h>
#include<stdio.h>
main()
{
int i,l,f=0;
char s1[10];
printf("enter the string");
scanf("%d",s1);
l=strlen(s1);
for(i=0;i<i;i++)
{
  if(s1[i]=!s1[l-i-1])
  {
    f=1;
    break;
   }
}
if(f)
{
  printf("%d is not a palindrome",s1);
}
else
{
  printf("%d is a palindrome",s1);
}
}

