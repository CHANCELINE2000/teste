#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int n1, n2;
	char B;

	printf("bitte tragen Sie eine Zahl ein : ");
	scanf("%d", &n1);
	printf("\n");
	printf("bitte tragen Sie eine andere Zahl ein : ");
	scanf("%d", &n2);
	printf("\n");
	printf(" Bitte geben Sie einen Bediener ein : ");
	scanf("%s", &B);
	printf("\n");

	switch (B)
	{
	case'+':
		printf("%d + %d= %d\n", n1, n2, n1 + n2);
		break;

	case '-':
		printf("%d - %d= %d\n", n1, n2, n1 - n2);
		break;

	case '*':
		printf("%d * %d= %d\n", n1, n2, n1 * n2);
		break;

	case '/':
		if (n2 != 0)
			printf("%d / %d= %.4f\n", n1, n2,(float) n1 / n2);
		else
			printf("Math error");
		break;
	default:  printf("Syntax Error\n");
	}


}