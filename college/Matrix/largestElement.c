#include<stdio.h>
int main() {
	int a[10][10],i,j,m,n,l;
	printf("enter the order of matrix: ");
	scanf("%d%d",&m,&n);
	printf("enter the elements of the matrix: ");
	for(i=0;i<m;i++) 
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		l=a[0][0];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				l=a[i][j];
			for(i=0;i<n;i++) {
				for(j=0;j<n;j++) {
					printf("%d\t",a[i][j]);
				}
				printf("\n");
			}
			printf("\nlargest element=%d",l);
}