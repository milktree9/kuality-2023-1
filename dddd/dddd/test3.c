#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	char d;
	printf("Input three integers : ");
	scanf(" %d %d %d", &a, &b, &c);

	printf("Inpur operator : ");
	scanf(" %c", &d);
	scanf(" %c", &d);

	switch (d) {
	case '+':
		printf("%d + %d + %d = %d \n", a, b, c, a + b + c);
		break;
	case '-':
		printf("%d - %d - %d = %d \n", a, b, c, a - b - c);
		break;
	case '*':
		printf("%d * %d * %d = %d \n", a, b, c, a * b * c);
		break;
	case '/':
		printf("%d / %d / %d = %d \n", a, b, c, a / b / c);
		break;
	}
}