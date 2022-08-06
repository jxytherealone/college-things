#include<stdio.h>
int main() {
	int arr[100],i,n;
	printf("enter the amount: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("enter the %d number: ", i+1);
		scanf("%d", &arr[i]);
	}

	for(i=1;i<n;i++) {
		if(arr[0]<arr[i]) {
			arr[0]=arr[i];
		}
	}
	printf("largest=%d",arr[0]);
}