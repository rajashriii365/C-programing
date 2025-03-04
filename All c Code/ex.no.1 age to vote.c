#include <stdio.h>
int main()
{ 
int age;
printf("enter your age");
scanf("%d , &age ");
if (age<18)
{
	printf("user is not eligiable to vote");
}
if (age>=18)
{
	printf("user is eligiable to vote ");
}
return 0;
}
