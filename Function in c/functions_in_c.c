// header file
#include<stdio.h>

// function prototype/Declareation
int addition();
float subtration();
int multi();
double div();

// main function/ function calling
int main(){
	printf("My Basic Calculator :\n ");
	addition();
	subtration();
	multi();
	div();
}

// function defination
// addition
int addition()
{
	printf("addition :\n");
	int a, b;
	printf("Enter A:\n");
	scanf("%d",&a);
	printf("Enter B:\n");
	scanf("%d", &b);
	
	int result = a + b;
	printf("%d\n", result);
}

// Subtrcation
float subtration()
{
	printf("\nSub :");
	float a, b;
	printf("Enter A:\n");
	scanf("%f",&a);
	printf("Enter B:\n");
	scanf("%f", &b);
	
	float result = a - b;
	printf("%f\n", result);
}

// multi
int multi()
{
	printf("Multi :\n");
	int a, b;
	printf("Enter A:\n");
	scanf("%d",&a);
	printf("Enter B:\n");
	scanf("%d", &b);
	
	int result = a * b;
	printf("%d\n", result);
}

// div
double div()
{
	printf("Div :\n");
	double a, b;
	printf("Enter A:\n");
	scanf("%lf",&a);
	printf("Enter B:\n");
	scanf("%lf", &b);
	
	printf("a/b : %lf\n", a/b);
}
