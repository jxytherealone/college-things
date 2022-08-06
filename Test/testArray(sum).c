#include<stdio.h>
int main() {
	int sum=0, arr[100],n,i;
	printf("enter the size of the array: \n");
	scanf("%d", &n);
	printf("enter the elements: \n");
	for(i = 0; i < n; i++)
          scanf("%d",&arr[i]);
	for(i = 0; i < n; i++) {
          sum = sum + arr[i];
		printf("sum = %d", sum);
	}
	return 0;
}