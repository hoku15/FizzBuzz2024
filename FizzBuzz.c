#include<stdio.h>
void main() {
	int a,i;
	scanf_s("%d", &a);
	for (i=1; i <= a; i++) {
		if (i % 15 == 0) printf("Fizz Buzz\n");
		else if (i % 5 == 0) printf("Buzz\n");
		else if (i % 3 == 0) printf("Fizz\n");
		else printf("%d\n", i);
	}
	return 0;
}