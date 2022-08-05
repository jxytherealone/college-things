#include<stdio.h>
int main() {
    int a[10][10],i,j,m,n,s;
    printf("enter the order of the matrix: ");
    scanf("%d%d", &m, &n);
    printf("enter the elemnts of the matrix: ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            s=s+a[i][j];
        printf("\n Matrix A \n");
        for(i=0;i<m;i++) {
            for(j=0;j<n;j++) {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("%d\nsum=%d", s);
}