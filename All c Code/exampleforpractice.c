#include <stdio.h>
int main()
{
 int rows,i,j;
  printf("enter the numbers of rows ");
 scanf("%d",&rows);
 for(i=0;i<rows;i++)
 {
 	 for(j=0;j<rows-1;j++)
 	{
 	 printf("*");	
	}
	printf("\n");	
 }
 return 0;
}
