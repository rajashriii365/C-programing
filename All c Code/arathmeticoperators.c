#include <stdio.h>
int main()
{
	int number1=10;
	int number2=20;
	int sum;
	int addition;
	sum=number1+number2;
	printf("addition :%d",sum);

	int subtraction = number1-number2;
	printf("subtraction :%d",sum);
    int multiply;
	multiply =number1*number2;
	printf("multiply :%i",multiply);
	int divide;
	divide =number1/number2;
	printf("divide :%i",divide);
	int modular;
	modular =number1%number2;
	printf("modular :%i",modular);
	int increment1=++number2;
	printf("increment :%d",increment1);
	int decrement2=--number1;
	printf("decrement :%i",decrement2--);
	return 0;
}
