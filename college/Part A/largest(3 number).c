#include<stdio.h>
int main() {
	int a, b, c, largest;
	printf("enter the numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	largest = a>c ? (a>c ? a : c): (b>c ? b : c);
	printf("%d is the largest", largest);
}