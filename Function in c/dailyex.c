#include <stdio.h>
{
int add(int a,int b);

	return a+b;
}
int main()
{
	int(num1,num2,sum);
	printf("hello,user!\n");
	printf("enter two numbers\n");
	scanf("%d %d",&num1,&num2);
	sum = add(num1,num2);
	printf("sum of %d and %d is %d \n",num1,num2,sum);
	printf("counting from 1to5:\n");
	for(int i=1;i<=5;i++)
	{
		printf("%d",i);
	}
	printf("\n");
	return 0;
}
