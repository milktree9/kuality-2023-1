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

	if (c == "+") {
		printf("%d + %d + %d = %d \n", a, b, c, a + b + c);
	}
	else if (c == "-") {
		printf("%d - %d - %d = %d \n", a, b, c, a - b - c);
	}
	else if (c == ' * ') {
		printf("%d x %d x %d = %d \n", a, b, c, a * b * c);
	}
	else if (c == "/") {
		printf("%d / %d / %d = %d \n", a, b, c, a / b / c);
	}
	

	return 0;
}