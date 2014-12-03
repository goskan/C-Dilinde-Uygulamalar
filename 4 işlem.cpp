#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int first, second, add, subtract, multiply;
	float divide;

	printf("Enter two integers\n");
	scanf("%d%d", &first, &second);

	add = first + second;
	subtract = first - second;
	multiply = first * second;
	divide = first / (float)second;  

	printf("Sum = %d\n", add);
	printf("Difference = %d\n", subtract);
	printf("Multiplication = %d\n", multiply);
	printf("Division = %.2f\n", divide);
	_getch();
	return 0;
	
}